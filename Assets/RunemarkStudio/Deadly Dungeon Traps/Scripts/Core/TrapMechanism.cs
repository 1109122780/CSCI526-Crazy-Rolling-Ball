namespace Runemark.DeadlyDungeonTraps
{
    using UnityEngine;
    using System.Collections.Generic;
    using System.Collections;
    using System.ComponentModel;
    using System;
    using System.Linq;

#if UNITY_EDITOR
    using UnityEditor;    
    using UnityEditorInternal;
#endif

    public enum MechanismEvents
    { 
        Activate,
        Deactivate,

        LoopStart,
        LoopEnd,
        LoopReverseStart,
        LoopReverseEnd,
    }

    public abstract class TrapMechanism : MonoBehaviour
    {
        public enum PlayMode { OnlyOnce, Loop }

        public PlayMode playMode;
        [Min(0f)]public float Cooldown;
        public bool ResetOnFinish;
        
        [System.Serializable]
        public class EffectElement
        {
            [EventFilter]
            public MechanismEvents onEvent;
            public EffectHandler effect;
            
            [CommandFilter]
            public EffectHandlerCommand command;

            public void SendCommand() { effect.Execute(command); }     
        }        
        public List<EffectElement> Effects = new List<EffectElement>();    

        protected bool isActive = false;
        float nextActivate = -1f;

        protected bool justStarted;

        public void Activate()
        {          
            isActive = true;
            justStarted = true;

            OnActivate();
        }
        public void Deactivate()
        {
            isActive = false;
            OnDeActivate();
        }
    
        public virtual bool ValidateMechanicsmEvent(MechanismEvents e)
        {
            bool b = true;
            switch (e)
            {
                case MechanismEvents.LoopEnd:
                case MechanismEvents.LoopStart: 
                    b = playMode == PlayMode.Loop; 
                break;

                case MechanismEvents.LoopReverseStart:
                case MechanismEvents.LoopReverseEnd:
                    b = false;
                    break;
            }
            return b;
        }

        void Update()
        {
            if (!isActive) return;

            nextActivate -= Time.deltaTime;
            if (nextActivate > 0) return;

            if (justStarted)
            {
                if(playMode == PlayMode.Loop)
                    OnLoopStart();
                justStarted = false;
            }
            
            if (Process())
            {
                switch (playMode)
                {
                    case PlayMode.Loop: 
                        nextActivate = Cooldown;
                        justStarted = true;
                        OnLoopEnd();
                        break;
                    case PlayMode.OnlyOnce:
                        Deactivate();
                        if (ResetOnFinish) ResetMechanism();
                    break;
                }
            }
        }

        /// <summary>
        /// Process the mechanism. Returns true if the mechanism finished its squence.
        /// </summary>
        /// <returns>True if the sequence is finished.</returns>
        protected abstract bool Process();

        protected virtual void OnActivate() { HandleEffect(MechanismEvents.Activate); }
        protected virtual void OnDeActivate() { HandleEffect(MechanismEvents.Deactivate); }
        protected virtual void OnLoopStart() { HandleEffect(MechanismEvents.LoopStart); }
        protected virtual void OnLoopEnd() { HandleEffect(MechanismEvents.LoopEnd); }

        protected void HandleEffect(MechanismEvents e)
        {
            foreach (var effect in Effects)
            {
                if (effect.onEvent == e)
                    effect.SendCommand();
            }
        }

        protected virtual void ResetMechanism() { }
    }

    public class CommandFilterAttribute : PropertyAttribute { }
    public class EventFilterAttribute : PropertyAttribute { }

#if UNITY_EDITOR
    [CanEditMultipleObjects]
    [CustomEditor(typeof(TrapMechanism), true)]
    public class TrapMechanismInspector : CustomInspectorBase
    {
        protected const int BASE_GROUP = 0;
        protected const int EFFECTS_GROUP = 10;

        const float EVENT_FIELD_WIDTH = 120;
        const float COMMAND_FIELD_WIDTH = 75;

        ReorderableList effects;

        protected override void OnInit()
        {
            TrapMechanism myTarget = (TrapMechanism)target;

            AddProperty("playMode", new GUIContent("Play Mode"), BASE_GROUP);
            AddProperty("Cooldown", new GUIContent("Cooldown", "Seconds before the mechanism can reactivate. 0 means no cooldown."), BASE_GROUP);
            AddProperty("ResetOnFinish", new GUIContent("Reset On Finish"), BASE_GROUP);
            AddFilter("ResetOnFinish", () => { return myTarget.playMode == TrapMechanism.PlayMode.OnlyOnce; });

            AddHeader("Effects", EFFECTS_GROUP);

            var prop = FindProperty("Effects");
            effects = new ReorderableList(serializedObject, prop, true, true, true, true);
            effects.drawHeaderCallback = (Rect rect) =>
            {
                Rect r = rect;
                r.width = EVENT_FIELD_WIDTH;

                GUI.Label(r, "Event");
                r.x += r.width + 5;

                r.width = rect.width - EVENT_FIELD_WIDTH - COMMAND_FIELD_WIDTH - 10;
                GUI.Label(r, "Effect");
                r.x += r.width + 5;

                r.width = COMMAND_FIELD_WIDTH;
                GUI.Label(r, "Command");
                r.x += r.width;  
            };
            effects.drawElementCallback = (Rect rect, int index, bool isActive, bool isFocused) =>
            {
                GUIContent commandError = GUIContent.none;
                GUIContent eventError = GUIContent.none;
                var e = myTarget.Effects[index];
                bool validEffect = e != null && e.effect != null;
               
                #region Check for Error Msg
                string errorMsg = "";
                if (validEffect && !e.effect.IsCommandValid(e.command, out errorMsg))
                {
                    commandError = EditorGUIUtility.IconContent("CollabError");
                    commandError.tooltip = errorMsg;
                }

                if (validEffect && myTarget.playMode == TrapMechanism.PlayMode.OnlyOnce &&
                   e.onEvent != MechanismEvents.Activate && e.onEvent != MechanismEvents.Deactivate)
                { 
                    eventError = EditorGUIUtility.IconContent("CollabError");
                    eventError.tooltip = "You can only use Activate or Deactivate events with conjuction with OnlyOnce play mode.";
                }              

                #endregion

                var element = prop.GetArrayElementAtIndex(index);
                var onEvent = element.FindPropertyRelative("onEvent");
                var effect = element.FindPropertyRelative("effect");
                var command = element.FindPropertyRelative("command");
   

                Rect r = rect;
                
                if (eventError != GUIContent.none)
                {
                    r.width = 20;
                    GUI.Label(r, eventError);
                    r.x += r.width + 5;
                }

                r.width = EVENT_FIELD_WIDTH;
                EditorGUI.PropertyField(r, onEvent, GUIContent.none);
                r.x += r.width + 5;

                r.width = rect.width - EVENT_FIELD_WIDTH - COMMAND_FIELD_WIDTH - 10;
                if (commandError != GUIContent.none)
                    r.width -= 20;
                if (eventError != GUIContent.none)
                    r.width -= 20;

                EditorGUI.PropertyField(r, effect, GUIContent.none);
                r.x += r.width + 5;

                if (commandError != GUIContent.none)
                {
                    r.width = 20;
                    GUI.Label(r, commandError);
                    r.x += r.width + 5;
                }

                r.width = COMMAND_FIELD_WIDTH;
                EditorGUI.PropertyField(r, command, GUIContent.none);
                r.x += r.width;
            };

            AddCustomField("Effects", effects.DoLayoutList, EFFECTS_GROUP);
        }
    }

    [CustomPropertyDrawer(typeof(CommandFilterAttribute))]
    public class CommandFilterDrawer : PropertyDrawer
    {
        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            var trapMechanism = property.serializedObject.targetObject as TrapMechanism;

            int elementIndex = GetIndex(property.propertyPath);            
            var element = trapMechanism.Effects[elementIndex];
            int currentValue = property.enumValueIndex;

            if (element == null || element.effect == null) return;


            EffectHandlerCommand[] commands = (EffectHandlerCommand[])Enum.GetValues(typeof(EffectHandlerCommand));
            int popupSelectedIndex = 0;

            string msg = ""; int cnt = 0;
            List<string> names = new List<string>();
            foreach (var c in commands)
            {
                var command = (EffectHandlerCommand)c;

                if (element.effect.IsCommandValid(command, out msg))
                {
                    if (currentValue == (int)command)
                        popupSelectedIndex = cnt;

                    names.Add(command.ToString());
                    cnt++;
                }
            }

            if (names.Count > 0)
            {
                int newIndex = EditorGUI.Popup(position, popupSelectedIndex, names.ToArray());
                property.enumValueIndex = (int)Enum.Parse(typeof(EffectHandlerCommand), names[newIndex]);
            }
        }
        int GetIndex(string path)
        {
            string[] arr = path.Split('[');
            if (arr.Length == 0) return -1;

            arr = arr[1].Split(']');

            return int.Parse(arr[0]);
        }

    }

    [CustomPropertyDrawer(typeof(EventFilterAttribute))]
    public class EventFilterDrawer : PropertyDrawer
    {
        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            var trapMechanism = property.serializedObject.targetObject as TrapMechanism;

            int elementIndex = GetIndex(property.propertyPath);
            var element = trapMechanism.Effects[elementIndex];
            int currentValue = property.enumValueIndex;

            MechanismEvents[] events = (MechanismEvents[])Enum.GetValues(typeof(MechanismEvents));
            int popupSelectedIndex = 0;

            int cnt = 0;
            List<string> names = new List<string>();
            foreach (var e in events)
            {
                var eventEnum = (MechanismEvents)e;

                if (trapMechanism.ValidateMechanicsmEvent(eventEnum))
                {
                    if (currentValue == (int)eventEnum)
                        popupSelectedIndex = cnt;

                    names.Add(eventEnum.ToString());
                    cnt++;
                }
            }

            int newIndex = EditorGUI.Popup(position, popupSelectedIndex, names.ToArray());

            property.enumValueIndex = (int)Enum.Parse(typeof(MechanismEvents), names[newIndex]);
        }
        int GetIndex(string path)
        {
            string[] arr = path.Split('[');
            if (arr.Length == 0) return -1;

            arr = arr[1].Split(']');

            return int.Parse(arr[0]);
        }

    }

#endif

}
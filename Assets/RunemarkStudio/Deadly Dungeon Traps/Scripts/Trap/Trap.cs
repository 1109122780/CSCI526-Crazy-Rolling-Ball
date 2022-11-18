namespace Runemark.DeadlyDungeonTraps
{
    using UnityEngine;
    using System.Collections.Generic;
    using System.Collections;

#if UNITY_EDITOR
    using UnityEditor;
    using UnityEditorInternal;

#endif

    [AddComponentMenu("Deadly Dungeon Traps/Trap", -10)]
    [HelpURL("https://traps.runemarkstudio.com/traps/introduction")]
    public class Trap : MonoBehaviour
    {
        public enum StartMode { OnAwake, OnEvent }

        public StartMode startMode;
        public bool Sync = true;
        public List<TrapMechanismElement> Mechanisms = new List<TrapMechanismElement>();

        public bool isActive { get; private set; }

        void Awake()
        {
            if (startMode == StartMode.OnAwake)
            {
                DoActivate();
            }
        }
        public void Activate()
        {
            if (startMode == StartMode.OnEvent)
                DoActivate();
        }
        public void Deactivate()
        {
            isActive = false;
            foreach (var data in Mechanisms)
            {
                data.Element.Deactivate();
            }
        }
        public void Toggle()
        {
            if (isActive) Deactivate();
            else Activate();
        }

        void DoActivate()
        {
            isActive = true;
            foreach (var data in Mechanisms)
            {
                if (data.Element == null) continue;

                if (Sync || data.Delay == 0)
                    data.Element.Activate();
                else
                   StartCoroutine(ActivateMechanism(data.Element, data.Delay));
            }            
        }
        IEnumerator ActivateMechanism(TrapMechanism m, float time)
        {
            yield return new WaitForSeconds(time);
            m.Activate();            
        }
    }

#if UNITY_EDITOR
    [CanEditMultipleObjects]
    [CustomEditor(typeof(Trap))]
    public class TrapInspector : CustomInspectorBase
    {
        const float DELAY_FIELD_WIDTH = 40;

        ReorderableList mechanisms;

        protected override void OnInit()
        {
            Trap mytarget = (Trap)target;

            AddProperty("startMode", new GUIContent("Start Mode"));
            AddProperty("Sync", new GUIContent("Sync", "Uncheck this option to set an activation delay for each mechanism."));
           
            var prop = FindProperty("Mechanisms");
            mechanisms = new ReorderableList(serializedObject, prop, true, true, true, true);
            mechanisms.drawHeaderCallback = (Rect rect) => 
            {
                Rect mechanismRect = rect;

                Trap myTarget = (Trap)target;
                if (!myTarget.Sync)
                {
                    Rect delayRect = new Rect(rect.x + rect.width - DELAY_FIELD_WIDTH, rect.y, DELAY_FIELD_WIDTH, rect.height);
                    GUI.Label(delayRect, "Delay");

                    mechanismRect.width -= delayRect.width;
                }
                GUI.Label(mechanismRect, "Mechanisms");
            };
            mechanisms.drawElementCallback = (Rect rect, int index, bool isActive, bool isFocused) => 
            {
                var element = prop.GetArrayElementAtIndex(index);
                var mechanism = element.FindPropertyRelative("Element");              
                Rect mechanismRect = rect;                

                Trap myTarget = (Trap)target;
                if (!myTarget.Sync)
                {
                    var delay = element.FindPropertyRelative("Delay");
                    Rect delayRect = new Rect(rect.x + rect.width - DELAY_FIELD_WIDTH, rect.y, DELAY_FIELD_WIDTH, rect.height);
                    EditorGUI.PropertyField(delayRect, delay, GUIContent.none);

                    mechanismRect.width -= delayRect.width;
                }
                EditorGUI.PropertyField(mechanismRect, mechanism, GUIContent.none);                      
            };

            AddCustomField("Warning", () => 
            {
                if (mytarget.Mechanisms.Count == 0)
                    EditorGUILayout.HelpBox("Please assign a mechanism!", MessageType.Warning);
            });
            AddCustomField("Mechanisms", mechanisms.DoLayoutList);
        }
    }

#endif
}
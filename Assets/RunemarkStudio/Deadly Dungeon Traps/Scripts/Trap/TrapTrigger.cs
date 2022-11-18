namespace Runemark.DeadlyDungeonTraps
{
    using UnityEngine;
    using UnityEngine.Events;

#if UNITY_EDITOR
    using UnityEditor;
#endif

    [AddComponentMenu("Deadly Dungeon Traps/Trigger", -1)]
    [HelpURL("https://traps.runemarkstudio.com/traps/triggering-a-trap")]
    [RequireComponent(typeof(BoxCollider))]
    public class TrapTrigger : MonoBehaviour
    {
        public enum Action { Activate, Deactivate, Toggle }
        public enum Interaction { None, KeyCode, UnityInput }

        public Trap trap;
        public Action action;
        [Min(0f)] public float cooldown;
        public string[] tagMask = new string[0];

        public Interaction interaction;
        public KeyCode key;
        public string input;

        public UnityEvent onTriggerEnter;
        public UnityEvent onTriggerExit;
        public UnityEvent onActivate;
        public UnityEvent onDeactivate;
 
        public float Temperature
        {
            get
            {
                return Mathf.Clamp01(nextSendTime);
            }
        }
        float nextSendTime;
        void OnEnable()
        {
            BoxCollider collider = GetComponent<BoxCollider>();
            collider.isTrigger = true;
        }

        void Update()
        {
            if (nextSendTime > 0) nextSendTime -= Time.deltaTime;
        }
        protected void DoAction()
        {
            if (nextSendTime > 0) return;

            switch (action)
            {
                case Action.Activate: 
                    if(trap != null) trap.Activate(); 
                    onActivate.Invoke(); 
                    break;

                case Action.Deactivate: 
                    if(trap != null) trap.Deactivate(); 
                    onDeactivate.Invoke(); 
                    break;

                case Action.Toggle: 
                    if(trap != null) 
                    {
                        trap.Toggle();

                        if(trap.isActive)
                            onActivate.Invoke();
                        else
                            onDeactivate.Invoke();
                    }                   
                    break;
            }
            nextSendTime = cooldown;
        }

        void OnTriggerEnter(Collider other)
        {
            var go = other.gameObject;
            if (CheckTag(go))
            {
                onTriggerEnter.Invoke();
                if (interaction == Interaction.None)
                    DoAction();
            }
        }
        void OnTriggerStay(Collider other)
        {
            var go = other.gameObject;
            if (!CheckTag(go)) return;

            bool keyPressed = interaction == Interaction.KeyCode && Input.GetKey(key);
            bool inputPressed = interaction == Interaction.UnityInput && Input.GetButton(input);

            if (keyPressed || inputPressed)
                DoAction();
        }
        void OnTriggerExit(Collider other)
        {
            var go = other.gameObject;
            if (CheckTag(go))
            {
                onTriggerExit.Invoke();
            }
        }

        bool CheckTag(GameObject otherGO)
        {
            if (otherGO == null) return false;

            foreach (var tag in tagMask)
            {
                if (otherGO.CompareTag(tag))
                    return true;
            }
            return false;
        }
    }

#if UNITY_EDITOR
    [CanEditMultipleObjects]
    [CustomEditor(typeof(TrapTrigger), true)]
    public class TrapTriggerInspector : CustomInspectorBase
    { 
        protected override void OnInit()
        {
            var myTarget = (TrapTrigger)target;     
            AddProperty("trap", new GUIContent("Trap", "The trap that this trigger manipulates."));
            AddSpace(10);
            AddProperty("action", new GUIContent("Action", "Activate, deactivate the target trap or toggle between these to states."));
            AddCustomField("actionAlert", () => 
            {
                if(myTarget.trap == null && myTarget.action == TrapTrigger.Action.Toggle)
                    EditorGUILayout.HelpBox("You can't use toggle action without assigning a trap", MessageType.Error);

            });


            AddProperty("cooldown", new GUIContent("Cooldown", "Seconds before the trigger would work again."));
            AddCustomField("tag", () =>
            {
                EditorGUILayoutExtension.TagMask(new GUIContent("Tag Filter", "Only trigger when a game object with one of these tags enter."), ref myTarget.tagMask);
            });
            AddSpace(10, 0);

            AddHeader("Interaction", 1);
            AddProperty("interaction", new GUIContent("Interaction", "Allow the player to execute the action by pressing a button while staying in the trigger area instead of just walking into it."), 1);
            AddProperty("key",null, 1);
            AddFilter("key", () => { return myTarget.interaction == TrapTrigger.Interaction.KeyCode; });
            AddProperty("input", new GUIContent("Input", "Name must match to the one in the input settings."), 1);
            AddFilter("input", () => { return myTarget.interaction == TrapTrigger.Interaction.UnityInput; });
            AddSpace(10, 1);

            AddHeader("Events", 2);
            AddProperty("onTriggerEnter", null, 2);
            AddProperty("onTriggerExit", null, 2);
            AddProperty("onActivate", null, 2);
            AddProperty("onDeactivate", null, 2);

            AddFilter("onActivate", () => { return myTarget.action != TrapTrigger.Action.Deactivate; });
            AddFilter("onDeactivate", () => { return myTarget.action != TrapTrigger.Action.Activate; });
        }

        void OnSceneGUI()
        {
            var trigger = target as TrapTrigger;
            if (trigger.trap != null)
            {
                DrawInteraction(trigger);
            }
        }

        [DrawGizmo(GizmoType.NonSelected | GizmoType.Pickable | GizmoType.NotInSelectionHierarchy)]
        static void DrawConnectionGizmo(TrapTrigger trigger, GizmoType gizmoType)
        {
            if (trigger.trap != null)
            {
                var start = trigger.transform.position;
                var end = trigger.trap.transform.position;
                if (end == start) end += trigger.trap.transform.forward * 1;
                var dir = (end - start).normalized;
                if (Application.isPlaying)
                    Handles.color = Color.Lerp(Color.white, Color.green, trigger.Temperature);
                else
                    Handles.color = new Color(1, 1, 1, 0.25f);
                Handles.DrawDottedLine(start, end, 5);
                Handles.ArrowHandleCap(0, start + (dir * 2), Quaternion.LookRotation(dir), 1, EventType.Repaint);
            }
        }     
        public static void DrawInteraction(TrapTrigger trigger)
        {
            var start = trigger.transform.position;
            var end = trigger.trap.transform.position;
            var dir = (end - start).normalized;

            if (Application.isPlaying)
                Handles.color = Color.Lerp(Color.white, Color.green, trigger.Temperature);
            var steps = Mathf.FloorToInt((end - start).magnitude);
            for (var i = 0; i < steps; i++)
            {
                Handles.ArrowHandleCap(0, start + (dir * i), Quaternion.LookRotation(dir), 1, EventType.Repaint);
            }
        }

    }

#endif

}
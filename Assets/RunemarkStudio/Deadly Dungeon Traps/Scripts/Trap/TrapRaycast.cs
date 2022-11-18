namespace Runemark.DeadlyDungeonTraps
{
    using UnityEngine;
    using UnityEngine.Events;

#if UNITY_EDITOR
    using UnityEditor;
#endif

    [AddComponentMenu("Deadly Dungeon Traps/Raycast", -1)]
    [HelpURL("https://traps.runemarkstudio.com/traps/raycast-triggers")]
    public class TrapRaycast : MonoBehaviour
    {
        public Trap trap;
        public TrapTrigger.Action action;

        public float maxDistance;
        public LayerMask layerMask;
        public string[] tagMask = new string[0];


        [SerializeField] UnityEvent onRaycastHit;
        [SerializeField] UnityEvent onActivate;
        [SerializeField] UnityEvent onDeactivate;
        


        [Min(0f)] public float cooldown;

        float nextSendTime;
       


        void Update()
        {
            RaycastHit hit;
            Ray ray = new Ray(transform.position, transform.forward);
            if (Physics.Raycast(ray, out hit, maxDistance, layerMask, QueryTriggerInteraction.Ignore))
            {
                if (CheckTag(hit.collider.gameObject))
                {
                    onRaycastHit.Invoke();
                    DoAction();
                }
            }            
        }

        protected void DoAction()
        {
            if (nextSendTime > 0) return;

            switch (action)
            {
                case TrapTrigger.Action.Activate: 
                    if(trap != null) trap.Activate(); 
                    onActivate.Invoke(); 
                    break;

                case TrapTrigger.Action.Deactivate: 
                    if(trap != null) trap.Deactivate(); 
                    onDeactivate.Invoke(); 
                    break;

                case TrapTrigger.Action.Toggle: 
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
    [CustomEditor(typeof(TrapRaycast), true)]
    public class TrapRaycastInspector : CustomInspectorBase
    { 
        protected override void OnInit()
        {
            var myTarget = (TrapRaycast)target;     
            AddProperty("trap", new GUIContent("Trap", "The trap that this trigger manipulates."));
            AddSpace(10);
            AddProperty("action", new GUIContent("Action", "Activate, deactivate the target trap or toggle between these to states."));
            AddCustomField("actionAlert", () => 
            {
                if(myTarget.trap == null && myTarget.action == TrapTrigger.Action.Toggle)
                    EditorGUILayout.HelpBox("You can't use toggle action without assigning a trap", MessageType.Error);
            });

            AddProperty("cooldown", new GUIContent("Cooldown", "Seconds before the trigger would work again."));
             
            AddSpace(10);
            
            AddProperty("maxDistance", new GUIContent("Max Distance"));
            AddProperty("layerMask", new GUIContent("Layer Mask"));    
            AddCustomField("tag", () =>
            {
                EditorGUILayoutExtension.TagMask(new GUIContent("Tag Filter", "Only trigger when a game object with one of these tags enter."), ref myTarget.tagMask);
            });
            
            AddSpace(10, 0);
            
            AddHeader("Events", 1);
            AddProperty("onRaycastHit", null, 1);
            AddProperty("onActivate", null, 1);
            AddProperty("onDeactivate", null, 1);

            AddFilter("onActivate", () => { return myTarget.action != TrapTrigger.Action.Deactivate; });
            AddFilter("onDeactivate", () => { return myTarget.action != TrapTrigger.Action.Activate; });
        }

        void OnSceneGUI()
        {
           /* var trigger = target as TrapTrigger;
            if (trigger.trap != null)
            {
                DrawInteraction(trigger);
            }*/
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
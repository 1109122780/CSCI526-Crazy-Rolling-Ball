namespace Runemark.DeadlyDungeonTraps
{
    using UnityEngine;

#if UNITY_EDITOR
    using UnityEditor;
    using UnityEditorInternal;
#endif
    
    [RequireComponent(typeof(Rigidbody))]
    [AddComponentMenu("Deadly Dungeon Traps/Mechanisms/Physics")]
    [HelpURL("https://traps.runemarkstudio.com/traps/trap-mechanism/physics")]
    public class TrapPhysics : TrapMechanism
    {
        [Min(0f)] public float duration = 0;

        Rigidbody _rigidbody;
        float finishTime = 0;

        Vector3 originalPos;
        Quaternion originalRot;

        void OnEnable()
        {
            _rigidbody = GetComponent<Rigidbody>();
            _rigidbody.isKinematic = true;

            originalPos = transform.position;
            originalRot = transform.rotation;
        }
        protected override bool Process()
        {
            if (_rigidbody.isKinematic)
            {
                _rigidbody.isKinematic = false;
                finishTime = duration;
            }

            if (duration == 0) return true;


            finishTime -= Time.deltaTime;

            if (finishTime <= 0)
            {
                if (playMode == PlayMode.Loop)
                {
                    ResetMechanism();
                }
                return true;
            }
            return false;
        }

        protected override void ResetMechanism()
        {
            _rigidbody.isKinematic = true;
            transform.position = originalPos;
            transform.rotation = originalRot;
        }
    }

#if UNITY_EDITOR
    [CanEditMultipleObjects]
    [CustomEditor(typeof(TrapPhysics), true)]
    public class TrapPhysicsInspector : TrapMechanismInspector
    {
        protected override void OnInit()
        {            
            base.OnInit();
            AddProperty("duration", new GUIContent("Duration", "How long the physic simulation should happen."));

         //   AddFilter("playMode", () => { return false; });
        }
    }

#endif
}

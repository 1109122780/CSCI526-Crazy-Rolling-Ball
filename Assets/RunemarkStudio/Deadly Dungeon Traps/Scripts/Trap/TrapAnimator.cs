namespace Runemark.DeadlyDungeonTraps
{
    using UnityEngine;
    using System.Collections.Generic;

#if UNITY_EDITOR
    using UnityEditor;
    using UnityEditorInternal;
#endif

    [AddComponentMenu("Deadly Dungeon Traps/Mechanisms/Animator")]
    [HelpURL("https://traps.runemarkstudio.com/traps/trap-mechanism/trap-animator")]
    public class TrapAnimator : TrapMechanism
    {
        public enum LoopMode { PingPong, Repeat }       
        public LoopMode loopMode;

        public enum AnimatorMode { Translate, Rotate }
        public AnimatorMode mode;

        [Min(0f)] public float duration = 1f;
        public AnimationCurve curve = new AnimationCurve(new Keyframe(0, 0), new Keyframe(1, 1));
        
        public bool differentReverse;
        [Min(0f)] public float reverseDuration = 0f;
        public AnimationCurve reverseCurve = new AnimationCurve(new Keyframe(0, 0), new Keyframe(1, 1));

        public List<ParticleElement> ReverseParticles = new List<ParticleElement>();
        public List<AudioElement> ReverseSounds = new List<AudioElement>();

        bool reverse;
        float time = 0f;
        float position = 0f;

        Rigidbody rb;

        void OnEnable()
        {
            rb = GetComponent<Rigidbody>();

            switch (mode)
            {
                case AnimatorMode.Translate: InitTranslate(); break;
                case AnimatorMode.Rotate: InitRotate(); break;
            }

        }

        protected override void OnLoopStart()
        {
            if (loopMode == LoopMode.PingPong && reverse)
            {
                HandleEffect(MechanismEvents.LoopReverseStart);
            }
            else
            {
                base.OnLoopStart();
            }
        }
        protected override void OnLoopEnd()
        {
            if (loopMode == LoopMode.PingPong && !reverse)
            {
                HandleEffect(MechanismEvents.LoopReverseEnd);
            }
            else
            {
                base.OnLoopEnd();
            }
        }

        public override bool ValidateMechanicsmEvent(MechanismEvents e)
        {
            if (playMode == PlayMode.Loop && loopMode == LoopMode.PingPong && differentReverse)
            {
                if (e == MechanismEvents.LoopReverseStart || e == MechanismEvents.LoopReverseEnd)
                    return true;
            }
            return base.ValidateMechanicsmEvent(e);
        }

        protected override bool Process()
        {
            float lDuration = duration;
            var lCurve = curve;

            if (differentReverse && reverse)
            {
                lDuration = reverseDuration != 0f ? reverseDuration : duration;
                lCurve = reverseCurve;
            }   
            time += Time.deltaTime;


            bool finished = false;
            switch (loopMode)
            {
                case LoopMode.PingPong:
                    position = time / lDuration;
                    if (reverse) position = 1 - position;

                    if (!reverse && position > 1)
                    {
                        position = 1;
                        time = 0;
                        reverse = true;
                        finished = true;
                    }
                    else if (reverse && position < 0)
                    {
                        position = 0;
                        time = 0;
                        reverse = false;
                        finished = true;
                    }

                    break;
                case LoopMode.Repeat: 
                    position = time / lDuration;

                    if (position > 1f)
                    {
                        position = position - 1;
                        time = position;
                        finished = true;
                    }
                    break;
            }

            float curvePos = lCurve.Evaluate(position);

            switch (mode)
            {
                case AnimatorMode.Translate: ProcessTranslate(curvePos); break;
                case AnimatorMode.Rotate: ProcessRotate(curvePos); break;
            }

            return finished;
        }
        void OnDrawGizmosSelected()
        {
            switch (mode)
            {
                case AnimatorMode.Translate: DrawGizmosForTranslate(); break;
            }
        }

        #region Translate
        public Transform anchor;
        public Vector3 start;
        public Vector3 end;
 
        void InitTranslate()
        {
            transform.position = anchor.TransformPoint(start);
        }
        void ProcessTranslate(float position)
        {
            Vector3 newPos = anchor.TransformPoint(Vector3.Lerp(start, end, position));
            if (rb != null)
                rb.MovePosition(newPos);
            else
                transform.position = newPos;
        }

        void DrawGizmosForTranslate() 
        {
        #if UNITY_EDITOR
            if (anchor != null)
            {               
                Vector3 startPos = anchor.TransformPoint(start);
                Vector3 endPos = anchor.TransformPoint(end);

                float sizeStart = HandleUtility.GetHandleSize(startPos);
                float sizeEnd = HandleUtility.GetHandleSize(endPos);

                Gizmos.DrawSphere(startPos, sizeStart * .2f);
                Gizmos.DrawSphere(endPos, sizeEnd * .2f) ;

                Gizmos.DrawLine(startPos, endPos);
            }
        #endif
        }
        #endregion

        #region Rotation
        public Vector3 eulerAngles = Vector3.up * 90;

        Vector3 startAngle;
        Vector3 endAngle;

        void InitRotate()
        {
            startAngle = transform.localEulerAngles;
            endAngle = eulerAngles;
        }

        bool ProcessRotate(float position) 
        {
            float x = Mathf.Lerp(startAngle.x, endAngle.x, position);
            float y = Mathf.Lerp(startAngle.y, endAngle.y, position);
            float z = Mathf.Lerp(startAngle.z, endAngle.z, position);

            //var q = Quaternion.Slerp(startAngle, endAngle, position);

            var euler = Quaternion.Euler(x, y, z);

            if (rb != null)
                rb.MoveRotation(euler);
            else
                transform.localRotation = euler;

            return true;
        }

        #endregion

        protected override void ResetMechanism()
        {
            switch (mode)
            {
                case AnimatorMode.Translate: ProcessTranslate(0); break;
                case AnimatorMode.Rotate: ProcessRotate(0); break;
            }
        }
    }

#if UNITY_EDITOR
    [CanEditMultipleObjects]
    [CustomEditor(typeof(TrapAnimator), true)]
    public class TrapAnimatorInspector : TrapMechanismInspector
    {
        const float DELAY_FIELD_WIDTH = 40;

        ReorderableList rParticles;
        ReorderableList rSounds;

        protected override void OnInit()
        {
            var myTarget = (TrapAnimator)target;

            AddHeader("Loop Settings", 1);
            AddProperty("loopMode", new GUIContent("Loop Mode", "Repeat is the standard loop mode. In the case of Ping-Pong, the loop goes back and forth."), 1);
        
            AddFilter("Loop Settings", () => { return myTarget.playMode == TrapMechanism.PlayMode.Loop; });
            AddFilter("loopMode", () => { return myTarget.playMode == TrapMechanism.PlayMode.Loop; });
            AddProperty("differentReverse", null, 1);
            AddFilter("differentReverse", () => { return myTarget.playMode == TrapMechanism.PlayMode.Loop && myTarget.loopMode == TrapAnimator.LoopMode.PingPong; });

            // NORMAL
            AddProperty("duration", new GUIContent("Duration", "How many seconds should the loop need to finish."), 1);
            AddProperty("curve", new GUIContent("Curve", "Customize the movement dynamic with this curve"), 1);

            // REVERSE
            AddProperty("reverseDuration", new GUIContent("Reverse Duration", "How many seconds should the loop need to finish the reverse cycle."), 1);
            AddProperty("reverseCurve", new GUIContent("Reverse Curve", "Customize the reverse movement dynamic with this curve"), 1);
            AddFilter("reverseDuration", () => { return myTarget.differentReverse && myTarget.loopMode == TrapAnimator.LoopMode.PingPong && myTarget.playMode == TrapMechanism.PlayMode.Loop; });
            AddFilter("reverseCurve", () => { return myTarget.differentReverse && myTarget.loopMode == TrapAnimator.LoopMode.PingPong && myTarget.playMode == TrapMechanism.PlayMode.Loop; });

            AddHeader("Animator Settings", 2);
            AddProperty("mode", null, 2);           
            AddCustomField("anchorWarning", () =>
            {
                if (myTarget.anchor == null && myTarget.mode == TrapAnimator.AnimatorMode.Translate)
                    EditorGUILayout.HelpBox("Assign an anchor object!", MessageType.Error);
            }, 2);
            AddProperty("anchor", new GUIContent("Anchor", "The movement is relative to the anchor transform"), 2);
            AddProperty("start", null, 2);
            AddProperty("end", null, 2);
            AddProperty("eulerAngles", null, 2);

            // Translate Only            
            AddFilter("start", () => { return myTarget.mode == TrapAnimator.AnimatorMode.Translate; });
            AddFilter("end", () => { return myTarget.mode == TrapAnimator.AnimatorMode.Translate; });
            AddFilter("anchor", () => { return myTarget.mode == TrapAnimator.AnimatorMode.Translate; });

            // Rotate Only
            AddFilter("eulerAngles", () => { return myTarget.mode == TrapAnimator.AnimatorMode.Rotate; });
            base.OnInit();
        }
    }

#endif
}
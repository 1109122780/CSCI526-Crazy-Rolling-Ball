namespace Runemark.DeadlyDungeonTraps
{
    using System.Collections;
    using UnityEngine;

#if UNITY_EDITOR
    using UnityEditor;
#endif

    [AddComponentMenu("Deadly Dungeon Traps/Effect Handlers/Ray", 1)]
    [HelpURL("https://traps.runemarkstudio.com/traps/effect-handlers/ray-handler")]
    public class RayHandler : EffectHandler
    {
        [SerializeField] bool playOnAwake;

        [Space]

        [SerializeField] LineRenderer lineRenderer;
        [SerializeField] Transform sparkParticle;

        [Space]

        [SerializeField] float maxDistance = 10;
        [SerializeField] LayerMask obstacleLayerMask;

        bool isActive 
        {
            get
            {
                return sparkParticle.gameObject.activeSelf;
            }
            set
            {
                sparkParticle.gameObject.SetActive(value);
                lineRenderer.gameObject.SetActive(value);
            }
        }

        void Awake()
        {
            lineRenderer = GetComponentInChildren<LineRenderer>();
            lineRenderer.SetPositions(new Vector3[2]);
            lineRenderer.SetPosition(0, Vector3.zero);
            SetEndPoint(maxDistance);

            if(playOnAwake) Play();
        }





        void Update()
        {
            if(!isActive) return;

            RaycastHit hit;
            Ray ray = new Ray(transform.position, transform.forward);
            if (Physics.Raycast(ray, out hit, maxDistance, obstacleLayerMask, QueryTriggerInteraction.Ignore))
            {
                float distance = (hit.point - transform.position).magnitude;
                SetEndPoint(distance);
            }
            else
            {
                SetEndPoint(maxDistance);
            }
        }

        void SetEndPoint(float distance)
        {
            Vector3 local = new Vector3(0, 0, distance);
            lineRenderer.SetPosition(1, local);
            sparkParticle.position = transform.position + transform.TransformDirection(local);
        }


        public override bool IsCommandValid(EffectHandlerCommand command, out string error)
        {
            if(command == EffectHandlerCommand.PlayOnce) 
            {
                error = "Play Once is not valid for Ray Handler";
                return false;
            }   
            
            return base.IsCommandValid(command, out error);
        }

        public override void PlayOnce()
        {
              
        }
        public override void Play()
        {
            isActive = true;
        }
        public override void Pause()
        {
            isActive = false;
        }
        public override void Stop()
        {
            isActive = false;
        }
        
    }

#if UNITY_EDITOR
    [CanEditMultipleObjects]
    [CustomEditor(typeof(RayHandler), true)]
    public class RayHandlerInspector : EffectHandlerInspector
    {
        protected override void OnInit()
        {
            AddProperty("playOnAwake");
            AddProperty("lineRenderer", null, 1);
            AddProperty("sparkParticle", null, 1);
            AddProperty("maxDistance", null, 1);
            AddProperty("obstacleLayerMask", null, 1);

            
            base.OnInit();
        }
    }
#endif
}
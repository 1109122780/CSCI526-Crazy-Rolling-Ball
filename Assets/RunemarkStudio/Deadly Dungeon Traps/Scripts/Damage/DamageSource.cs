namespace Runemark.DeadlyDungeonTraps
{
    using UnityEngine;
    using System.Collections.Generic;

#if UNITY_EDITOR
    using UnityEditor;

#endif

    [AddComponentMenu("Deadly Dungeon Traps/Damage System/Damage Source")]
    [HelpURL("https://traps.runemarkstudio.com/traps/damage-system/damage-source")]
    public class DamageSource : EffectHandler
    {
        public enum Mode { Volume, Contact, Particle, Ray }
        public Mode mode;
        public enum Duration { Once, Continuos, ControlledByMechanism }
        public Duration duration;


        public float maxDistance;
        public LayerMask layerMask;


        [Min(0f)] public float tickCooldown = 1f;

        public DamageResult damage;

        float nextTick;
        Dictionary<GameObject, float> collisionLog = new Dictionary<GameObject, float>();

        void Update()
        {
            if(duration != Duration.ControlledByMechanism && nextTick > 0)
                nextTick -= Time.deltaTime;

            if (mode == Mode.Contact && duration == Duration.Once)
            {
                List<GameObject> remove = new List<GameObject>();
                foreach (var log in collisionLog)
                {
                    if (log.Value + .5f <= Time.time) remove.Add(log.Key);
                }
                foreach (var go in remove)
                    collisionLog.Remove(go);
            }

            if(mode == Mode.Ray && nextTick <= 0)
            {
                RaycastHit hit;
                Ray ray = new Ray(transform.position, transform.forward);
                if (Physics.Raycast(ray, out hit, maxDistance, layerMask, QueryTriggerInteraction.Ignore))
                {
                    TryApplyDamage(hit.collider.gameObject,
                                   new DamageResult(damage));   
                    
                    nextTick = tickCooldown;                    
                }   
            }
        }

        void OnCollisionEnter(Collision collision)
        {
            if (mode != Mode.Contact || duration == Duration.Continuos || duration == Duration.ControlledByMechanism) return;
            GameObject go = collision.gameObject;

            if (collisionLog.ContainsKey(go)) return;

            TryApplyDamage(go, new DamageResult(damage)
            {
                point = collision.contacts[0].point,
                direction = collision.contacts[0].normal
            });
            collisionLog.Add(go, Time.time);
        }
        void OnCollisionStay(Collision collision)
        {
            if (mode != Mode.Contact || duration == Duration.Once) return;
            if (nextTick > 0) return;

            TryApplyDamage(collision.gameObject, new DamageResult(damage)
            {
                point = collision.contacts[0].point,
                direction = collision.contacts[0].normal
            });

            nextTick = tickCooldown;
        }

        void OnTriggerEnter(Collider other)
        {
            if (mode != Mode.Volume || duration == Duration.Continuos || duration == Duration.ControlledByMechanism) return;
            GameObject go = other.gameObject;

            if (collisionLog.ContainsKey(go)) return;
            TryApplyDamage(go, new DamageResult(damage)
            {                
                direction = transform.position - go.transform.position
            });
            collisionLog.Add(go, 0f);
        }
        void OnTriggerStay(Collider other)
        {
            if (mode != Mode.Volume || duration == Duration.Once) return;
            if (nextTick > 0) return;

            TryApplyDamage(other.gameObject, new DamageResult(damage)
            {
                direction = transform.position - other.transform.position
            });
            nextTick = tickCooldown;
        }

        void OnTriggerExit(Collider other)
        {
            GameObject go = other.gameObject;
            if (!collisionLog.ContainsKey(go)) return;
            collisionLog.Remove(go);
        }

        void OnParticleCollision(GameObject other)
        {
            if (mode != Mode.Particle) return;
            if (nextTick > 0) return;

            TryApplyDamage(other.gameObject, new DamageResult(damage));
            nextTick = tickCooldown;
        }
        void TryApplyDamage(GameObject targetGO, DamageResult result)
        {
            if (targetGO == null) return;
            var target = targetGO.GetComponent<IDamageable>();
            if (target == null) return;            
            ApplyDamage(target, result);
        }        
        protected virtual void ApplyDamage(IDamageable target, DamageResult result)
        {
            result.source = this;         
            target.TakeDamage(result);
        }

        protected void ResetCollisionLog()
        {
            collisionLog.Clear();
        }


        public override bool IsCommandValid(EffectHandlerCommand command, out string error)
        {
            error = "";
            if (duration != Duration.ControlledByMechanism) 
            {
                error = "ERROR: set the duration of the Damage Source to 'ControlledByMechanism'";
                return false;
            }
            if (command != EffectHandlerCommand.PlayOnce)
            {
                error = "ERROR: Damage Source only can react to Play and Stop commands!";
                return false;
            }
            return base.IsCommandValid(command, out error);
        }

        public override void PlayOnce()
        {
            nextTick = 0;
        }
    }

#if UNITY_EDITOR
    [CanEditMultipleObjects]
    [CustomEditor(typeof(DamageSource), true)]
    public class DamageSourceInspector : EffectHandlerInspector
    {
        protected override void OnInit()
        {
            var mytarget = (DamageSource)target;
            var collider = mytarget.GetComponent<Collider>();
            var ps = mytarget.GetComponent<ParticleSystem>();
           
           

            AddProperty("mode", null, 0);
            AddCustomField("modeTest", () => 
            {
                switch (mytarget.mode)
                {
                    case DamageSource.Mode.Contact:
                        if (collider == null)
                            EditorGUILayout.HelpBox("This script required a collider on the same game object!", MessageType.Warning);
                        else if (collider.isTrigger)
                            EditorGUILayout.HelpBox("Uncheck the isTrigger property on the collider!", MessageType.Warning);
                         break;
                    case DamageSource.Mode.Volume:
                        if (collider == null)
                            EditorGUILayout.HelpBox("This script required a collider on the same game object!", MessageType.Warning);
                        else if (!collider.isTrigger)
                            EditorGUILayout.HelpBox("Check the isTrigger property on the collider!", MessageType.Warning);
                        break;
                    case DamageSource.Mode.Particle:
                        if (ps == null)
                            EditorGUILayout.HelpBox("The script requires a particle system on the same game object!", MessageType.Warning);
                        break;     
                     case DamageSource.Mode.Ray:
                        if (mytarget.duration != DamageSource.Duration.Continuos)
                            EditorGUILayout.HelpBox("Ray mode only supports Continious duration!", MessageType.Error);
                        break;                   
                }

                if (ps != null && ps.collision.quality != ParticleSystemCollisionQuality.High)
                    EditorGUILayout.HelpBox("To use the particle system as damage source, you have to set the collision quality to high!", MessageType.Warning);
            });           

            AddProperty("maxDistance");
            AddProperty("layerMask");
            AddFilter("maxDistance", () => { return mytarget.mode == DamageSource.Mode.Ray; });
            AddFilter("layerMask", () => { return mytarget.mode == DamageSource.Mode.Ray; });

            AddSpace(10);

            AddProperty("duration", null, 0);

            AddProperty("tickCooldown", null, 0);
            AddFilter("tickCooldown", () => { return mytarget.duration == DamageSource.Duration.Continuos; });

            base.OnInit();
            AddFilter("delay", () => { return mytarget.duration == DamageSource.Duration.ControlledByMechanism; });

            AddProperty("damage", null, 0);

            // base.OnInit();
            // AddFilter("playMode", () => { return false; });
        }
    }

#endif
}

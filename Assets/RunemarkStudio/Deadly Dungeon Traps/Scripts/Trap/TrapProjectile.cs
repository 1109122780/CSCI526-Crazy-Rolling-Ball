namespace Runemark.DeadlyDungeonTraps
{
    using UnityEngine;

#if UNITY_EDITOR
    using UnityEditor;
    using UnityEditorInternal;
#endif

    [AddComponentMenu("Deadly Dungeon Traps/Damage System/Projectile")]
    [HelpURL("https://traps.runemarkstudio.com/traps/trap-mechanism/trap-launcher#trap-projectile")]
    public class TrapProjectile : DamageSource
    {
        public bool sticky;
        public float force;
        public float distanceLeft;

        private void OnEnable()
        {
            mode = Mode.Contact;
            duration = Duration.Once;
            ResetCollisionLog();
        }

        void Update()
        {
            float deltaDistance = force * Time.deltaTime;
            transform.position += transform.forward * deltaDistance;
            distanceLeft -= deltaDistance;

            if (distanceLeft <= 0) gameObject.SetActive(false);
        }

        protected override void ApplyDamage(IDamageable target, DamageResult result)
        {
            base.ApplyDamage(target, result);

            if (sticky)
            {
                transform.parent = target.transform;
                enabled = false;
            }
        }

    }

#if UNITY_EDITOR
    [CanEditMultipleObjects]
    [CustomEditor(typeof(TrapProjectile), true)]
    public class TrapProjectileInspector : DamageSourceInspector
    {
        protected override void OnInit()
        {
            var mytarget = (DamageSource)target;
            var collider = mytarget.GetComponent<Collider>();

            AddCustomField("modeTest", () =>
            {
                if (collider == null)
                    EditorGUILayout.HelpBox("This script required a collider on the same game object!", MessageType.Warning);

                else if (collider.isTrigger)
                    EditorGUILayout.HelpBox("Uncheck the isTrigger property on the collider!", MessageType.Warning);

            });

            AddProperty("damage", null, 0);
        }
    }

#endif
}

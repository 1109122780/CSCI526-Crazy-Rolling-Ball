namespace Runemark.DeadlyDungeonTraps
{
    using UnityEngine;

#if UNITY_EDITOR
    using UnityEditor;
    using UnityEditorInternal;
#endif

    [AddComponentMenu("Deadly Dungeon Traps/Mechanisms/Particle")]
    [HelpURL("https://traps.runemarkstudio.com/traps/trap-mechanism/particle")]
    public class TrapParticle : TrapMechanism
    {
        public ParticleSystem particle;
        ParticleSystem.MainModule psMain;
        float duration = 0f;
        float pauseTime = 0f;

        private void OnEnable()
        {
            psMain = particle.main;
            duration = psMain.duration;    
        }

        protected override bool Process()
        {
            if (particle.isPaused || particle.isStopped)
            {
                particle.Play();
                pauseTime = duration;
                // Start do
            }
            else if(Cooldown > 0)
            {
                pauseTime -= Time.deltaTime;
                if (pauseTime <= 0f)
                {
                    particle.Stop();
                    // stop do
                    return true; 
                }
            }

            return false;
        }
    }
#if UNITY_EDITOR
    [CanEditMultipleObjects]
    [CustomEditor(typeof(TrapParticle), true)]
    public class TrapParticleInspector : TrapMechanismInspector
    {
        protected override void OnInit()
        {           
            AddProperty("particle", null);         
            base.OnInit();

            AddFilter("ResetOnFinish", () => { return false; });

        }
    }

#endif
}
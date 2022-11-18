namespace Runemark.DeadlyDungeonTraps
{
    using System.Collections;
    using UnityEngine;

#if UNITY_EDITOR
    using UnityEditor;
#endif

    [AddComponentMenu("Deadly Dungeon Traps/Effect Handlers/Particle", 1)]
    [HelpURL("https://traps.runemarkstudio.com/traps/effect-handlers/particle-handler")]
    public class ParticleHandler : EffectHandler
    {
        public ParticleSystem particle;
        public enum Mode { Normal, Instantiate }
        public Mode mode;

        Coroutine stop;

        public override bool IsCommandValid(EffectHandlerCommand command, out string error)
        {
            error = "";
            if (mode == Mode.Instantiate && command != EffectHandlerCommand.PlayOnce)
            {
                error = "ERROR: Particle Handler only can react to PlayOnce command when it's set to Instantiate mode!";
                return false;
            }
            return base.IsCommandValid(command, out error);
        }

        public override void PlayOnce()
        {
            switch (mode)
            {
                case Mode.Normal: 
                    particle.Play();
                    stop = StartCoroutine(StopWithDelay(particle.main.duration));
                    break;  

                case Mode.Instantiate:
                    var p = Instantiate(particle, transform.position, transform.rotation);
                    Destroy(p.gameObject, p.main.duration);
                    break;
            }          
        }
        public override void Play()
        {
            switch (mode)
            {
                case Mode.Normal:
                    particle.Play();
                    break;
            }
        }
        public override void Pause()
        {
            switch (mode)
            {
                case Mode.Normal:
                    particle.Pause();
                    break;
            }
        }
        public override void Stop()
        {
            switch (mode)
            {
                case Mode.Normal:
                    particle.Stop();
                    break;
            }
        }

        IEnumerator StopWithDelay(float time)
        {
            yield return new WaitForSeconds(time);
            Stop();
            if (stop != null)
            {
                StopCoroutine(stop);
                stop = null;
            }
        }
    }

#if UNITY_EDITOR
    [CanEditMultipleObjects]
    [CustomEditor(typeof(ParticleHandler), true)]
    public class ParticleHandlerInspector : EffectHandlerInspector
    {
        protected override void OnInit()
        {
            AddProperty("particle");
            AddProperty("mode");
            base.OnInit();
        }
    }
#endif
}
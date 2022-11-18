namespace Runemark.DeadlyDungeonTraps
{
    using UnityEngine;
    using UnityEngine.Events;

#if UNITY_EDITOR
    using UnityEditor;
#endif

    [AddComponentMenu("Deadly Dungeon Traps/Effect Handlers/Custom", 2)]
    [HelpURL("https://traps.runemarkstudio.com/traps/effect-handlers/custom-effect-handler")]
    public class CustomEffectHandler : EffectHandler
    {
        public UnityEvent onPlayOnce;        
        public UnityEvent onPlay;        
        public UnityEvent onPause;        
        public UnityEvent onStop;       

      
        public override void PlayOnce()
        {
            onPlayOnce.Invoke();
        }
        public override void Play()
        {
            onPlay.Invoke();
        }
        public override void Pause()
        {
            onPause.Invoke();
        }
        public override void Stop()
        {
            onStop.Invoke();
        }
    }

#if UNITY_EDITOR
    [CanEditMultipleObjects]
    [CustomEditor(typeof(CustomEffectHandler), true)]
    public class CustomEffectHandlerInspector : EffectHandlerInspector
    {
        protected override void OnInit()
        {
            base.OnInit();
            AddProperty("onPlayOnce");
            AddProperty("onPlay");
            AddProperty("onPause");
            AddProperty("onStop");
           
        }
    }
#endif
}
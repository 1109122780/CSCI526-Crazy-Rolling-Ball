namespace Runemark.DeadlyDungeonTraps
{
    using System.Collections;
    using UnityEngine;

#if UNITY_EDITOR
    using UnityEditor;
#endif

    [RequireComponent(typeof(AudioSource))]
    [AddComponentMenu("Deadly Dungeon Traps/Effect Handlers/Audio", 0)]
    [HelpURL("https://traps.runemarkstudio.com/traps/effect-handlers/audio-handler")]
    public class AudioHandler : EffectHandler
    {
        public AudioClip clip;
        AudioSource source;

        void Awake()
        {
            source = GetComponent<AudioSource>();
        }

        public override void PlayOnce()
        {
            source.PlayOneShot(clip);
        }
        public override void Play()
        {
            source.clip = clip;
            source.Play();
        }
        public override void Pause()
        {
            source.Pause();
        }
        public override void Stop()
        {
            source.Stop();
        }
    }

#if UNITY_EDITOR
    [CanEditMultipleObjects]
    [CustomEditor(typeof(AudioHandler), true)]
    public class AudioHandlerInspector : EffectHandlerInspector
    {
        protected override void OnInit()
        {
            AddProperty("clip");
            base.OnInit();
        }
    }
#endif
}
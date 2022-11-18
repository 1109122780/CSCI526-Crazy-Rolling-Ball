namespace Runemark.DeadlyDungeonTraps
{
    using System.Collections;
    using UnityEngine;

#if UNITY_EDITOR
    using UnityEditor;
#endif

    public enum EffectHandlerCommand { PlayOnce, Play, Stop, Pause }
    public class EffectHandler : MonoBehaviour
    {
        [Min(0f)] public float delay = 0f;

        Coroutine waiting;

        public virtual bool IsCommandValid(EffectHandlerCommand command, out string error)
        {
            error = "";
            return true;
        }

        public void Execute(EffectHandlerCommand command)
        {
            if (delay > 0)
            {
                if (waiting == null)
                    waiting = StartCoroutine(ExecuteWithDelay(command));
            }
            else
            {
                ExecuteImmediatelly(command);
            }
        }
        public void ExecuteImmediatelly(EffectHandlerCommand command)
        {
            switch (command)
            {
                case EffectHandlerCommand.PlayOnce: PlayOnce(); break;
                case EffectHandlerCommand.Play: Play(); break;
                case EffectHandlerCommand.Pause: Pause(); break;
                case EffectHandlerCommand.Stop: Stop(); break;
            }
        }

        IEnumerator ExecuteWithDelay(EffectHandlerCommand command)
        {
            yield return new WaitForSeconds(delay);
            ExecuteImmediatelly(command);

            StopCoroutine(waiting);
            waiting = null;
        }
          
        public virtual void PlayOnce() { }
        public virtual void Play() { }
        public virtual void Pause() { }
        public virtual void Stop() { }
    }


#if UNITY_EDITOR
    [CanEditMultipleObjects]
    [CustomEditor(typeof(EffectHandler), true)]
    public class EffectHandlerInspector : CustomInspectorBase
    {
        protected override void OnInit()
        {
            AddCustomField("abstractClass", () => { EditorGUILayout.HelpBox("This component is a base class, use ParticleHandler, AudioHandler or CustomEffectHandler instead!", MessageType.Error); });
            AddFilter("abstractClass", () => { return target.GetType() == typeof(EffectHandler); });

            AddProperty("delay", new GUIContent("Delay", "Seconds after the command actually happens on the effect handler."));
        }
    }
#endif
}
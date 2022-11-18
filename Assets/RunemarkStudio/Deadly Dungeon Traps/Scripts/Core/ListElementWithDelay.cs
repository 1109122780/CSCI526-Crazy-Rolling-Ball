namespace Runemark.DeadlyDungeonTraps
{
    using UnityEngine;

    public class ListElementWithDelay<T> where T : Object
    {
        public T Element;
        public float Delay;
    }

    [System.Serializable]
    public class TrapMechanismElement : ListElementWithDelay<TrapMechanism> { }

    [System.Serializable]
    public class ParticleElement : ListElementWithDelay<ParticleSystem> 
    {
        public Transform SpawnPoint;
    }

    [System.Serializable]
    public class AudioElement : ListElementWithDelay<AudioClip>
    {
    }
}

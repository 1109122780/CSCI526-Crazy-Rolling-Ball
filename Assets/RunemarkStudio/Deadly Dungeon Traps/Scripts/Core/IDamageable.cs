namespace Runemark.DeadlyDungeonTraps
{
    using UnityEngine;
    
    public interface IDamageable
    {
        Transform transform { get; }
        void TakeDamage(DamageResult result);
    }
}
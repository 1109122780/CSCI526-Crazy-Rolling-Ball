namespace Runemark.DeadlyDungeonTraps
{
    using UnityEngine;

    [System.Serializable]    
    public class DamageResult
    {
        public int damage;
        // You can add here more variables like damage type

        public DamageResult(DamageResult toClone)
        {
            damage = toClone.damage;
            // You have to make the clone functionality for extra variables.

        }

        #region Integrated Methods
        public DamageResult() { }
        [HideInInspector] public DamageSource source;
        [HideInInspector] public Vector3 point = Vector3.zero;
        [HideInInspector] public Vector3 direction = Vector3.zero;
        #endregion
    }

}
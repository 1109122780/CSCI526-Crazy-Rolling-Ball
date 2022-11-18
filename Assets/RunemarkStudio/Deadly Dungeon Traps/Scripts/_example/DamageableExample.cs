using Runemark.DeadlyDungeonTraps;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class DamageableExample : MonoBehaviour, IDamageable
{
    public int MaxHP = 100;
    int currHP = 100;

    [System.Serializable]
    public class DamageEvent : UnityEvent<float> { }
    public DamageEvent OnDamage;
    public UnityEvent OnDeath;

    void OnEnable()
    {
        currHP = MaxHP;
        OnDamage.Invoke(currHP);
    }

    public void TakeDamage(DamageResult result)
    {             
        currHP -= result.damage;
        OnDamage.Invoke(currHP);

        if (currHP <= 0)
            OnDeath.Invoke();
    }
}



public class ExampleDamageable : MonoBehaviour, IDamageable
{
    public int Health = 100;

    public void TakeDamage(DamageResult result)
    {
        Health -= result.damage;
        if (Health <= 0)
        {       
            // Do something on death
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HUDExample : MonoBehaviour
{
    public Slider HPBar;
    public Image damageEffect;
    public float damageEffectSpeed = 1f;
    public AnimationCurve damageEffectCurve;

    public GameObject deathEffect;

    Coroutine dmgEffect;

    private void OnEnable()
    {
        deathEffect.SetActive(false);
    }

    public void OnHPChanged(float currHP)
    {
        if(HPBar.maxValue < currHP)
            HPBar.maxValue = currHP;

        if (dmgEffect == null && HPBar.value > currHP)
            dmgEffect = StartCoroutine(DamageEffectCoroutine());
        HPBar.value = currHP;        
    }

    public void OnDeath()
    {
        deathEffect.SetActive(true);
    }

    IEnumerator DamageEffectCoroutine()
    {
        Color c = damageEffect.color;
        float t = 0;

        while (t < 1)
        {
            t += Time.deltaTime * damageEffectSpeed;
            c.a = damageEffectCurve.Evaluate(t);
            damageEffect.color = c;
            yield return null;
        }

        StopCoroutine(dmgEffect);
        dmgEffect = null;
    }

	
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Coin : MonoBehaviour
{

    void OnTriggerEnter(Collider other)
    {
        CoinTMP.theScore += 1;
        Destroy(gameObject);       
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class CoinTMP : MonoBehaviour
{
    public GameObject scoreText;
    public static int theScore;
    

    void Update()
    {
        scoreText.GetComponent<TMP_Text>().text = "Coins:" + theScore;
    }
}

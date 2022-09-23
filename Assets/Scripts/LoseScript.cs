using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoseScript : MonoBehaviour
{
    public GameObject DataAnalyst;
    // OnEnable is called before the game object is activated
    void OnEnable()
    {
        StartCoroutine(DataAnalyst.GetComponent<DataAnalystScript>().Post(System.DateTime.Now.Ticks.ToString(), "False", "0"));
    }

}

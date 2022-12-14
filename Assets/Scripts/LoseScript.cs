using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoseScript : MonoBehaviour
{
    public GameObject DataAnalyst;
    public GameObject information;
    // OnEnable is called before the game object is activated
    void OnEnable()
    {
        information = GameObject.Find("Information");
        Scene scene = SceneManager.GetActiveScene();
        DateTime levelEndTime = DateTime.Now;
        StartCoroutine(DataAnalyst.GetComponent<DataAnalystScript>().Post(
            information.GetComponent<InformationScript>().playerID,
            information.GetComponent<InformationScript>().levelID,
            scene.name,
            "False",
            "0",
            information.GetComponent<InformationScript>().timesFall.ToString(),
            information.GetComponent<InformationScript>().timesQ.ToString(),
            information.GetComponent<InformationScript>().timesE.ToString(),
            information.GetComponent<InformationScript>().timesF.ToString(),
            "0",
            (levelEndTime - information.GetComponent<InformationScript>().levelStartTime).ToString(),
            information.GetComponent<InformationScript>().star.ToString(),
            information.GetComponent<InformationScript>().shapeChange.ToString()
        ));
    }

}

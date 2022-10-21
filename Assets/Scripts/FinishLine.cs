using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FinishLine : MonoBehaviour
{
    public GameObject win;
    public GameObject DataAnalyst;
    public GameObject Player;
    public GameObject information;
    // Start is called before the first frame update
    void Start()
    {
        win.SetActive(false);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            win.SetActive(true);
            Time.timeScale = 0;
            information = GameObject.Find("Information");
            Scene scene = SceneManager.GetActiveScene();
            DateTime levelEndTime = DateTime.Now;
            // Record health:
            // StartCoroutine(DataAnalyst.GetComponent<DataAnalystScript>().Post(information.GetComponent<InformationScript>().playerID, information.GetComponent<InformationScript>().levelID, scene.name, "True", Player.GetComponent<PlayerMovement>().health.ToString(), information.GetComponent<InformationScript>().timesFall.ToString(), information.GetComponent<InformationScript>().timesQ.ToString(), (levelEndTime - information.GetComponent<InformationScript>().levelStartTime).ToString(), information.GetComponent<InformationScript>().star.ToString(), information.GetComponent<InformationScript>().shapeChange.ToString()));
            // Don't record health
            StartCoroutine(DataAnalyst.GetComponent<DataAnalystScript>().Post(
                information.GetComponent<InformationScript>().playerID,
                information.GetComponent<InformationScript>().levelID,
                scene.name,
                "True",
                "1",
                information.GetComponent<InformationScript>().timesReset.ToString(),
                information.GetComponent<InformationScript>().timesFall.ToString(),
                information.GetComponent<InformationScript>().timesQ.ToString(),
                information.GetComponent<InformationScript>().timesE.ToString(),
                information.GetComponent<InformationScript>().timesF.ToString(),
                (levelEndTime - information.GetComponent<InformationScript>().levelStartTime).ToString(),
                information.GetComponent<InformationScript>().star.ToString(),
                information.GetComponent<InformationScript>().shapeChange.ToString()
            ));
        }
    }

    void Update()
    {
        // if (Input.GetKeyDown(KeyCode.R))
        // {
        //     SceneManager.LoadScene(0);
        //     Time.timeScale = 1;
        //     return;
        // }
    }
}

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{
    public static bool GameIsPaused = false;
    public GameObject pauseMenuUI;
    public string menu;
    // public string optionScene;
    public GameObject information;
    public GameObject DataAnalyst;

    void Start()
    {
        information = GameObject.Find("Information");
        DataAnalyst = GameObject.Find("DataAnalyst");
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (!GameIsPaused)
            {
                Pause();
            }
            else
            {
                Resume();
            }
        }
    }

    void Resume()
    {
        pauseMenuUI.SetActive(false);
        Time.timeScale = 1f;
        GameIsPaused = false;
    }

    void Pause()
    {
        pauseMenuUI.SetActive(true);
        Time.timeScale = 0f;
        GameIsPaused = true;
    }

    public void ResumeGame()
    {
        Resume();
    }

    public void LoadMenu()
    {
        Scene scene = SceneManager.GetActiveScene();
        DateTime levelEndTime = DateTime.Now;
        StartCoroutine(DataAnalyst.GetComponent<DataAnalystScript>().Post(
            information.GetComponent<InformationScript>().playerID,
            information.GetComponent<InformationScript>().levelID,
            scene.name,
            "False",
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
        SceneManager.LoadScene(menu);
    }

    public void QuitGame()
    {
        Scene scene = SceneManager.GetActiveScene();
        DateTime levelEndTime = DateTime.Now;
        StartCoroutine(DataAnalyst.GetComponent<DataAnalystScript>().Post(
            information.GetComponent<InformationScript>().playerID,
            information.GetComponent<InformationScript>().levelID,
            scene.name,
            "False",
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
        // SceneManager.LoadScene(optionScene);
        SceneManager.LoadScene("Level Option Scene");
    }

    // IEnumerator Wait()
    // {
    //     yield return new WaitForSeconds(3);

    // }
}

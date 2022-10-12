using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class OptionScene : MonoBehaviour
{
    //public string tutorialLevel;
    //public string firstLevel;
    //public string secondLevel;
    public string mainMenuLevel;
    public Button[] levelButtons; 
    // Start is called before the first frame update
    void Start()
    {
        /*
        int levelAt = PlayerPrefs.GetInt("levelAt", 2);

        for (int i = 0; i < levelButtons.Length; i++)
        {
            if (i + 2 > levelAt)
            {
                levelButtons[i].interactable = false;
            }

        }
        */
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    /*
    public void StartTutorial()
    {
        SceneManager.LoadScene(tutorialLevel);
        //SceneManager.LoadScene(0);
    }

    public void StartLevel1()
    {
        SceneManager.LoadScene(firstLevel);
    }

    public void StartLevel2()
    {
        SceneManager.LoadScene(secondLevel);
    }
    */

    public void ChangeScene(int sceneIndex)
    {
        SceneManager.LoadScene(sceneIndex);
    }

    public void Exit()
    {
        SceneManager.LoadScene(mainMenuLevel);
    }
}

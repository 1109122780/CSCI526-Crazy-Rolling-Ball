using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class OptionScene : MonoBehaviour
{
    public string level1;
    public string level2;
    public string level3;
    public string level4;
    public string level5;
    // public string level6;
    // public string level7;
    // public string level8;
    // public string level9;
    // public string level10;
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

    public void StartLevel1()
    {
        SceneManager.LoadScene(level1);
    }

    public void StartLevel2()
    {
        SceneManager.LoadScene(level2);
    }

    public void StartLevel3()
    {
        SceneManager.LoadScene(level3);
    }

    public void StartLevel4()
    {
        SceneManager.LoadScene(level4);
    }

    public void StartLevel5()
    {
        SceneManager.LoadScene(level5);
    }

    // public void StartLevel6()
    // {
    //     SceneManager.LoadScene(level6);
    // }

    // public void StartLevel7()
    // {
    //     SceneManager.LoadScene(level7);
    // }

    // public void StartLevel8()
    // {
    //     SceneManager.LoadScene(level8);
    // }

    // public void StartLevel9()
    // {
    //     SceneManager.LoadScene(level9);
    // }

    // public void StartLevel10()
    // {
    //     SceneManager.LoadScene(level10);
    // }

    public void ChangeScene(int sceneIndex)
    {
        SceneManager.LoadScene(sceneIndex);
    }

    public void Exit()
    {
        SceneManager.LoadScene(mainMenuLevel);
    }
}

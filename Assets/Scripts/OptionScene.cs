using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class OptionScene : MonoBehaviour
{
    public string tutorialLevel;
    public string firstLevel;
    public string secondLevel;
    public string mainMenuLevel;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

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

    public void Exit()
    {
        SceneManager.LoadScene(mainMenuLevel);
    }
}

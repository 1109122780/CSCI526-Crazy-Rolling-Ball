using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{   
    public string tutorialLevel;
    public string optionScene;
    private int clickTime = 0;

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void StartGame()
    {
        if (clickTime == 0) {
            SceneManager.LoadScene(tutorialLevel);
            clickTime++;
        } else {
            SceneManager.LoadScene(optionScene);
        }
    }

    public void StartOption()
    {
        SceneManager.LoadScene(optionScene);
    }
}

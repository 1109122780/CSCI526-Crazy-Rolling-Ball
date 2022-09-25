using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public string firstLevel;
    public string secondLevel;
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
        SceneManager.LoadScene(firstLevel);
        //SceneManager.LoadScene(0);
    }

    public void StartOption()
    {
        SceneManager.LoadScene(secondLevel);
    }

    public void QuitGame()
    {
        Application.Quit();
        Debug.Log("Quitting");
    }
}

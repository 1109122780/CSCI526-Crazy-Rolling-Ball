using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class WinPanel : MonoBehaviour
{
    public Text message;
    public GameObject information;
    public string optionScene;

    // Start is called before the first frame update
    void Start()
    {
        // information = GameObject.Find("Information");
    }

    // Update is called once per frame
    void Update()
    {
        // string stars = information.GetComponent<InformationScript>().star.ToString();
        // message.text = "Congratulations!\n" + stars + " Stars Found!";
    }

    public void NextLevel(int sceneIndex)
    {
        SceneManager.LoadScene(sceneIndex);
    }

    public void Exit()
    {
        SceneManager.LoadScene(optionScene);
    }
}

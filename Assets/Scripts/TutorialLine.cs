using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialLine : MonoBehaviour
{
    public GameObject tutorialBar;
    public GameObject tutorial;
    private bool isSeen;
    private bool isSeeing;
    // Start is called before the first frame update
    void Start()
    {
        isSeen = false;
        isSeeing = false;
    }
    private void OnTriggerEnter(Collider other){
        if(other.name == "Player" && isSeen == false)
        {
            Time.timeScale = 0;
            Debug.Log(123);
            isSeeing = true;
            tutorialBar.SetActive(true);
            tutorial.SetActive(true);
        }
    }
    // Update is called once per frame
    void Update()
    {
        if(isSeeing == true && Input.GetKeyDown(KeyCode.Return))
        {
            Time.timeScale = 1;
            Debug.Log(456);
            isSeeing = false;
            isSeen = true;
            tutorialBar.SetActive(false);
            tutorial.SetActive(false);
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FinishLine : MonoBehaviour
{
    public GameObject win;
    // Start is called before the first frame update
    void Start()
    {
        win.SetActive(false);
    }

    private void OnTriggerEnter(Collider other){
       win.SetActive(true);
       Time.timeScale = 0;
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.R)){
            SceneManager.LoadScene(0);
            Time.timeScale = 1;
            return;
        }
    }
}

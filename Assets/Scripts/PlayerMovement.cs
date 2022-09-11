using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerMovement : MonoBehaviour
{
    public float speed = 10;
    public float turnSpeed = 4;
    public float fallSpeed = -8;
    public int health = 3;
    public GameObject lose;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown("escape")){
            Application.Quit();
        }
        
        if (Input.GetKeyDown(KeyCode.R)){
            SceneManager.LoadScene(0);
            Time.timeScale = 1;
            return;
        }
        float x = Input.GetAxis("Horizontal");
        transform.Translate(x * turnSpeed * Time.deltaTime, 0, speed * Time.deltaTime);
        if (transform.position.x < -4 || transform.position.x > 4 || transform.position.y < 0 ){
            transform.Translate(0,fallSpeed * Time.deltaTime,0);
        }
        if (transform.position.y < -20){
            lose.SetActive(true);
            Time.timeScale = 0;
        }
    }
}

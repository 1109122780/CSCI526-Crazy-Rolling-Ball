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

    // Jump parameters:
    public float jumpSpeed;
    private bool canJump;
    Rigidbody rb;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        // if (Input.GetKeyDown(KeyCode.Escape)){
        //     Application.Quit();
        // }
        
        // Reset game when R is pressed:
        if (Input.GetKeyDown(KeyCode.R)){
            SceneManager.LoadScene("Game Scene 1");
            Time.timeScale = 1;
            return;
        }
        // Enter the shop
        if (Input.GetKeyDown(KeyCode.T)){
            SceneManager.LoadScene("StoreScene");
            Time.timeScale = 1;
            return;
        }

        // The left and right movement:
        float x = Input.GetAxis("Horizontal");
        transform.Translate(x * turnSpeed * Time.deltaTime, 0, speed * Time.deltaTime);
        // If the ball is out of border, show the falling effect:
        if (transform.position.x < -4 || transform.position.x > 4 || transform.position.y < 0 ){
            transform.Translate(0, fallSpeed * Time.deltaTime, 0);
        }

        // If dropped the ball, show lose information:
        if (transform.position.y < -20){
            lose.SetActive(true);
            Time.timeScale = 0;
        } 

        // If space key is pressed, we jump:
        if (rb.velocity.y <= 1.5 && rb.velocity.y >= -1.5 ) {
            if (Input.GetKeyDown(KeyCode.Space)) {
                canJump = true;
            }
        }
        
    }

    void FixedUpdate() {
        // If we can jump (preventing double jump in the air):
        if (canJump) {
            canJump = false;
            rb.AddForce(0, jumpSpeed, 0, ForceMode.Impulse);
        }
    }
}
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
    public string currentScene;
    public int colorTag;
    public int worldTag;
    public bool inTest;
    public GameObject information;
    public Vector3 direction;



    public GameObject checkPoint;
    public bool hasCheckPoint;


    // Jump parameters:
    public float jumpSpeed;
    private bool canJump;
    public bool isgrounded;
    Rigidbody rb;
    private SizeChange bool_script;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        bool_script = GetComponent<SizeChange>();
        Time.timeScale = 1;
        hasCheckPoint = false;
        information = GameObject.Find("Information");
    }

    // Update is called once per frame
    void Update()
    {
        // if (Input.GetKeyDown(KeyCode.Escape)){
        //     Application.Quit();
        // }

        // Reset game when R is pressed:
        if (Input.GetKeyDown(KeyCode.R)){
            if(hasCheckPoint == false)
            {
                SceneManager.LoadScene(currentScene);
                Time.timeScale = 1;
                return;       
            }
            else
                gameObject.transform.position = checkPoint.GetComponent<Transform>().position;
        }
        // Enter the shop
        if (Input.GetKeyDown(KeyCode.T))
        {
            SceneManager.LoadScene("Option Scene");
            Time.timeScale = 1;
            return;
        }

        //Movement v2
        // The WASD basic movement of player:
        direction = new Vector3(Input.GetAxis("Horizontal"),0,Input.GetAxis("Vertical"));

        // If dropped the ball, show lose information:
        if (transform.position.y < -20)
        {
            if(hasCheckPoint == false)
            {
                SceneManager.LoadScene(currentScene);
                Time.timeScale = 1;
                return;       
            }
            else
                gameObject.transform.position = checkPoint.GetComponent<Transform>().position;
        }

        // If space key is pressed, we jump:
        if (Input.GetKeyDown(KeyCode.Space) && isgrounded && (worldTag == 3 || inTest))
        {
            if (bool_script.jumpLock)
            {
                return;
            }
            canJump = true;
            isgrounded = false;
        }

    }

    private void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.tag == "Ground")
        {
            isgrounded = true;
        }
    }

    void FixedUpdate()
    {
        // If we can jump (preventing double jump in the air):
        if (canJump)
        {
            canJump = false;
            rb.AddForce(0, jumpSpeed, 0, ForceMode.Impulse);
        }
        moveCharacter(direction);
    }

    void moveCharacter(Vector3 direction){
        rb.MovePosition(transform.position + (direction * speed * Time.deltaTime));
    }
}
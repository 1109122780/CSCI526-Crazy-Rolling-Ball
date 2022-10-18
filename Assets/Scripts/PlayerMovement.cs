using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerMovement : MonoBehaviour
{
    public float speed = 5;
    // public float turnSpeed = 4;
    // public float fallSpeed = -8;
    // public int health = 3;
    // public GameObject lose;
    public string currentScene;
    // public int colorTag;
    // public int worldTag;
    // [System.NonSerialized] public GameObject information;
    [System.NonSerialized] public Vector3 direction;
    public GameObject Camera;
    public float moveForce = 100f;
    // public float timer = 0;

    public float JumpGravity = 300f;
    // public float gravityScale = 5;

    [System.NonSerialized] public GameObject checkPoint;
    [System.NonSerialized] public bool hasCheckPoint;


    // Jump parameters:
    public float jumpSpeed = 6;
    private bool canJump;
    [System.NonSerialized] public bool isgrounded;
    Rigidbody rb;
    private SizeChange bool_script;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        bool_script = GetComponent<SizeChange>();
        Time.timeScale = 1;
        hasCheckPoint = false;
        // information = GameObject.Find("Information");
    }

    // Update is called once per frame
    void Update()
    {
        // if (Input.GetKeyDown(KeyCode.Escape)){
        //     Application.Quit();
        // }

        // Reset game when R is pressed:
        if (Input.GetKeyDown(KeyCode.R))
        {
            if (hasCheckPoint == false)
            {
                // information.GetComponent<InformationScript>().needInitialize = false;
                SceneManager.LoadScene(currentScene);
                Time.timeScale = 1;
                // information.GetComponent<InformationScript>().times_reset++;
                return;
            }
            else
            {
                gameObject.transform.position = checkPoint.GetComponent<Transform>().position;
                // information.GetComponent<InformationScript>().times_reset++;
            }
        }
        // Enter the shop
        if (Input.GetKeyDown(KeyCode.T))
        {
            SceneManager.LoadScene("Option Scene");
            Time.timeScale = 1;
            return;
        }


        // If dropped the ball, show lose information:
        if (transform.position.y < -30)
        {
            if (hasCheckPoint == false)
            {
                // information.GetComponent<InformationScript>().needInitialize = false;
                SceneManager.LoadScene(currentScene);
                Time.timeScale = 1;
                // information.GetComponent<InformationScript>().times_fall++;
                return;
            }
            else
            {
                gameObject.transform.position = checkPoint.GetComponent<Transform>().position;
                // information.GetComponent<InformationScript>().times_fall++;
            }
        }

        // If space key is pressed, we jump:
        if (Input.GetKeyDown(KeyCode.Space) && isgrounded && GetComponent<SizeChange>().size != 2)
        {
            if (bool_script.jumpLock)
            {
                return;
            }
            canJump = true;
            isgrounded = false;
        }

        rb.velocity = new Vector3(Mathf.Clamp(rb.velocity.x, -speed, speed), rb.velocity.y, Mathf.Clamp(rb.velocity.z, -speed, speed));

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
            if (bool_script.jumpHigh)
            {
                JumpGravity = 550f;
                rb.velocity = new Vector3(rb.velocity.x, JumpGravity * Time.deltaTime, rb.velocity.z);
            }
            else
            {
                // jumpSpeed = 6;
                rb.AddForce(0, jumpSpeed, 0, ForceMode.Impulse);
            }


        }
        // if(isgrounded && rb.velocity.y == 0)
        //     timer = 0;
        // else
        //     timer += 1;
        direction = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical"));
        float y = Camera.transform.rotation.eulerAngles.y;
        direction = Quaternion.Euler(0, y, 0) * direction;
        moveCharacter(direction);
    }

    void moveCharacter(Vector3 direction)
    {
        // if(isgrounded && timer <= 20)
        // {
        rb.AddForce(direction * moveForce);
        // }

        // else
        //     rb.AddForce(direction*10f);

        // rb.MovePosition(rb.position + (direction * speed * Time.fixedDeltaTime));
    }
}
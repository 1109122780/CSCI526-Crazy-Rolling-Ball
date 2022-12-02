using System;
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

    // public int colorTag;
    // public int worldTag;
    [System.NonSerialized]
    public GameObject information;
    public GameObject DataAnalyst;

    [System.NonSerialized]
    public Vector3 direction;

    public GameObject Camera;

    public float moveForce = 100f;

    // public float timer = 0;
    public float JumpGravity = 300f;

    // public float gravityScale = 5;
    [System.NonSerialized]
    public GameObject checkPoint;

    [System.NonSerialized]
    public bool hasCheckPoint;

    // Jump parameters:
    public float jumpSpeed = 6;

    private bool canJump;

    [System.NonSerialized]
    public bool isgrounded;

    Rigidbody rb;

    private SizeChange bool_script;

    // Cube and Sphere parameters
    [SerializeField]
    private float forceMagnitude;

    GameObject cube;

    Renderer cubeRend;

    GameObject sphere;

    Renderer sphereRend;

    float originalMass = 0;

    float cubeMass = 0;

    // New Feature: wind area created by pinwheel
    public bool inWindArea = false;

    public GameObject windArea;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        bool_script = GetComponent<SizeChange>();
        Time.timeScale = 1;
        hasCheckPoint = false;
        information = GameObject.Find("Information");
        information.GetComponent<InformationScript>().star = 0;
        cubeMass = GetComponent<ChangeItem>().cubeMass;

        //Debug.Log(cubeMass);
        for (int i = 0; i < gameObject.transform.childCount; i++)
        {
            if (gameObject.transform.GetChild(i).name == "PlayerSphere")
            {
                sphere = gameObject.transform.GetChild(i).gameObject;
                sphereRend = sphere.GetComponent<Renderer>();
            }

            if (gameObject.transform.GetChild(i).name == "PlayerCube")
            {
                cube = gameObject.transform.GetChild(i).gameObject;
                cubeRend = cube.GetComponent<Renderer>();
            }
        }
        originalMass = GetComponent<Rigidbody>().mass;
    }

    // Update is called once per frame
    void Update()
    {
        // if (Input.GetKeyDown(KeyCode.Escape)){
        //     Application.Quit();
        // }
        // Reset game when R is pressed:
        Scene scene = SceneManager.GetActiveScene();
        if (Input.GetKeyDown(KeyCode.U))
        {
            if (hasCheckPoint == false)
            {
                information.GetComponent<InformationScript>().needInitialize =
                    false;
                SceneManager.LoadScene(scene.name);
                Time.timeScale = 1;
                information.GetComponent<InformationScript>().timesReset++;
                return;
            }
            else
            {
                gameObject.transform.position =
                    checkPoint.GetComponent<Transform>().position;
                information.GetComponent<InformationScript>().timesReset++;
            }
        }

        // Enter the shop
        if (Input.GetKeyDown(KeyCode.T))
        {
            DateTime levelEndTime = DateTime.Now;
            StartCoroutine(DataAnalyst.GetComponent<DataAnalystScript>().Post(
                information.GetComponent<InformationScript>().playerID,
                information.GetComponent<InformationScript>().levelID,
                scene.name,
                "False",
                "1",
                information.GetComponent<InformationScript>().timesReset.ToString(),
                information.GetComponent<InformationScript>().timesFall.ToString(),
                information.GetComponent<InformationScript>().timesQ.ToString(),
                information.GetComponent<InformationScript>().timesE.ToString(),
                information.GetComponent<InformationScript>().timesF.ToString(),
                (levelEndTime - information.GetComponent<InformationScript>().levelStartTime).ToString(),
                information.GetComponent<InformationScript>().star.ToString(),
                information.GetComponent<InformationScript>().shapeChange.ToString()
            ));

            SceneManager.LoadScene("Level Option Scene");
            Time.timeScale = 1;
            return;
        }

        // If dropped the ball, reset:
        if (transform.position.y < -50)
        {
            if (hasCheckPoint == false)
            {
                information.GetComponent<InformationScript>().needInitialize =
                    false;
                SceneManager.LoadScene(scene.name);
                Time.timeScale = 1;
                information.GetComponent<InformationScript>().timesFall++;
                return;
            }
            else
            {
                gameObject.transform.position =
                    checkPoint.GetComponent<Transform>().position;
                information.GetComponent<InformationScript>().timesFall++;
            }
        }

        // If space key is pressed, we jump:
        if (
            //!cube.activeInHierarchy &&
            Input.GetKeyDown(KeyCode.Space) &&
            isgrounded &&
            GetComponent<SizeChange>().size != 2 &&
            !scene.name.Equals("0-1") &&
            !scene.name.Equals("0-2") &&
            !scene.name.Equals("3-1") &&
            !scene.name.Equals("3-2") &&
            !scene.name.Equals("3-3")
        )
        {
            if (bool_script.jumpLock)
            {
                return;
            }
            canJump = true;
            isgrounded = false;
        }

        rb.velocity =
            new Vector3(Mathf.Clamp(rb.velocity.x, -speed, speed),
                rb.velocity.y,
                Mathf.Clamp(rb.velocity.z, -speed, speed));
    }

    private void OnCollisionEnter(Collision other)
    {
        if (
            other.gameObject.tag == "Ground" ||
            other.gameObject.tag == "MovableBox" ||
            other.gameObject.tag == "Glass"
        )
        {
            isgrounded = true;
        }

        // New Feature: wind area created by pinwheel
        if (other.gameObject.tag == "SpinningBlade" & Mathf.Abs(rb.transform.localScale.x - rb.GetComponent<SizeChange>().largeSize) <= 0.05)
        {
            Destroy(windArea);
            Destroy(GameObject.Find("AnimatedWind"));
            inWindArea = false;
        }

        Rigidbody rigidbody1 = other.collider.attachedRigidbody;

        if (
            other.gameObject.tag == "MovableBox" &&
            rigidbody1 != null &&
            cube.activeSelf
        )
        {
            if (
                cubeRend.sharedMaterial ==
                other.gameObject.GetComponent<Renderer>().sharedMaterial
            )
            {
                //Vector3 forceDirection =
                //    other.gameObject.transform.position - transform.position;

                ////foreach(ContactPoint hitPos in other.contacts)
                ////{
                ////    Debug.Log(hitPos.normal);
                ////}

                //Debug.Log(other.contacts[0].normal);
                //// if the cube is above the box, don't move
                //if (forceDirection.y < 0) return;

                //forceDirection.y = 0;
                //// Set x direction or z direction to 0
                //if (Mathf.Abs(forceDirection.x) >= Mathf.Abs(forceDirection.z))
                //{
                //    forceDirection.z = 0;
                //}
                //else
                //{
                //    forceDirection.x = 0;
                //}
                //forceDirection.Normalize();
                Vector3 forceDirection = other.contacts[0].normal * -1;
                //Debug.Log(forceDirection);
                //Debug.Log(transform.position);
                Debug.Log(other.gameObject.name);
                rigidbody1
                    .AddForceAtPosition(forceDirection * forceMagnitude,
                    transform.position,
                    ForceMode.Force);

            }
            else
            {
                GetComponent<Rigidbody>().mass = originalMass;
            }
        }
    }

    private void OnCollisionStay(Collision other)
    {
        Rigidbody rigidbody1 = other.collider.attachedRigidbody;

        if (
            other.gameObject.tag == "MovableBox" &&
            rigidbody1 != null &&
            cube.activeSelf &&
            cubeRend.sharedMaterial ==
            other.gameObject.GetComponent<Renderer>().sharedMaterial
        )
        {
            //Vector3 forceDirection =
            //    other.gameObject.transform.position - transform.position;
            ////Debug.Log(forceDirection);
            //// if the cube is above the box, don't move
            //if (forceDirection.y < 0) return;

            //forceDirection.y = 0;
            //// Set x direction or z direction to 0
            //if (Mathf.Abs(forceDirection.x) >= Mathf.Abs(forceDirection.z))
            //{
            //    forceDirection.z = 0;
            //} else
            //{
            //    forceDirection.x = 0;
            //}
            //forceDirection.Normalize();
            Vector3 forceDirection = other.contacts[0].normal * -1;
            //Debug.Log(forceDirection);
            //Debug.Log(transform.position);
            Debug.Log(other.gameObject.name);
            rigidbody1
                .AddForceAtPosition(forceDirection * forceMagnitude,
                transform.position,
                ForceMode.Force);
        }
    }

    private void OnCollisionExit(Collision other)
    {
        if (other.gameObject.tag == "MovableBox")
        {
            Rigidbody rigidbody1 = other.collider.attachedRigidbody;
            if (rigidbody1 != null && cube.activeSelf)
            {
                if (
                    cubeRend.sharedMaterial !=
                    other.gameObject.GetComponent<Renderer>().sharedMaterial
                )
                {
                    GetComponent<Rigidbody>().mass = cubeMass;
                }
            }
        }
    }

    void FixedUpdate()
    {
        // If we can jump (preventing double jump in the air):
        if (canJump)
        {
            canJump = false;

            // if (bool_script.jumpHigh)
            // {
            //     JumpGravity = 550f;
            //     rb.velocity =
            //         new Vector3(rb.velocity.x,
            //             JumpGravity * Time.deltaTime,
            //             rb.velocity.z);
            // }
            // else
            // {
            // jumpSpeed = 6;
            rb.AddForce(0, jumpSpeed, 0, ForceMode.Impulse);
            // }
        }

        // if(isgrounded && rb.velocity.y == 0)
        //     timer = 0;
        // else
        //     timer += 1;
        direction =
            new Vector3(Input.GetAxis("Horizontal"),
                0,
                Input.GetAxis("Vertical"));
        float y = Camera.transform.rotation.eulerAngles.y;
        direction = Quaternion.Euler(0, y, 0) * direction;
        moveCharacter(direction);

        // New Feature: wind area created by pinwheel
        if (windArea & inWindArea)
        {
            if (Mathf.Abs(rb.transform.localScale.x - rb.GetComponent<SizeChange>().largeSize) > 0.05)
            {
                if (Mathf.Abs(rb.transform.localScale.x - rb.GetComponent<SizeChange>().normalSize) <= 0.05)
                {
                    rb.AddForce(windArea.GetComponent<WindArea>().horizontal_direction * windArea.GetComponent<WindArea>().horizontal_strength);
                }
                else if (Mathf.Abs(rb.transform.localScale.x - rb.GetComponent<SizeChange>().smallSize) <= 0.05)
                {
                    rb.AddForce(windArea.GetComponent<WindArea>().horizontal_direction * windArea.GetComponent<WindArea>().horizontal_strength);
                    rb.AddForce(windArea.GetComponent<WindArea>().vertical_direction * windArea.GetComponent<WindArea>().vertical_strength);
                }
            }
        }
    }

    void moveCharacter(Vector3 direction)
    {
        // if(isgrounded && timer <= 20)
        // {
        // rb.velocity = new Vector3(direction.x * 15, rb.velocity.y, direction.z * 15);
        // }
        rb.AddForce(direction*1000f);
        rb.velocity =new Vector3(Mathf.Clamp(rb.velocity.x, direction.x*-speed, direction.x*speed),
                rb.velocity.y,
                Mathf.Clamp(rb.velocity.z, direction.z*-speed, direction.z*speed));
        // else
        //     rb.AddForce(direction*10f);

        // rb.MovePosition(rb.position + (direction * speed * Time.fixedDeltaTime));
    }

    // New Feature: wind area created by pinwheel
    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "WindArea")
        {
            windArea = other.gameObject;
            inWindArea = true;
        }
    }

    // New Feature: wind area created by pinwheel
    void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "WindArea")
        {
            inWindArea = false;
        }
    }
}

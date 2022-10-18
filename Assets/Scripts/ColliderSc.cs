using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class ColliderSc : MonoBehaviour
{
    //General
    public GameObject lose;
    private GameObject player;
    private GameObject hiddenPlayer;
    private GameObject checkPoint;
    public Vector3 position;
    public int colorTag1;

    //FallingCollider
    private Transform fallObstacle;
    private Vector3 fallDir;
    private int fallSpeed;
    private float fallPos;

    //RollingCollider
    private Transform rollObstacle;
    private Vector3 rollDir;
    private int rollSpeed;
    private float rollPos;

    //SpinningCollider
    private Transform spinObstacle;
    private int spinSpeed;

    //RotatingCollider
    private Transform rotateObstacle;
    private int rotateSpeed;

    // Start is called before the first frame update
    void Start()
    {
        //General
        player = GameObject.Find("Player");
        //checkPoint = GameObject.Find("CheckPoint");

        //Special Colliders
        if(gameObject.tag == "FallingCollider")
        {
            fallObstacle = gameObject.transform;
            fallDir = Vector3.down;
            fallSpeed = 8;
            fallPos =  fallObstacle.transform.position.y;
        }
        
        if(gameObject.tag == "RollingCollider")
        {
            rollObstacle = gameObject.transform;
            rollDir = Vector3.left;
            rollSpeed = 5;
            rollPos = rollObstacle.transform.position.x;
        }

        if(gameObject.tag == "SpinningCollider")
        {
            spinObstacle = gameObject.transform;
            spinSpeed = 80;
        }

        if(gameObject.tag == "RotatingCollider")
        {
            rotateObstacle = gameObject.transform;
            rotateSpeed = 90;
        }
    }

    void FixedUpdate()
    {
        if(gameObject.tag == "FallingCollider")
        {
            if (fallPos - fallObstacle.transform.position.y >= 3) {
                fallDir = Vector3.up;
            } 
            else if (fallObstacle.transform.position.y - fallPos >= 3) {
                fallDir = Vector3.down;
            }
            fallObstacle.transform.Translate(fallDir * Time.deltaTime * fallSpeed);
        }
        if(gameObject.tag == "RollingCollider")
        {
            if (rollPos - rollObstacle.transform.position.x >= 3) {
                rollDir = Vector3.right;
            } else if (rollObstacle.transform.position.x - rollPos >= 3) {
                rollDir = Vector3.left;
            }
            rollObstacle.transform.Translate(rollDir * Time.deltaTime * rollSpeed);
        }

        if(gameObject.tag == "SpinningCollider")
        {
            spinObstacle.transform.Rotate(0, spinSpeed * Time.deltaTime, 0);
        }

        if(gameObject.tag == "RotatingCollider")
        {
            rotateObstacle.transform.Rotate(0, 0, rotateSpeed * Time.deltaTime);
        }

    }

    private void OnTriggerEnter(Collider other) {
        // if (other.name == "Player" &&  player.GetComponent<PlayerMovement>().colorTag != colorTag1)
        // {
            // Debug.Log("ss");
            // if (player.GetComponent<PlayerMovement>().health > 0)
            // {
            //     player.GetComponent<PlayerMovement>().health --;
            //     if (player.GetComponent<PlayerMovement>().hasCheckPoint)
            //     {
            //         player.transform.position = player.GetComponent<PlayerMovement>().checkPoint.GetComponent<Transform>().position;
            //     }
            //     else
            //     {
            //         player.transform.position = new Vector3(0, 1, 0);
            //     }
            // }
            // else
            // {
            //     lose.SetActive(true);
            //     Time.timeScale = 0;
            // }
        // }
    }

    // Update is called once per frame
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotatingObstacle : MonoBehaviour
{
    private Transform rotateObstacle;
    private int rotateSpeed;

    public GameObject lose;
    private GameObject player;
    private GameObject hiddenPlayer;
    private GameObject checkPoint;
    public Vector3 position;

    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.Find("Player");
        hiddenPlayer = GameObject.Find("HiddenPlayer");
        checkPoint = GameObject.Find("CheckPoint");
        rotateObstacle = GameObject.Find("ColliderRotate").transform;
        rotateSpeed = 90;
    }

    // Update is called once per frame
    void Update()
    {
        rotateObstacle.transform.Rotate(0, 0, rotateSpeed * Time.deltaTime);
    }

    private void OnTriggerEnter(Collider other) {
        if (other.name == "Player")
        {
            if (player.GetComponent<PlayerMovement>().health > 0)
            {
                player.GetComponent<PlayerMovement>().health --;
                if (checkPoint.GetComponent<CheckPoint>().isTriggered)
                {
                    player.transform.position = checkPoint.GetComponent<Transform>().position;
                }
                else
                {
                    player.transform.position = new Vector3(0, 1, 0);
                }
            }
            else
            {
                lose.SetActive(true);
                // Debug.Log(other.name+"13");
                Time.timeScale = 0;
            }
        }
    }
}

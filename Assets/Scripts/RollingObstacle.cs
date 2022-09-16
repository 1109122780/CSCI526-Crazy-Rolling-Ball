using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RollingObstacle : MonoBehaviour
{
    private Transform rollObstacle;
    private Vector3 rollDir;
    private int rollSpeed;
    
    public GameObject lose;
    [SerializeField] private GameObject player;
    [SerializeField] private GameObject checkPoint;
    public Vector3 position;

    // Start is called before the first frame update
    void Start()
    {
        rollObstacle = GameObject.Find("RollingObstacle").transform;
        rollDir = Vector3.left;
        rollSpeed = 5;
    }

    // Update is called once per frame
    void Update()
    {
        if (rollObstacle.transform.position.x <= -3.5) {
            rollDir = Vector3.right;
        } else if (rollObstacle.transform.position.x >= 0) {
            rollDir = Vector3.left;
        }

        rollObstacle.transform.Translate(rollDir * Time.deltaTime * rollSpeed);
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

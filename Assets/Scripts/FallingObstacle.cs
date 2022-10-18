using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FallingObstacle : MonoBehaviour
{
    // private Transform fallObstacle;
    // private Vector3 fallDir;
    // private int fallSpeed;
    
    // public GameObject lose;
    // [SerializeField] private GameObject player;
    // [SerializeField] private GameObject checkPoint;
    // public Vector3 position;

    // // Start is called before the first frame update
    // void Start()
    // {
    //     fallObstacle = GameObject.Find("FallingObstacle").transform;
    //     fallDir = Vector3.down;
    //     fallSpeed = 5;
    // }

    // // Update is called once per frame
    // void Update()
    // {
    //     if (fallObstacle.transform.position.y <= 1.5) {
    //         fallDir = Vector3.up;
    //     } else if (fallObstacle.transform.position.y >= 5) {
    //         fallDir = Vector3.down;
    //     }

    //     fallObstacle.transform.Translate(fallDir * Time.deltaTime * fallSpeed);
    // }

    // private void OnTriggerEnter(Collider other) {
    //     if (other.name == "Player")
    //     {
    //         if (player.GetComponent<PlayerMovement>().health > 0)
    //         {
    //             player.GetComponent<PlayerMovement>().health --;
    //             if (checkPoint.GetComponent<CheckPoint>().isTriggered)
    //             {
    //                 player.transform.position = checkPoint.GetComponent<Transform>().position;
    //             }
    //             else
    //             {
    //                 player.transform.position = new Vector3(0, 1, 0);
    //             }
    //         }
    //         else
    //         {
    //             lose.SetActive(true);
    //             // Debug.Log(other.name+"13");
    //             Time.timeScale = 0;
    //         }
    //     }
    // }
}

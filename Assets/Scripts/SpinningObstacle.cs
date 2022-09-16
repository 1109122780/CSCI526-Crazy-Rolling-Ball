using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpinningObstacle : MonoBehaviour
{
    private Transform spinObstacle;
    private int spinSpeed;

    public GameObject lose;
    [SerializeField] private GameObject player;
    [SerializeField] private GameObject checkPoint;
    public Vector3 position;

    // Start is called before the first frame update
    void Start()
    {
        spinObstacle = GameObject.Find("SpinningPivot").transform;
        spinSpeed = 90;
    }

    // Update is called once per frame
    void Update()
    {
        spinObstacle.transform.Rotate(0, spinSpeed * Time.deltaTime, 0);
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

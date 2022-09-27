using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorCollider : MonoBehaviour
{
    public GameObject lose;
    private GameObject player;
    private GameObject checkPoint;
    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.Find("Player");
        checkPoint = GameObject.Find("CheckPoint");
    }

    private void OnCollisionEnter(Collision other) {
        if (other.gameObject.tag == "Player")
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
                Time.timeScale = 0;
            }
        }
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}

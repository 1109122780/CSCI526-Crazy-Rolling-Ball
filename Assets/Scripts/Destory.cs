using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Destory : MonoBehaviour
{
    private GameObject destroy;
    private GameObject player;
    private GameObject checkPoint;
    public GameObject lose;
    double change = 2;
    // public  int ballSize;
    // Start is called before the first frame update
    void Start(){
        destroy = GameObject.Find("ColliderDestroy");
        player = GameObject.Find("Player");
        checkPoint = GameObject.Find("CheckPoint");
    }

    void OnTriggerEnter(Collider other)
    {
        // var size = transform.GetComponent<Collider>().bounds.size;
        var size = other.transform.GetComponent<Collider>().bounds.size;
        if (other.gameObject.tag == "Player" )
        {
            if(size.x > 0.5 * change)
            {
                Instantiate(destroy, other.transform.position, Quaternion.identity);
                Destroy(transform.gameObject);
            }
            else
            {
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
                        Time.timeScale = 0;
                    }
                }
            }
        }
    }
}
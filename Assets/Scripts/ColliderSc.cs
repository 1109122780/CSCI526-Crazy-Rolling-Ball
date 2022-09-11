using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class ColliderSc : MonoBehaviour
{
    public GameObject lose;
    [SerializeField] private GameObject player;
    [SerializeField] private GameObject checkPoint;
    public Vector3 position;

    // Start is called before the first frame update
    void Start()
    {

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

    // Update is called once per frame
    void Update()
    {
        
    }
}

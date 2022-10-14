using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckPoint : MonoBehaviour
{
    private GameObject player;
    public bool isTriggered;

    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.FindWithTag("Player");
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player")) {
            player.GetComponent<PlayerMovement>().checkPoint = gameObject;
            player.GetComponent<PlayerMovement>().hasCheckPoint = true;
        }
    }
}

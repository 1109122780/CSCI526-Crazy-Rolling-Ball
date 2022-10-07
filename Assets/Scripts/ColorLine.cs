using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorLine : MonoBehaviour
{
    private GameObject player;
    public int colorTag;

    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.Find("Player");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player")) {
            player.GetComponent<MeshRenderer>().material = gameObject.GetComponent<MeshRenderer>().material;
            player.GetComponent<PlayerMovement>().colorTag = colorTag;
        }
    }
}

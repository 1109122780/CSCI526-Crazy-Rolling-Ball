using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class pendulumCollider : MonoBehaviour
{
    private GameObject player;

    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.Find("Player");
    }

    private void OnCollisionEnter(Collision other)
    {
        player
            .GetComponent<Rigidbody>()
            .AddForce(new Vector3(-500, 300, 0) * 100);
    }

    private void OnCollisionStay(Collision other)
    {
        //Debug.Log("while");
        player.GetComponent<SizeChange>().canChange = false;

        // player
        //     .GetComponent<Rigidbody>()
        //     .AddForce(new Vector3(-20, 0, 0) * 1000);
        //player.GetComponent<Rigidbody>().AddForce(transform.forward * 500);
    }

    private void OnCollisionExit(Collision other)
    {
        // Debug.Log("leave");
        player.GetComponent<SizeChange>().canChange = true;
    }

    // Update is called once per frame
    void Update()
    {
    }
}

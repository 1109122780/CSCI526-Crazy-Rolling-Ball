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

    // private void OnCollisionEnter(Collision other)
    // {
    //     player.GetComponent<SizeChange>().canChange = false;
    // }
    private void OnCollisionStay(Collision other)
    {
        Debug.Log("while");
        player.GetComponent<SizeChange>().canChange = false;
    }

    private void OnCollisionExit(Collision other)
    {
        Debug.Log("leave");
        player.GetComponent<SizeChange>().canChange = true;
    }

    // Update is called once per frame
    void Update()
    {
    }
}

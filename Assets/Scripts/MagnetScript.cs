using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MagnetScript : MonoBehaviour
{
    public GameObject surface;

    void OnTriggerStay(Collider col)
    {
        if (col.gameObject.tag == "Player" && col.gameObject.GetComponent<SizeChange>().size <= col.gameObject.GetComponent<SizeChange>().normalSize)
        {
            PlayerMovement playerMovement = new PlayerMovement();
            float speed = playerMovement.speed * 10f;
            if (col.gameObject.GetComponent<Renderer>().sharedMaterial == surface.gameObject.GetComponent<Renderer>().sharedMaterial)
            {
                col.gameObject.GetComponent<Rigidbody>().AddForce(-transform.up * 5f, ForceMode.Impulse);
                col.gameObject.GetComponent<SizeChange>().canChange = false;
                col.gameObject.GetComponent<Rigidbody>().useGravity = false;
                // col.gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, Math.Min(col.gameObject.GetComponent<Rigidbody>().velocity.z, playerMovement.speed));
                // col.gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0, playerMovement.speed, 0);
                col.gameObject.GetComponent<Rigidbody>().velocity = -transform.up * speed;
                string y = col.gameObject.GetComponent<Rigidbody>().velocity.y.ToString();
                Debug.Log(y);
                Debug.Log("Same");
            }
            else
            {
                col.gameObject.GetComponent<Rigidbody>().AddForce(transform.up * 5f, ForceMode.Impulse);
                col.gameObject.GetComponent<SizeChange>().canChange = false;
                col.gameObject.GetComponent<Rigidbody>().useGravity = false;
                // col.gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, Math.Min(col.gameObject.GetComponent<Rigidbody>().velocity.z, playerMovement.speed));
                // col.gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0, -playerMovement.speed, 0);
                col.gameObject.GetComponent<Rigidbody>().velocity = transform.up * speed;
                string y = col.gameObject.GetComponent<Rigidbody>().velocity.y.ToString();
                Debug.Log(y);
                Debug.Log("Different");
            }
        }
    }

    void OnTriggerExit(Collider col)
    {
        if (col.gameObject.tag == "Player")
        {
            col.gameObject.GetComponent<SizeChange>().canChange = true;
            // col.gameObject.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.None;
            col.gameObject.GetComponent<Rigidbody>().useGravity = true;
            col.gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);
        }
    }
}

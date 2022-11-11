using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MagnetScript : MonoBehaviour
{
    public GameObject surface;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    void OnTriggerStay(Collider col)
    {
        if (col.gameObject.tag == "Player" && col.gameObject.GetComponent<SizeChange>().size <= col.gameObject.GetComponent<SizeChange>().normalSize)
        {
            if (col.gameObject.GetComponent<Renderer>().sharedMaterial == surface.gameObject.GetComponent<Renderer>().sharedMaterial)
            {
                col.gameObject.GetComponent<Rigidbody>().AddForce(-transform.up * 5f, ForceMode.Impulse);
                Debug.Log("Same");
            }
            else
            {
                col.gameObject.GetComponent<Rigidbody>().AddForce(transform.up * 50f, ForceMode.Impulse);
                col.gameObject.GetComponent<Rigidbody>().velocity = new Vector3(col.gameObject.GetComponent<Rigidbody>().velocity.x, 0, col.gameObject.GetComponent<Rigidbody>().velocity.z);
                Debug.Log("Different");
            }
        }
    }

    void OnTriggerExit(Collider col)
    {
        if (col.gameObject.tag == "Player")
        {
            col.gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);
        }
    }
}

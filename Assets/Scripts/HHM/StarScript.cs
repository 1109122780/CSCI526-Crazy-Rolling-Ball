using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StarScript : MonoBehaviour
{
    // public GameObject information;
    // Start is called before the first frame update
    void Start()
    {
        // information = GameObject.Find("Information");
    }
    void Update()
    {
        transform.Rotate(0, Time.deltaTime, 0);
        transform.Rotate(0, 100 * Time.deltaTime, 0, Space.World);
    }
    private void OnTriggerEnter(Collider other)
    {
        // if (other.gameObject.tag == "Player")
        // {
        //     information.GetComponent<InformationScript>().star++;
        // }
        Destroy(this.gameObject, 0.5f);
    }
}

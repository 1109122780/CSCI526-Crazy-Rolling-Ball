using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StarPickUp : MonoBehaviour
{
    public GameObject information;
    // Start is called before the first frame update
    void Start()
    {
        information = GameObject.Find("Information");
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            information.GetComponent<InformationScript>().star++;
            this.gameObject.SetActive(false);
        }
        // Destroy(this.gameObject, 0.5f);
    }
}

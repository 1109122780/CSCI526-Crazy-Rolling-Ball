using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StarPickUp : MonoBehaviour
{
    public GameObject information;
    public Text StarText;
    // Start is called before the first frame update
    void Start()
    {
        information = GameObject.Find("Information");
        // starText = GameObject.Find("StarCollected");
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            information.GetComponent<InformationScript>().star++;
            this.gameObject.SetActive(false);
            StarText.text = "Star Found: " + information.GetComponent<InformationScript>().star;
        }
        // Destroy(this.gameObject, 0.5f);
    }
}

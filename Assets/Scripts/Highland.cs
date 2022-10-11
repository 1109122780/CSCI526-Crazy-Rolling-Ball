using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Highland : MonoBehaviour
{
    public bool high;
    public bool h1;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }
    void Update()
    {
        high = h1;
        Debug.Log(high);
    }
    void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.tag == "Player")
        {
            h1 = true;
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Elevator : MonoBehaviour
{
    // Start is called before the first frame update
    private GameObject moveplatform;
    private GameObject player;
    private KeyScript keyScript;

    void Start()
    {
        player = GameObject.FindWithTag("Player");
        moveplatform = GameObject.FindWithTag("Elevator");
        keyScript = GetComponent<KeyScript>();
    }

    // Update is called once per frame
    private void OnTriggerStay(Collider other)
    {   
        moveplatform.transform.position += moveplatform.transform.up * Time.deltaTime * 2;
    }
        
    void Update()
    {
        
    }
}

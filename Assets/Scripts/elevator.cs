using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class elevator : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject moveplatform;
    public GameObject player;
    // Update is called once per frame
    private void OnTriggerStay(Collider other)
    {
        moveplatform.transform.position += moveplatform.transform.up * Time.deltaTime*2;
    }

    void Update()
    {
        
    }
}

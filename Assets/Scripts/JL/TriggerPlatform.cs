using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerPlatform : MonoBehaviour
{
    PlatformMoving platform;
    // Start is called before the first frame update
    void Start()
    {
        platform = GetComponent<PlatformMoving>();
    }

    // Update is called once per frame
    private void OntriggerEnter(Collider other) 
    {
        platform.canMove = true;
    }
}

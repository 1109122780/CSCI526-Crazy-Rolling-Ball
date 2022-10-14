using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class key_system : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(0, Time.deltaTime, 0);
        transform.Rotate(0, 100 * Time.deltaTime, 0, Space.World);
    }
    private void OnTriggerEnter(Collider other)
    {
        Destroy(this.gameObject, 0.5f);
    }
}

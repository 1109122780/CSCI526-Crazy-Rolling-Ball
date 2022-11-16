using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Destory : MonoBehaviour
{
    private GameObject destroy;
    private GameObject player;
    // Start is called before the first frame update
    void Start()
    {
        destroy = GameObject.Find("ColliderDestroy");
        player = GameObject.Find("Player");
    }

    // Update is called once per frame
    
    void OnCollisionEnter(Collision other)
    {   
        if(destroy) {
            Debug.Log("ColliderDestroy found "+ destroy);

        }
        var size = other.transform.GetComponent<Collider>().bounds.size;
        if (other.gameObject.tag == "Player" && size.x > 1.1f)
        {
            Instantiate(destroy, other.transform.position, Quaternion.identity);
            Destroy(transform.gameObject);
        }
    }
}
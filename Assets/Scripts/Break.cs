using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Break : MonoBehaviour
{
    private GameObject destroy;
    private GameObject player;
    private bool high = false;
    double change = 2;
    // Start is called before the first frame update
    void Start()
    {
        destroy = GameObject.Find("ColliderDestroy");
        player = GameObject.Find("Player");
    }

    // Update is called once per frame
    void Update(){
        if (player.transform.localPosition.y > 2 && player.transform.localScale.x >1)
        {
            high = true;
        }
    }
    void OnCollisionEnter(Collision other)
    {
        var size = other.transform.GetComponent<Collider>().bounds.size;
        if (other.gameObject.tag == "Player" && size.x > 0.5 * change && high)
        {
            Instantiate(destroy, other.transform.position, Quaternion.identity);
            Destroy(transform.gameObject);
        }
        
    }
}

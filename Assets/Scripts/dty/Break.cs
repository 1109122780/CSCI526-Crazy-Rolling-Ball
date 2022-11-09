using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Break : MonoBehaviour
{
    private GameObject destroy;
    private GameObject player;
    private GameObject glass;
    private bool high = false;
    double change = 2;
    public float difference = 7;
    // Start is called before the first frame update
    void Start()
    {
        destroy = GameObject.FindWithTag("DestroyEffect");
        player = GameObject.FindWithTag("Player");
        glass = GameObject.FindWithTag("Ground");
    }

    // Update is called once per frame
    void Update(){
        if (player.transform.localPosition.y - glass.transform.localPosition.y > difference && player.transform.localScale.x > 1.05)
        {
            high = true;
        }
        Debug.Log(high);
    }
    void OnCollisionEnter(Collision other)
    {
        var size = other.transform.GetComponent<Collider>().bounds.size;
        if (other.gameObject.tag == "Player" && high && size.x > 1.2)
        {
            Instantiate(destroy, other.transform.position, Quaternion.identity);
            Destroy(transform.gameObject);
        }
        if (size.x < 1.2){
            high = false;
        }
        
        // Debug.Log(size.x);
    }
}

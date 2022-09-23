using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Destory : MonoBehaviour
{
    private GameObject destroy;
    public GameObject lose;
    double change = 2;
    // public  int ballSize;
    // Start is called before the first frame update
    void Start(){
        destroy = GameObject.Find("ColliderDestroy");
    }

    void OnCollisionEnter(Collision other)
    {
        var size = transform.GetComponent<Collider>().bounds.size;
        if (other.gameObject.tag == "Wall" )
        {
            if(size.x > 0.5 * change)
            {
                Instantiate(destroy, transform.position, Quaternion.identity);
                Destroy(other.gameObject);
            }
            else
            {
                lose.SetActive(true);
                Time.timeScale = 0;
            }
        }
    }
}

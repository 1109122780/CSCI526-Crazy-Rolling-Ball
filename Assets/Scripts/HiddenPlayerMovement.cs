using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HiddenPlayerMovement : MonoBehaviour
{
    // Start is called before the first frame update
    public float speed = 10;
    public float turnSpeed = 4;
    public float fallSpeed = -8;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        float x = Input.GetAxis("Horizontal");
        transform.Translate(x * turnSpeed * Time.deltaTime, 0, speed * Time.deltaTime);
        if (transform.position.x < -4 || transform.position.x > 4 || transform.position.y < 0 ){
            transform.Translate(0,fallSpeed * Time.deltaTime,0);
        }
    }
}

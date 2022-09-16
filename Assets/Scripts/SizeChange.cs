using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SizeChange : MonoBehaviour
{
    private float timer = 3.0f;
    private Vector3 v;

    // Start is called before the first frame update
    void Start()
    {
                v = new Vector3(0, 1, 0);


    }

    // Update is called once per frame
    void Update()
    {
      
        if (Input.GetKeyDown(KeyCode.Q)) {
            v = transform.localPosition; 
            if(transform.localScale.y > 1.0f){
            v.y = 1;
            transform.localPosition = v;
            transform.localScale = new Vector3(1, 1, 1);
            }
            else 
            {
                v.y = 2;
                transform.localPosition = v;
                transform.localScale = new Vector3(3, 3, 3);
                StartCoroutine(FiveSeconds());
            }
                
        }
        if (Input.GetKeyDown(KeyCode.E)) {
            v = transform.localPosition;
            if(transform.localScale.y < 1.0f)
            {
            transform.localScale = new Vector3(1, 1, 1);
            v.y = 1;
            transform.localPosition = v;
            }
            else 
            {
                v.y = 0.8f;
                transform.localPosition = v;
                transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                StartCoroutine(FiveSeconds());
            }
                
        }
        timer = 3.0f; 
    }
    private IEnumerator FiveSeconds() {
        // var v = transform.localPosition;
        while (timer > 0) {
            yield return new WaitForSeconds(3.0f);
            v = transform.localPosition;
            v.y = 1;
            transform.localPosition = v;
            transform.localScale = new Vector3(1, 1, 1);
            timer -= 3.0f;

        }
    }
}

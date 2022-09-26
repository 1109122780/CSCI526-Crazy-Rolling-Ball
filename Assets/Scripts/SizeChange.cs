using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SizeChange : MonoBehaviour
{
    private float timer = 3.0f;
    private Vector3 v;
    private bool sizeCool;
    public bool jumpLock = false;
    public PlayerMovement jump_script;


    // Start is called before the first frame update
    void Start()
    {
        v = new Vector3(0, 1, 0);
        sizeCool = true;
    }

    // Update is called once per frame
    void Update()
    {
      
        if (Input.GetKeyDown(KeyCode.Q) && sizeCool) {
            if(!jump_script.isgrounded) {
                return;
            }
            if(Time.timeScale == 0) {
                return;
            }
            v = transform.localPosition; 
            if(transform.localScale.y > 1.0f){
            v.y = 1;
            transform.localPosition = v;
            transform.localScale = new Vector3(1, 1, 1);
            
            sizeCool = false;
            jumpLock = false;
            StartCoroutine(CoolDown());
            }
            else 
            {
                v.y = 2;
                transform.localPosition = v;
                transform.localScale = new Vector3(3, 3, 3);

                jumpLock = true;
                StartCoroutine(FiveSeconds());
            }
                
        }
        if (Input.GetKeyDown(KeyCode.E) && sizeCool) {
            if(!jump_script.isgrounded) {
                return;
            }
            if(Time.timeScale == 0) {
                sizeCool = true;
                return;
            }
            v = transform.localPosition;
            if(transform.localScale.y < 1.0f)
            {
            transform.localScale = new Vector3(1, 1, 1);
            v.y = 1;
            transform.localPosition = v;

            jumpLock = false;
            sizeCool = false;
            StartCoroutine(CoolDown());
            }
            else 
            {
                v.y = 0.8f;
                transform.localPosition = v;
                transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                
                jumpLock = true;
                StartCoroutine(FiveSeconds());
            }
                
        }
        timer = 3.0f; 
    }
    private IEnumerator FiveSeconds() {
        // var v = transform.localPosition;
        while (timer > 0) {
            yield return new WaitForSeconds(5.0f);
            v = transform.localPosition;
            v.y = 1;
            transform.localPosition = v;
            transform.localScale = new Vector3(1, 1, 1);
            timer -= 3.0f;
            sizeCool = false;
            jumpLock = false;

            yield return new WaitForSeconds(2.0f);
            sizeCool = true;
        
        }
    }
    private IEnumerator CoolDown() {
        yield return new WaitForSeconds(2.0f);
        sizeCool = true;
    }
}

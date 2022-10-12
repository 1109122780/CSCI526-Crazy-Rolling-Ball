using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SizeChange : MonoBehaviour
{
    private float timer = 5.0f;
    private Vector3 v;
    private bool sizeCool;
    public bool jumpLock = false;
    private PlayerMovement jump_script;
    public GameObject information;
    public GameObject sphere;
    public GameObject cube;

    private float sizeFloat = 0.005f;
    private float positonFloat = 0.005f;

    private bool sizeUp = false;
    private bool sizeDown = false;

    public bool jumpHigh;

    // Start is called before the first frame update
    void Start()
    {
                v = new Vector3(0, 1, 0);
                // sizeCool = true;
                jumpHigh = false;
                jump_script = GameObject.FindWithTag("Player").GetComponent<PlayerMovement>();
                information = GameObject.Find("Information");

        // Sphere and Cube change shape part
                for (int i = 0; i < gameObject.transform.childCount; i++)
                {
                    if (gameObject.transform.GetChild(i).name == "Sphere")
                    {
                        sphere = gameObject.transform.GetChild(i).gameObject;
                    }

                    if (gameObject.transform.GetChild(i).name == "Cube")
                    {
                        cube = gameObject.transform.GetChild(i).gameObject;
                    }
                }
                sphere.SetActive(true);
                cube.SetActive(false);

    }

    // Update is called once per frame
    void Update()
    {

        if (cube.activeInHierarchy)
        {
            transform.localScale = new Vector3(1, 1, 1);
            return;
        }
        if (Input.GetKeyDown(KeyCode.Q) & (jump_script.worldTag == 1 || jump_script.inTest)) {
            // information.GetComponent<InformationScript>().times_QE++;
            if(!jump_script.isgrounded) {
                return;
            }
            if(Time.timeScale == 0) {
                // sizeCool = true;
                jumpHigh = false;
                return;
            }
            v = transform.localPosition; 

            if(transform.localScale.y > 1.0f){
            v.y = 1;
            transform.localPosition = v;
            transform.localScale = new Vector3(1, 1, 1);
            // sizeCool = false;
            jumpLock = false;
            jumpHigh = false;
            // StartCoroutine(CoolDown());
            
            }
            else 
            {   
                StopAllCoroutines();
                sizeUp = true;
                jumpLock = true;
                jumpHigh = false;
                // StartCoroutine(FiveSeconds());
            }
                
        }
        if (sizeUp & transform.localScale.y < 3.0f) {
            if(sizeDown) {
                sizeDown = false;
            }
            sizeFloat = 0.006f;
            positonFloat = 0.006f;
            // jumpLock = true;
            v.y += positonFloat;
            transform.localPosition = v;
            transform.localScale += new Vector3(sizeFloat, sizeFloat, sizeFloat);
        }
        else {
            sizeUp = false;
            // jumpLock = false;
            StartCoroutine(FiveSeconds());
        }

        if (Input.GetKeyDown(KeyCode.E) & (jump_script.worldTag == 1 || jump_script.inTest)) {
            // information.GetComponent<InformationScript>().times_QE++;
            if(!jump_script.isgrounded) {
                return;
            }
            if(Time.timeScale == 0) {
                // sizeCool = true;
                jumpHigh = false;
                return;
            }
            v = transform.localPosition;
            if(transform.localScale.y < 1.0f)
            {
            transform.localScale = new Vector3(1, 1, 1);
            v.y = 1;
            transform.localPosition = v;
            jumpHigh = false;
            jumpLock = false;
            }
            else 
            {   
                StopAllCoroutines();
                sizeDown = true;
                jumpLock = false;
                // sizeCool = true;
                StartCoroutine(FiveSeconds());
            }
                
        }
        if (sizeDown & transform.localScale.y > 0.5f){ 
            if(sizeUp) {
                sizeUp = false;
            }
            positonFloat = 0.001f;
            v.y -= positonFloat;
            transform.localPosition = v;
            transform.localScale -= new Vector3(sizeFloat,sizeFloat,sizeFloat);
        }
        else {
            sizeDown = false;
            jumpHigh = true;
            StartCoroutine(FiveSeconds());
        }
        timer = 5.0f; 
    }
    private IEnumerator FiveSeconds() {
        // var v = transform.localPosition;
        while (timer > 0) {
            yield return new WaitForSeconds(1000.0f);
            v = transform.localPosition;
            v.y = 1;
            transform.localPosition = v;
            transform.localScale = new Vector3(1, 1, 1);
            timer -= 5.0f;
            // sizeCool = false;
            jumpLock = false;

            yield return new WaitForSeconds(2.0f);
            // sizeCool = true;
            StopAllCoroutines();
        
        }
    }
    // private IEnumerator CoolDown() {
    //     yield return new WaitForSeconds(2.0f);
    //     sizeCool = true;
    //     StopAllCoroutines();
    // }
    
}

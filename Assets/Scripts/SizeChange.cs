using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SizeChange : MonoBehaviour
{
    // private float timer = 5.0f;
    private Vector3 v;

    private bool sizeCool;

    public bool jumpLock = false;

    private PlayerMovement jump_script;

    public GameObject information;

    public GameObject sphere;

    public GameObject cube;

    public float superJump = 15f;

    private float normalJump;

    public float smallSize = 0.5f;

    public float normalSize = 1f;

    public float largeSize = 1.5f;

    private float sizeFloat = 0.005f;

    // private float positonFloat = 0.005f;
    public bool canChange = true;

    public int size = 1;

    public bool jumpHigh;

    // Start is called before the first frame update
    void Start()
    {
        v = new Vector3(0, 1, 0);
        jumpHigh = false;
        jump_script =
            GameObject.FindWithTag("Player").GetComponent<PlayerMovement>();
        information = GameObject.Find("Information");

        normalJump = jump_script.jumpSpeed;

        for (int i = 0; i < gameObject.transform.childCount; i++)
        {
            if (gameObject.transform.GetChild(i).name == "PlayerSphere")
            {
                sphere = gameObject.transform.GetChild(i).gameObject;
            }

            if (gameObject.transform.GetChild(i).name == "PlayerCube")
            {
                cube = gameObject.transform.GetChild(i).gameObject;
            }
        }
        sphere.SetActive(true);
        cube.SetActive(false);
    }

    void Update()
    {
        if (cube.activeInHierarchy)
        {
            transform.localScale = new Vector3(1, 1, 1);
            return;
        }

        if (SceneManager.GetActiveScene().name.Equals("2-1")) return;

        if (Input.GetKeyDown(KeyCode.Q))
        {
            if (!jump_script.isgrounded)
            {
                return;
            }
            if (canChange == false)
            {
                return;
            }
            information.GetComponent<InformationScript>().timesQ++;
            size = 2;
            jumpHigh = false;
        }
        if (Input.GetKeyDown(KeyCode.F))
        {
            if (!jump_script.isgrounded)
            {
                return;
            }
            if (canChange == false)
            {
                return;
            }
            information.GetComponent<InformationScript>().timesF++;
            size = 1;
            jumpHigh = false;
        }

        if (Input.GetKeyDown(KeyCode.E))
        {
            if (!jump_script.isgrounded)
            {
                return;
            }
            if (canChange == false)
            {
                size = 3;
            }
            information.GetComponent<InformationScript>().timesE++;
            size = 3;
            jumpHigh = true;
        }
        if (size == 1 && transform.localScale.y != normalSize)
        {
            jump_script.jumpSpeed = normalJump;
            if (transform.localScale.y > normalSize)
            {
                sizeFloat = 0.005f;
                transform.localScale -=
                    new Vector3(sizeFloat, sizeFloat, sizeFloat);
            }
            else
            {
                sizeFloat = 0.005f;
                transform.localScale +=
                    new Vector3(sizeFloat, sizeFloat, sizeFloat);
            }
        }
        if (size == 2 && transform.localScale.y < largeSize)
        {
            jumpHigh = false;
            sizeFloat = 0.005f;
            transform.localScale +=
                new Vector3(sizeFloat, sizeFloat, sizeFloat);
        }

        if (size == 3 && transform.localScale.y > smallSize)
        {
            sizeFloat = 0.005f;
            transform.localScale -=
                new Vector3(sizeFloat, sizeFloat, sizeFloat);
            jump_script.jumpSpeed = superJump;
        }
    }
    // Update is called once per frame
    // void Update()
    // {

    //     if (cube.activeInHierarchy)
    //     {
    //         transform.localScale = new Vector3(1, 1, 1);
    //         return;
    //     }
    //     if (Input.GetKeyDown(KeyCode.Q) & (jump_script.worldTag == 1 || jump_script.inTest)) {
    //         // information.GetComponent<InformationScript>().timesQ++;
    //         if(!jump_script.isgrounded) {
    //             return;
    //         }
    //         if(Time.timeScale == 0) {
    //             // sizeCool = true;
    //             jumpHigh = false;
    //             return;
    //         }
    //         v = transform.localPosition;

    //         if(transform.localScale.y > 1.0f){
    //         v.y = 1;
    //         transform.localPosition = v;
    //         transform.localScale = new Vector3(1, 1, 1);
    //         // sizeCool = false;
    //         jumpLock = false;
    //         jumpHigh = false;
    //         // StartCoroutine(CoolDown());

    //         }
    //         else
    //         {
    //             StopAllCoroutines();
    //             sizeUp = true;
    //             jumpLock = true;
    //             jumpHigh = false;
    //             // StartCoroutine(FiveSeconds());
    //         }

    //     }
    //     if (sizeUp & transform.localScale.y < 3.0f) {
    //         if(sizeDown) {
    //             sizeDown = false;
    //         }
    //         sizeFloat = 0.008f;
    //         positonFloat = 0.006f;
    //         // jumpLock = true;
    //         v.y += positonFloat;
    //         transform.localPosition = v;
    //         transform.localScale += new Vector3(sizeFloat, sizeFloat, sizeFloat);
    //     }
    //     else {
    //         sizeUp = false;
    //         // jumpLock = false;
    //         StartCoroutine(FiveSeconds());
    //     }

    //     if (Input.GetKeyDown(KeyCode.E) & (jump_script.worldTag == 1 || jump_script.inTest)) {
    //         // information.GetComponent<InformationScript>().timesQ++;
    //         if(!jump_script.isgrounded) {
    //             return;
    //         }
    //         if(Time.timeScale == 0) {
    //             // sizeCool = true;
    //             jumpHigh = false;
    //             return;
    //         }
    //         v = transform.localPosition;
    //         if(transform.localScale.y < 1.0f)
    //         {
    //         transform.localScale = new Vector3(1, 1, 1);
    //         v.y = 1;
    //         transform.localPosition = v;
    //         jumpHigh = false;
    //         jumpLock = false;
    //         }
    //         else
    //         {
    //             StopAllCoroutines();
    //             sizeDown = true;
    //             jumpLock = false;
    //             // sizeCool = true;
    //             StartCoroutine(FiveSeconds());
    //         }

    //     }
    //     if (sizeDown & transform.localScale.y > 0.5f){
    //         if(sizeUp) {
    //             sizeUp = false;
    //         }
    //         positonFloat = 0.001f;
    //         v.y -= positonFloat;
    //         transform.localPosition = v;
    //         transform.localScale -= new Vector3(sizeFloat,sizeFloat,sizeFloat);
    //     }
    //     else {
    //         sizeDown = false;
    //         jumpHigh = true;
    //         StartCoroutine(FiveSeconds());
    //     }
    //     timer = 5.0f;
    // }
    // private IEnumerator FiveSeconds() {
    //     // var v = transform.localPosition;
    //     while (timer > 0) {
    //         yield return new WaitForSeconds(1000.0f);
    //         v = transform.localPosition;
    //         v.y = 1;
    //         transform.localPosition = v;
    //         transform.localScale = new Vector3(1, 1, 1);
    //         timer -= 5.0f;
    //         // sizeCool = false;
    //         jumpLock = false;

    //         yield return new WaitForSeconds(2.0f);
    //         // sizeCool = true;
    //         StopAllCoroutines();

    //     }
    // }
    // private IEnumerator CoolDown() {
    //     yield return new WaitForSeconds(2.0f);
    //     sizeCool = true;
    //     StopAllCoroutines();
    // }
}

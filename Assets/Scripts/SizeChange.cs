using System;
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

    public float normalSize = 1.05f;

    public float largeSize = 1.5f;

    public float cubeNormalSize = 1f;

    public float cubeHighWidth = 0.5f;

    public float cubeHeightMax = 3.5f;

    public float cubeWidthMax = 3.5f;

    public float cubeWideHeight = 0.5f;

    private float sizeFloat = 0.005f;

    private BuoySetting buoyancy;

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
        buoyancy = GameObject.FindWithTag("Player").GetComponent<BuoySetting>();
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


        string sceneName = SceneManager.GetActiveScene().name;
        //if (sceneName.Equals("0-1") || sceneName.Equals("0-2") || sceneName.Equals("0-3") || sceneName.Equals("2-1")) return;
        if (sceneName.Equals("0-1") || sceneName.Equals("0-2") || sceneName.Equals("0-3")) return;

        if (cube.activeInHierarchy)
        {

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
                buoyancy.enabled = false;
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
                buoyancy.enabled = true;
            }

            if (Input.GetKeyDown(KeyCode.X))
            {
                if (!jump_script.isgrounded || sceneName.Equals("0-4"))
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
                buoyancy.enabled = true;
            }
            if (Input.GetKeyDown(KeyCode.Z))
            {
                if (!jump_script.isgrounded || sceneName.Equals("0-4"))
                {
                    return;
                }
                if (canChange == false)
                {
                    size = 4;
                }
                //information.GetComponent<InformationScript>().timesE++;
                size = 4;
                buoyancy.enabled = true;
            }
        }
        else
        {
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
                buoyancy.enabled = false;
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
                if (size == 1)
                {
                    string stage = sceneName.Split('-')[0];
                    string level = sceneName.Split('-')[1];
                    if (Int32.Parse(stage) == 4 && Int32.Parse(level) >= 3)
                    {
                        Material positive = Resources.Load<Material>("MagnetMaterials/PlayerColor") as Material;
                        Material negative = Resources.Load<Material>("MagnetMaterials/NegativePlayerColor") as Material;
                        if (gameObject.GetComponent<Renderer>().sharedMaterial == positive) gameObject.GetComponent<MeshRenderer>().material = negative;
                        else gameObject.GetComponent<MeshRenderer>().material = positive;
                    }
                }
                else
                {
                    size = 1;
                    jumpHigh = false;
                    buoyancy.enabled = true;
                }
            }

            if (Input.GetKeyDown(KeyCode.E))
            {
                if (!jump_script.isgrounded || sceneName.Equals("0-4"))
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
                buoyancy.enabled = true;
            }
        }
    }
    void FixedUpdate()
    {
        if (cube.activeInHierarchy)
        {
            if (size == 1 && transform.localScale.y != 1.05f)
            {
                jump_script.jumpSpeed = normalJump;
                if (transform.localScale.y > cubeNormalSize + 0.05f) makeCubeHigher(false, new Vector3(0, 2, 0));
                else if (transform.localScale.y < cubeNormalSize - 0.05f) makeCubeHigher(true, new Vector3(0, 2, 0));

                if (transform.localScale.x > cubeNormalSize + 0.05f) makeCubeWider(false, new Vector3(2, 0, 0));
                else if (transform.localScale.x < cubeNormalSize - 0.05f) makeCubeWider(true, new Vector3(2, 0, 0));

                if (transform.localScale.z > cubeNormalSize + 0.05f) makeCubeWider(false, new Vector3(0, 0, 2));
                else if (transform.localScale.z < cubeNormalSize - 0.05f) makeCubeWider(true, new Vector3(0, 0, 2));
            }
            if (size == 3 && transform.localScale.x < cubeWidthMax)
            {
                makeCubeWider(true, new Vector3(1, 0, 0));
                if (transform.localScale.y > cubeWideHeight) makeCubeHigher(false, new Vector3(0, 2, 0));
                if (transform.localScale.z > cubeNormalSize) makeCubeWider(false, new Vector3(0, 0, 2));
            }

            if (size == 4 && transform.localScale.z < cubeWidthMax)
            {
                makeCubeWider(true, new Vector3(0, 0, 1));
                if (transform.localScale.y > cubeWideHeight) makeCubeHigher(false, new Vector3(0, 2, 0));
                if (transform.localScale.x > cubeNormalSize) makeCubeWider(false, new Vector3(2, 0, 0));
            }

            if (size == 2 && transform.localScale.y < cubeHeightMax)
            {
                jumpHigh = false;
                makeCubeHigher(true, new Vector3(0, 1, 0));
                if (transform.localScale.x > cubeHighWidth) makeCubeWider(false, new Vector3(2, 0, 0));
                if (transform.localScale.z > cubeHighWidth) makeCubeWider(false, new Vector3(0, 0, 2));

                //jump_script.jumpSpeed = superJump;
            }
        }
        else
        {
            if (size == 1 && transform.localScale.y != 1.05f)
            {
                jump_script.jumpSpeed = normalJump;
                if (transform.localScale.y > normalSize)
                {
                    sizeFloat = 0.05f;
                    transform.localScale -=
                        new Vector3(sizeFloat, sizeFloat, sizeFloat);
                }
                else
                {
                    sizeFloat = 0.05f;
                    transform.localScale +=
                        new Vector3(sizeFloat, sizeFloat, sizeFloat);
                }
            }
            if (size == 2 && transform.localScale.y < largeSize)
            {
                jumpHigh = false;
                sizeFloat = 0.05f;
                transform.localScale +=
                    new Vector3(sizeFloat, sizeFloat, sizeFloat);
            }

            if (size == 3 && transform.localScale.y > smallSize)
            {
                sizeFloat = 0.05f;
                transform.localScale -=
                    new Vector3(sizeFloat, sizeFloat, sizeFloat);
                jump_script.jumpSpeed = superJump;
            }
        }

    }

    public void normalize()
    {
        transform.localScale = new Vector3(1, 1, 1);
    }

    private void makeCubeWider(bool wider, Vector3 scaleSize)
    {
        sizeFloat = 0.05f;
        if (wider)
        {
            transform.localScale += sizeFloat * scaleSize;
            //new Vector3(sizeFloat, 0, 0);
        }
        else
        {
            transform.localScale -= sizeFloat * scaleSize;
            //new Vector3(sizeFloat, 0, 0);
        }
    }

    private void makeCubeHigher(bool higher, Vector3 scaleSize)
    {
        sizeFloat = 0.05f;
        if (higher)
        {
            transform.localScale += sizeFloat * scaleSize;
        }
        else
        {
            transform.localScale -= sizeFloat * scaleSize;
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

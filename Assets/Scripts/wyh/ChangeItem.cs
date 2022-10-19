using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeItem : MonoBehaviour
{
    // Start is called before the first frame update
    private GameObject sphere;
    private GameObject cube;
    private BoxCollider boxCollider;
    private SphereCollider sphereCollider;
    private Rigidbody rb;
    private Material originalMaterial;
    private Renderer cubeRend;
    private Renderer sphereRend;
    private Renderer rend;
    public float cubeMass = 1;
    public float sphereMass = 1;
    private float speedChange = 2;
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        rend = GetComponent<Renderer>();
        rend.enabled = true;
        for (int i = 0; i < gameObject.transform.childCount; i++)
        {
            if (gameObject.transform.GetChild(i).name == "PlayerSphere")
            {
                sphere = gameObject.transform.GetChild(i).gameObject;
                sphereCollider = gameObject.GetComponent<SphereCollider>();
                originalMaterial = sphere.GetComponent<Renderer>().material;
                sphereRend = sphere.GetComponent<Renderer>();
                sphereRend.enabled = true;
            }

            if (gameObject.transform.GetChild(i).name == "PlayerCube")
            {
                cube = gameObject.transform.GetChild(i).gameObject;
                boxCollider = gameObject.GetComponent<BoxCollider>();
                cubeRend = cube.GetComponent<Renderer>();
                cubeRend.enabled = true;
            }
        }
        sphere.SetActive(true);
        cube.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void changeItem(Material targetMaterial)
    {
        if (cube.activeInHierarchy)
        {
            if (cubeRend.sharedMaterial == targetMaterial) toSphere();
            else changeCubeColor(targetMaterial);
        }
        else
        {
            toCube(targetMaterial);
        }
    }

    private void changeSphereColor()
    {
        sphereRend.sharedMaterial = originalMaterial;
        rend.sharedMaterial = originalMaterial;
        cubeRend.sharedMaterial = originalMaterial;
    }
    private void toSphere()
    {
        gameObject.GetComponent<PlayerMovement>().speed += speedChange;
        gameObject.GetComponent<Rigidbody>().mass = sphereMass;
        changeSphereColor();
        cube.SetActive(false);
        //sphere.SetActive(true);
        //Debug.Log("ToSphere!");
        rb.freezeRotation = true;
        boxCollider.enabled = false;
        sphereCollider.enabled = true;
    }

    private void changeCubeColor(Material targetMaterial)
    {
        cubeRend.sharedMaterial = targetMaterial;
    }
    private void toCube(Material targetMaterial)
    {
        gameObject.GetComponent<PlayerMovement>().speed -= speedChange;
        gameObject.GetComponent<Rigidbody>().mass = cubeMass;
        changeCubeColor(targetMaterial);
        rb.freezeRotation = true;
        //sphere.SetActive(false);
        sphereCollider.enabled = false;
        boxCollider.enabled = true;
        cube.SetActive(true);
    }
}

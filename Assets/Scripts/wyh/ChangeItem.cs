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
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        for (int i = 0; i < gameObject.transform.childCount; i++)
        {
            if (gameObject.transform.GetChild(i).name == "PlayerSphere")
            {
                sphere = gameObject.transform.GetChild(i).gameObject;
                sphereCollider = gameObject.GetComponent<SphereCollider>();
            }

            if (gameObject.transform.GetChild(i).name == "PlayerCube")
            {
                cube = gameObject.transform.GetChild(i).gameObject;
                boxCollider = gameObject.GetComponent<BoxCollider>();
            }
        }
        sphere.SetActive(true);
        cube.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void changeItem()
    {
        if (cube.activeInHierarchy)
        {
            toSphere();
        } else
        {
            toCube();
        }
    }

    private void toSphere()
    {
        cube.SetActive(false);
        //sphere.SetActive(true);
        //Debug.Log("ToSphere!");
        rb.freezeRotation = true;
        boxCollider.enabled = false;
        sphereCollider.enabled = true;
    }

    private void toCube()
    {
        rb.freezeRotation = false;
        //sphere.SetActive(false);
        sphereCollider.enabled = false;
        boxCollider.enabled = true;
        cube.SetActive(true);
    }
}

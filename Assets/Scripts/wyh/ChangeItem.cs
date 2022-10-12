using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeItem : MonoBehaviour
{
    // Start is called before the first frame update
    private GameObject sphere;
    private GameObject cube;
     
    void Start()
    {
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
        
    }

    public void changeItem()
    {
        if (sphere.activeInHierarchy)
        {
            toCube();
        } else
        {
            toSphere();
        }
    }

    private void toSphere()
    {
        sphere.SetActive(true);
        cube.SetActive(false);
    }

    private void toCube()
    {
        sphere.SetActive(false);
        cube.SetActive(true);
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Immovable : MonoBehaviour
{
    private GameObject sphere;
    private GameObject cube;
    float lightMass = 10;
    float heavyMass = 1000;
    Material ownMaterial = null;
    Material cubeMaterial = null;
    // Start is called before the first frame update
    void Start()
    {
        ownMaterial = GetComponent<Renderer>().sharedMaterial;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            //Debug.Log("Collide Player");
            for (int i = 0; i < collision.gameObject.transform.childCount; i++)
            {
                if (collision.gameObject.transform.GetChild(i).name == "PlayerSphere")
                {
                    sphere = collision.gameObject.transform.GetChild(i).gameObject;
                }

                if (collision.gameObject.transform.GetChild(i).name == "PlayerCube")
                {
                    cube = collision.gameObject.transform.GetChild(i).gameObject;
                    cubeMaterial = cube.GetComponent<Renderer>().sharedMaterial;
                }
            }

            if (cube.activeInHierarchy && ownMaterial.name == cubeMaterial.name)
            {
                
                gameObject.GetComponent<Rigidbody>().mass = lightMass;
                //Debug.Log("The mass is:" + gameObject.GetComponent<Rigidbody>().mass);
            } 
        }
    }

    private void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.name == "Player")
        {
            if (cube.activeInHierarchy)
            {
                gameObject.GetComponent<Rigidbody>().mass = heavyMass;
                //Debug.Log("The mass is:" + gameObject.GetComponent<Rigidbody>().mass);
            }
        }
    }

}

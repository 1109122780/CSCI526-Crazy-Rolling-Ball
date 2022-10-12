using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerToCube : MonoBehaviour
{
    public GameObject cube;
    public GameObject sphere;
    private Component[] components;
    private Vector3 validDirection = Vector3.down;  // What you consider to be upwards
    private float contactThreshold = 60;          // Acceptable difference in degrees
    private ChangeItem changeItemScript;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyUp(KeyCode.C))
        {
            Replace(sphere, cube);
            components = sphere.GetComponents<Component>();
            for (int i = 0; i < components.Length; i++)
            {
                UnityEditorInternal.ComponentUtility.CopyComponent(components[i]);
                UnityEditorInternal.ComponentUtility.PasteComponentAsNew(cube);
            }
            Debug.Log("Replaced");
            //used = true;
        }
    }
    
    void Replace(GameObject obj1, GameObject obj2)
    {
        //Instantiate(obj2, obj1.transform.position, Quaternion.identity);
        //Destroy(obj1);
        //obj1.SetActive(false);
    }



    void OnCollisionEnter(Collision col)
    {
        Debug.Log("Collide!");
        if (col.gameObject.tag == "Player")
        {
            changeItemScript = col.gameObject.GetComponent<ChangeItem>();
            //changeItemScript.changeItem();

            for (int k = 0; k < col.contacts.Length; k++)
            {
                if (Vector3.Angle(col.contacts[k].normal, validDirection) <= contactThreshold)
                {
                    // Collided with a surface facing mostly upwards
                    changeItemScript.changeItem();
                    Debug.Log("changeItemScript.changeItem() executed");
                    break;
                }
            }
        }
        //if (col.gameObject.name == "Player")
        //{
        //    changeItemScript = col.gameObject.GetComponent<ChangeItem>();
        //    //Debug.Log("Collide Player!");
        //    changeItemScript.changeItem();
        //    //Debug.Log("changeItemScript.changeItem() executed");
        //}



    }

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KeyToOpenDoor : MonoBehaviour
{
    private void OnCollisionEnter(Collision coll)
    {
        if (coll.gameObject.tag == "Key")
        {
            GameObject leftRotateDoor = GameObject.FindWithTag("LeftRotateDoor");
            GameObject rightRotateDoor = GameObject.FindWithTag("RightRotateDoor");

            if (leftRotateDoor != null & rightRotateDoor != null)
            {
                if (leftRotateDoor.GetComponent<LeftRotateDoor>().isOpen)
                {
                    leftRotateDoor.GetComponent<LeftRotateDoor>().Close();
                }
                else
                {
                    leftRotateDoor.GetComponent<LeftRotateDoor>().Open(transform.position);
                }

                if (rightRotateDoor.GetComponent<RightRotateDoor>().isOpen)
                {
                    rightRotateDoor.GetComponent<RightRotateDoor>().Close();
                }
                else
                {
                    rightRotateDoor.GetComponent<RightRotateDoor>().Open(transform.position);
                }
            }
        }
    }
}

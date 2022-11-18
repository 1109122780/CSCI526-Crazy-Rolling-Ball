using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AutoConnectJoint : MonoBehaviour
{
 
    [ContextMenu("Connect Joints Upward")]
    void ConnectUpInHierarchy()
    {
        CharacterJoint joint = GetComponent<CharacterJoint>();
        while (joint != null)
        {
            Rigidbody parent = joint.transform.parent.GetComponent<Rigidbody>();
            joint.connectedBody = parent;
            joint = parent.GetComponent<CharacterJoint>();
        }


    }
}

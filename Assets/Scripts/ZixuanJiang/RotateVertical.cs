using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateVertical : MonoBehaviour
{
    Rigidbody m_Rigidbody;
    Vector3 m_EulerAngleVelocity;

    // Start is called before the first frame update
    void Start()
    {
        //Fetch the Rigidbody from the GameObject with this script attached
        m_Rigidbody = GetComponent<Rigidbody>();

        m_EulerAngleVelocity = new Vector3(0, 0, 100);
    }

    void FixedUpdate()
    {
        Quaternion deltaRotation = Quaternion.Euler(m_EulerAngleVelocity * Time.fixedDeltaTime);
        m_Rigidbody.MoveRotation(m_Rigidbody.rotation * deltaRotation);
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            if (Mathf.Abs(collision.gameObject.transform.localScale.x - collision.gameObject.GetComponent<SizeChange>().largeSize) <= 0.05)
            {
                m_EulerAngleVelocity = new Vector3(0, 0, 0);
            }
        }
    }
}

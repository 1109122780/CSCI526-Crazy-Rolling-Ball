using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeavyBox : MonoBehaviour
{
    public Rigidbody rb;

    private void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    private void OnCollisionEnter(Collision coll)
    {
        if (coll.gameObject.tag == "Player")
        {
            if (Mathf.Abs(coll.gameObject.transform.localScale.x - coll.gameObject.GetComponent<SizeChange>().largeSize) < 0.02)
            {
                rb.isKinematic = false;
            } else
            {
                rb.isKinematic = true;
            }
        }
    }
}

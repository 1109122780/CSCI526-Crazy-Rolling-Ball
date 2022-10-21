using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StarScript : MonoBehaviour
{
    void Update()
    {
        transform.Rotate(0, Time.deltaTime, 0);
        transform.Rotate(0, 100 * Time.deltaTime, 0, Space.World);
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
 
public class CameraMovement : MonoBehaviour
{
    public GameObject Target;
    Vector3 finalOffset;

    // Start is called before the first frame update
    void Start()
    {
        finalOffset = transform.position - Target.transform.position;
    }
 
    //Update is called once per frame
    void LateUpdate()
    {
        Rotate();
        transform.position = Vector3.Lerp(transform.position, (Target.transform.position + finalOffset), .25f);
        // make the camera alway look at the player.
        transform.LookAt(Target.transform.position);
    }
    // calculate the rotation
    void Rotate()
    {
        finalOffset = Quaternion.AngleAxis(Input.GetAxis("Mouse X") * 4f, Vector3.up) * finalOffset;
    }
}

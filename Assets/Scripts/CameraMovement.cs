using System.Collections;
using System.Collections.Generic;
using UnityEngine;
 
public class CameraMovement : MonoBehaviour
{
    public Transform yAxis;
    public Transform xAxis;
    public Transform zAxis;
    public Transform zoomAxis;
    public Transform player;
    public float roSpeed = 1000;
    public float scSpeed = 50;
    public float limitAngle = 45;
    private float hor,ver,scrollView;
    float x = 0, sc = 10;

    public void LateUpdate()
    {
        hor = Input.GetAxis("Mouse X");
        ver = Input.GetAxis("Mouse Y");
        scrollView = Input.GetAxis("Mouse ScrollWheel");

        if(hor != 0)
            yAxis.Rotate(Vector3.up*roSpeed*hor*Time.fixedDeltaTime);
        if(ver != 0)
        {
            x += -ver*Time.fixedDeltaTime*roSpeed;
            x = Mathf.Clamp(x,-limitAngle,limitAngle);
            Quaternion q = Quaternion.identity;
            q = Quaternion.Euler(new Vector3(x, xAxis.eulerAngles.y,xAxis.eulerAngles.z));
            xAxis.rotation = Quaternion.Lerp(xAxis.rotation,q,roSpeed*Time.fixedDeltaTime);
        }

        if(scrollView != 0)
        {
            sc -= scrollView * scSpeed;
            sc = Mathf.Clamp(sc, 3, 10);
            zoomAxis.transform.localPosition = new Vector3(0,0, -sc);
        }
        
    }
    public void FixedUpdate()
    {
        yAxis.position = Vector3.Lerp(yAxis.position,player.position+Vector3.up,Time.fixedDeltaTime*10f);
    }

    // public GameObject Target;
    // Vector3 finalOffset;

    // // Start is called before the first frame update
    // void Start()
    // {
    //     finalOffset = transform.position - Target.transform.position;
    // }
 
    // //Update is called once per frame
    // void LateUpdate()
    // {
    //     Rotate();
    //     transform.position = Vector3.Lerp(transform.position, (Target.transform.position + finalOffset), .25f);
    //     // make the camera alway look at the player.
    //     transform.LookAt(Target.transform.position);
    // }
    // // calculate the rotation
    // void Rotate()
    // {
    //     finalOffset = Quaternion.AngleAxis(Input.GetAxis("Mouse X") * 4f, Vector3.up) * finalOffset;
    // }
}

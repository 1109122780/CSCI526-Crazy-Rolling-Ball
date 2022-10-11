using System.Collections;
using System.Collections.Generic;
using UnityEngine;
 
public class CameraMovement : MonoBehaviour
{
    public GameObject Target;
    public float smooth = 2f;
    public float Speed = 5;
    Vector3 distance;
    // Start is called before the first frame update
    void Start()
    {
        distance = transform.position - Target.transform.position;
    }
 
    //Update is called once per frame
    // void LateUpdate()
    // {
    //     transform.position = Vector3.Lerp(Target.transform.position+distance, transform.position, Time.deltaTime * smooth);
    //     transform.LookAt(Target.transform.position);//摄像头Wink物体，不然不丝滑
    // }

    // use update function to change the camera angle and the position
    void Update()
    {
        transform.position = Vector3.Lerp(Target.transform.position+distance, transform.position, Time.deltaTime * smooth);
        // change the camera angle when press the mouse and move the mouse
        if(Input.GetMouseButton(0))
        {
            transform.eulerAngles += Speed * new Vector3(x: -Input.GetAxis("Mouse Y"), y: Input.GetAxis("Mouse X"), z: 0);
        }
        //transform.LookAt(Target.transform.position);
    }


}

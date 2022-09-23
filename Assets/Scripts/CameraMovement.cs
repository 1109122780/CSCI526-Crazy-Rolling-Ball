using System.Collections;
using System.Collections.Generic;
using UnityEngine;
 
public class CameraMovement : MonoBehaviour
{
    public GameObject Target;
    public float smooth = 2f;
    Vector3 distance;
    // Start is called before the first frame update
    void Start()
    {
        distance = transform.position - Target.transform.position;
    }
 
    // Update is called once per frame
    void LateUpdate()
    {
        transform.position = Vector3.Lerp(Target.transform.position+distance, transform.position, Time.deltaTime * smooth);
        transform.LookAt(Target.transform.position);//摄像头Wink物体，不然不丝滑
    }
}

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
    public float roSpeed = 90;
    public float scSpeed = 25;
    public float limitAngle = 18;
    private float hor,ver,scrollView;
    float x = 0, sc = 10;
    public Camera catchingCamera = null;
    // the defaultDistance keep the distance from the camera and the player start at the beginning
    // the defaultDistance will only change when zoom in and out
    public float defaultDistance = -10f;
    public Vector3 relativePostition;
    public bool initialized = false;
    //public bool setTheCamera = false;


    void Start()
    {
        catchingCamera = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Camera>() as Camera;
    }

    public void FixedUpdate()
    {
        // initialize the distance and the position after pushing any key
        // to avoid initialization before the camera be placed into the correct location
        if(Input.anyKey && initialized == false){
            defaultDistance = Vector3.Distance(catchingCamera.transform.position, player.position);
            relativePostition = player.position - catchingCamera.transform.position;
            initialized = true;
        }
        yAxis.position = Vector3.Lerp(yAxis.position,player.position+Vector3.up,Time.fixedDeltaTime*10f);
        
        if(initialized == true){
            Zoom();
            CameraSet();
            //Debug.Log("relativePostition" +  relativePostition + "player.position.ToStiring()" + player.position + "catchingCamera.transform.position.ToStiring()" + catchingCamera.transform.position);
            RaycastHit hit;
            //player.position - relativePostition indicates the postion of the camera should be
            if (Physics.Linecast(player.position + Vector3.up, player.position - relativePostition, out hit))
            {
                string name = hit.collider.gameObject.tag;
                if (name != "MainCamera")
                {
                    //如果射线碰撞的不是相机，那么就取得射线碰撞点到玩家的距离
                    float currentDistance = Vector3.Distance(hit.point, player.position);
                    //如果射线碰撞点小于玩家与相机本来的距离，就说明角色身后是有东西，为了避免穿墙，就把相机拉近
                    if (currentDistance < defaultDistance)
                    {
                        catchingCamera.transform.position = hit.point;
                    }
                }
            }

        }

    }

    void Zoom()
    {
        scrollView = Input.GetAxis("Mouse ScrollWheel");
        if(scrollView != 0)
        {
            sc -= scrollView * scSpeed;
            sc = Mathf.Clamp(sc, 3, 10);
            zoomAxis.transform.localPosition = new Vector3(0,0, -sc);
            
            defaultDistance = Vector3.Distance(catchingCamera.transform.position, player.position);
            relativePostition = player.position - catchingCamera.transform.position;
        }

    }

    void CameraSet()    
    {
        hor = Input.GetAxis("Mouse X");
        ver = Input.GetAxis("Mouse Y");
        if (Input.GetMouseButton(0)){
            if(hor != 0)
                yAxis.Rotate(Vector3.up*roSpeed*hor*Time.fixedDeltaTime);
            if(ver != 0)
            {
                x += -ver*Time.fixedDeltaTime*roSpeed;
                x = Mathf.Clamp(x,-limitAngle,limitAngle);
                Quaternion q = Quaternion.identity;
                q = Quaternion.Euler(new Vector3(x, xAxis.eulerAngles.y,xAxis.eulerAngles.z));
                xAxis.rotation = Quaternion.Lerp(xAxis.rotation, q, roSpeed*Time.fixedDeltaTime);
            }
            relativePostition = player.position - catchingCamera.transform.position;
        }
    }


    // public void FixedUpdate()
    // {
        
    // }

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
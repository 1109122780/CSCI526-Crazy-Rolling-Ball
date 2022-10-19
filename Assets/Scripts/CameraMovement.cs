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

    public void LateUpdate()
    {
        Zoom();
        CameraSet();

        // RaycastHit hit;
        // // two remaining problem: 1. m_transsform should be what in our code 2. whether the distance between the
        // // player change in all different transformation except zoom in and zoom out ?
        // if (Physics.Linecast(player.position + Vector3.up, m_transsform.position, out hit))
        // {
        //     string name = hit.collider.gameObject.tag;
        //     if (name != "MainCamera")
        //     {
        //         //如果射线碰撞的不是相机，那么就取得射线碰撞点到玩家的距离
        //         float currentDistance = Vector3.Distance(hit.point, player.position);
        //         //如果射线碰撞点小于玩家与相机本来的距离，就说明角色身后是有东西，为了避免穿墙，就把相机拉近
        //         if (currentDistance < m_distanceAway)
        //         {
        //             m_transsform.position = hit.point;
        //         }
        //     }
        // }
    }

    void Zoom()
    {
        scrollView = Input.GetAxis("Mouse ScrollWheel");
        if(scrollView != 0)
        {
            sc -= scrollView * scSpeed;
            sc = Mathf.Clamp(sc, 3, 10);
            zoomAxis.transform.localPosition = new Vector3(0,0, -sc);
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
        }

        // //取得相机旋转的角度
        // float m_wangtedRotationAngel = m_player.transform.eulerAngles.y;
        // //获取相机移动的高度
        // float m_wangtedHeight = m_player.transform.position.y + m_distanceUp;
        // //获得相机当前角度
        // float m_currentRotationAngle = m_transsform.eulerAngles.y;
        // //获取相机当前的高度
        // float m_currentHeight = m_transsform.position.y;
        // //在一定时间内将当前角度更改为角色面对的角度
        // m_currentRotationAngle = Mathf.LerpAngle(m_currentRotationAngle, m_wangtedRotationAngel, m_smooth * Time.deltaTime);
        // //更改当前高度
        // m_currentHeight = Mathf.Lerp(m_currentHeight, m_wangtedHeight, m_smooth * Time.deltaTime);
        // //返回一个Y轴旋转玩家当前角度那么多的度数
        // Quaternion m_currentRotation = Quaternion.Euler(0, m_currentRotationAngle, 0);
        // //玩家的位置
        // Vector3 m_position = m_player.transform.position;
        // //相机位置差不多计算出来了
        // m_position -= m_currentRotation * Vector3.forward * m_distanceAway;
        // //将相机应当到达的高度加进应当到达的坐标，这就是相机的新位置
        // m_position = new Vector3(m_position.x, m_currentHeight, m_position.z);
        // m_transsform.position = Vector3.Lerp(m_transsform.position, m_position, Time.time);
        // //注视玩家
        // m_transsform.LookAt(m_player);
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
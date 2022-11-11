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
    private float hor, ver, scrollView;
    float x = 0, sc = 10;
    public Camera catchingCamera = null;
    private List<MeshRenderer> obstacleCollider;
    public List<Material> materialBackup;
    private MeshRenderer tempRenderer;
    private Material tempMaterial;
    // the defaultDistance keep the distance from the camera and the player start at the beginning
    // the defaultDistance will only change when zoom in and out
    public float defaultDistance = -10f;
    public Vector3 relativePostition;
    public bool initialized = false;
    //public bool setTheCamera = false;


    void Start()
    {
        catchingCamera = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Camera>() as Camera;
        obstacleCollider = new List<MeshRenderer>();
        materialBackup = new List<Material>();
    }

    public void LateUpdate()
    {
        // initialize the distance and the position after pushing any key
        // to avoid initialization before the camera be placed into the correct location
        if (Input.anyKey && initialized == false)
        {
            defaultDistance = Vector3.Distance(catchingCamera.transform.position, player.position);
            relativePostition = player.position - catchingCamera.transform.position;
            initialized = true;
        }

        if (initialized == true)
        {
            Zoom();
            CameraSet();
            ColliderDetection();
            //Debug.Log("relativePostition" +  relativePostition + "player.position.ToStiring()" + player.position + "catchingCamera.transform.position.ToStiring()" + catchingCamera.transform.position);
            // RaycastHit hit;
            //player.position - relativePostition indicates the postion of the camera should be
            // if (Physics.Linecast(player.position + Vector3.up, player.position - relativePostition, out hit))
            // {
            //     string name = hit.collider.gameObject.tag;
            //     if (name != "MainCamera")
            //     {
            //         //如果射线碰撞的不是相机，那么就取得射线碰撞点到玩家的距离
            //         float currentDistance = Vector3.Distance(hit.point, player.position);
            //         //如果射线碰撞点小于玩家与相机本来的距离，就说明角色身后是有东西，为了避免穿墙，就把相机拉近
            //         if (currentDistance < defaultDistance)
            //         {
            //             catchingCamera.transform.position = hit.point;
            //         }
            //     }
            // }

        }

    }

    public void FixedUpdate()
    {
        yAxis.position = Vector3.Lerp(yAxis.position, player.position + Vector3.up, Time.fixedDeltaTime * 10f);
    }

    void Zoom()
    {
        scrollView = Input.GetAxis("Mouse ScrollWheel");
        if (scrollView != 0)
        {
            sc -= scrollView * scSpeed;
            sc = Mathf.Clamp(sc, 3, 50);
            zoomAxis.transform.localPosition = new Vector3(0, 0, -sc);

            defaultDistance = Vector3.Distance(catchingCamera.transform.position, player.position);
            relativePostition = player.position - catchingCamera.transform.position;
        }

    }

    void CameraSet()
    {
        hor = Input.GetAxis("Mouse X");
        ver = Input.GetAxis("Mouse Y");
        if (Input.GetMouseButton(0))
        {
            if (hor != 0)
                yAxis.Rotate(Vector3.up * roSpeed * hor * Time.fixedDeltaTime);
            if (ver != 0)
            {
                x += -ver * Time.fixedDeltaTime * roSpeed;
                x = Mathf.Clamp(x, -limitAngle, 80);
                Quaternion q = Quaternion.identity;
                q = Quaternion.Euler(new Vector3(x, xAxis.eulerAngles.y, xAxis.eulerAngles.z));
                xAxis.rotation = Quaternion.Lerp(xAxis.rotation, q, roSpeed * Time.fixedDeltaTime);
            }
            relativePostition = player.position - catchingCamera.transform.position;
        }
    }

    void ColliderDetection()
    {
#if UNITY_EDITOR
        Debug.DrawLine(player.position, transform.position, Color.red);
#endif
        for (int i = 0; i < obstacleCollider.Count; i++)
        {
            tempRenderer = obstacleCollider[i];
            RendererRecover(tempRenderer, 1f);
        }
        obstacleCollider.Clear();
        materialBackup.Clear();
        Vector3 tarDir = (player.position - transform.position).normalized;
        // Debug.DrawLine(tar.position, transform.position, Color.red);
        float tarDis = Vector3.Distance(player.position, transform.position);
        RaycastHit[] listHitObj = Physics.RaycastAll(transform.position, tarDir, tarDis);
        for (int i = 0; i < listHitObj.Length; i++)
        {
            // Debug.Log(listHitObj[i].collider.name);
            RaycastHit hit = listHitObj[i];
            if (hit.transform == player.transform || hit.collider.tag == "Star" || hit.collider.tag == "MovableBox" || hit.collider.tag == "WindArea" || hit.collider.tag == "HiddenWall" || hit.collider.tag == "Glass" || hit.collider.tag == "Invisible" || hit.collider.tag == "Magnet")
            {
                continue;
            }
            // RaycastHit[] hit;
            // hit = Physics.RaycastAll(player.position, transform.position);
            // //  如果碰撞信息数量大于0条
            // if (hit.Length > 0)
            // {   // 设置障碍物透明度为0.5
            //     for (int i = 0; i < hit.Length; i++)
            //     {
            tempRenderer = hit.collider.gameObject.GetComponent<MeshRenderer>();
            // tempMaterial = hit.collider.gameObject.GetComponent<MeshRenderer>().material;
            obstacleCollider.Add(tempRenderer);
            // materialBackup.Add(tempMaterial);
            SetMaterialsAlpha(tempRenderer, 0.5f);
            Debug.Log(hit.collider.name);
        }
        // }
    }

    // 修改障碍物的透明度
    private void SetMaterialsAlpha(MeshRenderer renderer, float a)
    {
        renderer.material.shader = Shader.Find("Transparent/Diffuse");
        renderer.material.color = new Color(renderer.material.color.r, renderer.material.color.g, renderer.material.color.b, a);
    }
    private void RendererRecover(MeshRenderer renderer, float a)
    {
        renderer.material.shader = Shader.Find("Standard");
        renderer.material.color = new Color(renderer.material.color.r, renderer.material.color.g, renderer.material.color.b, a);
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
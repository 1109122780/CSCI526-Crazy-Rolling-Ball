using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class OptionScript : MonoBehaviour
{
    private GameObject information;
    private GameObject camera;    
    private float roSpeed = 300;
    private float scSpeed = 25;
    private Slider roSlider;
    private Slider scSlider;
    // Start is called before the first frame update
    void Start()
    {
        roSlider = GameObject.Find("Canvas/OptionMenu/RoSlider").GetComponent<Slider>();
        scSlider = GameObject.Find("Canvas/OptionMenu/ScSlider").GetComponent<Slider>();
        camera = GameObject.Find("CameraY/CameraX/CameraZ/CameraZoom/Main Camera");
        information = GameObject.Find("Information");
        roSpeed = information.GetComponent<GameInformation>().roSpeed;
        scSpeed = information.GetComponent<GameInformation>().scSpeed;
        roSlider.value = roSpeed;
        scSlider.value = scSpeed;
    }

    public void roSpeedControl()
    {
        information.GetComponent<GameInformation>().roSpeed = roSlider.value;
        camera.GetComponent<CameraMovement>().roSpeed = roSlider.value;
    }

    public void scSpeedControl()
    {
        information.GetComponent<GameInformation>().scSpeed = scSlider.value;
        camera.GetComponent<CameraMovement>().scSpeed = scSlider.value;
    }
    // Update is called once per frame
    void Update()
    {

    }
}

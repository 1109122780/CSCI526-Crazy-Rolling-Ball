using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TransitionPoint : MonoBehaviour
{
    [Header("Transition Info")]
    public string sceneName;
    public enum TransitionType
    {
        SameScene, DifferentScene
    }
    public TransitionType transitionType;
    public TransitionDestination.DestinationTag destinationTag;
    private bool canTrans;
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Z) && canTrans)
        {
            //传送
            Debug.Log("我按了Z：");
            SceneController.Instance.TransitionDestination(this);
        }
    }
    void OnTriggerStay(Collider other)
    {
        if (other.CompareTag("Player"))
            canTrans = true;
    }
    void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Player"))
            canTrans = false; 
    }
    // Start is called before the first frame update

    // Update is called once per frame
}

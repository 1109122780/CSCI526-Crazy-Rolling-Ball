using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorCollider : MonoBehaviour
{
    public GameObject lose;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    private void OnCollisionEnter(Collision other) {
        if (other.gameObject.tag == "Player")
        {
            lose.SetActive(true);
        // Debug.Log(other.name+"13");
            Time.timeScale = 0;
        }
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColliderSc : MonoBehaviour
{

    public GameObject lose;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    private void OnTriggerEnter(Collider other) {
        if (other.name == "Player")
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

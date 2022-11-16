using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class parentPlatform : MonoBehaviour
{
    // GameObject Player;
    // private float Px;
    // private float Py;
    // private float Pz;
  private void OnCollisionEnter(Collision collision) {
        // Player = GameObject.FindGameObjectWithTag("Player");
        // Px = Player.transform.localScale.x;
        // Py = Player.transform.localScale.y;
        // Pz = Player.transform.localScale.z;
        

        collision.transform.SetParent(transform,true);
        
        // Player.transform.localScale = new Vector3(
        //     Player.transform.localScale.x / (Px/collision.gameObject.transform.localScale.x),
        //     Player.transform.localScale.y / (Py/collision.gameObject.transform.localScale.y),
        //     Player.transform.localScale.z / (Pz/collision.gameObject.transform.localScale.z));
        // Player.transform.localScale = new Vector3(collision.gameObject.transform.localScale.x/Px, collision.gameObject.transform.localScale.y/Py, collision.gameObject.transform.localScale.z/Pz);
  }
  private void OnCollisionExit(Collision collision) {
    collision.transform.SetParent(null);
  }
}

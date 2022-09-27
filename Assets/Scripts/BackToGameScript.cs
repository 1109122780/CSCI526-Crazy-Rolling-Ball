using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BackToGameScript : MonoBehaviour
{
    public GameObject ShopManager;

    public void backToGame()
    {
        SceneManager.LoadScene("Option Scene");
    }
}

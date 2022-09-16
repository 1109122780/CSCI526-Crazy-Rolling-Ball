using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BackToGameScript : MonoBehaviour
{
    public GameObject ShopManager;

    public void backToGame()
    {
        string fileName = @"Assets/Materials/Shop.json";
        string json = JsonUtility.ToJson(ShopManager.GetComponent<ShopManagerScript>().shop);
        System.IO.File.WriteAllText(fileName, json);
        SceneManager.LoadScene("Game Scene 1");
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GoToShopScript : MonoBehaviour
{
    public GameObject InventoryManager;

    public void backToGame()
    {
        string fileName = @"Assets/Materials/Shop.json";
        string json = JsonUtility.ToJson(InventoryManager.GetComponent<InventoryManagerScript>().shop);
        System.IO.File.WriteAllText(fileName, json);
        SceneManager.LoadScene("StoreScene");
    }
}

using System;
using System.Collections;
using System.Collections.Generic;
// using System.Text.Json;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class InventoryManagerScript : MonoBehaviour
{
    public GameObject information;
    [SerializeField] GameObject inventoryItemPrefab;
    [SerializeField] Transform scrollview;

    // Start is called before the first frame update
    void Start()
    {
        // string fileName = @"Assets/Materials/Shop.json";
        // string jsonString = System.IO.File.ReadAllText(fileName);
        // shop = JsonUtility.FromJson<Shop>(jsonString);
        information = GameObject.Find("Information");

        foreach (ShopItem shopItem in information.GetComponent<InformationScript>().ShopItemList)
        {
            if (shopItem.quantity != 0)
            {
                GameObject button = (GameObject)Instantiate(inventoryItemPrefab);
                button.GetComponent<Button>().onClick.AddListener(Consume);
                button.GetComponent<InventoryItemButton>().ItemID = shopItem.id;
                button.GetComponent<InventoryItemButton>().Icon.sprite = shopItem.icon;
                button.GetComponent<InventoryItemButton>().NameText.text = shopItem.name.ToString();
                button.GetComponent<InventoryItemButton>().information = information;
                button.transform.SetParent(scrollview, false);
            }
        }
    }

    public void Consume()
    {
        GameObject ButtonRef = GameObject.FindGameObjectWithTag("Event").GetComponent<EventSystem>().currentSelectedGameObject;
        information.GetComponent<InformationScript>().ShopItemList[ButtonRef.GetComponent<InventoryItemButton>().ItemID].quantity--;
        if (information.GetComponent<InformationScript>().ShopItemList[ButtonRef.GetComponent<InventoryItemButton>().ItemID].quantity == 0)
        {
            Destroy(ButtonRef);
        }
        else
        {
            ButtonRef.GetComponent<InventoryItemButton>().QuantityText.text = information.GetComponent<InformationScript>().ShopItemList[ButtonRef.GetComponent<InventoryItemButton>().ItemID].quantity.ToString();
        }
    }
}
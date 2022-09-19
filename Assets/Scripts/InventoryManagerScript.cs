using System;
using System.Collections;
using System.Collections.Generic;
// using System.Text.Json;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class InventoryManagerScript : MonoBehaviour
{
    public Shop shop;
    [SerializeField] GameObject inventoryItemPrefab;
    [SerializeField] Transform scrollview;

    // Start is called before the first frame update
    void Start()
    {
        string fileName = @"Assets/Materials/Shop.json";
        string jsonString = System.IO.File.ReadAllText(fileName);
        shop = JsonUtility.FromJson<Shop>(jsonString);

        foreach (ShopItem shopItem in shop.ShopItemList)
        {
            if (shopItem.Quantity != 0)
            {
                GameObject button = (GameObject)Instantiate(inventoryItemPrefab);
                button.GetComponent<Button>().onClick.AddListener(Consume);
                button.GetComponent<InventoryItemButton>().ItemID = shopItem.ID;
                button.GetComponent<InventoryItemButton>().InventoryManager = this.gameObject;
                button.transform.SetParent(scrollview, false);
            }
        }
    }

    public void Consume()
    {
        GameObject ButtonRef = GameObject.FindGameObjectWithTag("Event").GetComponent<EventSystem>().currentSelectedGameObject;
        shop.ShopItemList[ButtonRef.GetComponent<InventoryItemButton>().ItemID].Quantity--;
        if (shop.ShopItemList[ButtonRef.GetComponent<InventoryItemButton>().ItemID].Quantity == 0)
        {
            Destroy(ButtonRef);
        }
        else
        {
            ButtonRef.GetComponent<InventoryItemButton>().QuantityText.text = shop.ShopItemList[ButtonRef.GetComponent<InventoryItemButton>().ItemID].Quantity.ToString();
        }
    }
}
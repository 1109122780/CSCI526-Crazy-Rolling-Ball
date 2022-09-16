using System;
using System.Collections;
using System.Collections.Generic;
using System.Text.Json;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class ShopManagerScript : MonoBehaviour
{
    public Shop shop;
    public Text CoinsText;
    [SerializeField] GameObject shopItemPrefab;
    [SerializeField] Transform scrollview;

    // Start is called before the first frame update
    void Start()
    {
        string fileName = @"Assets/Materials/Shop.json";
        string jsonString = System.IO.File.ReadAllText(fileName);
        shop = JsonUtility.FromJson<Shop>(jsonString);
        CoinsText.text = "Coins: " + shop.Coins;

        foreach (ShopItem shopItem in shop.ShopItemList)
        {
            GameObject button = (GameObject)Instantiate(shopItemPrefab);
            button.GetComponent<Button>().onClick.AddListener(Buy);
            button.GetComponent<ShopItemButton>().ItemID = shopItem.ID;
            button.GetComponent<ShopItemButton>().ShopManager = this.gameObject;
            button.transform.SetParent(scrollview, false);
        }
    }

    public void Buy()
    {
        GameObject ButtonRef = GameObject.FindGameObjectWithTag("Event").GetComponent<EventSystem>().currentSelectedGameObject;
        float price = shop.ShopItemList[ButtonRef.GetComponent<ShopItemButton>().ItemID].Price;
        if (shop.Coins >= price)
        {
            shop.Coins -= price;
            CoinsText.text = "Coins: " + shop.Coins;
            shop.ShopItemList[ButtonRef.GetComponent<ShopItemButton>().ItemID].Quantity++;
            ButtonRef.GetComponent<ShopItemButton>().QuantityText.text = shop.ShopItemList[ButtonRef.GetComponent<ShopItemButton>().ItemID].Quantity.ToString();
        }
    }
}

[Serializable]
public class ShopItem
{
    // The Unity Serializer doesn't built-in support properties ({get; set; })! Use fields instead(=> remove all { get; set; })!
    public int ID;
    public string Name;
    public float Price;
    public int Quantity;
    public string Icon;
}

[Serializable]
public class Shop
{
    public float Coins;
    public ShopItem[] ShopItemList;
}
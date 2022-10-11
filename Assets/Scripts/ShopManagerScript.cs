using System;
using System.Collections;
using System.Collections.Generic;
// using System.Text.Json;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class ShopManagerScript : MonoBehaviour
{
    public GameObject information;
    public Text CoinsText;
    [SerializeField] GameObject shopItemPrefab;
    [SerializeField] Transform scrollview;

    // Start is called before the first frame update
    void Start()
    {
        // string fileName = @"Assets/Materials/Shop.json";
        // string jsonString = System.IO.File.ReadAllText(fileName);
        // string jsonString = Resources.Load<TextAsset>("Shop").text;
        // shop = JsonUtility.FromJson<Shop>(jsonString);
        information = GameObject.Find("Information");
        CoinsText.text = "Coins: " + information.GetComponent<InformationScript>().score;

        foreach (ShopItem shopItem in information.GetComponent<InformationScript>().ShopItemList)
        {
            if (information.GetComponent<InformationScript>().score >= shopItem.price)
            {
                GameObject button = (GameObject)Instantiate(shopItemPrefab);
                button.GetComponent<Button>().onClick.AddListener(Buy);
                button.GetComponent<ShopItemButton>().ItemID = shopItem.id;
                button.GetComponent<ShopItemButton>().Icon.sprite = shopItem.icon;
                button.GetComponent<ShopItemButton>().NameText.text = shopItem.name.ToString();
                button.GetComponent<ShopItemButton>().PriceText.text = "$" + shopItem.price.ToString();
                button.GetComponent<ShopItemButton>().information = information;
                button.transform.SetParent(scrollview, false);
            }
        }
    }

    public void Buy()
    {
        GameObject ButtonRef = GameObject.FindGameObjectWithTag("Event").GetComponent<EventSystem>().currentSelectedGameObject;
        information.GetComponent<InformationScript>().score -= information.GetComponent<InformationScript>().ShopItemList[ButtonRef.GetComponent<ShopItemButton>().ItemID].price;
        CoinsText.text = "Coins: " + information.GetComponent<InformationScript>().score;
        information.GetComponent<InformationScript>().ShopItemList[ButtonRef.GetComponent<ShopItemButton>().ItemID].quantity++;
        ButtonRef.GetComponent<ShopItemButton>().QuantityText.text = information.GetComponent<InformationScript>().ShopItemList[ButtonRef.GetComponent<ShopItemButton>().ItemID].quantity.ToString();
    }
}
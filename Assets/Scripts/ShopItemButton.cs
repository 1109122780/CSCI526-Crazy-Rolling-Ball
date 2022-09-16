using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShopItemButton : MonoBehaviour
{
    public int ItemID;
    public Text PriceText;
    public Text QuantityText;
    public GameObject ShopManager;

    // Update is called once per frame
    void Update()
    {
        PriceText.text = "Price: " + ShopManager.GetComponent<ShopManagerScript>().shop.ShopItemList[ItemID].Price.ToString();
        QuantityText.text = ShopManager.GetComponent<ShopManagerScript>().shop.ShopItemList[ItemID].Quantity.ToString();
    }
}

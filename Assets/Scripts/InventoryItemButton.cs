using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InventoryItemButton : MonoBehaviour
{
    public int ItemID;
    public Text QuantityText;
    public GameObject InventoryManager;

    // Update is called once per frame
    void Update()
    {
        QuantityText.text = InventoryManager.GetComponent<InventoryManagerScript>().shop.ShopItemList[ItemID].Quantity.ToString();
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InventoryItemButton : MonoBehaviour
{
    public int ItemID;
    public Image Icon;
    public Text NameText;
    public Text QuantityText;
    public GameObject information;

    // Update is called once per frame
    void Update()
    {
        QuantityText.text = information.GetComponent<InformationScript>().ShopItemList[ItemID].quantity.ToString();
    }
}

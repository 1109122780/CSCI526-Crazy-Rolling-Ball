using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShopItemButton : MonoBehaviour
{
    public int ItemID;
    public Image Icon;
    public Text NameText;
    public Text PriceText;
    public Text QuantityText;
    public GameObject information;

    // Update is called once per frame
    void Update()
    {
        QuantityText.text = information.GetComponent<InformationScript>().ShopItemList[ItemID].quantity.ToString();
    }
}

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InformationScript : MonoBehaviour
{
    public string playerID;
    public string levelID;
    public DateTime levelStartTime;
    public Boolean needInitialize;
    public int timesReset;
    public int timesFall;
    public int timesQ;
    public int timesE;
    public int timesF;
    public float score;
    public int star;
    public int shapeChange;
    public List<ShopItem> ShopItemList = new List<ShopItem>();
    // Start is called before the first frame update
    void Start()
    {
        int numOfInformation = FindObjectsOfType<InformationScript>().Length;
        if (numOfInformation != 1) Destroy(gameObject);
        else DontDestroyOnLoad(gameObject);
        playerID = Guid.NewGuid().ToString();
        needInitialize = true;
        score = 150;
        ShopItemList.Add(new ShopItem(0, "IncreaseHealth", 100, 1, Resources.Load<Sprite>("ItemsIcon/Item1") as Sprite));
        ShopItemList.Add(new ShopItem(1, "Invincible", 200, 1, Resources.Load<Sprite>("ItemsIcon/Item2") as Sprite));
    }
}


public class ShopItem
{
    // The Unity Serializer doesn't built-in support properties ({get; set; })! Use fields instead(=> remove all { get; set; })!
    public int id;
    public string name;
    public float price;
    public int quantity;
    public Sprite icon;

    public ShopItem(int id, string name, float price, int quantity, Sprite icon)
    {
        this.id = id;
        this.name = name;
        this.price = price;
        this.quantity = quantity;
        this.icon = icon;
    }
}
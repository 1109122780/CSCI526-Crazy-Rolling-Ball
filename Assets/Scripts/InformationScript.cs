using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InformationScript : MonoBehaviour
{
    public string playerID;
    public string currentStage;
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
    public List<StageItem> StageItemList = new List<StageItem>();
    public Dictionary<string, List<LevelItem>> LevelItemDict = new Dictionary<string, List<LevelItem>>();
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

        // StageItemList.Add(new StageItem("Tutorial", null, new List<LevelItem>()));
        // StageItemList.Add(new StageItem("Stage 1", null, new List<LevelItem>()));
        // StageItemList.Add(new StageItem("Stage 2", null, new List<LevelItem>()));
        StageItemList.Add(new StageItem("Tutorial", Resources.Load<Sprite>("StagePicture/Tutorial") as Sprite));
        LevelItemDict.Add("Tutorial", new List<LevelItem>());
        LevelItemDict["Tutorial"].Add(new LevelItem("0-1"));
        LevelItemDict["Tutorial"].Add(new LevelItem("0-2"));
        LevelItemDict["Tutorial"].Add(new LevelItem("0-3"));
        LevelItemDict["Tutorial"].Add(new LevelItem("0-4"));
        LevelItemDict["Tutorial"].Add(new LevelItem("0-5"));

        StageItemList.Add(new StageItem("Stage 1", Resources.Load<Sprite>("StagePicture/Stage 1") as Sprite));
        LevelItemDict.Add("Stage 1", new List<LevelItem>());
        LevelItemDict["Stage 1"].Add(new LevelItem("1-1"));
        LevelItemDict["Stage 1"].Add(new LevelItem("1-2"));
        LevelItemDict["Stage 1"].Add(new LevelItem("1-3"));
        LevelItemDict["Stage 1"].Add(new LevelItem("1-4"));
        LevelItemDict["Stage 1"].Add(new LevelItem("1-5"));
        LevelItemDict["Stage 1"].Add(new LevelItem("1-6"));

        StageItemList.Add(new StageItem("Stage 2", Resources.Load<Sprite>("StagePicture/Stage 2") as Sprite));
        LevelItemDict.Add("Stage 2", new List<LevelItem>());
        LevelItemDict["Stage 2"].Add(new LevelItem("2-1"));
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

public class LevelItem
{
    public string name;
    public int star;
    public int trophy;

    public LevelItem(string name)
    {
        this.name = name;
        this.star = 0;
        this.trophy = 0;
    }
}

public class StageItem
{
    public string name;
    public Sprite picture;
    // public List<LevelItem> levelItemsList = new List<LevelItem>();

    public StageItem(string name, Sprite picture)
    {
        this.name = name;
        this.picture = picture;
        // this.levelItemsList = levelItemsList;
    }
}
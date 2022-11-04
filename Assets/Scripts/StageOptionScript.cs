using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class StageOptionScript : MonoBehaviour
{
    public GameObject information;
    [SerializeField] GameObject stageItemPrefab;
    [SerializeField] Transform scrollview;
    // Start is called before the first frame update
    void Start()
    {
        information = GameObject.Find("Information");
        foreach (StageItem stageItem in information.GetComponent<InformationScript>().StageItemList)
        {
            GameObject button = (GameObject)Instantiate(stageItemPrefab);
            button.GetComponent<Button>().onClick.AddListener(ChooseStage);
            button.GetComponentInChildren<TextMeshProUGUI>().text = stageItem.name;
            button.transform.Find("StagePictureImage").gameObject.GetComponent<Image>().sprite = stageItem.picture;
            button.transform.SetParent(scrollview, false);
        }
    }

    public void ChooseStage()
    {
        GameObject ButtonRef = GameObject.FindGameObjectWithTag("Event").GetComponent<EventSystem>().currentSelectedGameObject;
        information.GetComponent<InformationScript>().currentStage = ButtonRef.GetComponentInChildren<TextMeshProUGUI>().text;
        SceneManager.LoadScene("Level Option Scene");
    }

    public void Exit()
    {
        SceneManager.LoadScene("Main Menu");
    }
}

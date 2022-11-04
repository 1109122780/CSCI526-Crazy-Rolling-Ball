using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class LevelOptionScript : MonoBehaviour
{
    public GameObject information;
    [SerializeField] GameObject levelItemPrefab;
    [SerializeField] Transform levelSelect;
    // Start is called before the first frame update
    void Start()
    {
        information = GameObject.Find("Information");
        foreach (LevelItem levelItem in information.GetComponent<InformationScript>().LevelItemDict[information.GetComponent<InformationScript>().currentStage])
        {
            GameObject button = (GameObject)Instantiate(levelItemPrefab);
            button.GetComponent<Button>().onClick.AddListener(ChooseLevel);
            button.GetComponentInChildren<TextMeshProUGUI>().text = levelItem.name;
            if (levelItem.star >= 1)
            {
                button.transform.Find("StarEmpty1").gameObject.SetActive(false);
                button.transform.Find("Star1").gameObject.SetActive(true);
                if (levelItem.star >= 2)
                {
                    button.transform.Find("StarEmpty2").gameObject.SetActive(false);
                    button.transform.Find("Star2").gameObject.SetActive(true);
                    if (levelItem.star == 3)
                    {
                        button.transform.Find("StarEmpty3").gameObject.SetActive(false);
                        button.transform.Find("Star3").gameObject.SetActive(true);
                    }
                }
            }
            if (levelItem.trophy == 1) button.transform.Find("Trophy").gameObject.SetActive(true);
            button.transform.SetParent(levelSelect, false);
        }
    }

    public void ChooseLevel()
    {
        GameObject ButtonRef = GameObject.FindGameObjectWithTag("Event").GetComponent<EventSystem>().currentSelectedGameObject;
        SceneManager.LoadScene(ButtonRef.GetComponentInChildren<TextMeshProUGUI>().text);
    }

    public void Exit()
    {
        SceneManager.LoadScene("Stage Option Scene");
    }
}

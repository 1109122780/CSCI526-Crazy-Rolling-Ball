using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class DataAnalystScript : MonoBehaviour
{
    private string URL = "https://docs.google.com/forms/u/1/d/e/1FAIpQLSdD1P7c2r0liTfV2Bu-OVGgnsJxhE-5QWaA1sKtmoL0MMlW5A/formResponse";
    public GameObject information;

    void Start()
    {
        information = GameObject.Find("Information");
        if (information.GetComponent<InformationScript>().needInitialize)
        {
            information.GetComponent<InformationScript>().levelID = Guid.NewGuid().ToString();
            information.GetComponent<InformationScript>().levelStartTime = DateTime.Now;
            information.GetComponent<InformationScript>().timesReset = 0;
            information.GetComponent<InformationScript>().timesFall = 0;
            information.GetComponent<InformationScript>().timesQ = 0;
            information.GetComponent<InformationScript>().timesE = 0;
            information.GetComponent<InformationScript>().timesF = 0;
            information.GetComponent<InformationScript>().star = 0;
            information.GetComponent<InformationScript>().shapeChange = 0;
        }
        else
            information.GetComponent<InformationScript>().needInitialize = true;
    }
    public IEnumerator Post(string playerID, string levelID, string current_level, string pass, string healthRemains, string timesReset, string timesFall, string timesQ, string timesE, string timesF, string timeSpent, string star, string shapeChange)
    {
        // Create the form and enter responses
        WWWForm form = new WWWForm();
        form.AddField("entry.590070741", playerID);
        form.AddField("entry.366340186", levelID);
        form.AddField("entry.1847675819", current_level);
        form.AddField("entry.1660782886", pass);
        form.AddField("entry.644438793", healthRemains);
        form.AddField("entry.1955268382", timesReset);
        form.AddField("entry.731008512", timesFall);
        form.AddField("entry.1852351675", timesQ);
        form.AddField("entry.718387322", timesE);
        form.AddField("entry.338472364", timesF);
        form.AddField("entry.1756017999", timeSpent);
        form.AddField("entry.1508573602", star);
        form.AddField("entry.25698972", shapeChange);
        // Send responses and verify result
        using (UnityWebRequest www = UnityWebRequest.Post(URL, form))
        {
            yield return www.SendWebRequest();
            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.Log(www.error);
            }
            else
            {
                Debug.Log("Form upload complete!");
            }
        }
    }
}
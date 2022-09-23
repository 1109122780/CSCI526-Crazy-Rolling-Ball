using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class DataAnalystScript : MonoBehaviour
{
    private string URL = "https://docs.google.com/forms/u/1/d/e/1FAIpQLSdD1P7c2r0liTfV2Bu-OVGgnsJxhE-5QWaA1sKtmoL0MMlW5A/formResponse";
    public IEnumerator Post(string sessionID, string pass, string healthRemains)
    {
        // Create the form and enter responses
        WWWForm form = new WWWForm();
        form.AddField("entry.366340186", sessionID);
        form.AddField("entry.1955268382", pass);
        form.AddField("entry.644438793", healthRemains);
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

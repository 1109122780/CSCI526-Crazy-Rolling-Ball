using UnityEngine;
using System.Collections;

public class DemoController : MonoBehaviour
{
    public Transform camBaseTF;
    public GameObject lightsObj;
    public Animator potsAnim;
    public Renderer demoRenderer;
    public Gradient marbleColorGr;

    private bool rotateCam, changeColor;
    private Coroutine setMatColor;
    private float eval;
    private Material potsMarbleMat;
    private Color originalColor;

    private void Start()
    {
        Debug.LogWarning("R = Rotate Camera, L = Toggle Light, T = Switch Pots, Space = Change Color");
        potsMarbleMat = demoRenderer.sharedMaterial;
        originalColor = potsMarbleMat.color;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.L))
            lightsObj.SetActive(!lightsObj.activeSelf);

        if (Input.GetKeyDown(KeyCode.T))
            potsAnim.SetTrigger("Toggle");

        if (Input.GetKeyDown(KeyCode.Space))
            ToggleColorChange();

        if (Input.GetKeyDown(KeyCode.R))
        rotateCam = !rotateCam;

        if (rotateCam)
            camBaseTF.Rotate(Vector3.up, Time.deltaTime * -8f);
    }

    private void ToggleColorChange()
    {
        changeColor = !changeColor;
        if (changeColor)
        {
            setMatColor = StartCoroutine(SetMatColor());
        }
        else
        {
            StopCoroutine(setMatColor);
            potsMarbleMat.color = originalColor;
        }
    }

    private IEnumerator SetMatColor()
    {
        while (true)
        {
            eval = Mathf.PingPong(Time.time * 0.1f, 1);
            potsMarbleMat.color = marbleColorGr.Evaluate(eval);
            yield return new WaitForSeconds(Time.deltaTime);
        }
    }
}

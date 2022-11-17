using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoilSpring : MonoBehaviour
{
    public bool isCompressed = false;
    [SerializeField]
    private bool isCoilSpring = true;
    [SerializeField]
    private float speed = 1f;
    [Header("Transform Configs")]
    [SerializeField]
    private float compressAmount = 1.5f;

    private Vector3 startTransform;
    private Vector3 forward;

    private Coroutine animationCoroutine;

    private void Awake()
    {
        startTransform = transform.position;

        forward = transform.right;
    }

    public void Compress(Vector3 userPosition)
    {
        if (!isCompressed)
        {
            if (animationCoroutine != null)
            {
                StopCoroutine(animationCoroutine);
            }

            if (isCoilSpring)
            {
                animationCoroutine = StartCoroutine(DoCompress());
            }
        }
    }

    private IEnumerator DoCompress()
    {
        Vector3 StartPosition = transform.position;
        Vector3 EndPosition = new Vector3(startTransform.x, startTransform.y - compressAmount, startTransform.z);

        isCompressed = true;

        float time = 0;
        while (time < 1)
        {
            transform.position = Vector3.Lerp(StartPosition, EndPosition, time);
            yield return null;
            time += Time.deltaTime * speed * 0.2f;
        }
    }

    public void Expand(bool isSmall)
    {
        if (isCompressed)
        {
            if (animationCoroutine != null)
            {
                StopCoroutine(animationCoroutine);
            }

            if (isCoilSpring)
            {
                animationCoroutine = StartCoroutine(DoExpand(isSmall));
            }
        }
    }

    private IEnumerator DoExpand(bool isSmall)
    {
        Vector3 StartPosition = transform.position;
        Vector3 EndPosition = startTransform;

        isCompressed = false;

        float time = 0;
        while (time < 1)
        {
            transform.position = Vector3.Lerp(StartPosition, EndPosition, time);
            yield return null;
            if (isSmall)
            {
                time += Time.deltaTime * speed * 0.5f;
            }
            else
            {
                time += Time.deltaTime * speed * 0.2f;
            }
        }
    }

    private void OnCollisionStay(Collision coll)
    {
        if (coll.gameObject.tag == "Player")
        {
            if (Mathf.Abs(coll.gameObject.transform.localScale.x - coll.gameObject.GetComponent<SizeChange>().largeSize) <= 0.05)
            {
                if (!isCompressed)
                {
                    Compress(coll.gameObject.transform.position);
                }
            }
            else if (Mathf.Abs(coll.gameObject.transform.localScale.x - coll.gameObject.GetComponent<SizeChange>().normalSize) <= 0.05)
            {
                if (isCompressed)
                {
                    Expand(false);
                }
            }
            else if (Mathf.Abs(coll.gameObject.transform.localScale.x - coll.gameObject.GetComponent<SizeChange>().smallSize) <= 0.05)
            {
                if (isCompressed)
                {
                    if (coll.rigidbody)
                    {
                        coll.rigidbody.AddForce(0, 2000, 0, ForceMode.Force);
                    }

                    Expand(true);
                }
            }
        }
    }
}

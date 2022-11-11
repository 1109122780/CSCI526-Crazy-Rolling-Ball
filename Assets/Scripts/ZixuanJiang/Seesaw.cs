using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Seesaw : MonoBehaviour
{
    public bool isTilted = false;
    [SerializeField]
    private bool isSeesaw= true;
    [SerializeField]
    private float speed = 0.2f;
    [Header("Rotation Configs")]
    [SerializeField]
    private float rotationAmount = 25f;
    [SerializeField]
    private float forwardDirection = 0;

    private Vector3 startRotation;
    private Vector3 forward;

    private Coroutine animationCoroutine;

    private void Awake()
    {
        startRotation = transform.rotation.eulerAngles;

        forward = transform.right;
    }

    public void TiltDown(Vector3 userPosition)
    {
        if (!isTilted)
        {
            if (animationCoroutine != null)
            {
                StopCoroutine(animationCoroutine);
            }

            if (isSeesaw)
            {
                float dot = Vector3.Dot(forward, (userPosition - transform.position).normalized);
                animationCoroutine = StartCoroutine(DoRotationTileDown(dot));
            }
        }
    }


    private IEnumerator DoRotationTileDown(float forwardAmount)
    {
        Quaternion StartRotation = transform.rotation;
        Quaternion EndRotation;

        if (forwardAmount >= forwardDirection)
        {
            EndRotation = Quaternion.Euler(new Vector3(0, 0, startRotation.z - rotationAmount));
        }
        else
        {
            EndRotation = Quaternion.Euler(new Vector3(0, 0, startRotation.z + rotationAmount));
        }

        isTilted = true;

        float time = 0;
        while (time < 1)
        {
            transform.rotation = Quaternion.Slerp(StartRotation, EndRotation, time);
            yield return null;
            time += Time.deltaTime * speed;
        }
    }


    public void TiltUp(bool isSmall)
    {
        if (isTilted)
        {
            if (animationCoroutine != null)
            {
                StopCoroutine(animationCoroutine);
            }

            if (isSeesaw)
            {
                animationCoroutine = StartCoroutine(DoRotationTiltUp(isSmall));
            }
        }
    }

    private IEnumerator DoRotationTiltUp(bool isSmall)
    {
        Quaternion StartRotation = transform.rotation;
        Quaternion EndRotation = Quaternion.Euler(startRotation);

        isTilted = false;

        float time = 0;
        while (time < 1)
        {
            transform.rotation = Quaternion.Slerp(StartRotation, EndRotation, time);
            yield return null;
            if (isSmall)
            {
                time += Time.deltaTime * speed * 15;
            } else
            {
                time += Time.deltaTime * speed;
            }
        }
    }

    private void OnCollisionStay(Collision coll)
    {
        if (coll.gameObject.tag == "Player")
        {
            if (Mathf.Abs(coll.gameObject.transform.localScale.x - coll.gameObject.GetComponent<SizeChange>().largeSize) <= 0.05)
            {
                if (!isTilted)
                {
                    TiltDown(coll.gameObject.transform.position);
                }
            } else if (Mathf.Abs(coll.gameObject.transform.localScale.x - coll.gameObject.GetComponent<SizeChange>().normalSize) <= 0.05)
            {
                if (isTilted)
                {
                    TiltUp(false);
                }
            } else if (Mathf.Abs(coll.gameObject.transform.localScale.x - coll.gameObject.GetComponent<SizeChange>().smallSize) <= 0.05)
            {
                if (isTilted)
                {
                    if (coll.rigidbody)
                    {
                        coll.rigidbody.AddForce(0, 2000, 0, ForceMode.Force);
                    }
                    TiltUp(true);
                    Debug.Log("inside");
                }
            }
        }
    }
}

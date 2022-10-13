using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class pendulum : MonoBehaviour
{
	
	Quaternion _start,_end;
	
	[SerializeField, Range(0.0f, 360f)]
	private float _angle = 90.0f;
	
	[SerializeField, Range(0.0f, 5.0f)]
	private float _speed = 1.0f;
	
	[SerializeField, Range(0.0f, 10.0f)]
	private float _startTime = 0.0f;
	
	
	
	
	Quaternion PenRotation(float angle){
		var pendulumRotation = transform.rotation;
		var angleZ = pendulumRotation.eulerAngles.z + angle;
		
		if(angleZ > 180){
			angleZ -= 360;
		}else if(angleZ < -180){
			angleZ += 360;
		}
		pendulumRotation.eulerAngles = new Vector3(pendulumRotation.eulerAngles.x, pendulumRotation.eulerAngles.y,angleZ);
		return pendulumRotation;
	}
	
	void ResetTime(){
		_startTime = 0.0f;
	}
	
	
    // Start is called before the first frame update
    void Start()
    {
        _start = PenRotation(_angle);
		_end = PenRotation(-_angle);
    }

    // Update is called once per frame
    void Update()
    {
        _startTime += Time.deltaTime;
		transform.rotation = Quaternion.Lerp(_start,_end,(Mathf.Sin(_startTime * _speed + Mathf.PI / 2) + 1.0f) / 2.0f);
		
    }
	
	void FixedUpdate()
	{
	    _startTime += Time.deltaTime;
		transform.rotation = Quaternion.Lerp(_start,_end,(Mathf.Sin(_startTime * _speed + Mathf.PI / 2) + 1.0f) / 2.0f);
		
	}
}

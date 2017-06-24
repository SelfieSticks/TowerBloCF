using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class lerpCube : MonoBehaviour {

	public bool goRight = true;
	public Transform startMarker;
	public Transform endMarker;
	public float speed = 1.0F;
	private float startTime;
	private float journeyLength;

	void Start() {
		startTime = Time.time;
		journeyLength = Vector3.Distance (startMarker.position, endMarker.position);
	}
	
	void Update () {
		if (goRight) {
			float distCovered = (Time.time - startTime) * speed;
			float fracJourney = distCovered / journeyLength;
			transform.position = Vector3.Lerp (startMarker.position, endMarker.position, fracJourney);
			if (this.transform.position.x > endMarker.position.x - 0.001f) {
				goRight = false;
				startTime = Time.time;
			}
		} else {
			
			float distCovered = (Time.time - startTime) * speed;
			float fracJourney = distCovered / journeyLength;
			transform.position = Vector3.Lerp (endMarker.position, startMarker.position, fracJourney);
			if (this.transform.position.x < startMarker.position.x + 0.001f) {
				goRight = true;
				startTime = Time.time;
			}
		}
	}

}

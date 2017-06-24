using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Assets.Scripts;

public class LandingOffset : MonoBehaviour {
    [Range(0f, 1f)] public float lerpRate;

    private Vector3 cameraOffset;
    private Vector3 destPos;

    void Start () {
        Tower.singlePlayerTower.landingHandler += Move;
        // Keep the camera offset set in the Scene.
        cameraOffset = transform.position;
        destPos = cameraOffset;
	}

    void Update() {
        transform.position = Vector3.Lerp(transform.position, destPos, lerpRate);
    }
	
	private void Move (Vector3 landingPosition) {
        Vector3 landingY = new Vector3(0, landingPosition.y, 0);
        destPos = landingY + cameraOffset;
	}
}

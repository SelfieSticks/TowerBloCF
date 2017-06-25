using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Assets.Scripts;

public class TopBlockFollower : MonoBehaviour {
    public float lerpRate;
    public bool autoOffset = true;
    public Vector3 offset;
    private Vector3 destPos;

    void Start () {
        Tower.singlePlayerTower.landingHandler += Move;
        // Keep the offset set in the Scene.
        offset = autoOffset? transform.position : offset;
        destPos = offset;
	}

    void OnDestroy() {
        // Current gameObjects using this script do not get Destroyed
        Tower.singlePlayerTower.landingHandler -= Move;
    }

    void FixedUpdate() {
        transform.position = Vector3.Lerp(transform.position, destPos, lerpRate);
    }
	
	private void Move (GameObject newBlock) {
        Vector3 landingY = new Vector3(0, newBlock.transform.position.y, 0);
        destPos = landingY + offset;
	}    
}

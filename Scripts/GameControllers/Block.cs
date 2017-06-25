using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Assets.Scripts;

public class Block : MonoBehaviour {
	void Start () {
        Tower.singlePlayerTower.landingHandler += SetBlock;
	}

    void OnDestroy() {
        Tower.singlePlayerTower.landingHandler -= SetBlock;
        Tower.singlePlayerTower.UpdateTopmostBlock();
    }

    private void SetBlock(GameObject newBlock) {
        if(newBlock == gameObject) {
            gameObject.layer = LayerMask.NameToLayer("Placed");
        }
    }
}

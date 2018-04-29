using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Component for an object to act as the top block
/// </summary>
public class TopBlock : BlockEventReceiver {
    // Most recently placed block in the tower
    public GameObject topBlock;

    private void Start() {
        if(topBlock) {
            transform.position = topBlock.transform.position;
        }
    }

    protected override void OnBlockLand(CubeState state) 
    {
        transform.position = state.transform.position;
        topBlock = state.gameObject;
    }
}

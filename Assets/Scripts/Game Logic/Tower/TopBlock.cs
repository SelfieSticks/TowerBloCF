using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TopBlock : BlockEventReceiver {
    // Access to the top block
    public GameObject topBlock;

    // Literally for an empty Top object to act as the top block
    protected override void OnBlockLand(CubeState state) 
    {
        transform.position = state.transform.position;
        topBlock = state.gameObject;
    }
}

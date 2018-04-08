using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Top : BlockEventTarget {
    // Literally for an empty Top object to act as the top block
    protected override void OnBlockLand(CubeState state) {
        transform.position = state.transform.position;
    }
}

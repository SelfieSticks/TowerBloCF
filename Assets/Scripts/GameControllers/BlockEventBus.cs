using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum BlockType 
{
    NORMAL,
    LIT,
    GOLD,
    DIAMOND,
    RANDOM
}

public class BlockEventBus : MonoBehaviour 
{
    public delegate void Block(CubeState state);
    public event Block BlockLand;

    public delegate void Check();
    public event Check PostBlockUpdate;

	public void OnBlockLand(CubeState state) 
    {
        BlockLand(state);
        StartCoroutine("BlockUpdate", 0.1f);
    }

    private void BlockUpdate() {
        PostBlockUpdate();
    }

}

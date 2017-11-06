using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum BlockType 
{
    NORMAL,
    LIT,
    GOLD,
    DIAMOND
}

public class BlockEventBus : MonoBehaviour 
{
    public delegate void Block(CubeState state);
    public event Block BlockLand;

	public void OnBlockLand(CubeState state) 
    {
        BlockLand(state);
    }
}

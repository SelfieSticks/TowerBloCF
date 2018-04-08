using UnityEngine;
using UnityEngine.UI;

public abstract class BlockEventTarget : MonoBehaviour 
{
    protected virtual void Awake() 
    {
        var be = GameObject.FindObjectOfType<BlockEvents>();
        be.BlockLand += OnBlockLand;
        be.PostBlockUpdate += OnBlockEvent;
    }

    protected virtual void OnBlockLand(CubeState state) {}
    protected virtual void OnBlockEvent() {}

    protected virtual void OnDestroy() 
    {
        var beb = GameObject.FindObjectOfType<BlockEvents>();
        if(!beb) 
        {
            return;
        }

        beb.BlockLand -= OnBlockLand;
        beb.PostBlockUpdate -= OnBlockEvent;
    }
}

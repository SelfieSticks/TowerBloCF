using UnityEngine;
using UnityEngine.UI;

public abstract class BlockEventReceiver : MonoBehaviour 
{
    protected virtual void Awake() 
    {
        var beb = GameObject.FindObjectOfType<BlockEventBroadcaster>();
        beb.BlockLand += OnBlockLand;
        beb.PostBlockUpdate += OnBlockEvent;
    }

    protected virtual void OnBlockLand(CubeState state) {}
    protected virtual void OnBlockEvent() {}

    protected virtual void OnDestroy() 
    {
        var beb = GameObject.FindObjectOfType<BlockEventBroadcaster>();
        if(!beb) 
        {
            return;
        }

        beb.BlockLand -= OnBlockLand;
        beb.PostBlockUpdate -= OnBlockEvent;
    }
}

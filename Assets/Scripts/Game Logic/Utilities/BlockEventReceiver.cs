using UnityEngine;
using UnityEngine.UI;

public abstract class BlockEventReceiver : MonoBehaviour 
{
    private BlockEventBroadcaster beb;

    protected virtual void Awake() 
    {
        beb = GameObject.FindObjectOfType<BlockEventBroadcaster>();
        beb.BlockLand += OnBlockLand;
        beb.PostBlockUpdate += OnBlockEvent;
    }

    protected virtual void OnBlockLand(CubeState state) {}
    protected virtual void OnBlockEvent() {}

    protected virtual void OnDestroy() 
    {
        if(!beb) 
        {
            return;
        }

        beb.BlockLand -= OnBlockLand;
        beb.PostBlockUpdate -= OnBlockEvent;
    }
}

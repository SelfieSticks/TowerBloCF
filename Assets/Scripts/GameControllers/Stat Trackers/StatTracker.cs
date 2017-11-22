using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(BlockEventBus))]
public abstract class StatTracker : MonoBehaviour 
{
    protected virtual void Awake() 
    {
        var beb = GetComponent<BlockEventBus>();
        beb.BlockLand += OnBlockLand;
        beb.PostBlockUpdate += OnBlockEvent;
    }

    protected virtual void OnBlockLand(CubeState state) {}
    protected virtual void OnBlockEvent() {}

    protected virtual void OnDestroy() 
    {
        var beb = GetComponent<BlockEventBus>();
        beb.BlockLand -= OnBlockLand;
        beb.PostBlockUpdate -= OnBlockEvent;
    }
}

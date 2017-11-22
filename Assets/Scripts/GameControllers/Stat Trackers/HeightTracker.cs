using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(BlockEventBus))]
public class HeightTracker : StatTracker 
{
    [SerializeField] private Text blockHeightText;
    [SerializeField] private Text actualHeightText;
    
    // maybe todo?
    // [SerializeField] private Text blocksDroppedText;

    private int blockHeight = 0;
    private float actualHeight = 0;

    protected override void OnBlockLand(CubeState state) 
    {
        blockHeight++;
        actualHeight = Mathf.Max(actualHeight, state.transform.position.y);

        if(blockHeightText)
            blockHeightText.text = "Blocks Landed: " + blockHeight;
        if(actualHeightText)
            actualHeightText.text = "Tower Height: " + string.Format("{0:0.#}", actualHeight) + "m";
    }
}

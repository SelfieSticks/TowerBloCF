using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(BlockEventBus))]
public class AchievementManager : MonoBehaviour 
{
    [SerializeField] private Text blockHeightText;
    [SerializeField] private Text actualHeightText;
    
    // maybe todo?
    // [SerializeField] private Text blocksDroppedText;

    private int blockHeight = 0;
    private float actualHeight = 0;

    private void Awake() 
    {
        GetComponent<BlockEventBus>().BlockLand += LandingBlock;
    }

    private void LandingBlock(CubeState state) {
        blockHeight++;
        actualHeight = Mathf.Max(actualHeight, state.transform.position.y);

        if(blockHeightText) {
            blockHeightText.text = "Blocks Landed: " + blockHeight;
        }
        if(actualHeightText) {
            actualHeightText.text = "Tower Height: " + string.Format("{0:0.#}", actualHeight) + "m";
        }
    }

    private void OnDestroy() 
    {
        GetComponent<BlockEventBus>().BlockLand -= LandingBlock;
    }
}

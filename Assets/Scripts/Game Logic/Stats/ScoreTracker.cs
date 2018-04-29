using UnityEngine;
using UnityEngine.UI;

public class ScoreTracker : BlockEventReceiver 
{
    [SerializeField] private Text scoreText;

    // 4 types of blocks - normal, lit, gold, diamond
    // Diamond blocks multiply score by x2 for 10s
    [SerializeField] public int Score;
    [SerializeField] private int diamondMultiplier = 2;
    [SerializeField] private float multiplierDuration = 10f;
    private float multiplierTimer = 0;

    [SerializeField] private int normalScore = 1;
    [SerializeField] private int litScore = 3;
    [SerializeField] private int goldScore = 5;
    [SerializeField] private int diamondScore = 10;
    [SerializeField] private int randomScore = 10;
    //TODO split this into another file
    [SerializeField] private Transform spawner;

    private int[] cubeScores;
    
    private BlockType lastBlockType;

    protected override void Awake()
    {
        base.Awake();
        cubeScores = new int[]{ normalScore, litScore, goldScore, diamondScore, randomScore };
        GetComponent<BlockEventBroadcaster>().BlockLand += ScoreBlock;
    }

    void Update() 
    {
        multiplierTimer -= Time.deltaTime;
        if (multiplierTimer < 0f)
            multiplierTimer = 0f;
    }

    private void ScoreBlock(CubeState state) 
    {
        BlockType blockType = state.CubeType;

        // Scoring
        int cubeScore;
        switch(lastBlockType) 
        {
            case BlockType.GOLD:
                if(blockType == BlockType.GOLD) 
                {
                    cubeScore = 20;
                    break;
                }
                goto default;
            default:
                cubeScore = cubeScores[(int)blockType];
                break;
        }

        if (blockType == BlockType.DIAMOND) 
        {
            multiplierTimer = multiplierDuration;
        }

        int multiplier = multiplierTimer == 0 ? 1 : diamondMultiplier;
        Score += cubeScore * multiplier;
        lastBlockType = blockType;

        if(scoreText) 
        {
            scoreText.text = "Score: " + Score;
        }
    }
}

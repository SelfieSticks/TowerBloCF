using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreManager : MonoBehaviour {
    // 4 types of blocks - normal, lit, gold, diamond
    // Diamond blocks multiply x2 for 'multiplierTime'
    public int Score { get; private set; }
    public int Height { get; private set; }
    [SerializeField] private int diamondMultiplier;
    [SerializeField] private float multiplierTime = 10f;

    [SerializeField] private int[] cubeScores = { 1, 3, 5, 10 };

    void Update() {
        multiplierTime -= Time.deltaTime;
        if (multiplierTime < 0f) {
            multiplierTime = 0f;
        }
    }

    public enum CubeType {
        NORMAL,
        LIT,
        GOLD,
        DIAMOND
    }
    public void ScoreCube(CubeType landType) {
        Height++;

        int cubeScore = cubeScores[(int)landType];
        if (landType == CubeType.DIAMOND) {
            multiplierTime = 10f;
        }

        int multiplier = multiplierTime == 0 ? diamondMultiplier : 1;
        Score += cubeScore * multiplier;
    }
}

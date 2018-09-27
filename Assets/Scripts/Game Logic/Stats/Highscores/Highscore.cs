using UnityEngine;

[System.Serializable]
public class Highscore
{
    public readonly string Name;
    public readonly int Score;

    public Highscore(string name, int score)
    {
        Name = name;
        Score = score;
    }
}
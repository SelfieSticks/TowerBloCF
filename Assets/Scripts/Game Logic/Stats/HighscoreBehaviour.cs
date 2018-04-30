using System.Collections.Generic;
using UnityEngine;

public abstract class HighscoreBehaviour : MonoBehaviour {
    public abstract bool SaveHighscore(string name, int score);
    public abstract List<KeyValuePair<string, int>> GetHighscores();
}
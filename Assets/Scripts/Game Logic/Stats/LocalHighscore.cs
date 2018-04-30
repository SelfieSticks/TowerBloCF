using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class LocalHighscore : HighscoreBehaviour {
    [SerializeField] private string highscoreKey = "LocalHighscores";
    [SerializeField] private int scoreboardSize = 10;

    public override List<KeyValuePair<string, int>> GetHighscores() {
        return JsonUtility.FromJson<List<KeyValuePair<string, int>>>(
            PlayerPrefs.GetString(highscoreKey, JsonUtility.ToJson(new List<KeyValuePair<string, int>>())));
    }

    public override bool SaveHighscore(string name, int score) {
        var hsList = GetHighscores();
        hsList.Insert(hsList.FindIndex(kv => kv.Value < score), new KeyValuePair<string, int>(name, score));
        while(hsList.Count > scoreboardSize) {
            hsList.RemoveAt(scoreboardSize);
        }
        PlayerPrefs.SetString(highscoreKey, JsonUtility.ToJson(hsList));
        return true;
    }
}

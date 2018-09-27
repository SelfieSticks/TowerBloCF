using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using System;

public class LocalHighscore : MonoBehaviour, IHighscoreTable {
    [SerializeField] private string highscoreKey = "LocalHighscores";
    private Tuple<int, Highscore> lastSavedHighscore;

    public IReadOnlyDictionary<int, Highscore> GetHighscores()
    {
        return GetHighscoreList()
            .Select((h, i) => new { h, i })
            .ToDictionary(p => p.i, p => p.h);
    }

    public int SaveHighscore(Highscore highscore) {
        var hsList = GetHighscoreList();
        var index = Mathf.Max(0, hsList.FindIndex(h => h.Score < highscore.Score));
        hsList.Insert(index, highscore);
        PlayerPrefs.SetString(highscoreKey, JsonUtility.ToJson(hsList));

        lastSavedHighscore = Tuple.Create(index, highscore);
        return index;
    }

    public Tuple<int, Highscore> GetLastSavedHighscore()
    {
        return lastSavedHighscore;
    }

    private List<Highscore> GetHighscoreList()
    {
        return (JsonUtility.FromJson<List<Highscore>>(PlayerPrefs.GetString(highscoreKey))
            ?? new List<Highscore>());
    }
}

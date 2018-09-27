using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using System;

public class LocalHighscore : MonoBehaviour, IHighscoreTable {
    [SerializeField] private string highscoreKey = "LocalHighscores";
    private static Tuple<int, Highscore> lastSavedHighscore;

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
        PlayerPrefs.SetString(highscoreKey, JsonUtility.ToJson(new HighscoreWrapper(hsList)));

        lastSavedHighscore = Tuple.Create(index, highscore);
        Debug.Log(lastSavedHighscore);
        return index;
    }

    public Tuple<int, Highscore> GetLastSavedHighscore()
    {
        return lastSavedHighscore;
    }

    public void ClearHighscores()
    {
        PlayerPrefs.SetString(highscoreKey, JsonUtility.ToJson(Enumerable.Empty<Highscore>()));
    }

    private List<Highscore> GetHighscoreList()
    {
        return (JsonUtility.FromJson<HighscoreWrapper>(PlayerPrefs.GetString(highscoreKey)).Highscores
            ?? new Highscore[0])
            .ToList();
    }

    private class HighscoreWrapper
    {
        public Highscore[] Highscores;

        public HighscoreWrapper(IEnumerable<Highscore> highscores)
        {
            Highscores = highscores.ToArray();
        }
    }
}

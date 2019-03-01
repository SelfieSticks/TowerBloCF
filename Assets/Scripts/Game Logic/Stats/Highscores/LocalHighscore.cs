using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using System;

public class LocalHighscore : AbstractHighscoreTable {
    [SerializeField] private string highscoreKey = "LocalHighscores";
    private static Tuple<int, Highscore> lastSavedHighscore;

    public override IReadOnlyDictionary<int, Highscore> GetHighscores()
    {
        return GetHighscoreList()
            .Select((h, i) => new { h, i })
            .ToDictionary(p => p.i, p => p.h);
    }

    public override int SaveHighscore(Highscore highscore) {
        var hsList = GetHighscoreList();
        var index = hsList.FindIndex(h => h.Score < highscore.Score);

        if (index == -1)
        {
            hsList.Add(highscore);
        } 
        else
        {
            hsList.Insert(index, highscore);
        }

        PlayerPrefs.SetString(highscoreKey, JsonUtility.ToJson(new HighscoreWrapper(hsList)));

        lastSavedHighscore = Tuple.Create(index, highscore);
        Debug.Log(lastSavedHighscore);
        return index;
    }

    public override Tuple<int, Highscore> GetLastSavedHighscore()
    {
        return lastSavedHighscore;
    }

    public void ClearHighscores()
    {
        PlayerPrefs.DeleteKey(highscoreKey);
    }

    private List<Highscore> GetHighscoreList()
    {
        return (JsonUtility.FromJson<HighscoreWrapper>(PlayerPrefs.GetString(highscoreKey)) 
            ?? new HighscoreWrapper(new Highscore[0]))
            .Highscores
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

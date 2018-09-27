using System;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(IHighscoreTable))]
public class HighscoreDisplay : MonoBehaviour {
    [SerializeField] private GameObject[] HighscoresEntries;
    [SerializeField] private GameObject LastHighscoreEntry;

    private void Start()
    {
        var highscoreTable = GetComponent<IHighscoreTable>();

        var highscores = highscoreTable.GetHighscores();

        for(int i = 0; i < HighscoresEntries.Length; i++)
        {
            Highscore highscore = null;
            highscores.TryGetValue(i, out highscore);
            PopulateHighscoreGameObject(HighscoresEntries[i], i + 1, highscore);
        }

        var lastHighscore = highscoreTable.GetLastSavedHighscore();
        var lastIndex = lastHighscore == null ? (int?)null : lastHighscore.Item1;
        var lastScore = lastHighscore == null ? null : lastHighscore.Item2;

        PopulateHighscoreGameObject(LastHighscoreEntry, lastIndex, lastScore);
    }

    private void PopulateHighscoreGameObject(
        GameObject highscoreEntry,
        int? index,
        Highscore highscore)
    {
        var nameText = GetTextChild(highscoreEntry, "Name");
        var scoreText = GetTextChild(highscoreEntry, "Score");
        var indexText = GetTextChild(highscoreEntry, "Index");

        nameText.text = highscore == null? string.Empty : highscore.Name;
        scoreText.text = highscore == null? string.Empty : highscore.Score.ToString();
        indexText.text = (index == null? "?" : index.ToString()) + ".";
    }

    Text GetTextChild(GameObject highscoreEntry, string childName)
    {
        return highscoreEntry.transform.Find(childName).GetComponent<Text>();
    }
}

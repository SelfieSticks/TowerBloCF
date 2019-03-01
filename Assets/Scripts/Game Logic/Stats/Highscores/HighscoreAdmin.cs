using UnityEngine;

[RequireComponent(typeof(LocalHighscore))]
public class HighscoreAdmin : MonoBehaviour {
    [SerializeField] int Score;
    [SerializeField] string Name;

    public void AddHighscore()
    {
        GetComponent<LocalHighscore>().SaveHighscore(new Highscore(Name, Score));
        Debug.Log("Saved Highscore: " + Name + ", " + Score);
    }

    public void ClearHighscores()
    {
        GetComponent<LocalHighscore>().ClearHighscores();
        Debug.Log("Cleared Highscore");
    }

    public void PrintHighscores()
    {
        Debug.Log("Highscores:");
        foreach (var entry in GetComponent<LocalHighscore>().GetHighscores())
        {
            Debug.Log((entry.Key + 1) + ": " + entry.Value);
        }
    }
}

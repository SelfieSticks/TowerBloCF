using UnityEngine;

public class HighscoreSaver : MonoBehaviour {
    [SerializeField] private ScoreTracker scoreTracker;
    [SerializeField] private AbstractHighscoreTable highscores;
	
	public void SaveHighscore() {
        highscores.SaveHighscore(new Highscore(
            PlayerPrefs.GetString("Name"),
            scoreTracker.Score));
	}
}

using UnityEngine;

public class Level : MonoBehaviour {
    [SerializeField] private ScoreTracker scoreTracker;
    [SerializeField] private SceneSwitch sceneSwitch;
    [SerializeField] private IHighscoreTable highscores;
	
	public void End() {
        highscores.SaveHighscore(new Highscore(
            PlayerPrefs.GetString("Name"),
            scoreTracker.Score));

        sceneSwitch.NextScene("Highscores");
	}
}

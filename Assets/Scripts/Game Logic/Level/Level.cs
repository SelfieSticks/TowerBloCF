using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Level : MonoBehaviour {
    [SerializeField] private ScoreTracker scoreTracker;
    [SerializeField] private SceneSwitch sceneSwitch;
    [SerializeField] private HighscoreBehaviour highscores;
	
	public void End() {
        highscores.SaveHighscore(PlayerPrefs.GetString("Name"), scoreTracker.Score);
        sceneSwitch.NextScene("Highscores");
	}
}

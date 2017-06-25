using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Score : MonoBehaviour {

	public TextMesh currSco;
	int score = 0;
	int lose = 1;

	void Update () 
	{
		if (GameObject.Find ("Image")) {

			score = GameObject.FindGameObjectsWithTag ("Block").Length;
			currSco.text = "" + score;
	
		} else {
			if (lose == 1) {
				lose = 0;
				score -= 1;
				currSco.text = "" + score;
			}
		}

	}
}

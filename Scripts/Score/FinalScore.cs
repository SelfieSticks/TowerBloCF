using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class FinalScore : MonoBehaviour {

	public Text finalSco;
	int score;

	void Start () {
		TextMesh textObject = GameObject.Find("ScoreBoard").GetComponent<TextMesh>();
		score = int.Parse(textObject.text);
		score -= 1;
		finalSco.text = score.ToString ();
	}

}

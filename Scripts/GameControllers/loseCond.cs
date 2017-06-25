using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class loseCond : MonoBehaviour {

	public GameObject textPrefab;
	public GameObject textPrefabScore;
	public GameObject textPrefabFinal;
	public GameObject canvas;
	private GameObject textEnd;
	private GameObject textScore;
	private GameObject textFinal;

 	public GameObject HealthBar;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerEnter(Collider colider) {
    if (HealthBar.GetComponent<Health>().ReduceHealth() == 0) {
      Debug.Log("detect colision");
      if (textEnd == null) {
        textEnd = Instantiate(textPrefab);
        textEnd.transform.SetParent(canvas.GetComponent<Transform>());
        textEnd.transform.localPosition = new Vector3(12, 93, 0);
		textScore = Instantiate(textPrefabScore);
		textScore.transform.SetParent(canvas.GetComponent<Transform>());
		textScore.transform.localPosition = new Vector3(73, 47, 0);
		textFinal = Instantiate(textPrefabFinal);
		textFinal.transform.SetParent(canvas.GetComponent<Transform>());
		textFinal.transform.localPosition = new Vector3(-41, 47, 0);
      }
    }
    Destroy(colider.gameObject);
	}
}

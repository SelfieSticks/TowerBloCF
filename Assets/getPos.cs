using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class getPos : MonoBehaviour {

	public GameObject blockPrefab;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetButtonDown ("Fire1")) {

			Instantiate (blockPrefab).transform.position = this.transform.position;

		}
	}
}

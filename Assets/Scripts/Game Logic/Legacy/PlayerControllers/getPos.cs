using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class getPos : MonoBehaviour {

	public GameObject blockPrefab;
    [SerializeField]
    private float cooldown = 1.5f;
    private bool isOnCooldown = false;
	// Use this for initialization
	void Start () {
		
	}
	
    IEnumerator cooldownToDrop()
    {
        yield return new WaitForSeconds(cooldown);
        isOnCooldown = false;
    }
	// Update is called once per frame
	void Update () {
		if (Input.GetButtonDown ("Fire1") && !isOnCooldown) {

			Instantiate (blockPrefab).transform.position = this.transform.position;
            isOnCooldown = true;
            StartCoroutine("cooldownToDrop");

		}
	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour {

    [SerializeField] private GameObject prefabToSpawn;
    private Rigidbody spawned;
    private bool canDrop;

	// Use this for initialization
	void Start () {
        spawned = Instantiate(prefabToSpawn, this.transform.position, Quaternion.identity).GetComponent<Rigidbody>();
        spawned.useGravity = false;
        canDrop = true;
	}

	// Update is called once per frame
	void FixedUpdate () {

		if (canDrop && Input.GetKeyDown(KeyCode.Space))
        {
            spawned.useGravity = true;
            this.transform.Translate(Vector3.up);
            StartCoroutine(WaitAndSpawn());
        }
	}

    IEnumerator WaitAndSpawn()
    {
        canDrop = false;
        yield return new WaitForSeconds(.5f);
        spawned = Instantiate(prefabToSpawn, this.transform.position, Quaternion.identity).GetComponent<Rigidbody>();
        spawned.useGravity = false;
        canDrop = true;
    }
}

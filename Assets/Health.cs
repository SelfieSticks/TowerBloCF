using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class Health : MonoBehaviour {


  //public GameObject heartPrefab;
  //public GameObject canvas
  public GameObject[] hearts;
  private int currHealth;
	// Use this for initialization
	void Start () {
    // hearts = new GameObject[3];
    for (int i = 0; i < 3; i++) {
      //   hearts[i] = Instantiate(heartPrefab);
      //   hearts[i].transform.SetParent(canvas.GetComponent<Transform>());
      //   hearts[i].transform.localPosition = new Vector3(1, 1, 1);

    }
  currHealth = 3;
	}

  // reduce the health if >0 and return it
  public int ReduceHealth() {
    if (currHealth > 0) {
      Debug.Log("healthLost");
      currHealth--;
      hearts[currHealth].SetActive(false);

    }
    return currHealth;
  }

}

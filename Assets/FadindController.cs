using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FadindController : MonoBehaviour {

  Image image;
  public float timeframe;
	// Use this for initialization
	void Start () {
    image = this.GetComponent<Image>();
    StartCoroutine("Fader");
	}
	

 public void ResetToTransparent() {
    Color col = image.color;
    col.a = 0;
    image.color = col;
  }

  private void ReduceTransparency() {
      Color col = image.color;
    if (image.color.a < 0.9f) {
      col.a = col.a + 0.01f;
      image.color = col;
    }
  }
  IEnumerator Fader() {
    while(true) {
      Debug.Log("fades a bit");
      ReduceTransparency();
      yield return new WaitForSeconds(timeframe);
    }
  }

	// Update is called once per frame
	void Update () {
    Debug.Log("Set transparent");
		 //if(Input.GetButtonDown("Fire3")) {
   //   ResetToTransparent();
   // }

	}
}

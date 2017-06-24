using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class BlowControl : MonoBehaviour {
  //public 
  public Text startText;
  //public GameObject pressureBar;
  public Slider slider;

  //private
  //private float maxPressureReading = 0;
  //private float minPressureThreshold = 0.1f;

  //private System.Diagnostics.Stopwatch blowingStopwatch;
  //private int countdownToStart = 3;
  //private float smoothing = 0.00001f;

  // Use this for initialization
  void Start() {
    //// Create new stopwatch.
    //blowingStopwatch = new System.Diagnostics.Stopwatch();
    //startText.text = countdownToStart.ToString();

  }

  // Update is called once per frame
  void Update() {
    Debug.Log("our max pressure:" + StartCalibrate.maxPressureReading);
      Debug.Log("(BW)Fizz pressure = " + FizzyoDevice.Instance().Pressure());
    //if(StartCalibrate.maxPressureReading < FizzyoDevice.Instance().Pressure()) {
    //  Debug.Log("Breathed well");
      if (Input.GetKey(KeyCode.B)) {
        this.GetComponent<FadindController>().ResetToTransparent();
      }

    //}


  }
}
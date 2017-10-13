using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DurationText : MonoBehaviour {

    void Start()
    {
        var text = GetComponent<Text>();
        var calibrationManager = GetComponentInParent<CalibrationManager>();

        calibrationManager.CurrentBreathDurationChanged += (s, old, curr) =>
        {
            text.text = string.Format("{0:0.0}s", curr);
        };
    }

}

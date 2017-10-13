using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI.Extensions;

public class DurationFill : MonoBehaviour {
    
	void Start () {
        var circle = GetComponent<UICircle>();
        var calibrationManager = GetComponentInParent<CalibrationManager>();

        calibrationManager.CurrentBreathDurationChanged += (s, old, curr) =>
        {
            circle.FillPercent = (int) (100 * (curr / calibrationManager.maxBreathDuration));
        };
	}
}

using Fizzyo;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI.Extensions;

public class DurationFill : MonoBehaviour {

    private BreathRecogniser br;
    private UICircle circle;

    void Start () {
        circle = GetComponent<UICircle>();

        br = new BreathRecogniser();
	}

    private void Update()
    {
        circle.FillPercent = (int)(100 * (FizzyoFramework.Instance.Recogniser.BreathLength / FizzyoFramework.Instance.Recogniser.MaxBreathLength));
    }
}

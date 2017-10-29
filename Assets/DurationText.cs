using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DurationText : MonoBehaviour {

    private Text text;
    void Start()
    {
        text = GetComponent<Text>();
    }

    private void Update()
    {
        text.text = string.Format("{0:0.0}s", Fizzyo.FizzyoFramework.Instance.Recogniser.BreathLength);
    }

}

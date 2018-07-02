using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Fizzyo;

public class BreathWidget : MonoBehaviour {
    [SerializeField] private Text breathDurationText;
    [SerializeField] private Image breathCircle;
    [SerializeField] public float goodBreathDuration;
    [SerializeField] private float goodBreathLevel;

    private float breathLevel;
    private float lastFill;
    private float maxGoodBreathLevel;

    private void Start() {
        SetMaxGoodBreathLevel(FizzyoFramework.Instance.Device.maxPressureCalibrated);
    }

    public void SetGoodBreathLevel(float breathLevel) {
        goodBreathLevel = breathLevel;
    }

    public void SetMaxGoodBreathLevel(float breathLevel) {
        maxGoodBreathLevel = breathLevel;
    }
    
    public void SetBreathLevel(float fill) {
        breathLevel = fill;
        if(breathLevel < goodBreathLevel) {
            breathCircle.fillAmount = Mathf.Lerp(0f, 0.75f, breathLevel / goodBreathLevel);
        } else if(breathLevel < maxGoodBreathLevel) {
            breathCircle.fillAmount = Mathf.Lerp(0.75f, 1f, (breathLevel - goodBreathLevel) / (maxGoodBreathLevel - goodBreathLevel));
        } else {
            breathCircle.fillAmount = 1.0f;
        }
    }

    private void Update() {
        SetBreathLevel(FizzyoFramework.Instance.Device.Pressure());

        if(goodBreathLevel <= breathLevel && breathLevel <= maxGoodBreathLevel) {
            goodBreathDuration += Time.deltaTime;
            breathDurationText.text = goodBreathDuration.ToString("0.0");

            if(goodBreathDuration > 3.0f) {
                goodBreathDuration = 3.0f;
                breathDurationText.color = Color.green;
            } else {
                breathDurationText.color = Color.black;
            }
        } else {
            goodBreathDuration = 0;
            breathDurationText.text = "";
        }

        lastFill = breathLevel;
    }
}

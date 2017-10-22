using Fizzyo;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PressureSlider : MonoBehaviour
{
    private Slider slider;

    [SerializeField] Text valueText;
    [SerializeField] RectTransform maximumPressureMark;
    [SerializeField] Image sliderFillImage;
    [SerializeField] float redToGreenValue = 0.6f;

    void Start()
    {
        slider = GetComponent<Slider>();
        slider.minValue = FizzyoDevice.MinMeasurablePressure;
        slider.maxValue = FizzyoDevice.MaxMeasurablePressure;
        sliderFillImage.color = Color.red;

        var calibrationManager = GetComponentInParent<CalibrationManager>();

        calibrationManager.PressureChanged += (s, old, curr) => {
            slider.value = curr;
            valueText.text = slider.value.ToString();

            var color = sliderFillImage.color;
            color.r = 1 - curr;
            color.g = curr;
            sliderFillImage.color = color;
        };
    }

    void Update()
    {
        // Push maximum pressure mark up
        if (slider.handleRect.position.y > maximumPressureMark.position.y)
        {
            maximumPressureMark.position = new Vector3(maximumPressureMark.position.x,
                slider.handleRect.position.y, maximumPressureMark.position.z);
        }
        
    }
}

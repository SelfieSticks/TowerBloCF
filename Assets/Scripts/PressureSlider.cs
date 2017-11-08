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
        slider.minValue = 0;
        slider.maxValue = FizzyoFramework.Instance.Device.maxPressureCalibrated;
        sliderFillImage.color = Color.red;
    }

    void Update()
    {
        PressureChanged(FizzyoFramework.Instance.Device.Pressure());

        // Push maximum pressure mark up
        if (slider.handleRect.position.y > maximumPressureMark.position.y)
        {
            maximumPressureMark.position = new Vector3(maximumPressureMark.position.x,
                slider.handleRect.position.y, maximumPressureMark.position.z);
        }
        
    }

    void PressureChanged(float pressure)
    {
        slider.value = pressure;
        valueText.text = slider.value.ToString();

        var color = sliderFillImage.color;
        color.r = 1 - pressure;
        color.g = pressure;
        sliderFillImage.color = color;
    }
}

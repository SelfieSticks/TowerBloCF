using UnityEngine;
using UnityEngine.UI;
using Fizzyo;

public class BreathWidget : MonoBehaviour {
    [SerializeField] private Image timeFill;
    [SerializeField] private Image strengthFill;

    [SerializeField] public float goodDurationPercentage;
    [SerializeField] private float goodStrengthPercentage;

    [SerializeField] private Color goodDurationColour;
    [SerializeField] private Color goodStrengthColour;

    private Color originalDurationColour;
    private Color originalStrengthColour;

    private FizzyoFramework fizzyoFramework;

    private void Start() {
        originalDurationColour = timeFill.color;
        originalStrengthColour = timeFill.color;
        fizzyoFramework = FizzyoFramework.Instance;
    }

    private void Update()
    {
        SetBreathTimeFill();
        SetBreathStrengthFill();
    }

    private void SetBreathTimeFill()
    {
        var durationFraction = fizzyoFramework.Recogniser.BreathLength / fizzyoFramework.Device.maxBreathCalibrated;
        timeFill.fillAmount = durationFraction;
        if(durationFraction > goodDurationPercentage)
        {
            timeFill.color = goodDurationColour;
        }
        else
        {
            timeFill.color = originalDurationColour;
        }
    }

    private void SetBreathStrengthFill()
    {
        float strengthFraction = fizzyoFramework.Device.Pressure() / fizzyoFramework.Device.maxPressureCalibrated;
        strengthFill.fillAmount = strengthFraction;
        if (strengthFraction > goodStrengthPercentage)
        {
            strengthFill.color = goodStrengthColour;
        } else
        {
            strengthFill.color = originalStrengthColour;
        }
    }
}

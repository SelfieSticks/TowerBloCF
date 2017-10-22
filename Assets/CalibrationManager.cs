using Fizzyo;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// The calibration measurement logic runs until a number of consequtive useful breaths are recorder. The output is then saved
/// to local storage for use in-game by the breath recogniser and other gameplay elements which need to be adjusted
/// based on the patient.
/// </summary>
public class CalibrationManager : MonoBehaviour
{
    [SerializeField] private float breathStartPressureThreshold = 0.6f;
    [SerializeField] public readonly float maxBreathDuration = 6.0f;

    private float currentMaxPressure = 0;
    private float avgBreathDuration;
    [SerializeField] private bool isCalibrationComplete;
    private float cumPressurePerSec;
    private int breathsRecorded;
    [SerializeField] private bool isCalibrationStarted;

    private float cumPressure;
    private float duration;

    /// <summary>
    /// Number of consequtive useful breaths required for successful calibration
    /// </summary>
    [SerializeField] private int breathsRequired = 3;

    /// <summary>
    /// True if the required values for calibration were measured and saved successfully
    /// </summary>
    public bool IsCalibrationComplete { get { return isCalibrationComplete; } }


    private float lastRecordedPressure;
    public float LastRecordedPressure
    {
        get { return lastRecordedPressure; }
        protected set
        {
            if (PressureChanged != null)
            {
                PressureChanged(this, lastRecordedPressure, value);
            }

            lastRecordedPressure = value;
        }
    }

    public float CurrentBreathDuration
    {
    get { return duration; }
    protected set
        {
            if (CurrentBreathDurationChanged != null)
            {
                CurrentBreathDurationChanged(this, duration, value);
            }

            duration = value;
        }
    }


    /// <summary>
    /// The maximum pressure value registered by the Fizzyo device during the calibration session
    /// </summary>
    public float MaximumRecordedPressure
    {
        get { return currentMaxPressure; }
        protected set
        {
            if (MaxPressureChanged != null)
            {
                MaxPressureChanged(this, currentMaxPressure, value);
            }

            currentMaxPressure = value;
        }
    }

    /// <summary>
    /// Average breath duration in seconds out of the breaths used for calibration
    /// </summary>
    public float AverageBreathDuration { get { return avgBreathDuration; } }

    /// <summary>
    /// Compound measure of breath strength which combines pressure and duration values
    /// </summary>
    public float CumulativePressurePerSecond { get { return cumPressurePerSec; } }

    public delegate void FloatValueChangedEventHandler(object sender, float oldValue, float newValue);
    public event FloatValueChangedEventHandler PressureChanged;
    public event FloatValueChangedEventHandler MaxPressureChanged;
    public event FloatValueChangedEventHandler CurrentBreathDurationChanged;

    public void StartCalibration()
    {
        isCalibrationStarted = true;

        cumPressure = 0;
        duration = 0;
    }


    void Start()
    {
    }

    void Update()
    {
        if (isCalibrationStarted)
        {
            LastRecordedPressure = FizzyoDevice.Instance().Pressure();

            cumPressure += LastRecordedPressure * Time.deltaTime;

            // Start a new breath
            if (CurrentBreathDuration == 0 && LastRecordedPressure > breathStartPressureThreshold)
            {
                CurrentBreathDuration += Time.deltaTime;
            }
            // Track breath duration
            else if (CurrentBreathDuration > 0 && LastRecordedPressure > breathStartPressureThreshold)
            {
                CurrentBreathDuration += Time.deltaTime;
            }
            // End a breath
            else if (CurrentBreathDuration > 0 && LastRecordedPressure <= breathStartPressureThreshold)
            {
                CurrentBreathDuration = 0;
            }

            if (LastRecordedPressure > MaximumRecordedPressure)
            {
                MaximumRecordedPressure = LastRecordedPressure;
            }
        }
    }
}

﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public class Session 
{
    // Various session parameters
    public int setCount;
    public int breathCount;
    public int goodBreathCount;
    public int badBreathCount;
    public int score;
    public int startTime;

    /// <summary>
    /// Constructor for a session
    /// </summary>
    /// <param name="setCount"> 
    /// Integer holding the amount of sets that are to be completed in this session
    /// </param>  
    /// <param name="breathCount"> 
    /// Integer holding the amount of breaths that are to be completed in each set
    /// </param>  
    public Session(int setCount, int breathCount)
    {

        this.setCount = setCount;
        this.breathCount = breathCount;

        DateTime origin = new DateTime(1970, 1, 1, 0, 0, 0, 0, System.DateTimeKind.Utc);
        TimeSpan diff = DateTime.UtcNow - origin;
        this.startTime = (int)Math.Floor(diff.TotalSeconds);

    }

    /// <summary>
    /// Used to upload a session and achievements gained within this session
    /// </summary>
    /// <param name="goodBreathCount"> 
    /// Integer holding the amount of good breaths completed in this session
    /// </param>  
    /// <param name="badBreathCount"> 
    /// Integer holding the amount of bad breaths completed in this session
    /// </param>  
    /// /// <param name="score"> 
    /// Integer holding the score for this session
    /// </param>  
    public bool SessionUpload(int goodBreathCount, int badBreathCount, int score)
    {

        //return Data.Upload.Session(goodBreathCount, badBreathCount, score, startTime, setCount, breathCount);
        return true;
    }
}

/// <summary>
/// Provides data about the current breath to the receiver when the ExhalationComplete event fires
/// </summary>
public class ExhalationCompleteEventArgs : EventArgs
{
    private float breathLength = 0;
    private int breathCount = 0;
    private float exhaledVolume = 0;
    private bool isBreathFull = false;
    private float breathPercentage = 0;
    private int breathQuality = 0;

    public ExhalationCompleteEventArgs(float breathLength, int breathCount, float exhaledVolume, bool isBreathFull, float breathPercentage, int breathQuality)
    {
        this.breathLength = breathLength;
        this.breathCount = breathCount;
        this.exhaledVolume = exhaledVolume;
        this.isBreathFull = isBreathFull;
        this.breathPercentage = breathPercentage;
        this.breathQuality = breathQuality;

    }

    /// The length of the exhaled breath in seconds
    public float Breathlength
    {
        get
        {
            return breathLength;
        }
    }

    /// The total number of exhaled breaths this session
    public int BreathCount
    {
        get
        {
            return breathCount;
        }
    }

    /// The total exhaled volume of this breath
    public float ExhaledVolume
    {
        get
        {
            return exhaledVolume;
        }
    }

    /// Returns true if the breath was 100% completed
    public bool IsBreathFull
    {
        get
        {
            return isBreathFull;
        }
    }

    /// Returns true if the breath was 100% completed
    public int BreathQuality
    {
        get
        {
            return breathQuality;
        }
    }

    /// Returns true if the breath was 100% completed
    public float BreathPercentage
    {
        get
        {
            return breathPercentage;
        }
    }
}

public delegate void ExhalationCompleteEventHandler(object sender, ExhalationCompleteEventArgs e);
public delegate void ExhalationStartedEventHandler(object sender);

/// <summary>
/// Breath Analyser class decouples the logic of recognizing breaths from a stream of pressure samples
/// from acting on the recognition.  To use:
/// 
/// 1. Create an instance of BreathAnalyser: BreathAnalyser breathAnalyser = new BreathAnalyser()
/// 2. Set the calibration properties: MaxPressure and MaxBreathLength
/// 3. Register for the ExhalationCompleteEvent: breathAnalyser.ExhalationComplete += ExhalationCompleteHandler
/// 4. Add pressure samples in the update loop: AddSample(Time.DeltaTime, pressure)
/// 5. The event will fire at the end of an exhaled breath and provide information for:
/// 
///    a) BreathLength
///    b) BreathCount
///    c) ExhaledVolume
///    d) IsBreathFull
/// 
/// 6. You can interrogate the breath analyser at any time to determine:
/// 
///    a) BreathLength
///    b) BreathCount
///    c) ExhaledVolume
///    d) IsExhaling
///    e) MaxPressure
///    f) MaxBreathLength
/// 
/// The algorithm for determining whether a breath is fully completed is encapsulated in the method IsBreathFull()
/// and currently returns true if the average breath pressure and breath length is within 80% of the max.
/// </summary>
public class BreathRecogniser
{
    private float breathLength = 0;
    private int breathCount = 0;
    private float exhaledVolume = 0;
    private bool isExhaling = false;
    private float maxPressure = 0;
    private float maxBreathLength = 0;
    private const float kTollerance = 0.80f;
    private float minBreathThreshold = .05f;
    private float breathPercentage = 0;

    public event ExhalationCompleteEventHandler BreathComplete;
    public event ExhalationStartedEventHandler BreathStarted;

    

    public BreathRecogniser()
    {


    }



    /// The length of the current exhaled breath in seconds
    public float BreathLength
    {
        get
        {
            return this.breathLength;
        }
    }

    /// The total number of exhaled breaths this session
    public int BreathCount
    {
        get
        {
            return this.breathCount;
        }
    }

    /// The total exhaled volume for this breath
    public float ExhaledVolume
    {
        get
        {
            return this.exhaledVolume;
        }
    }

    /// True if the user is exhaling
    public bool IsExhaling
    {
        get
        {
            return this.isExhaling;
        }
    }

    /// The maximum pressure recorded during calibration
    public float MaxPressure
    {
        get
        {
            return this.maxPressure;
        }
        set
        {
            this.maxPressure = value;
        }
    }

    /// The maximum breath length recorded during calibration
    public float MaxBreathLength
    {
        get
        {
            return this.maxBreathLength;
        }
        set
        {
            this.maxBreathLength = value;
        }
    }

    /// True if the user is exhaling
    public float BreathPercentage
    {
        get
        {
            return this.breathPercentage;
        }
    }

    /// Adds a sample to the BreathAnalyser
    public void AddSample(float dt, float value)
    {

        if (this.isExhaling && value < this.minBreathThreshold)
        {
            // Notify the delegate that the exhaled breath is complete
            bool isBreathFull = this.IsBreathFull(this.breathLength, this.maxBreathLength, this.exhaledVolume, this.maxPressure);
            int breathQuality = GetBreathQuality(this.breathPercentage);
            ExhalationCompleteEventArgs eventArgs = new ExhalationCompleteEventArgs(
                this.breathLength,
                this.breathCount,
                this.exhaledVolume,
                isBreathFull,
                this.breathPercentage,
                breathQuality);
            this.OnExhalationComplete(this, eventArgs);

            // Reset the state
            this.breathLength = 0;
            this.exhaledVolume = 0;
            this.isExhaling = false;
            this.breathCount++;
            this.breathPercentage = 0;
        }
        else if (value >= this.minBreathThreshold)
        {
            if (!this.isExhaling)
            {
                OnExhalationStarted(this);
            }

            this.isExhaling = true;
            this.exhaledVolume += dt * value;
            this.breathLength += dt;
            this.breathPercentage = this.breathLength / (BreathRecogniser.kTollerance * this.maxBreathLength);
        }
    }

    /// Returns true if the breath was within the toterance of a 'good breath'
    public bool IsBreathFull(float breathLength, float maxBreathLength, float exhaledVolume, float maxPressure)
    {
        bool isBreathFull = false;

        // Is the breath the right within 80% of the correct length
        isBreathFull = breathLength > BreathRecogniser.kTollerance * maxBreathLength;

        // Is the average pressure within 80% of the max pressure
        if (this.breathLength > 0)
        {
            isBreathFull = isBreathFull && ((exhaledVolume / breathLength) > BreathRecogniser.kTollerance * maxPressure);
        }

        return isBreathFull;
    }

    /// Returns an integer that corresponds to the following:
    /// 0 - Breath was 0 - 25% of the calibrated breath length
    /// 1 - Breath was 25% - 50% of the calibrated breath length
    /// 2 - Breath was 50 - 75% of the calibrated breath length
    /// 3 - Breath was 75% - 100% of the calibrated breath length
    /// 4 - Breath was 100% of the calibrated breath length
    public int GetBreathQuality(float breathPercentage)
    {
        int quality = 0;

        if (breathPercentage < 0.5f && breathPercentage > 0.25f)
            quality = 1;
        else if (breathPercentage < 0.75f && breathPercentage > 0.5f)
            quality = 2;
        else if (breathPercentage < 1.0f && breathPercentage > 0.75f)
            quality = 3;
        else if (breathPercentage >= 1.0f)
            quality = 4;

        return quality;
    }

    /// Resest the BreathAnalyser
    public void ResetSession()
    {
        this.breathLength = 0;
        this.breathCount = 0;
        this.exhaledVolume = 0;
        this.isExhaling = false;
        this.breathPercentage = 0;
    }

    /// Invoke the event - called whenever exhalation finishes
    protected virtual void OnExhalationComplete(object sender, ExhalationCompleteEventArgs e)
    {
        if (BreathComplete != null)
        {
            BreathComplete(this, e);
        }
    }


    /// Invoke the event - called whenever exhalation starts
    protected virtual void OnExhalationStarted(object sender)
    {
        if (BreathStarted != null)
        {
            BreathStarted(this);
        }
    }


}
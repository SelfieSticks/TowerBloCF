﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
namespace Fizzyo
{

    /// <summary>
    /// An Instance of this class can be created to calibrate the game based on the users device input
    /// </summary>
    public class Calibration : MonoBehaviour
    {
        // Time that current breath has been held for
        private float breathLength;

        // How many calibration steps have been completed
        public int calibrationStep = 1;

        // How many calibration steps need to be completed
        public int requiredSteps = 3;

        // Status of calibration
        public string calibrationStatus;

        // A color reflecting of the status of the calibration
        public Color calibrationColor;

        // List that holds pressure readings from calibration
        private List<float> pressureReadings = new List<float>();

        // List that holds pressure readings from calibration
        private List<float> avgPressureReadings = new List<float>();

        // List that holds pressure readings from calibration
        private List<float> avgLengths = new List<float>();

        // Holds average pressure reading
        private float avgPressureReading;

        // Average time of each calibration step
        private float avgLength;

        // Breath has to be above this to register
        private float minPressureThreshold = 0.1f;

        // Pressure used for calibration from device
        public float pressure;

        // If true calibration script is running
        public bool calibrating = false;

        // If true calibration is finished
        public bool calibrationFinished = false;


        /// <summary>
        /// Used to get input from the device to get a pressure and time value that can be used in the breath framework, according to the breathing capacity of the user
        /// Pressure is a float value that determines how hard the user needs to blow into the device to constitute a good breath
        /// Time is an integer value that determines how long the user needs to blow into the device to constitute a good breath
        /// Calibration pressure and time are saved in the player preferences as "calPressure" and "calTime"
        /// </summary>
        public void Calibrate()
        {

            // Pressure comes from device
            pressure = FizzyoFramework.Instance.Device.Pressure();

            // if incoming pressure is above threshold
            if (pressure > minPressureThreshold)
            {
                // Pressure readings are taken every update
                pressureReadings.Add(pressure);
                breathLength += Time.deltaTime;

                calibrationStatus = "Status: Calibraion Step " + calibrationStep.ToString() + " In Progress";
                calibrationColor = Color.yellow;
            }
            // If the pressure is not being maintained
            else
            {

                if (breathLength > 1.0)
                {

                    // Average and maximum values are taken from the calibration pressure readings
                    avgPressureReadings.Add(pressureReadings.Sum() / pressureReadings.Count);
                    avgLengths.Add(breathLength);


                    if (calibrationStep == requiredSteps)
                    {

                        avgPressureReading = avgPressureReadings.Sum() / avgPressureReadings.Count;
                        avgLength = avgLengths.Sum() / avgLengths.Count;

                        calibrationStatus = "Status: Uploading...";
                        calibrationColor = Color.green;

                        // calibrationStatus = "Status: " + Data.Upload.Calibration(avgPressureReading, avgLength);
                        if (calibrationStatus == "Status: Upload Failed")
                        {
                            calibrationColor = Color.red;
                        }
                        else
                        {
                            calibrationColor = Color.green;
                        }

                        calibrating = false;
                        calibrationFinished = true;

                    }
                    else
                    {

                        pressureReadings.Clear();
                        breathLength = 0;

                        calibrating = false;

                        calibrationStatus = "Status: Calibraion Step " + calibrationStep.ToString() + " Complete";
                        calibrationColor = Color.green;

                        calibrationStep += 1;

                    }

                }
                // If length of breath was less than 1
                else
                {

                    calibrating = false;

                    pressureReadings.Clear();
                    breathLength = 0;

                    // Reset countdown and text
                    calibrationStatus = "Status: Please Try Again";
                    calibrationColor = Color.red;
                }

            }

        }
    }
}

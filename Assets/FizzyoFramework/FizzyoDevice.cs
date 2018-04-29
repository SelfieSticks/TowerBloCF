﻿using System;

#if UNITY_EDITOR
using System.IO;
using System.Timers;
#endif

// using System.Timers;
using UnityEngine;

namespace Fizzyo
{
    public class FizzyoDevice 
    {
        // True if pulling data from internal file
        public bool useRecordedData = false;

        // True if looping through recorded data
        public bool loop = true;

        // Data path of recorded data
         public string recordedDataPath = "Fizzyo/Data/FizzyoData_3min.fiz";

        //this si the maxmimun pressure to expect from the device, all incomming values will be mapped to it. 
        public float maxPressureCalibrated = 1.0f;

        //private static object threadLock = new System.Object();

        //protected
        // protected StreamReader fileReader = null;
        protected string text = " "; // assigned to allow first line to be read below
                                     // System.Timers.Timer pollTimer = new System.Timers.Timer();
        float pressure = 0;
    
#if UNITY_EDITOR
        private StreamReader fileReader = null;
        private Timer pollTimer;
#endif

        public bool Calibrated = false;

        public FizzyoDevice()
        {

        }

        //Cleanup  
        void OnApplicationQuit()
        {
#if UNITY_EDITOR
            //Close file pointer 
            if (fileReader != null)
            fileReader.Close();

            //Stop Timer 
            pollTimer.Stop();
#endif
        }
        
        
        /// <summary>
        /// If useRecordedData is set to false pressure data is streamed from the device or streamed from a log file if set to true.
        /// </summary>
        /// <returns>pressure data reported from device or log file with a range of -1 - 1.</returns>
        public float Pressure()
        {
            if (useRecordedData)
            {
                return pressure / maxPressureCalibrated;
            }
            else
            {
                if (Input.GetKey(KeyCode.Z))
                {
                    return 1f;
                }
                else
                {
                    return Input.GetAxisRaw("Horizontal") / maxPressureCalibrated;
                }
            }
        }

        public bool ButtonDown()
        {
            return Input.GetButtonDown("Fire1");
        }

#if UNITY_EDITOR
        internal void StartPreRecordedData(string path)
        {
            useRecordedData = true;
            recordedDataPath = path;

            //Open a StreamReader to our recorded data
            try
            {
                fileReader = new StreamReader(Application.dataPath + "/" + recordedDataPath);
            }
            catch
            {
                Debug.Log("could not load file " + recordedDataPath);
            }
            finally
            {
                Debug.Log("file loaded " + recordedDataPath);
                pollTimer = new Timer();
                pollTimer.Interval = 300; //load new pressure val every 30ms 
                pollTimer.Elapsed += PollLoggedData;
                pollTimer.Start();
            }
        }

        void PollLoggedData(object o, System.EventArgs e)
        {
            if (text != null)
            {
                text = fileReader.ReadLine();
                string[] parts = text.Split(' ');
                if (parts.Length == 2 && parts[0] == "v")
                {
                    float pressure = float.Parse(parts[1], System.Globalization.CultureInfo.InvariantCulture.NumberFormat) / 100.0f;
                    this.pressure = pressure;
                }

                if (loop && fileReader.EndOfStream)
                {
                    fileReader.DiscardBufferedData();
                    fileReader.BaseStream.Seek(0, System.IO.SeekOrigin.Begin);
                }
            }
        }
#endif

        public void SetCalibrationPressure(float maxPressure)
        {
            maxPressureCalibrated = maxPressure;
            Calibrated = true;
        }
       
    }
}
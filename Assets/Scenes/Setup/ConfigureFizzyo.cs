using System;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ConfigureFizzyo : MonoBehaviour
{
    private const string SETUP_DATE_KEY = "setupDate";
    

    void Start()
    {
        var isFirstTime = PlayerPrefs.GetString(SETUP_DATE_KEY, null) == null;
        if (isFirstTime)
        {
            var now = DateTime.UtcNow.ToString();
            PlayerPrefs.SetString(SETUP_DATE_KEY, now);

        }
    }
}

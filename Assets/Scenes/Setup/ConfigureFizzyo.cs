using System;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ConfigureFizzyo : MonoBehaviour
{
    [SerializeField] public string settingsSceneName;
    [SerializeField] public string menuSceneName;

    private const string SETUP_DATE_KEY = "setup_date";
    private const string DEFAULT_VALUE = "";

    void Start()
    {
        var setupDateString = PlayerPrefs.GetString(SETUP_DATE_KEY, DEFAULT_VALUE);

        var isFirstTime = setupDateString == DEFAULT_VALUE;
        if (isFirstTime)
        {
            var now = DateTime.UtcNow.ToString();
            Debug.Log(setupDateString);
            PlayerPrefs.SetString(SETUP_DATE_KEY, now);
            SceneManager.LoadScene(settingsSceneName);
        }
        else
        {
            Debug.Log(setupDateString);
            SceneManager.LoadScene(menuSceneName);
        }
    }
}

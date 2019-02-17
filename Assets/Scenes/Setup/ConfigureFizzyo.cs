using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using Fizzyo;

public class ConfigureFizzyo : MonoBehaviour
{
    [SerializeField] public string settingsSceneName;
    [SerializeField] public string menuSceneName;
    
    private const string DEFAULT_VALUE = "";

    void Start()
    {
        var setupDateString = PlayerPrefs.GetString(TowerBloCFPrefs.SETUP_FLAG, DEFAULT_VALUE);

        var isFirstTime = setupDateString == DEFAULT_VALUE;
        if (isFirstTime)
        {
            SceneManager.LoadScene(settingsSceneName);
        }
        else
        {
            Debug.Log("Settings last configured on: " + setupDateString);
            SceneManager.LoadScene(menuSceneName);
        }
    }
}

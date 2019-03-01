using System.Collections;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class RandomSceneAdder : MonoBehaviour
{
    [SerializeField] private string[] sceneNames;
    [SerializeField] private UnityEvent OnSceneMerge = new UnityEvent();

    public void AddAndMergeScene()
    {
        int index = Random.Range(0, sceneNames.Length);
        string sceneName = sceneNames[index];
        StartCoroutine(LoadYourAsyncScene(sceneName));
    }

    IEnumerator LoadYourAsyncScene(string sceneName)
    {
        Scene currentScene = SceneManager.GetActiveScene();
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync(sceneName, LoadSceneMode.Additive);
        
        while (!asyncLoad.isDone)
        {
            yield return null;
        }

        SceneManager.MergeScenes(SceneManager.GetSceneByName(sceneName), currentScene);
        OnSceneMerge.Invoke();
    }
}

using UnityEngine;
using UnityEngine.SceneManagement;

public class RandomSceneAdder : MonoBehaviour
{
    [SerializeField] private string[] sceneNames;

    public void AddScene()
    {
        int index = Random.Range(0, sceneNames.Length);
        string sceneName = sceneNames[index];
        SceneManager.LoadScene(sceneName, LoadSceneMode.Additive);
    }
}

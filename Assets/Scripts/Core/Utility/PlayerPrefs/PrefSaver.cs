using UnityEngine;

public class PrefSaver : MonoBehaviour
{
    [SerializeField] private string PrefName;

    public void Save(string value)
    {
        PlayerPrefs.SetString(PrefName, value);
    }

    public void SaveInt(int value)
    {
        PlayerPrefs.SetInt(PrefName, value);
    }

    public void Delete()
    {
        PlayerPrefs.DeleteKey(PrefName);
    }
}

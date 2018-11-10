using UnityEngine;

public class PrefSaver : MonoBehaviour
{
    [SerializeField] private string PrefName;

    public void Save(string value)
    {
        PlayerPrefs.SetString(PrefName, value);
    }
}

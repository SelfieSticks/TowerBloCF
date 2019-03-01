using UnityEngine;
using UnityEngine.UI;

public class PrefDisplay : MonoBehaviour
{
    [SerializeField] private string PrefName;
    [SerializeField] private InputField InputField;

    private void Start()
    {
        InputField.text = PlayerPrefs.GetString(PrefName);
    }
}

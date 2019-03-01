using UnityEngine;
using UnityEngine.UI;

public class NameValidator : MonoBehaviour
{
    [SerializeField] private InputField input;
    [SerializeField] private Button continueButton;

    public void Start()
    {
        Validate(input.text);
    }

    public void Validate(string name)
    {
        if(name == "")
        {
            continueButton.interactable = false;
        } else
        {
            continueButton.interactable = true;
        }
    }
}

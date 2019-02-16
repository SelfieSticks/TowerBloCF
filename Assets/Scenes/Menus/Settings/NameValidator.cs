using UnityEngine;
using UnityEngine.UI;

public class NameValidator : MonoBehaviour
{
    [SerializeField] InputField input;
    [SerializeField] Button continueButton;

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

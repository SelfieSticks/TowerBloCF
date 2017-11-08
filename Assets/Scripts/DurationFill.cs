using Fizzyo;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI.Extensions;

public class DurationFill : MonoBehaviour
{
    private UICircle circle;

    void Start()
    {
        circle = GetComponent<UICircle>();
    }

    private void Update()
    {
        circle.FillPercent = (int)(100 * (FizzyoFramework.Instance.Recogniser.BreathLength / FizzyoFramework.Instance.Recogniser.MaxBreathLength));
    }
}

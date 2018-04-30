using Fizzyo;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FadingController : MonoBehaviour
{
    /// <summary>
    /// The time it takes for the fog to start spreading again after it has been cleared.
    /// This should be a value close to the configured seconds per breath for the patient (+/- some constant)
    /// </summary>
    [SerializeField] private float cooldown = 2f;

    /// <summary>
    /// The required breath quality to achieve fog clearance.
    /// </summary>
    [SerializeField] private float breathThreshold = 0.6f;

    /// <summary>
    /// The rate at which fog becomes thicker.
    /// </summary>
    [SerializeField] private float fadingRate = 0.01f;

    /// <summary>
    /// The rate at which fog clears after breathThreshold has been observed.
    /// </summary>
    [SerializeField] private float clearingRate = 0.1f;
    [SerializeField] private AudioSource fogClearingSound;

    [SerializeField] private Image fadingImage;

    private bool isFading = true;

    private void ChangeTransparency(float delta)
    {
        var color = fadingImage.color;
        color.a += delta;

        color.a = Mathf.Clamp01(color.a);

        fadingImage.color = color;
    }

    IEnumerator ResetFading()
    {
        isFading = false;
        yield return new WaitForSeconds(cooldown);
        isFading = true;
    }

    private void Update()
    {
        if(ShouldClear() && isFading)
        {
            if(!fogClearingSound.isPlaying && fadingImage.color.a > 0.6)
                fogClearingSound.Play();
            StartCoroutine(ResetFading());
        }

        if (isFading)
        {
            ChangeTransparency(fadingRate * Time.deltaTime);
        } else
        {
            ChangeTransparency(-clearingRate * Time.deltaTime);
        }

    }

    private bool ShouldClear()
    {
        return FizzyoFramework.Instance.Device.Pressure() >= breathThreshold;
    }
}

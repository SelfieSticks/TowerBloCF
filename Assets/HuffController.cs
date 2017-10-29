using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class HuffController : MonoBehaviour
{
    private MonoBehaviour ui;
    [SerializeField] private Orbit camera;
    private int lastHuff = 0;

    public bool IsHuffing { get; private set; }
    // Use this for initialization
    void Start()
    {
        ui = GetComponent<Image>();
    }

    private void Update()
    {
        if (IsHuffing)
        {
            if ((Input.GetKeyDown(KeyCode.Space) || Input.touchCount > 0))
            {
                IsHuffing = false;
                ui.enabled = false;
                camera.cameraDistance += 3;

            }
        }

        var count = Fizzyo.FizzyoFramework.Instance.Recogniser.BreathCount;
        if (count == lastHuff + 10 /* < TODO */)
        {
            lastHuff = count;
            IsHuffing = true;
            ui.enabled = true;
            camera.cameraDistance -= 3;
        }
    }
}

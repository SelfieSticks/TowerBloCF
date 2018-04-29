using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class HuffController : MonoBehaviour
{
    private Image ui;
    [SerializeField] private Orbit camera;
    [SerializeField] private Sprite huffSprite;
    [SerializeField] private Sprite coughSprite;
    [SerializeField] private float huffTime = 4.0f;

    private int lastHuff = 0;
    private int huffs = 0;
    private int breathsPerSet;
    private int sets;

    public bool IsHuffing { get; private set; }
    // Use this for initialization
    void Start()
    {
        breathsPerSet = PlayerPrefs.GetInt("cf_breaths");
        sets = PlayerPrefs.GetInt("cf_sets");

        ui = GetComponent<Image>();
        Fizzyo.FizzyoFramework.Instance.Recogniser.BreathStarted += BreathStarted;
    }

    private void BreathStarted(object sender)
    {
        if (IsHuffing)
        {
            IsHuffing = false;
            ui.enabled = false;
            camera.cameraDistance += 3;
        }
    }

    private void Update()
    {
        var count = Fizzyo.FizzyoFramework.Instance.Recogniser.BreathCount;
        if (count == lastHuff + 1 + breathsPerSet /* < TODO */)
        {
            lastHuff = count;
            camera.cameraDistance -= 3;

            StartCoroutine(Huff());
        }
    }

    IEnumerator Huff()
    {
        IsHuffing = true;
        ui.enabled = true;
        ui.sprite = huffSprite;

        yield return new WaitForSeconds(huffTime);

        ui.sprite = coughSprite;

        huffs++;
        if(huffs == sets) 
        {
            // TODO END GAME
        }
    }
}

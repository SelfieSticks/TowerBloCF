using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class HuffController : MonoBehaviour
{
    [SerializeField] private AchievementManager achievementManager; // TODO integrate huffing banners properly
    [SerializeField] private Image huffBanner;
    [SerializeField] private Orbit orbitCam;
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
        achievementManager = FindObjectOfType<AchievementManager>();

        breathsPerSet = PlayerPrefs.GetInt("cf_breaths");
        sets = PlayerPrefs.GetInt("cf_sets");
        
        Fizzyo.FizzyoFramework.Instance.Recogniser.BreathStarted += BreathStarted;
    }

    private void BreathStarted(object sender)
    {
        if (IsHuffing)
        {
            IsHuffing = false;
            huffBanner.enabled = false;
            orbitCam.cameraDistance += 3;
        }
    }

    private void Update()
    {
        var count = Fizzyo.FizzyoFramework.Instance.Recogniser.BreathCount;
        if (count == lastHuff + 1 + breathsPerSet)
        {
            lastHuff = count;
            orbitCam.cameraDistance -= 3;

            StartCoroutine(Huff());
        }
    }

    IEnumerator Huff()
    {
        IsHuffing = true;
        huffBanner.enabled = true;
        huffBanner.sprite = huffSprite;

        yield return new WaitForSeconds(huffTime);

        huffBanner.sprite = coughSprite;

        huffs++;
        if(huffs == sets) 
        {
            // TODO END GAME
        }
    }
}

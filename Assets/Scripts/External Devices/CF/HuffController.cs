using System.Collections;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class HuffController : MonoBehaviour
{
    [SerializeField] private AchievementManager achievementManager; // TODO integrate huffing banners properly
    [SerializeField] private Image huffBanner;
    [SerializeField] private Orbit orbitCam;
    [SerializeField] private Sprite huffSprite;
    [SerializeField] private Sprite coughSprite;
    [SerializeField] private float huffTime = 4.0f;
    [SerializeField] private UnityEvent OnLevelEnd;

    private int firstCount;

    private int _lastHuff = 0;
    private int _huffs = 0;
    private int _breathsPerSet;
    private int _sets;

    public bool IsHuffing { get; private set; }
    public bool IsHuffLocked;

    private void Start()
    {
        achievementManager = FindObjectOfType<AchievementManager>();

        _breathsPerSet = PlayerPrefs.GetInt("cf_breaths");
        _sets = PlayerPrefs.GetInt("cf_sets");
        
        Fizzyo.FizzyoFramework.Instance.Recogniser.BreathStarted += BreathStarted;

        firstCount = Fizzyo.FizzyoFramework.Instance.Recogniser.BreathCount;
    }

    private void OnDestroy()
    {
        Fizzyo.FizzyoFramework.Instance.Recogniser.BreathStarted -= BreathStarted;
    }

    private void BreathStarted(object sender)
    {
        if (!IsHuffLocked && IsHuffing)
        {
            IsHuffing = false;
            huffBanner.enabled = false;
            orbitCam.cameraDistance += 3;
        }
    }

    private void Update()
    {
        var count = Fizzyo.FizzyoFramework.Instance.Recogniser.BreathCount - firstCount;

        if (IsHuffLocked)
        {
            _lastHuff = count;
        } 
        else if (count == _lastHuff + 1 + _breathsPerSet)
        {
            _lastHuff = count;
            orbitCam.cameraDistance -= 3;

            StartCoroutine(Huff());
        }
    }

    IEnumerator Huff()
    {
        IsHuffing = true;
        IsHuffLocked = true;
        huffBanner.enabled = true;
        huffBanner.sprite = huffSprite;

        yield return new WaitForSeconds(huffTime);
        IsHuffLocked = false;

        huffBanner.sprite = coughSprite;

        _huffs++;
        if(_huffs == _sets) 
        {
            OnLevelEnd.Invoke();
        }
    }
}

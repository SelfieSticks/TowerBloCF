using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(BlockEventBroadcaster))]
public class AchievementManager : BlockEventReceiver 
{
    // TODO split banner showing

    private ScoreTracker st;

    [SerializeField] private Sprite[] banners = new Sprite[100];
    [SerializeField] private Image banner;
    [SerializeField] private float bannerDuration = 3.0f;
    [SerializeField] private float fadeTime = 2.0f;

    private bool[] achievement = new bool[3];

    private int bannerPriority;

    protected override void Awake() 
    {
        base.Awake();
        st = GetComponent<ScoreTracker>();
    }

    protected override void OnBlockEvent() 
    {
        CheckAchievements();
    }

    private void CheckAchievements () 
    {
		if(st != null) 
        {
            if (st.Score >= 10000)
                AcquireAchievement(2);
            else if (st.Score >= 1000)
                AcquireAchievement(1);
            else if (st.Score >= 100)
                AcquireAchievement(0);
        }
	}

    private void AcquireAchievement(int achID) 
    {
        if(achievement[achID]) {
            return;
        }
        achievement[achID] = true;
        DisplayBanner(banners[achID], 1);
    }

    public void DisplayBanner(Sprite sprite, int priority) {
        if(bannerPriority < priority) {
            StopCoroutine(DisplayBanner());
            bannerPriority = priority;

            banner.sprite = sprite;
            StartCoroutine(DisplayBanner());
        }
    }

    private IEnumerator DisplayBanner() 
    {
        // Make the banner visible
        Color c = banner.color;
        c.a = 1.0f;
        banner.color = c;
        yield return new WaitForSeconds(bannerDuration);

        // Fade the banner
        float fade = 0.05f / fadeTime;
        while(banner.color.a != 0) 
        {
            c = banner.color;
            c.a = Mathf.Max(0.0f, c.a - fade);
            banner.color = c;
            yield return new WaitForSeconds(0.05f);
        }

        bannerPriority = 0;
    }
}

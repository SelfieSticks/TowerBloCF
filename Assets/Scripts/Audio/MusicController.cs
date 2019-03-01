using UnityEngine;

[RequireComponent(typeof(AudioSource))]
public class MusicController : MonoBehaviour {
    public enum MusicType {
        NONE,
        Menu,
        Game
    }

    private static MusicController Instance;
    [SerializeField] private MusicType musicType = MusicType.NONE;
    private AudioClip[] musicSet;
    private int trackIndex = 0;
    private AudioSource audsrc;

    [SerializeField] private bool RandomiseOrder;
    
	private void Start () {
        if(!Instance) {
            Instance = this;
            DontDestroyOnLoad(this);
            audsrc = GetComponent<AudioSource>();
        } else {
            Instance.RandomiseOrder = RandomiseOrder;
        }
        ChangeMusicSet(musicType);
	}
	
	private void Update () {
        if(this != Instance) {
            return;
        }

        if(!audsrc.isPlaying) {
            int setLength = musicSet.Length;
            if(setLength > 0) {
                if(RandomiseOrder) {
                    trackIndex = Random.Range(0, setLength);
                }

                audsrc.PlayOneShot(musicSet[trackIndex]);

                trackIndex += 1;
                if (trackIndex >= setLength) {
                    trackIndex %= setLength;
                }
            }
        }
	}

    // Can be called to change the music
    public void ChangeMusicSet(MusicType newMusic) {
        if (this != Instance) {
            Instance.ChangeMusicSet(newMusic);
            Destroy(gameObject);
        } else if (newMusic != MusicType.NONE && (musicSet == null || newMusic != musicType)) {
            audsrc.Stop();

            musicType = newMusic;

            // For now, just dynamically load music here
            musicSet = Resources.LoadAll<AudioClip>("Audio/Music/" + newMusic.ToString());

            // Reset track index offset to vary music more
            trackIndex = 0;
        }
    }
}

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(AudioSource))]
public class MusicController : MonoBehaviour {
    public enum MusicSet {
        NONE,
        Menu,
        Game
    }

    private static MusicController Instance;
    [SerializeField] private MusicSet music = MusicSet.NONE;
    private AudioClip[] musicSet;
    private int trackIndex = 0;
    private AudioSource audsrc;
    
	private void Start () {
        if(!Instance) {
            Instance = this;
            DontDestroyOnLoad(this);
            audsrc = GetComponent<AudioSource>();
        }
        ChangeMusicSet(music);
	}
	
	private void Update () {
        if(this != Instance) {
            return;
        }

        if(!audsrc.isPlaying) {
            int setLength = musicSet.Length;
            if(setLength > 0) {
                audsrc.PlayOneShot(musicSet[trackIndex]);

                trackIndex += 1;
                if (trackIndex >= setLength) {
                    trackIndex %= setLength;
                }
            }
        }
	}

    // Can be called to change the music
    public void ChangeMusicSet(MusicSet newMusic) {
        if (this != Instance) {
            Instance.ChangeMusicSet(newMusic);
        } else if (newMusic != MusicSet.NONE && (musicSet == null || newMusic != music)) {
            audsrc.Stop();

            music = newMusic;
            // Keep track index, to vary music more
            // trackIndex = 0;

            // For now, just dynamically load music here
            musicSet = Resources.LoadAll<AudioClip>("Audio/Music/" + newMusic.ToString());
        }
    }
}

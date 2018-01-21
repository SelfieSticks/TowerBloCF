using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(AudioSource))]
public class MusicController : MonoBehaviour {
    public enum MusicSet {
        Menu,
        Game
    }
    private string[] paths;

    private static MusicController Instance;
    [SerializeField] public MusicSet music;
    private AudioClip[] musicSet;
    private int trackIndex = 0;
    private AudioSource audsrc;
    
	void Start () {
        audsrc = GetComponent<AudioSource>();

        if(Instance) {
            Instance.ChangeMusicSet(music);
        } else {
            ChangeMusicSet(music);
            Instance = this;
            DontDestroyOnLoad(this);
        }
	}
	
	void Update () {
        if(Instance != this) {
            return;
        }

        transform.position = Camera.main.transform.position;
		
        if(!audsrc.isPlaying && musicSet != null) {
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

    public void ChangeMusicSet(MusicSet newMusic) {
        if (!Instance || newMusic != music) {
            audsrc.Stop();

            music = newMusic;
            // Keep track index, vary music more

            musicSet = Resources.LoadAll<AudioClip>("Audio/Music/" + newMusic.ToString());
        }
    }
}

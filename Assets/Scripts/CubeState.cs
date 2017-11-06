using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeState : MonoBehaviour {

    [SerializeField] private Material normal;
    [SerializeField] private Material lit;
    [SerializeField] private Material gold;

    [SerializeField] private float goldAccuracy = .05f;
    [SerializeField] private float litAccuracy = .15f;

    [SerializeField] private AudioClip normalSound;
    [SerializeField] private AudioClip goldSound;

    public BlockType CubeType { get; private set; }

    private AudioSource audioSource;
    private new Renderer renderer;

	// Use this for initialization
	void Start () {
        renderer = GetComponent<Renderer>();
        renderer.material = normal;
        CubeType = BlockType.NORMAL;

        audioSource = GetComponent<AudioSource>();
        audioSource.clip = normalSound;
	}
	
    private void LightOn()
    {
        CubeType = BlockType.LIT;
        renderer.material = lit;
    }

    private void Gold()
    {
        CubeType = BlockType.GOLD;
        renderer.material = gold;
        audioSource.clip = goldSound;
    }

    internal void Set(float acc)
    {
        if (acc <= goldAccuracy)
        {
            Gold();
        } else if(acc <= litAccuracy)
        {
            LightOn();
        }
        audioSource.Play();
    }
}

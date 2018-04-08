using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeState : MonoBehaviour {

    [SerializeField] private Material normal;
    [SerializeField] private Material lit;
    [SerializeField] private Material gold;
    [SerializeField] private Material[] randMaterial;

    [SerializeField] private float goldAccuracy = .05f;
    [SerializeField] private float litAccuracy = .15f;

    [SerializeField] private AudioClip normalSound;
    [SerializeField] private AudioClip goldSound;
    [SerializeField] private AudioClip randomSound;

    [SerializeField] public bool randomBlock;

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

        if(randomBlock) {
            Rand();
        }
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

    private void Rand() 
    {
        CubeType = BlockType.RANDOM;
        renderer.material = randMaterial[Random.Range(0, randMaterial.Length - 1)];
        audioSource.clip = randomSound;
    }

    internal void Set(float acc)
    {
        if(CubeType == BlockType.RANDOM) 
        {
            audioSource.Play();
            return;
        }

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

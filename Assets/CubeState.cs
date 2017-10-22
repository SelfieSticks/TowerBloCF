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

    private Renderer renderer;

	// Use this for initialization
	void Start () {
        renderer = GetComponent<Renderer>();
        renderer.material = normal;
	}
	
    private void LightOn()
    {
        renderer.material = lit;
    }

    private void Gold()
    {
        renderer.material = gold;
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
    }
}

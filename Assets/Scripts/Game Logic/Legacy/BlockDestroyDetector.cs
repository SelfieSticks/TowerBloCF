﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlockDestroyDetector : MonoBehaviour {

    // Use this for initialization
    void Start() {

    }

    // Update is called once per frame
    void Update() {

    }


    void OnTriggerEnter(Collider colider) {
        Destroy(colider.gameObject);
    }
}

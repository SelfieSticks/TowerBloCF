using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Rotates around Y
public class Spinner : MonoBehaviour
{
    [SerializeField] private float rotationSpeed = 10;

    void Update()
    {
        transform.Rotate(Vector3.up, Time.deltaTime * rotationSpeed, Space.World);
    }
}

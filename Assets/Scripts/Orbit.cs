using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Orbit : MonoBehaviour
{
    [SerializeField] private Transform target;
    [SerializeField] private float cameraDistance = 10;
    [SerializeField] private float rotationSpeed = 10;
    [SerializeField] private float verticalOffsetFromTarget = 4;

    private Vector3 cameraRotation;
    private float cameraAngle;

    private void Start()
    {
        cameraRotation = Vector3.zero;
    }

    private void Update()
    {
        cameraAngle += rotationSpeed * Time.deltaTime;
        cameraAngle %= 2 * Mathf.PI;

        cameraRotation.x = cameraDistance * Mathf.Sin(cameraAngle);
        cameraRotation.z = cameraDistance * Mathf.Cos(cameraAngle);

        cameraRotation.y = Mathf.Lerp(cameraRotation.y, target.position.y + verticalOffsetFromTarget, .1f);
    }
    
    private void LateUpdate()
    {
        SetCameraTransform();
    }

    // Update the position and orientation of the camera to match the cameraRotation and cameraDistance
    private void SetCameraTransform()
    {
        // Set the position of the camera based on the desired rotation towards and distance from the Player model
        transform.localPosition = cameraRotation;

        // Set the camera to look towards the Player model
        transform.LookAt(target);
    }
}

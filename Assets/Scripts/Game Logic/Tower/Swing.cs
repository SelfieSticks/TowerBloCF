using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Swing : MonoBehaviour
{
    [SerializeField] private float swingPower = 2;

    private static readonly float maxVelocityAllowedSwing = 2f;
    private static readonly int secondsBetweenSwings = 10;
    

    private Rigidbody body;

    // Use this for initialization
    void Start()
    {
        body = GetComponent<Rigidbody>();
        StartCoroutine(SwingCoroutine());
    }

    IEnumerator SwingCoroutine()
    {
        while (true)
        {
            if (body.velocity.magnitude <= maxVelocityAllowedSwing)
            {
                var direction = body.velocity.x >= 0 ? Vector3.right : Vector3.left;
                body.AddRelativeForce(swingPower * direction, ForceMode.VelocityChange);
            }
            yield return new WaitForSeconds(secondsBetweenSwings);
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(CubeState))]
public class AttachOnCollision : MonoBehaviour
{
    private Rigidbody rb;
    private CubeState cubeState;
    
    private TopBlock top;
    private BlockEventBroadcaster blockEventBroadcaster;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        cubeState = GetComponent<CubeState>();

        blockEventBroadcaster = FindObjectOfType<BlockEventBroadcaster>();
        top = FindObjectOfType<TopBlock>(); // Unused, maybe for attaching to the top block only?
    }

    private void OnCollisionEnter(Collision collision)
    {
        // Attached blocks are unchanged on collision
        if(cubeState.towerBlock) {
            return;
        }

        // Hitting the ground causes destruction
        if (collision.gameObject.tag.Equals("Ground")) {
            Destroy(gameObject);
            return;
        }

        // Contact with a block
        var otherCubestate = collision.gameObject.GetComponent<CubeState>();
        if(otherCubestate) {
            var acc = HorizontalAccuracy(transform.position, collision.transform.position);
            cubeState.Set(acc);
            StartCoroutine(Solidify(collision, otherCubestate));
        }
    }

    private void OnCollisionExit(Collision collision) {
        StopCoroutine("Solidify");
    }

    private float HorizontalAccuracy(Vector3 a, Vector3 b)
    {
        float dx = a.x - b.x;
        float dz = a.z - b.z;
        return Mathf.Sqrt(dx * dx + dz * dz);
    }

    /// <summary>
    /// Attempt to attach one block on to another.
    /// </summary>
    /// <returns></returns>
    private IEnumerator Solidify(Collision collision, CubeState otherCubeState)
    {
        /* Check for n frames of 0.2f that the cube satisfies stability requirements.
         * Upon failure, attempt another n frames.
         * 
         * Requirements:
         *  - Tilt distance is small (difference of up vectors)
         *  - XYZ distance is small
         *  
         *  Second Derivatives
         *  - Tilt distance has not changed much
         *  - XYZ distance has not changed much
         */
        {
            float propagateTime = 0.2f;

            // Wait for the other block to be part of the tower
            while(!otherCubeState.towerBlock) {
                yield return new WaitForSeconds(propagateTime);
            }

            int n = 3;
            float frameTime = 0.2f;

            float minTilt = 0.2f;
            float minDTilt = 0.1f;
            float minDist = 1.3f;
            float minDDist = 0.2f;

            float lastTilt = (transform.up - collision.transform.up).magnitude;
            float lastDist = (transform.position - collision.transform.position).magnitude;
            int stabilityFrames = 0;
            while(stabilityFrames < n) 
            {
                yield return new WaitForSeconds(frameTime);

                if(collision.collider == null) {
                    yield break;
                }

                float tilt = (transform.up - collision.transform.up).magnitude;
                float dist = (transform.position - collision.transform.position).magnitude;

                float dd = Mathf.Abs(dist - lastDist);
                float dt = Mathf.Abs(tilt - lastTilt);

                if (dist < minDist && dd < minDDist && tilt < minTilt && dt < minDTilt)
                {
                    stabilityFrames++;
                } else {
                    stabilityFrames = 0;
                }
            }
        }

        var joint = gameObject.AddComponent<FixedJoint>();

        cubeState.towerBlock = true;
        joint.connectedBody = collision.rigidbody;
        
        if (blockEventBroadcaster) {
            // Handle global side-effects of landing block
            blockEventBroadcaster.OnBlockLand(cubeState);
        }
        
        rb.isKinematic = true;
    }
}

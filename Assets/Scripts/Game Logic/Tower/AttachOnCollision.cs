using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(CubeState))]
public class AttachOnCollision : MonoBehaviour
{
    public bool isAttached;

    private bool touched;
    private Collision touchedCollision;
    private Rigidbody rb;
    private CubeState cubeState;

    private Vector2 touchPos;

    private float touchY;
    private BlockEventBroadcaster blockEventBroadcaster;
    private TopBlock top;

    [SerializeField] private float breakForce;
    [SerializeField] private float fixTime = 5f;


    // Use this for initialization
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        cubeState = GetComponent<CubeState>();

        blockEventBroadcaster = FindObjectOfType<BlockEventBroadcaster>();
        top = FindObjectOfType<TopBlock>(); // Unused, maybe for attaching to the top block only?
    }

    private void OnCollisionEnter(Collision collision)
    {
        // Hit the ground
        if (!isAttached && collision.gameObject.tag.Equals("Ground"))
        {
            Destroy(gameObject);
            return;
        }

        // First contact
        if (!touched || touchedCollision.collider == null)
        {
            touched = true;

            var acc = Accuracy(transform.position, collision.transform.position);
            cubeState.Set(acc);

            touchedCollision = collision;
            touchPos = transform.position;
            StartCoroutine(Solidify());
        }

        // Secondary collision with a non-tower block, before attaching
        if (touched && collision.gameObject != touchedCollision.gameObject
            && !isAttached && !collision.gameObject.GetComponent<AttachOnCollision>().isAttached)
        {
            Destroy(gameObject);
        }
    }

    private float Accuracy(Vector3 a, Vector3 b)
    {
        float dx = a.x - b.x;
        float dz = a.z - b.z;
        return Mathf.Sqrt(dx * dx + dz * dz);
    }

    private IEnumerator Solidify()
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
            int n = 3;
            float frameTime = 0.2f;

            float minTilt = 0.2f;
            float minDTilt = 0.1f;
            float minDist = 1.3f;
            float minDDist = 0.2f;

            float lastTilt = (transform.up - touchedCollision.transform.up).magnitude;
            float lastDist = (transform.position - touchedCollision.transform.position).magnitude;
            int stabilityFrames = 0;
            while(stabilityFrames < n) 
            {
                if(touchedCollision.collider == null) {
                    yield break;
                }

                float tilt = (transform.up - touchedCollision.transform.up).magnitude;
                float dist = (transform.position - touchedCollision.transform.position).magnitude;

                float dd = Mathf.Abs(dist - lastDist);
                float dt = Mathf.Abs(tilt - lastTilt);

                if (dist < minDist && dd < minDDist && tilt < minTilt && dt < minDTilt)
                {
                    stabilityFrames++;
                } else {
                    stabilityFrames = 0;
                }

                yield return new WaitForSeconds(frameTime);
            }
        }

        var joint = gameObject.AddComponent<FixedJoint>();
        joint.breakForce = breakForce;

        isAttached = true;
        joint.connectedBody = touchedCollision.rigidbody;
        
        if (blockEventBroadcaster) {
            // Handle global side-effects of landing block
            blockEventBroadcaster.OnBlockLand(cubeState);
        }

        // TODO: perhaps should be related to the # of blocks attached / dropped since this one instead
        yield return new WaitForSeconds(fixTime);
        rb.isKinematic = true;
    }
}

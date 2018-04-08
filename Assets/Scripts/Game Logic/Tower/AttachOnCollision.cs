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
        if (!touched)
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
        int stabilityFrames = 0;
        Vector2 lastPos = transform.position;
        float lastRot = transform.rotation.z;
        while(stabilityFrames < 3) {
            float ds = (lastPos - (Vector2)transform.position).magnitude;
            float dr = Mathf.Rad2Deg * Mathf.Abs(lastRot - transform.rotation.z);
            if(ds < 0.1f && dr < 5)
            {
                stabilityFrames++;
            } else {
                stabilityFrames = 0;
            }
            lastPos = transform.position;
            lastRot = transform.rotation.z;
            yield return new WaitForSeconds(0.2f);
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
        yield return new WaitForSeconds(10);
        rb.isKinematic = true;
    }
}

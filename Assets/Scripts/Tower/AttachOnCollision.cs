using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(CubeState))]
public class AttachOnCollision : MonoBehaviour
{
    public bool isAttached;
    private bool isTouching;
    private Collision touchCollision;
    private Rigidbody body;
    private CubeState state;
    private Vector2 touchPos;

    [SerializeField] private float breakForce;

    // Use this for initialization
    void Start()
    {
        body = GetComponent<Rigidbody>();
        state = GetComponent<CubeState>();
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (!isTouching && collision.gameObject.GetComponent<AttachOnCollision>() != null)
        {
            isTouching = true;

            var acc = Accuracy(transform.position, collision.transform.position);
            state.Set(acc);

            touchCollision = collision;
            touchPos = transform.position;
            StartCoroutine(Solidify());
        }

        if (!isAttached && collision.gameObject.tag.Equals("Ground"))
        {
            Destroy(gameObject);
        }
    }

    private void OnCollisionExit(Collision collision) {
        // Assume one collision at a time as PoC
        StopCoroutine(Solidify());
    }

    private float Accuracy(Vector3 a, Vector3 b)
    {
        return Mathf.Abs(a.x - b.x) + Mathf.Abs(a.z - b.z);
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
        joint.connectedBody = touchCollision.rigidbody;

        var lm = GameObject.FindGameObjectWithTag("LevelManager");
        if (lm)
            lm.GetComponent<BlockEventBus>().OnBlockLand(state);

        // TODO: perhaps should be related to the # of blocks attached / dropped since this one instead
        yield return new WaitForSeconds(10);
        body.isKinematic = true;
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AttachOnCollision : MonoBehaviour
{
    public bool isAttached;
    private bool isTouching;
    private Collision touchCollision;
    private Rigidbody body;
    private CubeState state;

    [SerializeField] private float breakForce;

    // Use this for initialization
    void Start()
    {
        body = GetComponent<Rigidbody>();
        state = GetComponent<CubeState>();
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (!isTouching)
        {
            isTouching = true;
            touchCollision = collision;

            var acc = Accuracy(transform.position, collision.transform.position);
            state.Set(acc);
        }

        if (isTouching && collision.gameObject != touchCollision.gameObject
            && !isAttached && !collision.gameObject.GetComponent<AttachOnCollision>().isAttached)
        {
            // TODO: Use collision.contacts to adjust the break force
            // and possibly don't add a joint if collision is awkward.
            // var body = collision.gameObject.GetComponent<Rigidbody>();

            var joint = gameObject.AddComponent<FixedJoint>();
            joint.breakForce = breakForce;

            isAttached = true;
            joint.connectedBody = touchCollision.rigidbody;

            StartCoroutine(Solidify());

            //ScoreManager.OnAttach(gameObject);
        }
    }

    private float Accuracy(Vector3 a, Vector3 b)
    {
        return Mathf.Abs(a.x - b.x) + Mathf.Abs(a.z - b.z);
    }

    private IEnumerator Solidify()
    {
        // TODO: perhaps should be related to the # of blocks attached / dropped since this one instead
        yield return new WaitForSeconds(10);
        body.isKinematic = true;
    }
}

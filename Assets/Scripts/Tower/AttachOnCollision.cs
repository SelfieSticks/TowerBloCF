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
    private float touchY;

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
            touchCollision = collision;
            touchY = transform.position.y;

            var acc = Accuracy(transform.position, collision.transform.position);
            state.Set(acc);

            StartCoroutine(Solidify());
        }

        if (!isAttached && collision.gameObject.tag.Equals("Ground"))
        {
            Destroy(gameObject);
        }

        var lm = GameObject.FindGameObjectWithTag("LevelManager");
        if(lm)
            lm.GetComponent<BlockEventBus>().OnBlockLand(state);

    }

    private float Accuracy(Vector3 a, Vector3 b)
    {
        return Mathf.Abs(a.x - b.x) + Mathf.Abs(a.z - b.z);
    }

    private IEnumerator Solidify()
    {
        yield return new WaitForSeconds(1f);

        if (Mathf.Abs(touchY - transform.position.y) <= 0.3)
        {
            var joint = gameObject.AddComponent<FixedJoint>();
            joint.breakForce = breakForce;

            isAttached = true;
            joint.connectedBody = touchCollision.rigidbody;
        }

        // TODO: perhaps should be related to the # of blocks attached / dropped since this one instead
        yield return new WaitForSeconds(10);
        body.isKinematic = true;
    }
}

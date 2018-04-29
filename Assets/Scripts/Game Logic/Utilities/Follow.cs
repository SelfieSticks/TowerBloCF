using UnityEngine;

public class Follow : MonoBehaviour {
    [SerializeField] private GameObject target;
    [SerializeField] private float lerpRate = 0.25f;
    [SerializeField] public Vector3 offset;
    [SerializeField] private bool lockX;
    [SerializeField] private bool lockY;
    [SerializeField] private bool lockZ;

    private Vector3 targetPos;
	
	// Update is called once per frame
	void FixedUpdate () {
        if (target)
        {
            targetPos = target.transform.position + offset;
            if(lockZ) {
                targetPos.z = transform.position.z;
            }
            if(lockY) {
                targetPos.y = transform.position.y;
            }
            if(lockX) {
                targetPos.x = transform.position.x;
            }
            transform.position = Vector3.Lerp(transform.position, targetPos, lerpRate);
        }

    }
}

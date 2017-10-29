using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwingSpawner : MonoBehaviour {

    [SerializeField] private GameObject prefabToSpawn;
    [SerializeField] private HuffController huff;

    private HingeJoint joint;
    private bool canDrop;

    // Use this for initialization
    void Start()
    {
        joint = Instantiate(prefabToSpawn, this.transform.position, Quaternion.identity).GetComponent<HingeJoint>();
        canDrop = true;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (canDrop && !huff.IsHuffing && (Input.GetKeyDown(KeyCode.Space) || Input.touchCount > 0))
        {
            // Remove rope
            Destroy(joint.GetComponent<LineRenderer>());

            joint.breakForce = 0;
            this.transform.Translate(Vector3.up);
            StartCoroutine(WaitAndSpawn());
        }
    }

    IEnumerator WaitAndSpawn()
    {
        canDrop = false;

        yield return new WaitForSeconds(.5f);
        joint = Instantiate(prefabToSpawn, this.transform.position, Quaternion.identity).GetComponent<HingeJoint>();
        canDrop = true;
    }
}

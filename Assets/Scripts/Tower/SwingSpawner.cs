using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwingSpawner : MonoBehaviour {

    [SerializeField] private GameObject prefabToSpawn;
    [SerializeField] private HuffController huff;

    private HingeJoint joint;
    private Rigidbody swingingBody;
    private Vector3 savedVelocity;
    private Vector3 savedAngularVelocity;
    private bool canDrop;

    // Use this for initialization
    void Start()
    {
        SpawnBlock();
    }

    // Update is called once per frame
    void Update()
    {
        if (huff.IsHuffing && !swingingBody.isKinematic)
        {
            savedVelocity = swingingBody.velocity;
            savedAngularVelocity = swingingBody.angularVelocity;
            swingingBody.isKinematic = true;
        }

        if (!huff.IsHuffing && swingingBody.isKinematic) {
            swingingBody.isKinematic = false;
            swingingBody.AddForce(savedVelocity, ForceMode.VelocityChange);
            swingingBody.AddTorque(savedAngularVelocity, ForceMode.VelocityChange);
        }

        if (canDrop && !huff.IsHuffing && (Input.GetKeyDown(KeyCode.Space) || Input.touchCount > 0))
        {
            // Remove rope
            Destroy(joint.GetComponent<LineRenderer>());

            joint.breakForce = 0;
            StartCoroutine(WaitAndSpawn());
        }
    }

    IEnumerator WaitAndSpawn()
    {
        canDrop = false;

        yield return new WaitForSeconds(.5f);
        SpawnBlock();
    }

    private void SpawnBlock() {
        GameObject block = Instantiate(prefabToSpawn, this.transform.position, Quaternion.identity);
        joint = block.GetComponent<HingeJoint>();
        joint.anchor = transform.position;
        swingingBody = block.GetComponent<Rigidbody>();
        canDrop = true;
    }
}

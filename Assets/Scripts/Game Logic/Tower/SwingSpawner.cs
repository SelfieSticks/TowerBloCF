using Fizzyo;
using System.Collections;
using UnityEngine;

public class SwingSpawner : MonoBehaviour {
    //TODO clean up this component

    [SerializeField] private GameObject prefabToSpawn;
    [SerializeField] private HuffController huff;

    [SerializeField] private int randomBlockIntervalMin;
    [SerializeField] private int randomBlockIntervalMax;
    [SerializeField] private int nextRandomBlock;

    private Rigidbody spawnerBody;
    private float yTop = 10f;

    private HingeJoint joint;
    private Vector3 savedVelocity;
    private Vector3 savedAngularVelocity;
    private bool canDrop;

    private int spawnCount;

    void Start()
    {
        spawnerBody = GetComponent<Rigidbody>();
        SpawnBlock();
    }

    // Update is called once per frame
    void Update()
    {
        if (canDrop && !huff.IsHuffing && DetectDropInput())
        {
            canDrop = false;

            // Remove rope & detach
            joint.transform.parent = null;
            Destroy(joint.GetComponent<LineRenderer>());
            Destroy(joint);

            // Pull rope up
            transform.position = transform.position + yTop * Vector3.up;

            StartCoroutine(WaitAndSpawn());
        }
    }

    private bool DetectDropInput()
    {
        return 
            Input.GetKeyDown(KeyCode.Space) ||
            FizzyoFramework.Instance.Device.ButtonDown() || 
            Input.touchCount > 0;
    }

    IEnumerator WaitAndSpawn()
    {
        yield return new WaitForSeconds(.5f);

        SpawnBlock();
    }

    private void SpawnBlock() {
        canDrop = true;

        GameObject block = Instantiate(prefabToSpawn, transform.position, Quaternion.identity);
        block.name = "Dropped Block (" + spawnCount + ")";
        block.transform.parent = transform;

        joint = block.GetComponent<HingeJoint>();
        joint.connectedBody = spawnerBody;

        // Block Randomisation
        if (nextRandomBlock == 0) {
            nextRandomBlock = Random.Range(randomBlockIntervalMin, randomBlockIntervalMax);
            block.GetComponent<CubeState>().randomBlock = true;
        } else {
            nextRandomBlock--;
        }

        spawnCount++;
    }
}

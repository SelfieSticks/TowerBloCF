using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace Assets.Scripts {
    class BlockSnap : MonoBehaviour {

        private Rigidbody rigidbody;
        private Tower playerTower;
        private float movingOffset;
        private float CoordinateOnLastFixedUpdateY;
        private const float groundedEpsilon = 0.05f;
        private bool isGrounded2;

        private void Awake()
        {
            rigidbody = this.GetComponent<Rigidbody>();
            
        }

        private void Start()
        {
            // TODO: fix when we have a decent way to assign links
            playerTower = Tower.singlePlayerTower;
            CoordinateOnLastFixedUpdateY = this.gameObject.transform.position.y;
            StartCoroutine("checkIsGrounded");


        }

        IEnumerator checkIsGrounded()
        {
            // wait till it accelerate
            yield return new WaitForSeconds(0.9f);

            while (true)
            {
                // calculates the moving distance of a fixed update
                movingOffset = Mathf.Abs(gameObject.transform.position.y - CoordinateOnLastFixedUpdateY);
                CoordinateOnLastFixedUpdateY = gameObject.transform.position.y;
                if (movingOffset < groundedEpsilon)
                {
                    //Debug.Log("within grounded epsilon");
                    isGrounded2 = true;
                }
                // checks if landed and increase the mass to not be jiggly
                if (isGrounded2)
                {
                    Debug.Log("grounded");
                    rigidbody.mass = 100;
                    playerTower.TrySetBlock(this.gameObject);
                    // stops the current coroutine
                    yield break;
                }

                yield return new WaitForFixedUpdate();
            }
        }

    }
}

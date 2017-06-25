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


        private void Awake()
        {
            rigidbody = this.GetComponent<Rigidbody>();
        }

        private void Start()
        {
            // TODO: fix when we have a decent way to assign links
            playerTower = Tower.singlePlayerTower;
            StartCoroutine("checkIsGrounded");

        }

        IEnumerator checkIsGrounded()
        {
            Debug.Log(rigidbody.IsSleeping());

            while (true)
            {
                // checks if landed and increase the mass to not be jiggly
                if (rigidbody.IsSleeping())
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
        private void FixedUpdate()
        {

        }
    }
}

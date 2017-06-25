using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace Assets.Scripts {

    public class Tower {

        public delegate void LandingUpdate(GameObject newBlock);
        public LandingUpdate landingHandler;// = DebugLanding;

        public static Tower singlePlayerTower;//only for test purposes to be accessable due to not selected way how this will be accessed
        private float distanceBetweenBlocks; // distance that is considered as between blocks
        private float blockWidth;

        private Stack<GameObject> towerBlocks = new Stack<GameObject>();
        public GameObject TopBlock { get { return UpdateTopmostBlock(); } }
        public int blocklevels { get { return towerBlocks.Count; } }// number of succesfully stacked blocks

        public Tower(GameObject initialPlatform, float distanceBetweenBlocks, float blockWidth)
        {
            AddBlock(initialPlatform);

            this.distanceBetweenBlocks = distanceBetweenBlocks;
            this.blockWidth = blockWidth;
            singlePlayerTower = this;
        }

        public void TrySetBlock(GameObject newBlock)
        {
            float dist = newBlock.transform.position.y - TopBlock.transform.position.y;
            // checks vertically
            if (dist < distanceBetweenBlocks + 0.1f && dist > 0)
            {
                float horizontalDist = Mathf.Abs(newBlock.transform.position.x - TopBlock.transform.position.x);

                // if it is not well centered allow it to have rigid body to fall
                if(horizontalDist>1.5f)
                {
                    newBlock.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezePositionZ;

                }
                else // it is positioned so it doesnt fall
                {
                    AddBlock(newBlock);
                    Debug.Log("horizontalDist:" + horizontalDist);
                    landingHandler(newBlock);
                    // if it is close enough make it golden and and group blocks
                    if(horizontalDist<0.4f)
                    {
                        GameObject.Destroy(newBlock.GetComponent<Rigidbody>());
                        newBlock.transform.SetParent(TopBlock.transform);
                        //make it golden
                        newBlock.GetComponent<Renderer>().material = GameManager.goldenBoxMaterial;
                         
                    }
                    return;
                }
            }

            //edge case when it drops let it fall on its own too
            newBlock.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezePositionZ;

        }

        private void AddBlock(GameObject newBlock) {
            towerBlocks.Push(newBlock);
        }

        public GameObject UpdateTopmostBlock() {
            GameObject topBlock = towerBlocks.Peek();
            // Check for latest standing block (assumes fallen blocks will be destroyed)
            while (topBlock == null) {
                topBlock = towerBlocks.Pop();
                topBlock = towerBlocks.Peek();
            }
            landingHandler(topBlock);
            return topBlock;
        }

        private static void DebugLanding(GameObject newBlock) {
            Debug.Log("New block on top at: " + newBlock.transform.position);
        }
    }
}

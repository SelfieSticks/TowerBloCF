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
                if (horizontalDist < blockWidth)
                {
                    AddBlock(newBlock);
                    landingHandler(newBlock);
                    return;
                }
            }
            // if it is plotted properly it should not reach this code
            // so we delete the object
            GameObject.Destroy(newBlock);
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

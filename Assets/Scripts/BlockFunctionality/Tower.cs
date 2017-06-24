using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace Assets.Scripts {

    public class Tower {

        public delegate void LandingUpdate(Vector3 landingPosition);
        public LandingUpdate landingHandler = DebugLanding;

        public static Tower singlePlayerTower;//only for test purposes to be accessable due to not selected way how this will be accessed
        public GameObject TopBlock { get; private set; }
        private float distanceBetweenBlocks; // distance that is considered as between blocks
        private float blockWidth;
        public int blocklevels;// number of succesfully stacked blocks

        public Tower(GameObject initialPlatform, float distanceBetweenBlocks, float blockWidth)
        {
            TopBlock = initialPlatform;
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
                    TopBlock = newBlock;
                    blocklevels++;
                    landingHandler(newBlock.transform.position);
                    return;
                }
            }
            // if it is plotted properly it should not reach this code
            // so we delete the object
            GameObject.Destroy(newBlock);
        }

        private static void DebugLanding(Vector3 landingPosition) {
            Debug.Log("New block on top at: " + landingPosition);
        }
    }
}

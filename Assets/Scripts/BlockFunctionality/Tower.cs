using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace Assets.Scripts {

    public class Tower {

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
                float horizontalDist = Mathf.Abs(newBlock.transform.position.x - TopBlock.transform.position.y);
                if (horizontalDist < blockWidth)
                {
                    TopBlock = newBlock;
                    blocklevels++;
                    Debug.Log("new block on top");
                    return;
                }
            }
            // if it is plotted properly it should not reach this code
            // so we delete the object
            GameObject.Destroy(newBlock);
        }
    }
}

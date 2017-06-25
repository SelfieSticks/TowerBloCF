using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace Assets.Scripts {
    public class GameManager : MonoBehaviour {

        Tower player1Tower;
        Tower player2Tower;// will be used only in multiplayer
        GameObject startPlatform1;
        private void Awake()
        {
            // sets player on platform to the base platform
            startPlatform1 = GameObject.Find("base");
            // creates a new tower manager 
            player1Tower = new Tower(startPlatform1,100,10);
        }
    }
}

using UnityEngine;

namespace Unoper.Unity.Utils
{
    public class Remover : MonoBehaviour
    {
        [SerializeField] GameObject[] gameObjects;

	    public void Remove ()
        {
            foreach (var gameObject in gameObjects)
            {
                Destroy(gameObject);
            }
	    }
    }
}
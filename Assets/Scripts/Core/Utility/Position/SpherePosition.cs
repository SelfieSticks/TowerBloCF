using UnityEngine;

namespace Unoper.Unity.Utils
{
    public class SpherePosition : MonoBehaviour, IPosition
    {
        [SerializeField] float radius;

        public Vector3 GetPosition()
        {
            return Random.insideUnitSphere * radius;
        }
    }
}

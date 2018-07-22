using UnityEngine;

namespace Unoper.Unity.Utils
{
    public class RelativePosition : MonoBehaviour, IPosition
    {
        [SerializeField] private Transform Base;
        [SerializeField] private Vector3 Offset;

        public Vector3 GetPosition()
        {
            return Base.position + Offset;
        }
    }
}

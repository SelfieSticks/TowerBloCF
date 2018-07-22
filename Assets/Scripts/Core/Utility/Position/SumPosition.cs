using UnityEngine;

namespace Unoper.Unity.Utils
{
    public class SumPosition : MonoBehaviour, IPosition
    {
        [SerializeField] private IPosition[] ipositions;

        public Vector3 GetPosition()
        {
            var sum = Vector3.zero;
            foreach (var iposition in ipositions)
            {
                sum += iposition.GetPosition();
            }
            return sum;
        }
    }
}

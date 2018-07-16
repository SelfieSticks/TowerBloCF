using System.Linq;
using UnityEngine;

namespace Unoper.Unity.Utils
{
    public class LerpPosition : MonoBehaviour
    {
        [SerializeField] private IPosition[] ipositions;

        public Vector3 GetPosition()
        {
            float[] rands = new float[ipositions.Length].Select(x => Random.Range(0, 1f)).ToArray();
            float sum = rands.Sum();

            rands.Zip(ipositions, (r, p) => p.GetPosition() * (r / sum)).Sum();
        }
    }
}

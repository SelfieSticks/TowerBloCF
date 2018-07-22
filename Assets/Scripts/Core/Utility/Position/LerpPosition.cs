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

            var position = Vector3.zero;
            for (int i = 0; i < ipositions.Length; i++)
            {
                position += ipositions[i].GetPosition() * (rands[i] / sum);
            }
            return position;
        }
    }
}

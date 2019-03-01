using UnityEngine;
using UnityEngine.Events;

namespace Unoper.Unity.Utils
{
    public class Sequencer : MonoBehaviour
    {
        [SerializeField] private bool executeOnStart;
        [SerializeField] private UnityEvent[] UnityEventSequence;
        
	    private void Start () {
            if(executeOnStart)
            {
                ExecuteSequence();
            }
	    }
	
	    public void ExecuteSequence()
        {
            foreach (var unityEvent in UnityEventSequence)
            {
                unityEvent.Invoke();
            }
        }
    }
}

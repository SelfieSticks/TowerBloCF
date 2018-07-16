using UnityEngine;
using UnityEngine.Events;

namespace Unoper.Unity.Utils
{
    public class Sequencer : MonoBehaviour, IConsumable
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

        public bool IsConsumable() { return true; }

        public void Consume() { ExecuteSequence(); }
    }
}

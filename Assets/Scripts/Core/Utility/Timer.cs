using System.Collections;
using UnityEngine;
using UnityEngine.Events;

namespace Unoper.Unity.Utils
{
    public class Timer : MonoBehaviour {

        [SerializeField] private float CountdownTime;
        [SerializeField] private float IntervalTime;
        [SerializeField] private UnityEvent OnBegin;
        [SerializeField] private UnityEvent OnInterval;
        [SerializeField] private UnityEvent OnComplete;

	    public void Begin() {
            StartCoroutine(Countdown());
	    }
	
	    private IEnumerator Countdown () {
            OnBegin.Invoke();

            if(IntervalTime > 0) {
                var intervals = CountdownTime / IntervalTime;
                for(int i = 0; i < intervals; i++)
                {
                    yield return new WaitForSeconds(IntervalTime);
                    OnInterval.Invoke();
                }
            } 
            else
            {
                yield return new WaitForSeconds(CountdownTime);
            }

            OnComplete.Invoke();
	    }
    }
}

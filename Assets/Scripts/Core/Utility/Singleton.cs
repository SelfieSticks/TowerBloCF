using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace Unoper.Unity.Utils
{
    public abstract class Singleton<T> : MonoBehaviour 
        where T : struct, IConvertible
    {
        [SerializeField] private UnityEvent OnSingletonCreated = new UnityEvent();

        private static HashSet<T> _singletons = new HashSet<T>();

        [SerializeField] private T Id;
        [SerializeField] private bool DestroyOnLoad;
        private bool _isSingleton;

	    private void Awake ()
        {
            Debug.Log("Attempting to create singleton: " + Id.ToString());
            if (_singletons.Contains(Id))
            {
                Debug.Log("Singleton already exists for: " + Id.ToString() + ", destroying this GameObject.");
                Destroy(gameObject);
            } 
            else
            {
                Debug.Log("Singleton created for: " + Id.ToString());
                if(!DestroyOnLoad) {
                    DontDestroyOnLoad(gameObject);
                }

                _isSingleton = true;
                _singletons.Add(Id);

                OnSingletonCreated.Invoke();
            }
	    }

        private void OnDestroy()
        {
            if(_isSingleton)
            {
                _singletons.Remove(Id);
            }
        }
    }
}

using System;
using System.Collections.Generic;
using UnityEngine;

namespace Unoper.Unity.Utils
{
    public abstract class Singleton<T> : MonoBehaviour 
        where T : struct, IConvertible
    {
        private static HashSet<T> _singletons = new HashSet<T>();

        [SerializeField] private T Id;
        [SerializeField] private bool DestroyOnLoad;
        private bool _isSingleton;

	    private void Awake ()
        {
            if (_singletons.Contains(Id))
            {
                Destroy(gameObject);
            } 
            else
            {
                if(!DestroyOnLoad) {
                    DontDestroyOnLoad(gameObject);
                }

                _isSingleton = true;
                _singletons.Add(Id);
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

using System;
using System.Collections.Generic;
using UnityEngine;

namespace Unoper.Unity.Utils
{
    public abstract class Singleton<T> : MonoBehaviour 
        where T : struct, IConvertible
    {
        private static HashSet<T> _singletons = new HashSet<T>();

        [SerializeField] T Id;

	    private void Start ()
        {
            if (_singletons.Contains(Id))
            {
                Destroy(gameObject);
            } 
            else
            {
                _singletons.Add(Id);
            }
	    }
    }
}

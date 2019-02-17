using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreatePrefab : MonoBehaviour
{
    [SerializeField] private GameObject prefab;

    public void Create()
    {
        Instantiate(prefab, Vector3.zero, Quaternion.identity);
    }
}

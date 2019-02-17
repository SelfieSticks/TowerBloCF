using System;
using UnityEngine;

public class ConfirmSetup : MonoBehaviour
{
    public void Confirm()
    {
        var now = DateTime.UtcNow.ToString();
        Debug.Log("Confirmed Settings.");
        PlayerPrefs.SetString(TowerBloCFPrefs.SETUP_FLAG, now);
    }
}

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Text))]
public class SettingValue : MonoBehaviour {
    [SerializeField] public string settingName;
    [SerializeField] public int max;
    [SerializeField] public int min;
    private Text text;

    private void Start() {
        text = GetComponent<Text>();
        text.text = PlayerPrefs.GetInt(settingName).ToString();
    }

    public void EditValue(int increment) {
        int newVal = Mathf.Clamp(Convert.ToInt32(text.text) + increment, min, max);
        text.text = newVal.ToString();
        PlayerPrefs.SetInt(settingName, newVal);
	}
}

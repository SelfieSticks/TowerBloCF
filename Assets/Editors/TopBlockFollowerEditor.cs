using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class TopBlockFollowerEditor : MonoBehaviour {
    [CustomEditor(typeof(TopBlockFollower))]
    public class MyScriptEditor : Editor {
        override
            public void OnInspectorGUI() {
            var script = target as TopBlockFollower;

            script.lerpRate = EditorGUILayout.Slider("Follow Speed", script.lerpRate, 0f, 1f);
            script.autoOffset = EditorGUILayout.Toggle("Auto Offset", script.autoOffset);

            using (new EditorGUI.DisabledScope(script.autoOffset)) {
                script.offset = EditorGUILayout.Vector3Field("Offset", script.offset);
            }
        }
    }
}

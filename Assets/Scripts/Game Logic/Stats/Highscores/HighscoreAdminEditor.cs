using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(HighscoreAdmin))]
public class HighscoreAdminEditor : Editor
{
    public override void OnInspectorGUI()
    {
        DrawDefaultInspector();

        var script = (HighscoreAdmin)target;
        if (GUILayout.Button("Add"))
        {
            script.AddHighscore();
        }
        if (GUILayout.Button("Clear"))
        {
            script.ClearHighscores();
        }
        if (GUILayout.Button("Print"))
        {
            script.PrintHighscores();
        }
    }
}
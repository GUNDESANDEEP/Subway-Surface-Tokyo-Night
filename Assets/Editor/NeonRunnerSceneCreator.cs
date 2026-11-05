using System.IO;
using System.Linq;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.SceneManagement;

public static class NeonRunnerSceneCreator
{
    private const string SceneFolder = "Assets/Scenes";
    private const string ScenePath = SceneFolder + "/NeonRunner.unity";

    [MenuItem("Tools/Neon Runner/Create Build Scene")]
    public static void CreateBuildScene()
    {
        if (!AssetDatabase.IsValidFolder(SceneFolder))
            AssetDatabase.CreateFolder("Assets", "Scenes");

        // The supplied project uses Bootstrap.cs to create the complete runner
        // automatically after a scene loads. Keep this scene lightweight.
        Scene scene = EditorSceneManager.NewScene(
            NewSceneSetup.DefaultGameObjects,
            NewSceneMode.Single);

        SceneManager.SetActiveScene(scene);

        Camera cam = Camera.main;
        if (cam == null)
        {
            GameObject cameraObject = new GameObject("Main Camera");
            cameraObject.tag = "MainCamera";
            cam = cameraObject.AddComponent<Camera>();
            cameraObject.AddComponent<AudioListener>();
        }

        cam.tag = "MainCamera";
        cam.clearFlags = CameraClearFlags.Skybox;
        cam.transform.position = new Vector3(0f, 5f, -10f);
        cam.transform.rotation = Quaternion.Euler(15f, 0f, 0f);

        // Keep a default light in the saved scene; the game's GameManager
        // adjusts/creates its own lighting when Bootstrap starts.
        if (Object.FindObjectOfType<Light>() == null)
        {
            GameObject lightObject = new GameObject("Directional Light");
            lightObject.transform.rotation = Quaternion.Euler(50f, -30f, 0f);
            Light light = lightObject.AddComponent<Light>();
            light.type = LightType.Directional;
            light.intensity = 1f;
        }

        EditorSceneManager.MarkSceneDirty(scene);
        EditorSceneManager.SaveScene(scene, ScenePath);

        var buildScenes = EditorBuildSettings.scenes.ToList();
        var existing = buildScenes.FindIndex(s => s.path == ScenePath);
        var entry = new EditorBuildSettingsScene(ScenePath, true);
        if (existing >= 0) buildScenes[existing] = entry;
        else buildScenes.Add(entry);
        EditorBuildSettings.scenes = buildScenes.ToArray();

        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();

        Debug.Log("Neon Runner scene created and added to Build Settings: " + ScenePath);
        EditorUtility.DisplayDialog(
            "Neon Runner Scene Ready",
            "Created Assets/Scenes/NeonRunner.unity and added it to Build Settings.\n\n" +
            "The supplied Bootstrap.cs creates the runner game when you press Play. " +
            "Check the Console for compile errors, then press Play to test.",
            "OK");
    }
}

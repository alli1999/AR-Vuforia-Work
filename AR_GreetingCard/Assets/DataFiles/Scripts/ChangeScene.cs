using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeScene : MonoBehaviour
{
    public void LoadARScene()
    {
        SceneManager.LoadScene(1);
    }

    public void ExitApp()
    {
        Application.Quit();
        Debug.Log("Exited");
    }

    public void LoadMenuScene()
    {
        SceneManager.LoadScene(0);
    }
}

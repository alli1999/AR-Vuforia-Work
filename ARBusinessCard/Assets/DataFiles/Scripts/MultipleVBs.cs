using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class MultipleVBs : MonoBehaviour
{
    public GameObject developerGO, youtuberGO, gamerGO;
    VirtualButtonBehaviour[] vrb;

    // Start is called before the first frame update
    void Start()
    {
        developerGO.SetActive(false);
        youtuberGO.SetActive(false);
        gamerGO.SetActive(false);

        vrb = GetComponentsInChildren<VirtualButtonBehaviour>();

        for (int i = 0; i < vrb.Length; i++)
        {
            vrb[i].RegisterOnButtonPressed(onButtonPressed);
            vrb[i].RegisterOnButtonReleased(onButtonReleased);
        }
    }

    public void onButtonPressed(VirtualButtonBehaviour vb)
    {
        if(vb.VirtualButtonName == "Developer")
        {
            developerGO.SetActive(true);
            youtuberGO.SetActive(false);
            gamerGO.SetActive(false);
        }
        else if (vb.VirtualButtonName == "Youtuber")
        {
            developerGO.SetActive(false);
            youtuberGO.SetActive(true);
            gamerGO.SetActive(false);
        }
        else if (vb.VirtualButtonName == "Gamer")
        {
            developerGO.SetActive(false);
            youtuberGO.SetActive(false);
            gamerGO.SetActive(true);
        }
        else
        {
            throw new UnityException(vb.VirtualButtonName + "Virtual Button not supported");
        }
    }

    public void onButtonReleased(VirtualButtonBehaviour vb)
    {
        Debug.Log("Button Released");
    }
}

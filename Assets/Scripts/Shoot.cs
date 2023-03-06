using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using KKSpeech;

public class Shoot : MonoBehaviour
{
    //public GameObject camera;
    //public GameObject projectile;

    public void ShootAbility()
    {
        if (SpeechRecognizer.IsRecording())
        {
            
        }
        //GameObject newProjectile = (GameObject)Instantiate(projectile, camera.position, camera.rotation);
        //newProjectile.GetComponent<RigidBody>().AddForce()
    }

    //when transition to voice recognition, maybe change to update
    /*public void Update()
    {
        if (SpeechRecognizer.IsRecording())
        {
            SpeechRecognizer.StopIfRecording();
        }
        else
        {
            SpeechRecognizer.StartRecording(true);
        }
    }*/
}

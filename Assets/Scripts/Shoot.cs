using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using KKSpeech;

public class Shoot : MonoBehaviour
{
    public GameObject camera;
    public GameObject projectile;
    public float shootForce;

    public void ShootAbility()
    {
        GameObject newProjectile = (GameObject)Instantiate(projectile, camera.transform.position, camera.transform.rotation);
        //newProjectile.transform.Rotate(0, 90, 0);
        newProjectile.GetComponent<Rigidbody>().AddForce(camera.transform.forward * shootForce);
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

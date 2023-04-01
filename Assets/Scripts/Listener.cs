using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

namespace BrainCheck
{
    public class Listener : MonoBehaviour
    {
        string gameObjectName = "Shoot";
        string statusMethodName = "CallbackMethod";

        public GameObject camera;
        public GameObject projectile;
        public float shootForce;

        public void startListening()
        {
            BrainCheck.SpeechRecognitionBridge.setUnityGameObjectNameAndMethodName(gameObjectName, statusMethodName);
            BrainCheck.SpeechRecognitionBridge.speechToTextInHidenModeWithBeepSound();
        }

        public void tempShootFunction()
        {
            GameObject newProjectile = (GameObject)Instantiate(projectile, camera.transform.position, camera.transform.rotation);
            newProjectile.transform.Rotate(0, 90, 0);
            newProjectile.GetComponent<Rigidbody>().AddForce(camera.transform.forward * shootForce);
        }
    }
}

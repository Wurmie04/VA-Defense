using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using TMPro;
using UnityEngine.Android;

namespace BrainCheck
{
    public class Listener : MonoBehaviour
    {
        string gameObjectName = "Shoot";
        string statusMethodName = "CallbackMethod";

        public GameObject camera;
        public GameObject projectile;
        public float shootForce;
        public TMP_Text isRecordingText;

        void Start()
        {
            BrainCheck.SpeechRecognitionBridge.setUnityGameObjectNameAndMethodName(gameObjectName, statusMethodName);
            
            //check for microphone access
            if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
            {
                Permission.RequestUserPermission(Permission.Microphone);
            }
        }

        void Update()
        {
            //check if still recording
        }

        public void startListening()
        {
            BrainCheck.SpeechRecognitionBridge.speechToTextInHidenModeWithBeepSound();
            isRecordingText.text = "Recording";
        }

        public void tempShootFunction()
        {
            GameObject newProjectile = (GameObject)Instantiate(projectile, camera.transform.position, camera.transform.rotation);
            newProjectile.transform.Rotate(0, 90, 0);
            newProjectile.GetComponent<Rigidbody>().AddForce(camera.transform.forward * shootForce);
        }
    }
}

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
        private GameObject newProjectile;
        public float shootForce;
        public TMP_Text isRecordingText;
        private bool hasShot;
        private string currentProjectile;

        void Start()
        {
            BrainCheck.SpeechRecognitionBridge.setUnityGameObjectNameAndMethodName(gameObjectName, statusMethodName);
            
            //check for microphone access
            if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
            {
                Permission.RequestUserPermission(Permission.Microphone);
            }

            hasShot = false;
            currentProjectile = "none";
        }

        void Update()
        {
            if (hasShot && GameObject.Find("Flamethrower(Clone)") != null)
            {
                newProjectile.transform.position = new Vector3(camera.transform.position.x, camera.transform.position.y, camera.transform.position.z + 0.2f);
                newProjectile.transform.rotation = camera.transform.rotation;
            }
            else
            {
                hasShot= false;
                currentProjectile = "none";
            }
            
        }

        public void startListening()
        {
            BrainCheck.SpeechRecognitionBridge.speechToTextInHidenModeWithBeepSound();
            //BrainCheck.SpeechRecognitionBridge.speechToText();
            isRecordingText.text = "Recording";
        }

        public void tempShootFunction()
        {
            if (currentProjectile == "none")
            {
                newProjectile = (GameObject)Instantiate(projectile, camera.transform.position + new Vector3(0, 0, 0.2f), camera.transform.rotation);
                hasShot = true;
                //newProjectile.transform.Rotate(0, 90, 0);
                newProjectile.GetComponent<Rigidbody>().AddForce(camera.transform.forward * shootForce);
                currentProjectile = "flamethrower";
            }
            
        }
    }
}

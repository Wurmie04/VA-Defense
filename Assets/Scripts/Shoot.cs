using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.Android;

namespace BrainCheck
{
    public class Shoot : MonoBehaviour
    {
        public static Shoot Instance;
        public GameObject camera;
        public GameObject projectile;
        public float shootForce;
        private string newMessage;
        public TMP_Text isRecordingText;

        void Awake()
        {
            Instance = this;
        }
        //gets the message from the voice recording
        public void CallbackMethod(string messages)
        {
            newMessage = messages;

            //if any part of the message contains shoot, then a ball will be shot out
            if (newMessage.Contains("shoot"))
            {
                GameObject newProjectile = (GameObject)Instantiate(projectile, camera.transform.position, camera.transform.rotation);
                newProjectile.transform.Rotate(0, 90, 0);
                newProjectile.GetComponent<Rigidbody>().AddForce(camera.transform.forward * shootForce);
            }
            isRecordingText.text = "Press To Record";
        }
    }
}

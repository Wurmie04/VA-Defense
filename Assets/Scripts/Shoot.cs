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
        public GameObject fireball_Projectile;
        public GameObject flamethrower_Projectile;
        public GameObject EnergyBall_Projectile;
        private float shootForce;
        private string newMessage;
        public TMP_Text isRecordingText;
        private string tempMessage;

        void Start()
        {
            shootForce = 0;
        }

        void Awake()
        {
            Instance = this;
        }
        //gets the message from the voice recording
        public void CallbackMethod(string messages)
        {
            tempMessage = messages;
            
            //wait till entire message is finished
            if(tempMessage == "SpeechRecognitionFinished")
            {
                fireAbility(newMessage);
            }
            else
            {
                newMessage = messages;
            }
        }

        //fires the ability that was said in final string
        public void fireAbility(string messages)
        {
            //isRecordingText.text = newMessage;
            /*if (messages.Contains("shoot"))
            {
                shootForce = 700;
                GameObject newProjectile = (GameObject)Instantiate(projectile, camera.transform.position, camera.transform.rotation);
                //newProjectile.transform.Rotate(0, 90, 0);
                newProjectile.GetComponent<Rigidbody>().AddForce(camera.transform.forward * shootForce);
            }*/
            //shoots fireball
            if(messages.Contains("fireball"))
            {
                shootForce = 700;
                GameObject newProjectile = (GameObject)Instantiate(projectile, camera.transform.position, camera.transform.rotation);
                newProjectile.GetComponent<Rigidbody>().AddForce(camera.transform.forward * shootForce);
            }
            else if (messages.Contains("flamethrower"))
            {
                shootForce = 1000;
                GameObject newProjectile = (GameObject)Instantiate(projectile, camera.transform.position + new Vector3(0, 0, 0.7f), camera.transform.rotation);
                newProjectile.GetComponent<Rigidbody>().AddForce(camera.transform.forward * shootForce);
            }
            else if (messages.Contains("energy ball"))
            {
                shootForce = 100;
                GameObject newProjectile = (GameObject)Instantiate(projectile, camera.transform.position + new Vector3(0, 0, 0.7f), camera.transform.rotation);
                newProjectile.GetComponent<Rigidbody>().AddForce(camera.transform.forward * shootForce);
            }
            isRecordingText.text = "Press to Record";
        }
    }
}

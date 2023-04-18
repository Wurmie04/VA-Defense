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
        
        //public GameObject projectile;
        public GameObject fireball_Projectile;
        public GameObject flamethrower_Projectile;
        public GameObject EnergyBall_Projectile;
        private GameObject newProjectile;
        private string currentProjectile;

        private float shootForce;
        private string newMessage;
        public TMP_Text isRecordingText;
        private string tempMessage;

        void Start()
        {
            shootForce = 0;
            currentProjectile = "none";
        }

        void Update()
        {
            //check if projectile still exists
            //if none of the projectiles exist in the scene, able to shoot another projectile
            if(GameObject.Find("Flamethrower(Clone)") == null && GameObject.Find("Fireball(Clone)") == null && GameObject.Find("EnergyBall(Clone)") == null)
            {
                currentProjectile = "none";
            }
            //if projectile is flamethrower, update its spawn point because it is a constant ability
            else if(currentProjectile == "flamethrower")
            {
                newProjectile.transform.position = new Vector3(camera.transform.position.x, camera.transform.position.y, camera.transform.position.z + 0.2f);
                newProjectile.transform.rotation = camera.transform.rotation;
            }
            else
            {
                return;
            }
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
            messages = messages.ToLower();
            //can only shoot if there isn't already a projectile in the scene
            if (currentProjectile == "none")
            {
                if (messages.Contains("fireball"))
                {
                    shootForce = 700;
                    newProjectile = (GameObject)Instantiate(fireball_Projectile, camera.transform.position, camera.transform.rotation);
                    newProjectile.GetComponent<Rigidbody>().AddForce(camera.transform.forward * shootForce);
                    currentProjectile = "fireball";
                }
                else if (messages.Contains("flamethrower"))
                {
                    isRecordingText.text = messages;
                    shootForce = 1000;
                    newProjectile = (GameObject)Instantiate(flamethrower_Projectile, camera.transform.position + new Vector3(0, 0, 0.2f), camera.transform.rotation);
                    newProjectile.GetComponent<Rigidbody>().AddForce(camera.transform.forward * shootForce);
                    currentProjectile = "flamethrower";

                }
                else if (messages.Contains("energy ball"))
                {
                    isRecordingText.text = messages;
                    shootForce = 100;
                    newProjectile = (GameObject)Instantiate(EnergyBall_Projectile, camera.transform.position, camera.transform.rotation);
                    newProjectile.GetComponent<Rigidbody>().AddForce(camera.transform.forward * shootForce);
                    currentProjectile = "energy ball";
                }
                isRecordingText.text = "Press to Record";
            }
        }
    }
}

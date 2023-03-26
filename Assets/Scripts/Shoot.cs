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
        public string textResult;
        public float shootForce;
        public TMP_Text myText;

        void Awake()
        {
            Instance = this;
        }
        public void CallbackMethod(string messages)
        {
            myText.text = messages;
            /*if (messages.Equals("SpeechRecognitionFinished"))
            {
                myText.text = messages;
            }
            else
            {
                myText.text = messages;
                myText.text = "";
            }*/
            //if(textResult == "shoot")
            //{
            //GameObject newProjectile = (GameObject)Instantiate(projectile, camera.transform.position, camera.transform.rotation);
            //newProjectile.transform.Rotate(0, 90, 0);
            //newProjectile.GetComponent<Rigidbody>().AddForce(camera.transform.forward * shootForce);
            //}
        }
    }
}

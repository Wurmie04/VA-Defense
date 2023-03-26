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

        public void startListening()
        {
            BrainCheck.SpeechRecognitionBridge.setUnityGameObjectNameAndMethodName(gameObjectName, statusMethodName);
            //BrainCheck.SpeechRecognitionBridge.speechToText();
            BrainCheck.SpeechRecognitionBridge.speechToTextInHidenModeWithBeepSound();
        }
    }
}

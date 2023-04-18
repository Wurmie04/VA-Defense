using System.Collections.Generic;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using EnhancedTouch = UnityEngine.InputSystem.EnhancedTouch;
using UnityEngine.EventSystems;

public class PlaceObject : MonoBehaviour
{
    [SerializeField]
    private GameObject prefab;

    private ARRaycastManager aRRaycastManager;
    private ARPlaneManager aRPlaneManager;
    private List<ARRaycastHit> hits = new List<ARRaycastHit>();

    private bool overUI;
    
    void Start()
    {
        overUI = false;
    }

    void Update()
    {
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            //touched the UI
            if (EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId))
            {
                overUI = true;
            }
            //not over UI
            else
            {
                overUI = false;
            }
        }
    }

    private void Awake()
    {
        aRRaycastManager = GetComponent<ARRaycastManager>();
        aRPlaneManager = GetComponent<ARPlaneManager>();
    }
  
    private void OnEnable()
    {
        EnhancedTouch.TouchSimulation.Enable();
        EnhancedTouch.EnhancedTouchSupport.Enable();
        EnhancedTouch.Touch.onFingerDown += FingerDown;
    }

    private void OnDisable()
    {
        EnhancedTouch.TouchSimulation.Disable();
        EnhancedTouch.EnhancedTouchSupport.Disable();
        EnhancedTouch.Touch.onFingerDown -= FingerDown;
    }

    //what happens when screen is touched
    private void FingerDown(EnhancedTouch.Finger finger)
    {
        //no multi-touch
        if(finger.index != 0)
            return;

        //place object
        if(aRRaycastManager.Raycast(finger.currentTouch.screenPosition, hits, TrackableType.PlaneWithinPolygon))
        {
            foreach(ARRaycastHit hit in hits)
            {
                Pose pose = hit.pose;
                //Debug.Log(!EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId));
                //pass the hit into event system to check if UI
                //check if it is the ground and not the ceiling
                if (aRPlaneManager.GetPlane(hit.trackableId).alignment == PlaneAlignment.HorizontalUp && !overUI)
                {
                    //check if too many are already placed

                    //place object
                    GameObject obj = Instantiate(prefab, pose.position, pose.rotation);

                    //turn enemy towards camera
                    Vector3 position = obj.transform.position;
                    Vector3 cameraPosition = Camera.main.transform.position;
                    Vector3 direction = cameraPosition - position;
                    Vector3 targetRotationEuler = Quaternion.LookRotation(direction).eulerAngles;
                    Vector3 scaledEuler = Vector3.Scale(targetRotationEuler, obj.transform.up.normalized);
                    Quaternion targetRotation = Quaternion.Euler(scaledEuler);
                    obj.transform.rotation = obj.transform.rotation * targetRotation;
                }
            
            }
        }
    }
}

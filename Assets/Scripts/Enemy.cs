using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public GameObject target;
    public float moveSpeed;

    // Start is called before the first frame update
    void Start()
    {
        //finds the object attached to the camera
        target = GameObject.Find("CameraObject");
    }

    // Update is called once per frame
    void Update()
    {
        //enemy will face and walk towards camera
        transform.position = Vector3.Lerp(transform.position, target.transform.position, moveSpeed);
        transform.LookAt(target.transform.position);
    }
}

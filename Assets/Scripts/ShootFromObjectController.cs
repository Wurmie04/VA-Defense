using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootFromObjectController : MonoBehaviour
{
    public GameObject camera;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        this.transform.position = new Vector3(camera.transform.position.x, camera.transform.position.y, camera.transform.position.z + 0.61f);
        this.transform.rotation = camera.transform.rotation;
    }
}

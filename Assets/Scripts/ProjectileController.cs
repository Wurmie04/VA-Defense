using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectileController : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Destroy(gameObject,5);
    }

    private void OnCollisionEnter(Collision collision)
    {
        Debug.Log("Inisde Projectile Controller");
        Destroy(collision.gameObject);
        Destroy(this.gameObject);
    }
}

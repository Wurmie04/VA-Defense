using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fireball_Controller : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Destroy(gameObject, 5);
    }

    private void OnParticleCollision(GameObject other)
    {
        if (other.tag == "Enemy")
        {
            Destroy(this.gameObject);
        }
    }
}

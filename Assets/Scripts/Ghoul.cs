using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Ghoul : MonoBehaviour
{
    public GameObject target;
    public float moveSpeed;
    private float aggroRange;
    private bool isDead;
    public TMP_Text currentScore;

    // Start is called before the first frame update
    void Start()
    {
        //finds the object attached to the camera
        target = GameObject.Find("CameraObject");
        aggroRange = 1.2f;
        moveSpeed = 0.005f;
        isDead = false;
        currentScore = GameObject.Find("Score").GetComponent<TMP_Text>();
    }

    // Update is called once per frame
    void Update()
    {
        //find the distance between player and enemy
        float distanceFromPlayer = Vector3.Distance(this.transform.position, target.transform.position);

        //if the distance is further than the aggro range, don't attack and move towards player
        if (!isDead)
        {
            if (distanceFromPlayer >= aggroRange)
            {
                //enemy will face and walk towards camera
                transform.position = Vector3.Lerp(transform.position, target.transform.position, moveSpeed);
                transform.LookAt(target.transform.position);
                //change animation to walk
                GetComponent<Animation>().Play("Walk");

            }
            //if close enough, stop moving and attack
            else
            {
                //change animation to attack
                GetComponent<Animation>().Play("Attack1");
            }
        }
    }

    //when ghoul gets hit by projectile, it will fall over and die
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Projectile")
        {
            GetComponent<Animation>().Play("Death");
            isDead = true;  
            //Destroy(collision.gameObject);
            Destroy(this.gameObject, 1.1f);

        }
        /*if(collision.gameObject.tag == "MainCamera")
        {
            Debug.Log("Arms hit");
        }*/
    }
    private void OnParticleCollision(GameObject other)
    {
        if (other.tag == "Projectile")
        {
            GetComponent<Animation>().Play("Death");
            isDead = true;
            //Destroy(collision.gameObject);
            Destroy(this.gameObject, 1.1f);
            int score = int.Parse(currentScore.text) + 1;
            currentScore.text = score.ToString();
        }
    }
}

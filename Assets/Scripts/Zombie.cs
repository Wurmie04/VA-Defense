using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Zombie : MonoBehaviour
{
    public GameObject target;
    public float moveSpeed;
    private float aggroRange;
    private Animator animator;
    private bool isZombieDead;

    // Start is called before the first frame update
    void Start()
    {
        //finds the object attached to the camera
        target = GameObject.Find("CameraObject");
        animator = GetComponent<Animator>();
        animator.SetBool("startAttacking", false);
        aggroRange = 1.3f;
        moveSpeed = 0.0007f;
        isZombieDead = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (!isZombieDead)
        {
            //find the distance between player and enemy
            float distanceFromPlayer = Vector3.Distance(this.transform.position, target.transform.position);

            //if the distance is further than the aggro range, don't attack and move towards player
            if (distanceFromPlayer >= aggroRange)
            {
                //enemy will face and walk towards camera
                transform.position = Vector3.Lerp(transform.position, target.transform.position, moveSpeed);
                transform.LookAt(target.transform.position);
                //change animation to walk
                animator.SetBool("startAttacking", false);
                //GetComponent<Animation>().SetBool(startAttacking,false);

            }
            //if close enough, stop moving and attack
            else
            {
                //change animation to attack
                //GetComponent<Animation>().SetBool(startAttacking, true);
                animator.SetBool("startAttacking", true);
            }
        }
    }
    //when zombie gets hit by a projectile, it will fall over and die
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Projectile")
        {
            animator.SetBool("isDeadZombie", true);
            isZombieDead = true;
            Destroy(this.gameObject,1.5f);
        }
    }
}

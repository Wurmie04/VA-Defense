using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PlayerLifePoints : MonoBehaviour
{
    public TMP_Text lifePointsText;
    int lifePoints;

    // Start is called before the first frame update
    void Start()
    {
        lifePoints = 50;    
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Enemy")
        {
            lifePoints -= 1;
            lifePointsText.text = "Life Points: " + lifePoints.ToString();
            Debug.Log("Hit");
            //Destroy(this.gameObject, 1.5f);
        }
    }
}

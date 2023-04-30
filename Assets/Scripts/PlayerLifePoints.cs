using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class PlayerLifePoints : MonoBehaviour
{
    //public TMP_Text lifePointsText;
    int lifePoints;
    public GameObject UI;
    public Button unPausebutton;
    private List<int> highestScores = new List<int>();
    public TMP_Text currentScore;
    public TMP_Text highScores;
    public Slider healthSlider;

    // Start is called before the first frame update
    void Start()
    {
        lifePoints = 50;
        healthSlider.value = lifePoints;
        currentScore = GameObject.Find("Score").GetComponent<TMP_Text>();
        //UI.setActive(false);

        highestScores.Add(PlayerPrefs.GetInt("Score 0", 10));
        highestScores.Add(PlayerPrefs.GetInt("Score 1", 8));
        highestScores.Add(PlayerPrefs.GetInt("Score 2", 7));
        highestScores.Add(PlayerPrefs.GetInt("Score 3", 6));
        highestScores.Add(PlayerPrefs.GetInt("Score 4", 5));
    }

    // Update is called once per frame
    void Update()
    {
        if(lifePoints == 0)
        {
            //pause game
            //turn pause screen on
            //save the score
            UI.SetActive(true);
            unPausebutton.enabled = false;
            lifePoints--;
            currentScore.text = "Game Over";
            compareScores(int.Parse(currentScore.text));
            Time.timeScale = 0;
            highScores.text = PlayerPrefs.GetInt("Score 0", 0) + "\n" + PlayerPrefs.GetInt("Score 1", 0) + "\n"
            + PlayerPrefs.GetInt("Score 2", 0) + "\n" + PlayerPrefs.GetInt("Score 3", 0) + "\n"
            + PlayerPrefs.GetInt("Score 4", 0);
        }
    }

    private void compareScores(int finalScore)
    {
        highestScores.Add(finalScore);
        highestScores.Sort();
        highestScores.Reverse();
        for(int i = 0; i < 5;i++)
        {
            PlayerPrefs.SetInt("Score " + i, highestScores[i]);
            PlayerPrefs.Save();
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Enemy" && lifePoints > 0)
        {
            lifePoints -= 1;
            healthSlider.value = lifePoints;
        }
    }
}

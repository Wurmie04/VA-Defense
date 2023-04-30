using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class SceneController : MonoBehaviour
{
    public TMP_Text highScores;
    public GameObject UI;
    private List<int> highestScores = new List<int>();
    public TMP_Text currentScore;

    // Start is called before the first frame update
    void Start()
    {
        UI.SetActive(false);
        highestScores.Add(PlayerPrefs.GetInt("Score 0", 10));
        highestScores.Add(PlayerPrefs.GetInt("Score 1", 8));
        highestScores.Add(PlayerPrefs.GetInt("Score 2", 7));
        highestScores.Add(PlayerPrefs.GetInt("Score 3", 6));
        highestScores.Add(PlayerPrefs.GetInt("Score 4", 5));
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Restart()
    {
        compareScores(int.Parse(currentScore.text));
        SceneManager.LoadScene("VA Defense");
        Time.timeScale = 1;
    }

    public void Pause()
    {
        Time.timeScale = 0;
        UI.SetActive(true);
        highScores.text = PlayerPrefs.GetInt("Score 0", 0) + "\n" + PlayerPrefs.GetInt("Score 1", 0) + "\n"
            + PlayerPrefs.GetInt("Score 2", 0) + "\n" + PlayerPrefs.GetInt("Score 3", 0) + "\n"
            + PlayerPrefs.GetInt("Score 4", 0);

    }
    public void Resume()
    {
        Time.timeScale = 1;
        UI.SetActive(false);
    }

    private void compareScores(int finalScore)
    {
        highestScores.Add(finalScore);
        highestScores.Sort();
        highestScores.Reverse();
        for (int i = 0; i < 5; i++)
        {
            PlayerPrefs.SetInt("Score " + i, highestScores[i]);
            PlayerPrefs.Save();
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class SceneController : MonoBehaviour
{
    public TMP_Text highScores;
    public GameObject UI;

    // Start is called before the first frame update
    void Start()
    {
        UI.SetActive(false);
        /*PlayerPrefs.SetInt("Score 0", 10);
        PlayerPrefs.SetInt("Score 1", 7);
        PlayerPrefs.SetInt("Score 2", 5);
        PlayerPrefs.SetInt("Score 3", 3);
        PlayerPrefs.SetInt("Score 4", 1);*/
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Restart()
    {
        SceneManager.LoadScene("VA Defense");
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
}

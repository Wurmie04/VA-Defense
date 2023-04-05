using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnEnemy : MonoBehaviour
{
    //A list of enemies to spawn
    public List<GameObject> spawnList;

    public GameObject GhoulToSpawn;
    public GameObject ZombieToSpawn;
    public float spawnDelay;
    private float nextSpawnTime;
    private float spawnLocation;

    void Start()
    {
        spawnList = new List<GameObject>();
        //puts all the enemies into list
        spawnList.Add(GhoulToSpawn);
        spawnList.Add(ZombieToSpawn);
    }

    // Update is called once per frame
    void Update()
    {
        //if game should spawn a unit
        if (shouldSpawn())
        {
            Spawn();
        }
    }

    //check the interval between enemy spawns
    private bool shouldSpawn()
    {
        return Time.time >= nextSpawnTime;
    }

    //spawn the enemy
    private void Spawn()
    {
        //make the next spawn time
        nextSpawnTime = Time.time + spawnDelay;
        //randomize which enemy should be spawned
        int randomNumber = Random.Range(0, spawnList.Count);
        spawnLocation = Random.Range(-10, 10);
        Debug.Log(spawnLocation);
        //create the enemy
        //Instantiate(spawnList[randomNumber], transform.position, transform.rotation);
        Instantiate(spawnList[randomNumber], transform.position + new Vector3(spawnLocation,0,0), transform.rotation);
    }
}

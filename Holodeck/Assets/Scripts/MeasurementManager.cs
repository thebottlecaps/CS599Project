using System.Collections.Generic;
using System.IO;
using System.Linq;
using Microsoft.MixedReality.Toolkit.UI;
using TMPro;
using UnityEngine;
using System.Net.Http;

/// <summary>
/// This script handles a distance measuring feature. It is implemented such that a user can create an unlimited
/// number of waypoints and subpaths between those waypoints.
/// Right now, the user may only create two main paths (yellow and red), but this cap can be easily expanded by
/// adding more pathMaterials, waypointParent, and subpathParent GameObjects
/// A requirement of this feature is that there exist both an empty "Waypoints" and an empty "Subpaths"
/// child GameObject under each Path GameObject so that the MeasurementManager can keep track of how many
/// waypoints and subpaths there are for each main path.
/// </summary>
public class MeasurementManager : MonoBehaviour
{
    [Header("Distance Measurement Objects")]
    [SerializeField] private GameObject waypointPrefab;
    [SerializeField] private GameObject subpathPrefab;
    [SerializeField] private Transform waypointSpawnPositionHolder;
    [SerializeField] private GameObject[] pathParents;
    [SerializeField] private Material[] pathMaterials;

    [Header("UI Controls")] 
    [SerializeField] private InteractableToggleCollection choosePathRadials;
    [SerializeField] private Interactable[] pathToggles;
    [SerializeField] private Interactable[] clearPathButtons;
    [SerializeField] private Interactable exportButton;
    [SerializeField] private TextMeshPro[] pathDistanceLabels;
    [SerializeField] private TextMeshPro[] pathToggleLabels;

    private readonly Color unselectedLabelWhite = new Color(1f, 1f, 1f, 0.3f);
    private List<GameObject> waypointParents = new List<GameObject>();
    private List<GameObject> subpathParents = new List<GameObject>();
    private Dictionary<int, List<MeasurementSubpath>> paths;
    private MeasurementWaypoint previousWaypoint;
    private MeasurementWaypoint newWaypoint;
    private int currentPath = 0;
    private string filename = "positionData";

    // private static readonly HttpClient client = new HttpClient();

    private void Awake()
    {
        InstantiateListeners();

        // Assign each Path's Waypoint and Subpath GameObjects
        foreach (GameObject pathParent in pathParents)
        {
            waypointParents.Add(pathParent.transform.GetChild(0).gameObject);
            subpathParents.Add(pathParent.transform.GetChild(1).gameObject);
        }

        paths = new Dictionary<int, List<MeasurementSubpath>>()
            { { 0, new List<MeasurementSubpath>() }, { 1, new List<MeasurementSubpath>() } };

        // Instantiate the first waypoint
        previousWaypoint = CreateNewWaypoint();
            
        // Set to default changes made in Unity
        OnPathToggled();
    }

    ///////////////////////////////
    // User Interaction Handling //
    ///////////////////////////////

    private void InstantiateListeners()
    {
        foreach (Interactable toggle in pathToggles)
        {
            toggle.OnClick.AddListener(OnPathToggled);
        }

        for (int i = 0; i < clearPathButtons.Length; i++)
        {
            // A C# nuance. Can't directly pass var 'i' in the delegate function
            int j = i;
            clearPathButtons[i].OnClick.AddListener(delegate { OnClearPathClicked(j); });
        }

        choosePathRadials.OnSelectionEvents.AddListener(delegate { OnChoosePath(); });
        
        exportButton.OnClick.AddListener(OnExportButtonClicked);
    }

    private void OnExportButtonClicked()
    {
        List<string> outputData = PrepareExportData();
        string path = string.Format("{0}/{1}.csv", Application.persistentDataPath, filename);

        using (StreamWriter outputFile = new StreamWriter(path))
        {
            foreach (string line in outputData)
            {
                outputFile.WriteLine(line);
            }
        }

        Debug.Log(path);
    }

    private List<string> PrepareExportData()
    {
        //string outputData = "";
        List<string> outputData = new List<string>();
        List<GameObject> waypointObjects = new List<GameObject>();

        // Get the Waypoints object under each path parent object
        foreach (GameObject go in pathParents)
        {
            waypointObjects.Add(go.transform.GetChild(0).gameObject);
        }

        for (int i = 0; i < waypointObjects.Count; i++)
        {
            outputData.Add("Path " + (i + 1));
            
            GameObject waypointObject = waypointObjects[i];
            int numChildren = waypointObject.transform.childCount;
            float x = 0f;
            float y = 0f;
            float z = 0f;
            string formattedStr = "";

            for (int j = 0; j < numChildren; j++)
            {
                Vector3 waypointLocalPosition = waypointObject.transform.GetChild(j).transform.localPosition;
                x = waypointLocalPosition.x;
                y = waypointLocalPosition.y;
                z = waypointLocalPosition.z;

                formattedStr = x + "," + y + "," + z;

                outputData.Add(formattedStr);
            }
        }

        return outputData;
    }
    
    /// <summary>
    /// Handles turning on and off the Path GameObject to display paths
    /// </summary>
    private void OnPathToggled()
    {
        for (int i = 0; i < pathParents.Length; i++)
        {
            pathParents[i].SetActive(pathToggles[i].IsToggled);
            pathToggleLabels[i].color = pathToggles[i].IsToggled ? Color.white : unselectedLabelWhite;
        }
    }

    /// <summary>
    /// Handles choosing the path to add waypoints to
    /// </summary>
    /// <param name="resetToZero"></param>
    private void OnChoosePath(bool resetToZero = false)
    {
        currentPath = choosePathRadials.CurrentIndex;
        newWaypoint.SetWaypointParent(waypointParents[currentPath].transform);
        newWaypoint.SetWaypointName(resetToZero ? 0 : waypointParents[currentPath].transform.childCount);

        // Just like in Awake(), assign previousWaypoint to be the newWaypoint to keep track of the path switch
        previousWaypoint = newWaypoint;

        // Toggle on whichever path the user selected to begin editing. 
        pathToggles[currentPath].IsToggled = true;
        OnPathToggled();
    }
        
    /// <summary>
    /// Deletes all child Waypoint # and Subpath # objects to clear a path
    /// </summary>
    /// <param name="pathNum"></param>
    private void OnClearPathClicked(int pathNum)
    {
        Transform waypointParent = waypointParents[pathNum].transform;
        for (int i = 0; i < waypointParent.childCount; i++)
        {
            Destroy(waypointParent.GetChild(i).gameObject);
        }

        Transform subpathParent = subpathParents[pathNum].transform;
        for (int i = 0; i < subpathParent.childCount; i++)
        {
            Destroy(subpathParent.GetChild(i).gameObject);
        }
            
        // Reset total path length, reset waypoint and subpath numbering
        UpdateTotalPathLength(pathNum, true);
        OnChoosePath(true);
        paths[pathNum] = new List<MeasurementSubpath>();
    }

    ///////////////////////
    // Waypoint handling //
    ///////////////////////
        
    /// <summary>
    /// Create a new waypoint, called every time the previous waypoint is dropped in space
    /// </summary>
    private MeasurementWaypoint CreateNewWaypoint()
    {
        newWaypoint = Instantiate(waypointPrefab, waypointSpawnPositionHolder.position, 
            waypointSpawnPositionHolder.rotation, waypointSpawnPositionHolder).GetComponent<MeasurementWaypoint>();
            
        newWaypoint.InitializeWaypoint(waypointParents[currentPath].transform.childCount, 
            waypointParents[currentPath].transform, this);

        return newWaypoint;
    }
        
    ///////////////////
    // Path handling //
    ///////////////////

    /// <summary>
    /// Create a new subpath from two existing waypoints: the previous waypoint dropped and the most recently
    /// dropped waypoint. 
    /// </summary>
    /// <param name="startPoint"></param>
    /// <param name="endPoint"></param>
    private MeasurementSubpath CreateNewSubpath(MeasurementWaypoint startPoint, MeasurementWaypoint endPoint)
    {
        MeasurementSubpath newSubpath = Instantiate(subpathPrefab, waypointSpawnPositionHolder)
            .GetComponent<MeasurementSubpath>();
            
        newSubpath.InitializeSubpath(paths[currentPath].Count, subpathParents[currentPath].transform,
            startPoint, endPoint, this, pathMaterials[currentPath]);

        return newSubpath;
    }
        
    /// <summary>
    /// Attempts to create a new subpath. If a subpath is created, then it is added to the path's list of subpaths.
    /// Called every time a waypoint is dropped in space.
    /// </summary>
    public void AddToPath()
    {
        MeasurementSubpath newSubpath;
            
        // Don't create a new subpath if newWaypoint is the path's first waypoint (i.e. the only waypoint) because
        // there is nothing to connect it to
        if (waypointParents[currentPath].transform.childCount > 1)
        {
            // If newWaypoint is the second waypoint, create the first subpath
            if (waypointParents[currentPath].transform.childCount == 2)
            {
                newSubpath = CreateNewSubpath(
                    waypointParents[currentPath].transform.GetChild(0).GetComponent<MeasurementWaypoint>(),
                    newWaypoint);
            }
            else // the regular case of using the previous waypoint and the newly created waypoint
            {
                newSubpath = CreateNewSubpath(paths[currentPath].Last().endPoint, newWaypoint);
            }

            previousWaypoint.subpath2 = newSubpath;
            newWaypoint.subpath1 = newSubpath;
            previousWaypoint = newWaypoint;

            paths[currentPath].Add(newSubpath);
        }
        else
        {
            // Handle case of the path's first waypoint: create a nonvisible dummy subpath1
            newSubpath = CreateNewSubpath(newWaypoint, newWaypoint);
            newSubpath.gameObject.SetActive(false);
            newWaypoint.subpath1 = newSubpath;
        }

        // Ready the next waypoint to be dropped
        CreateNewWaypoint();
    }
        
    public void UpdateTotalPathLength(int pathNum = -1, bool resetToZero = false)
    {
        int chosenPath = pathNum == -1 ? currentPath : pathNum;
        int pathLength = resetToZero ? 0 : CalculateTotalPathLength(chosenPath);
        pathDistanceLabels[chosenPath].text = pathLength + "cm";
    }

    private int CalculateTotalPathLength(int pathNum)
    {
        int pathLength = 0;
        foreach (MeasurementSubpath subpathInstance in paths[pathNum])
        {
            pathLength += subpathInstance.pathLength;
        }

        return pathLength;
    }
}
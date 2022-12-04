using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;
using UnityEngine;

/// <summary>
/// Controls targets in space that the user can drag and drop
/// </summary>
public class MeasurementWaypoint : MonoBehaviour, IMixedRealityPointerHandler
{
    [SerializeField] private ObjectManipulator manipulator;
    private MeasurementManager measurementManager { get; set; }
    public MeasurementSubpath subpath1 { get; set; }
    public MeasurementSubpath subpath2 { get; set; }

    private Transform parentTransform;
        
    private void Awake()
    {
        manipulator.OnManipulationEnded.AddListener(StartManipulationEndedEvents);
    }

    public void InitializeWaypoint(int waypointNum, Transform parent, MeasurementManager manager)
    {
        SetWaypointName(waypointNum);
        parentTransform = parent;
        measurementManager = manager;
    }

    /// <summary>
    /// Necessary the first time the user drags a sphere to assign it to the proper Waypoint parent
    /// </summary>
    /// <param name="eventData"></param>
    void IMixedRealityPointerHandler.OnPointerClicked(MixedRealityPointerEventData eventData)
    {
        if (transform.parent != parentTransform)
        {
            transform.SetParent(parentTransform);
        }
    }
        
    /// <summary>
    /// Trigger recalculating subpath lengths as the user drags the waypoints
    /// </summary>
    /// <param name="eventData"></param>
    void IMixedRealityPointerHandler.OnPointerDragged(MixedRealityPointerEventData eventData)
    {
        try
        {
            subpath1.UpdateDistance();
            subpath2.UpdateDistance();
            measurementManager.UpdateTotalPathLength();
        }
        catch
        {
            // ignored
        }
    }

    /// <summary>
    /// Triggers an attempt to add the waypoint to a subpath if it's not already part of any
    /// </summary>
    /// <param name="arg0"></param>
    private void StartManipulationEndedEvents(ManipulationEventData arg0)
    {
        if (subpath1 == null && subpath2 == null)
        {
            measurementManager.AddToPath();
        }
    }

    public void SetWaypointName(int waypointNum) => gameObject.name = "Waypoint " + waypointNum;

    public void SetWaypointParent(Transform parent) => parentTransform = parent;
        
    public Vector3 GetWorldPosition() => transform.position;

    ////////////////////////////////////////////////
    // Unused IMixedRealityPointerHandler methods //
    ////////////////////////////////////////////////
    void IMixedRealityPointerHandler.OnPointerUp(MixedRealityPointerEventData eventData)
    {
    }
        
    void IMixedRealityPointerHandler.OnPointerDown(MixedRealityPointerEventData eventData)
    {
    }
}
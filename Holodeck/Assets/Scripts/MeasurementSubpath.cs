using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Utilities;
using UnityEngine;

/// <summary>
/// Controls a line, set to two targets. Measurement is displayed as text in the middle of the line.
/// </summary>
public class MeasurementSubpath : MonoBehaviour
{
    [SerializeField] private LineRenderer lineRenderer;
    [SerializeField] private BannerLabel measurementText;
    [SerializeField] private Billboard textBillboard;
    private MeasurementManager measurementManager { get; set; }
    private MeasurementWaypoint startPoint { get; set; }
    public MeasurementWaypoint endPoint { get; set; }
    public int pathLength { get; private set; }
    private const float CM_PER_UNITY_UNIT = 93.7059809951f;

    private void Start()
    {
        // LineRenderer.useWorldSpace needs to be true because the target positions also use world space positions
        lineRenderer.useWorldSpace = true;
        textBillboard.TargetTransform = CameraCache.Main.transform;
        UpdateDistance();
    }

    public void InitializeSubpath(int subpathNum, Transform parent, MeasurementWaypoint point1,
        MeasurementWaypoint point2, MeasurementManager manager, Material material)
    {
        gameObject.name = "Subpath " + subpathNum;
        transform.SetParent(parent);
        measurementManager = manager;
        SetWaypoints(point1, point2);
        SetLineMaterial(material);
    }

    public void UpdateDistance()
    {
        Vector3 target1 = startPoint.transform.position;
        Vector3 target2 = endPoint.transform.position;
            
        // LineRenderer.SetPositions() is faster than multiple LineRenderer.SetPosition() calls
        lineRenderer.SetPositions(new[] { target1, target2 });
            
        // Display text at the middle point between the two targets
        measurementText.transform.position = (target1 + target2) / 2;
            
        CalculateDistance();
        measurementText.SetBannerText(pathLength + " cm");
        measurementManager.UpdateTotalPathLength();
    }
        
    private void SetWaypoints(MeasurementWaypoint target1, MeasurementWaypoint target2)
    {
        startPoint = target1;
        endPoint = target2;
    }

    private void SetLineMaterial(Material material) => lineRenderer.material = material;

    private void CalculateDistance() => pathLength = (int)(Vector3.Distance(
        startPoint.GetWorldPosition(), endPoint.GetWorldPosition()) * CM_PER_UNITY_UNIT);
}
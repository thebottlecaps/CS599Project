using System.Collections.Generic;
using Microsoft.MixedReality.Toolkit.UI;
using TMPro;
using UnityEngine;

/// <summary>
/// Dynamically adjusts banner background size and padding as text is updated in edit mode.
/// </summary>
[ExecuteInEditMode]
public class BannerLabel : MonoBehaviour
{
    [SerializeField] private bool showBackground = true;

    /// <summary>
    /// Show the opaque background.
    /// </summary>
    private bool ShowBackground
    {
        set { showBackground = value; }
    }

    [SerializeField] private GameObject label;
    [SerializeField] private GameObject contentParent;

    [TextArea]
    [SerializeField] private string bannerText;

    [SerializeField]
    [Tooltip("The padding around the content (height / width)")]
    private Vector2 backgroundPadding = Vector2.zero;

    [SerializeField]
    [Tooltip("The offset of the background (x / y / z)")]
    private Vector3 backgroundOffset = Vector3.zero;

    /// <summary>
    /// The offset of the background (x / y / z)
    /// </summary>
    private Vector3 LocalContentOffset => backgroundOffset;

    [SerializeField]
    [Tooltip("The scale of all the content (label, backgrounds, etc.)")]
    private float contentScale = 1f;

    [SerializeField] [Range(10, 60)] private int fontSize = 20;

    private Vector2 localContentSize;
    private List<IToolTipBackground> backgrounds = new List<IToolTipBackground>();
    private TextMeshPro cachedLabelText;
        
    private void OnEnable()
    {
        backgrounds.Clear();
        foreach (IToolTipBackground background in GetComponents<IToolTipBackground>())
        {
            backgrounds.Add(background);
        }

        ShowBackground = showBackground;
    }

    private void Update()
    {
        RefreshLocalContent();
    }

    private void RefreshLocalContent()
    {
        contentParent.transform.localScale = Vector3.one * contentScale;
        label.transform.localScale = Vector3.one * 0.005f;

        if (cachedLabelText == null)
        {
            cachedLabelText = label.GetComponent<TextMeshPro>();
        }

        if (!string.IsNullOrEmpty(bannerText))
        {
            cachedLabelText.text = bannerText.Trim();
        }

        cachedLabelText.fontSize = fontSize;

        // Force text mesh to use center alignment
        cachedLabelText.alignment = TextAlignmentOptions.CenterGeoAligned;
        // Update text so we get an accurate scale
        cachedLabelText.ForceMeshUpdate();
        // Get the world scale of the text
        // Convert that to local scale using the content parent
        Vector3 localScale = Vector3.Scale(cachedLabelText.transform.localScale / contentScale, cachedLabelText.textBounds.size);
        localContentSize.x = localScale.x + backgroundPadding.x;
        localContentSize.y = localScale.y + backgroundPadding.y;
            
        foreach (IToolTipBackground background in backgrounds)
        {
            background.OnContentChange(localContentSize, LocalContentOffset, contentParent.transform);
        }

        foreach (IToolTipBackground background in backgrounds)
        {
            background.IsVisible = showBackground;
        }
    }

    public void SetBannerText(string text) => bannerText = text;
}
#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<MeasurementSubpath>>
struct Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_tA6A38ACBB9B75A13510D4F82BD093B367BE4666E;
// System.Collections.Generic.IEnumerable`1<MeasurementSubpath>
struct IEnumerable_1_t751F97A4637CDF064481433ED69FBD31677B5D49;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<MeasurementSubpath>>
struct KeyCollection_tD0101A9986AD8A82F2E66369F16F52619F18EEA2;
// System.Collections.Generic.List`1<System.Tuple`2<System.Int32,Microsoft.MixedReality.Toolkit.UI.InteractableThemeBase>>
struct List_1_t0DB2A37CD85F70C309C687BD19983A8AC70F3DC5;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.IInteractableHandler>
struct List_1_t0B9E724869FE9204119EF5300C7569301F79A9D6;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>
struct List_1_t4820C8F8192DA491FDCD59B55F9D9CDEFE6866E4;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.IToolTipBackground>
struct List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.InteractableEvent>
struct List_1_t679CB43B097ECF2CB8D0EA39A6EFA7C16DF340EB;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.InteractableProfileItem>
struct List_1_tCC6BA64BF3DBB363F1C958D1E2CD3BC0CAF880B8;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.InteractableThemeBase>
struct List_1_t4D562F4D68B80A766A88D18040130B542F6062CA;
// System.Collections.Generic.List`1<MeasurementSubpath>
struct List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction>
struct List_1_t81DD6D8E3F2D498C5E128E9488F7CC05E1881C4D;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/PointerData>
struct List_1_tDCB42132EA3F6FE987625FAA7D33629EC3112775;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<Microsoft.MixedReality.Toolkit.UI.ManipulationEventData>
struct UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityEvent`1<Microsoft.MixedReality.Toolkit.UI.ManipulationEventData>
struct UnityEvent_1_t0BD17C20BEE262A9D68E86035A0112D1D2BF9749;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<MeasurementSubpath>>
struct ValueCollection_tCB14EE70A131297CBF73E76E0F4E4FDD76BAC54D;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.List`1<MeasurementSubpath>>[]
struct EntryU5BU5D_tF841B38493A9CC288F665A38774EF0BED514868E;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// Microsoft.MixedReality.Toolkit.UI.IToolTipBackground[]
struct IToolTipBackgroundU5BU5D_t0226238ACE7357677E7C23DEC267F4AEC373D869;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// Microsoft.MixedReality.Toolkit.UI.Interactable[]
struct InteractableU5BU5D_tF1DE825046569AB7A4BD344DEB0B2F772FD8FF8D;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// MeasurementSubpath[]
struct MeasurementSubpathU5BU5D_tC21387A46FD88D14609DE67E06DAA7CCA909D59D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9;
// TMPro.TextMeshPro[]
struct TextMeshProU5BU5D_tC24D27573EBF908D9D2D4FD451C3FD1A3817FC28;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// BannerLabel
struct BannerLabel_t5E12C461D19C2713BFBAB7AB4CE543FF0F7521C6;
// Microsoft.MixedReality.Toolkit.UI.Billboard
struct Billboard_tC740A69446594896C52DF6A718F80D1E028DAD00;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Microsoft.MixedReality.Toolkit.UI.ConstraintManager
struct ConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.MixedReality.Toolkit.Experimental.Physics.ElasticsManager
struct ElasticsManager_tD4776E7BC4F43D53B123DD7C21A90AEB07EDDDC3;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Net.Http.HttpClient
struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42;
// System.Net.Http.HttpMessageHandler
struct HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17;
// System.Net.Http.Headers.HttpRequestHeaders
struct HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// Microsoft.MixedReality.Toolkit.UI.IToolTipBackground
struct IToolTipBackground_tEEEA12E151BA739CAAA3E47ACFC61146A3AFD3C8;
// Microsoft.MixedReality.Toolkit.Utilities.ITransformSmoothingLogic
struct ITransformSmoothingLogic_t90A07CA39C84B00496FCABC9650493F6D3E49FCE;
// Microsoft.MixedReality.Toolkit.UI.Interactable
struct Interactable_t6ED173AE0E4636B62ED17D7E640C726B03FA0FF3;
// Microsoft.MixedReality.Toolkit.UI.InteractableStates
struct InteractableStates_t1D97D600C9C94AB004BFEC652E40B3DF95F50DF6;
// Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection
struct InteractableToggleCollection_tED7CB6F6C4E1FE135A63096FD807A0B53FE767FA;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent
struct ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F;
// Microsoft.MixedReality.Toolkit.UI.ManipulationEventData
struct ManipulationEventData_t3669F25A1E18443CE54C89DA7F6B5C641FD80F89;
// Microsoft.MixedReality.Toolkit.Physics.ManipulationMoveLogic
struct ManipulationMoveLogic_t251D54768E38006A42A6FBC6827C8DB331CB3E5D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MeasurementManager
struct MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C;
// MeasurementSubpath
struct MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088;
// MeasurementWaypoint
struct MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator
struct ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// Microsoft.MixedReality.Toolkit.UI.State
struct State_tABF1912F27C479FA84AE96D13A8417C08960156A;
// Microsoft.MixedReality.Toolkit.UI.States
struct States_tC82B1580BE374C64A36D1B612FCAEC1CBD233C85;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Microsoft.MixedReality.Toolkit.Physics.TwoHandRotateLogic
struct TwoHandRotateLogic_tEF89AA0BEF7C232BB4FBEA6D76F357408939950B;
// Microsoft.MixedReality.Toolkit.Physics.TwoHandScaleLogic
struct TwoHandScaleLogic_t167083A146EE5C304A01FC77818E0CE7DCBF0828;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// MeasurementManager/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_tEA751F07D5469797EE7D141B432E89B05243A2D7;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IToolTipBackground_tEEEA12E151BA739CAAA3E47ACFC61146A3AFD3C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_tEA751F07D5469797EE7D141B432E89B05243A2D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1141C0D385A7F00BB929A1282CFCFC4404074DAE;
IL2CPP_EXTERN_C String_t* _stringLiteral2136A922EE529061AEFD5F740886CE07F69EF4A4;
IL2CPP_EXTERN_C String_t* _stringLiteral4C564D053473C96A3C60B57CDF8C1EA02B1AC0A9;
IL2CPP_EXTERN_C String_t* _stringLiteral858FD3C8BD790C7AE9648241681753040AAA353E;
IL2CPP_EXTERN_C String_t* _stringLiteralAE160A073D64497E84A5ACD3C59A9EB02334F459;
IL2CPP_EXTERN_C String_t* _stringLiteralAEAFC6C0B33D2163E8E30509B0CDBC4FD83E3EC2;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA1539AB884165A2F749D881DC03DF6022F04BB6;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F_m9DC4E8BCFBBA48CD26A4513EBD1A7D43184E4520_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisIToolTipBackground_tEEEA12E151BA739CAAA3E47ACFC61146A3AFD3C8_m5EF1B99E6E3F98E749F3FB8388009E0DD57CC817_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m3097FC77D59929435D13145406238B00DAE41CD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m25B88BF42A4FC58A4A3BF232D5F6FA1AFA4F5620_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mF3FF744A99362F0515FC52A128F165DD01542637_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mCFA05363BA4A9601CF4B95F95B5753DCBE36C83D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Last_TisMeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088_m0D9AA4E50DC7A642FFEDB3C15E69B07E14EDD904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m280EA5496E7A748B2DCD7A45BF267F4C03CD155B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB980741131342998F6B11321F49DA48431C5DFD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m09968149EDDBEBE15990592FF016245930A9AA08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m58A37EA33D72FAC34829170CEC6997898F01E639_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m658D2776741B15F8EB6CA424B406AA807E940C01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBFC33221231F81C2618361544D0030CE84B9E754_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088_mEFE41E81BDF40A37450C6BE05143F19E5BDF4554_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F_m317301671C2F51B15D175E7FE28E010ABCB0CB57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8F318B5D9C89349E31A75693486491AD63B62198_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC926CD809AEBD9C517D273C442076D205D0BE863_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mA3FAB35A25139BA1D7CFC37DC1F87F49304323C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0D75211E3993E5EA4C617CBCCDAEF5BA36AB62A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mFA2E71819380DE6822CB407108AF1C081C0DC05E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCB54942FBC0A562E7B390A6B8F935F0A374DAF3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE7CF0C9F87E812B742459553E666D56884B42691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBAC2E9F39FB2B4583EAB215CC921D7ED322D9B58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeasurementManager_OnExportButtonClicked_mF0E38B125C661628B77D2FA7635A90D0E50A6BDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeasurementManager_OnPathToggled_mC5858AFB92FED3AE990D6642759C60554833F94D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeasurementManager_U3CInstantiateListenersU3Eb__21_0_m2C3FAA05FAE58D0B43ECF710B55D0DC5945A8C71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeasurementWaypoint_StartManipulationEndedEvents_m9EC07FCB853A3A748EE50A4706F8C143FEF2DB4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CInstantiateListenersU3Eb__1_m245CF230649349E59E5FA636E54372F4DFD7F921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mCE472D576E4B9591F706A2D7A00FC0BA3C985BBF_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct IToolTipBackgroundU5BU5D_t0226238ACE7357677E7C23DEC267F4AEC373D869;
struct InteractableU5BU5D_tF1DE825046569AB7A4BD344DEB0B2F772FD8FF8D;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TextMeshProU5BU5D_tC24D27573EBF908D9D2D4FD451C3FD1A3817FC28;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<MeasurementSubpath>>
struct Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF841B38493A9CC288F665A38774EF0BED514868E* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tD0101A9986AD8A82F2E66369F16F52619F18EEA2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCB14EE70A131297CBF73E76E0F4E4FDD76BAC54D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.IToolTipBackground>
struct List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IToolTipBackgroundU5BU5D_t0226238ACE7357677E7C23DEC267F4AEC373D869* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IToolTipBackgroundU5BU5D_t0226238ACE7357677E7C23DEC267F4AEC373D869* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<MeasurementSubpath>
struct List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MeasurementSubpathU5BU5D_tC21387A46FD88D14609DE67E06DAA7CCA909D59D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MeasurementSubpathU5BU5D_tC21387A46FD88D14609DE67E06DAA7CCA909D59D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// System.Net.Http.HttpMessageInvoker
struct HttpMessageInvoker_t00698E3A7D5068564C401C7D3F90798056A04800  : public RuntimeObject
{
	// System.Net.Http.HttpMessageHandler System.Net.Http.HttpMessageInvoker::handler
	HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17* ___handler_0;
	// System.Boolean System.Net.Http.HttpMessageInvoker::disposeHandler
	bool ___disposeHandler_1;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// MeasurementManager/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_tEA751F07D5469797EE7D141B432E89B05243A2D7  : public RuntimeObject
{
	// System.Int32 MeasurementManager/<>c__DisplayClass21_0::j
	int32_t ___j_0;
	// MeasurementManager MeasurementManager/<>c__DisplayClass21_0::<>4__this
	MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* ___U3CU3E4__this_1;
};

// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.UI.IToolTipBackground>
struct Enumerator_tEA66A96991A6C3FF9B40564AA7C01996CDF7F7C2 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<MeasurementSubpath>
struct Enumerator_t5CF6BD9625620BC4A25140134608B1DC6612D4A1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Events.UnityEvent`1<Microsoft.MixedReality.Toolkit.UI.ManipulationEventData>
struct UnityEvent_1_t0BD17C20BEE262A9D68E86035A0112D1D2BF9749  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 
{
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;
};

struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___U3CNoneU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct BaseInputEventData_tE30935633FC3413040017EC7BB3F4D54958E5399  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___U3CMixedRealityInputActionU3Ek__BackingField_4;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// System.Net.Http.HttpClient
struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42  : public HttpMessageInvoker_t00698E3A7D5068564C401C7D3F90798056A04800
{
	// System.Uri System.Net.Http.HttpClient::base_address
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___base_address_3;
	// System.Threading.CancellationTokenSource System.Net.Http.HttpClient::cts
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___cts_4;
	// System.Boolean System.Net.Http.HttpClient::disposed
	bool ___disposed_5;
	// System.Net.Http.Headers.HttpRequestHeaders System.Net.Http.HttpClient::headers
	HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7* ___headers_6;
	// System.Int64 System.Net.Http.HttpClient::buffer_size
	int64_t ___buffer_size_7;
	// System.TimeSpan System.Net.Http.HttpClient::timeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeout_8;
};

struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_StaticFields
{
	// System.TimeSpan System.Net.Http.HttpClient::TimeoutDefault
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___TimeoutDefault_2;
};

// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent
struct ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F  : public UnityEvent_1_t0BD17C20BEE262A9D68E86035A0112D1D2BF9749
{
};

// Microsoft.MixedReality.Toolkit.UI.ManipulationEventData
struct ManipulationEventData_t3669F25A1E18443CE54C89DA7F6B5C641FD80F89  : public RuntimeObject
{
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.ManipulationEventData::<ManipulationSource>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CManipulationSourceU3Ek__BackingField_0;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.UI.ManipulationEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ManipulationEventData::<IsNearInteraction>k__BackingField
	bool ___U3CIsNearInteractionU3Ek__BackingField_2;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ManipulationEventData::<PointerCentroid>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointerCentroidU3Ek__BackingField_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ManipulationEventData::<PointerVelocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointerVelocityU3Ek__BackingField_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ManipulationEventData::<PointerAngularVelocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointerAngularVelocityU3Ek__BackingField_5;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.IO.Stream System.IO.StreamWriter::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_7;
	// System.Text.Encoding System.IO.StreamWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_8;
	// System.Text.Encoder System.IO.StreamWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_9;
	// System.Byte[] System.IO.StreamWriter::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_10;
	// System.Char[] System.IO.StreamWriter::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_11;
	// System.Int32 System.IO.StreamWriter::_charPos
	int32_t ____charPos_12;
	// System.Int32 System.IO.StreamWriter::_charLen
	int32_t ____charLen_13;
	// System.Boolean System.IO.StreamWriter::_autoFlush
	bool ____autoFlush_14;
	// System.Boolean System.IO.StreamWriter::_haveWrittenPreamble
	bool ____haveWrittenPreamble_15;
	// System.Boolean System.IO.StreamWriter::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamWriter::_asyncWriteTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncWriteTask_17;
};

struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_StaticFields
{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___Null_6;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85  : public BaseInputEventData_tE30935633FC3413040017EC7BB3F4D54958E5399
{
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_5;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Events.UnityAction`1<Microsoft.MixedReality.Toolkit.UI.ManipulationEventData>
struct UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B  : public InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85
{
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_7;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// BannerLabel
struct BannerLabel_t5E12C461D19C2713BFBAB7AB4CE543FF0F7521C6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean BannerLabel::showBackground
	bool ___showBackground_4;
	// UnityEngine.GameObject BannerLabel::label
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___label_5;
	// UnityEngine.GameObject BannerLabel::contentParent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___contentParent_6;
	// System.String BannerLabel::bannerText
	String_t* ___bannerText_7;
	// UnityEngine.Vector2 BannerLabel::backgroundPadding
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___backgroundPadding_8;
	// UnityEngine.Vector3 BannerLabel::backgroundOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backgroundOffset_9;
	// System.Single BannerLabel::contentScale
	float ___contentScale_10;
	// System.Int32 BannerLabel::fontSize
	int32_t ___fontSize_11;
	// UnityEngine.Vector2 BannerLabel::localContentSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___localContentSize_12;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.IToolTipBackground> BannerLabel::backgrounds
	List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13* ___backgrounds_13;
	// TMPro.TextMeshPro BannerLabel::cachedLabelText
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___cachedLabelText_14;
};

// Microsoft.MixedReality.Toolkit.UI.Billboard
struct Billboard_tC740A69446594896C52DF6A718F80D1E028DAD00  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Microsoft.MixedReality.Toolkit.Utilities.PivotAxis Microsoft.MixedReality.Toolkit.UI.Billboard::pivotAxis
	int32_t ___pivotAxis_4;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.Billboard::targetTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform_5;
};

// Microsoft.MixedReality.Toolkit.UI.Interactable
struct Interactable_t6ED173AE0E4636B62ED17D7E640C726B03FA0FF3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer> Microsoft.MixedReality.Toolkit.UI.Interactable::focusingPointers
	List_1_t4820C8F8192DA491FDCD59B55F9D9CDEFE6866E4* ___focusingPointers_4;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.UI.Interactable::pressingInputSources
	HashSet_1_tA6A38ACBB9B75A13510D4F82BD093B367BE4666E* ___pressingInputSources_5;
	// Microsoft.MixedReality.Toolkit.UI.States Microsoft.MixedReality.Toolkit.UI.Interactable::states
	States_tC82B1580BE374C64A36D1B612FCAEC1CBD233C85* ___states_6;
	// Microsoft.MixedReality.Toolkit.UI.InteractableStates Microsoft.MixedReality.Toolkit.UI.Interactable::<StateManager>k__BackingField
	InteractableStates_t1D97D600C9C94AB004BFEC652E40B3DF95F50DF6* ___U3CStateManagerU3Ek__BackingField_7;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.UI.Interactable::<InputAction>k__BackingField
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___U3CInputActionU3Ek__BackingField_8;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Interactable::InputActionId
	int32_t ___InputActionId_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::isGlobal
	bool ___isGlobal_10;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Interactable::Dimensions
	int32_t ___Dimensions_11;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Interactable::dimensionIndex
	int32_t ___dimensionIndex_12;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Interactable::startDimensionIndex
	int32_t ___startDimensionIndex_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::CanSelect
	bool ___CanSelect_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::CanDeselect
	bool ___CanDeselect_15;
	// System.String Microsoft.MixedReality.Toolkit.UI.Interactable::voiceCommand
	String_t* ___voiceCommand_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::voiceRequiresFocus
	bool ___voiceRequiresFocus_17;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.InteractableProfileItem> Microsoft.MixedReality.Toolkit.UI.Interactable::profiles
	List_1_tCC6BA64BF3DBB363F1C958D1E2CD3BC0CAF880B8* ___profiles_18;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.Interactable::OnClick
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnClick_19;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.InteractableEvent> Microsoft.MixedReality.Toolkit.UI.Interactable::Events
	List_1_t679CB43B097ECF2CB8D0EA39A6EFA7C16DF340EB* ___Events_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::resetOnDestroy
	bool ___resetOnDestroy_21;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.InteractableThemeBase> Microsoft.MixedReality.Toolkit.UI.Interactable::activeThemes
	List_1_t4D562F4D68B80A766A88D18040130B542F6062CA* ___activeThemes_22;
	// System.Collections.Generic.List`1<System.Tuple`2<System.Int32,Microsoft.MixedReality.Toolkit.UI.InteractableThemeBase>> Microsoft.MixedReality.Toolkit.UI.Interactable::allThemeDimensionPairs
	List_1_t0DB2A37CD85F70C309C687BD19983A8AC70F3DC5* ___allThemeDimensionPairs_23;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Interactable::<ClickCount>k__BackingField
	int32_t ___U3CClickCountU3Ek__BackingField_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::enabledOnStart
	bool ___enabledOnStart_25;
	// Microsoft.MixedReality.Toolkit.UI.State Microsoft.MixedReality.Toolkit.UI.Interactable::lastState
	State_tABF1912F27C479FA84AE96D13A8417C08960156A* ___lastState_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::forceUpdate
	bool ___forceUpdate_27;
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable::<RollOffTime>k__BackingField
	float ___U3CRollOffTimeU3Ek__BackingField_28;
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable::rollOffTimer
	float ___rollOffTimer_29;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.IInteractableHandler> Microsoft.MixedReality.Toolkit.UI.Interactable::handlers
	List_1_t0B9E724869FE9204119EF5300C7569301F79A9D6* ___handlers_30;
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable::clickTime
	float ___clickTime_31;
	// UnityEngine.Coroutine Microsoft.MixedReality.Toolkit.UI.Interactable::clickValidTimer
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___clickValidTimer_32;
	// UnityEngine.Coroutine Microsoft.MixedReality.Toolkit.UI.Interactable::globalTimer
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___globalTimer_34;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.UI.Interactable::dragStartPosition
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___dragStartPosition_35;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::isInitialized
	bool ___isInitialized_39;
};

struct Interactable_t6ED173AE0E4636B62ED17D7E640C726B03FA0FF3_StaticFields
{
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable::gestureStartThresholdVector2
	float ___gestureStartThresholdVector2_36;
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable::gestureStartThresholdVector3
	float ___gestureStartThresholdVector3_37;
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable::gestureStartThresholdMixedRealityPose
	float ___gestureStartThresholdMixedRealityPose_38;
};

// Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection
struct InteractableToggleCollection_tED7CB6F6C4E1FE135A63096FD807A0B53FE767FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Microsoft.MixedReality.Toolkit.UI.Interactable[] Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection::toggleList
	InteractableU5BU5D_tF1DE825046569AB7A4BD344DEB0B2F772FD8FF8D* ___toggleList_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection::currentIndex
	int32_t ___currentIndex_5;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection::OnSelectionEvents
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnSelectionEvents_6;
	// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction> Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection::toggleActions
	List_1_t81DD6D8E3F2D498C5E128E9488F7CC05E1881C4D* ___toggleActions_7;
};

// MeasurementManager
struct MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MeasurementManager::waypointPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___waypointPrefab_4;
	// UnityEngine.GameObject MeasurementManager::subpathPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___subpathPrefab_5;
	// UnityEngine.Transform MeasurementManager::waypointSpawnPositionHolder
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___waypointSpawnPositionHolder_6;
	// UnityEngine.GameObject[] MeasurementManager::pathParents
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___pathParents_7;
	// UnityEngine.Material[] MeasurementManager::pathMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___pathMaterials_8;
	// Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection MeasurementManager::choosePathRadials
	InteractableToggleCollection_tED7CB6F6C4E1FE135A63096FD807A0B53FE767FA* ___choosePathRadials_9;
	// Microsoft.MixedReality.Toolkit.UI.Interactable[] MeasurementManager::pathToggles
	InteractableU5BU5D_tF1DE825046569AB7A4BD344DEB0B2F772FD8FF8D* ___pathToggles_10;
	// Microsoft.MixedReality.Toolkit.UI.Interactable[] MeasurementManager::clearPathButtons
	InteractableU5BU5D_tF1DE825046569AB7A4BD344DEB0B2F772FD8FF8D* ___clearPathButtons_11;
	// Microsoft.MixedReality.Toolkit.UI.Interactable MeasurementManager::exportButton
	Interactable_t6ED173AE0E4636B62ED17D7E640C726B03FA0FF3* ___exportButton_12;
	// TMPro.TextMeshPro[] MeasurementManager::pathDistanceLabels
	TextMeshProU5BU5D_tC24D27573EBF908D9D2D4FD451C3FD1A3817FC28* ___pathDistanceLabels_13;
	// TMPro.TextMeshPro[] MeasurementManager::pathToggleLabels
	TextMeshProU5BU5D_tC24D27573EBF908D9D2D4FD451C3FD1A3817FC28* ___pathToggleLabels_14;
	// UnityEngine.Color MeasurementManager::unselectedLabelWhite
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___unselectedLabelWhite_15;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MeasurementManager::waypointParents
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___waypointParents_16;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MeasurementManager::subpathParents
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___subpathParents_17;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<MeasurementSubpath>> MeasurementManager::paths
	Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C* ___paths_18;
	// MeasurementWaypoint MeasurementManager::previousWaypoint
	MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___previousWaypoint_19;
	// MeasurementWaypoint MeasurementManager::newWaypoint
	MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___newWaypoint_20;
	// System.Int32 MeasurementManager::currentPath
	int32_t ___currentPath_21;
	// System.String MeasurementManager::filename
	String_t* ___filename_22;
};

struct MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C_StaticFields
{
	// System.Net.Http.HttpClient MeasurementManager::client
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* ___client_23;
};

// MeasurementSubpath
struct MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LineRenderer MeasurementSubpath::lineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___lineRenderer_4;
	// BannerLabel MeasurementSubpath::measurementText
	BannerLabel_t5E12C461D19C2713BFBAB7AB4CE543FF0F7521C6* ___measurementText_5;
	// Microsoft.MixedReality.Toolkit.UI.Billboard MeasurementSubpath::textBillboard
	Billboard_tC740A69446594896C52DF6A718F80D1E028DAD00* ___textBillboard_6;
	// MeasurementManager MeasurementSubpath::<measurementManager>k__BackingField
	MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* ___U3CmeasurementManagerU3Ek__BackingField_7;
	// MeasurementWaypoint MeasurementSubpath::<startPoint>k__BackingField
	MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___U3CstartPointU3Ek__BackingField_8;
	// MeasurementWaypoint MeasurementSubpath::<endPoint>k__BackingField
	MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___U3CendPointU3Ek__BackingField_9;
	// System.Int32 MeasurementSubpath::<pathLength>k__BackingField
	int32_t ___U3CpathLengthU3Ek__BackingField_10;
};

// MeasurementWaypoint
struct MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator MeasurementWaypoint::manipulator
	ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* ___manipulator_4;
	// MeasurementManager MeasurementWaypoint::<measurementManager>k__BackingField
	MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* ___U3CmeasurementManagerU3Ek__BackingField_5;
	// MeasurementSubpath MeasurementWaypoint::<subpath1>k__BackingField
	MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* ___U3Csubpath1U3Ek__BackingField_6;
	// MeasurementSubpath MeasurementWaypoint::<subpath2>k__BackingField
	MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* ___U3Csubpath2U3Ek__BackingField_7;
	// UnityEngine.Transform MeasurementWaypoint::parentTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentTransform_8;
};

// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator
struct ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::hostTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___hostTransform_4;
	// Microsoft.MixedReality.Toolkit.Utilities.ManipulationHandFlags Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::manipulationType
	int32_t ___manipulationType_5;
	// Microsoft.MixedReality.Toolkit.Utilities.TransformFlags Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::twoHandedManipulationType
	int32_t ___twoHandedManipulationType_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::allowFarManipulation
	bool ___allowFarManipulation_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::useForcesForNearManipulation
	bool ___useForcesForNearManipulation_8;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/RotateInOneHandType Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::oneHandRotationModeNear
	int32_t ___oneHandRotationModeNear_9;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/RotateInOneHandType Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::oneHandRotationModeFar
	int32_t ___oneHandRotationModeFar_10;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/ReleaseBehaviorType Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::releaseBehavior
	int32_t ___releaseBehavior_11;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::transformSmoothingLogicType
	SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* ___transformSmoothingLogicType_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::smoothingFar
	bool ___smoothingFar_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::smoothingNear
	bool ___smoothingNear_14;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::moveLerpTime
	float ___moveLerpTime_15;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::rotateLerpTime
	float ___rotateLerpTime_16;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::scaleLerpTime
	float ___scaleLerpTime_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::enableConstraints
	bool ___enableConstraints_18;
	// Microsoft.MixedReality.Toolkit.UI.ConstraintManager Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::constraintsManager
	ConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16* ___constraintsManager_19;
	// Microsoft.MixedReality.Toolkit.Experimental.Physics.ElasticsManager Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::elasticsManager
	ElasticsManager_tD4776E7BC4F43D53B123DD7C21A90AEB07EDDDC3* ___elasticsManager_20;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::onManipulationStarted
	ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* ___onManipulationStarted_21;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::onManipulationEnded
	ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* ___onManipulationEnded_22;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::onHoverEntered
	ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* ___onHoverEntered_23;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::onHoverExited
	ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* ___onHoverExited_24;
	// Microsoft.MixedReality.Toolkit.Physics.ManipulationMoveLogic Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::moveLogic
	ManipulationMoveLogic_t251D54768E38006A42A6FBC6827C8DB331CB3E5D* ___moveLogic_25;
	// Microsoft.MixedReality.Toolkit.Physics.TwoHandScaleLogic Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::scaleLogic
	TwoHandScaleLogic_t167083A146EE5C304A01FC77818E0CE7DCBF0828* ___scaleLogic_26;
	// Microsoft.MixedReality.Toolkit.Physics.TwoHandRotateLogic Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::rotateLogic
	TwoHandRotateLogic_tEF89AA0BEF7C232BB4FBEA6D76F357408939950B* ___rotateLogic_27;
	// Microsoft.MixedReality.Toolkit.Utilities.ITransformSmoothingLogic Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::smoothingLogic
	RuntimeObject* ___smoothingLogic_28;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/PointerData> Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::pointerDataList
	List_1_tDCB42132EA3F6FE987625FAA7D33629EC3112775* ___pointerDataList_29;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::objectToGripRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___objectToGripRotation_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::isNearManipulation
	bool ___isNearManipulation_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::isManipulationStarted
	bool ___isManipulationStarted_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::isSmoothing
	bool ___isSmoothing_33;
	// UnityEngine.Rigidbody Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::rigidBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigidBody_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::wasGravity
	bool ___wasGravity_35;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::wasKinematic
	bool ___wasKinematic_36;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::leftHandRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftHandRotation_37;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::rightHandRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightHandRotation_38;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::hasFirstPointerDraggedThisFrame
	bool ___hasFirstPointerDraggedThisFrame_39;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::handPositionMap
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___handPositionMap_40;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_265;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_266;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_267;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_268;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_269;
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_270;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_271;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___m_renderer_272;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___m_meshFilter_273;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_274;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_275;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_276;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9* ___m_subTextObjects_277;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_278;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_279;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_280;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_281;
};

struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_301;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.UI.IToolTipBackground[]
struct IToolTipBackgroundU5BU5D_t0226238ACE7357677E7C23DEC267F4AEC373D869  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.UI.Interactable[]
struct InteractableU5BU5D_tF1DE825046569AB7A4BD344DEB0B2F772FD8FF8D  : public RuntimeArray
{
	ALIGN_FIELD (8) Interactable_t6ED173AE0E4636B62ED17D7E640C726B03FA0FF3* m_Items[1];

	inline Interactable_t6ED173AE0E4636B62ED17D7E640C726B03FA0FF3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Interactable_t6ED173AE0E4636B62ED17D7E640C726B03FA0FF3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Interactable_t6ED173AE0E4636B62ED17D7E640C726B03FA0FF3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Interactable_t6ED173AE0E4636B62ED17D7E640C726B03FA0FF3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Interactable_t6ED173AE0E4636B62ED17D7E640C726B03FA0FF3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Interactable_t6ED173AE0E4636B62ED17D7E640C726B03FA0FF3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TMPro.TextMeshPro[]
struct TextMeshProU5BU5D_tC24D27573EBF908D9D2D4FD451C3FD1A3817FC28  : public RuntimeArray
{
	ALIGN_FIELD (8) TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* m_Items[1];

	inline TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mE974DCECE6BCBB030F70F1618B707F587B99BDB4_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Last<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Last_TisRuntimeObject_mCAB07698079CD05A16F547890122EC092ACC25E0_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.IToolTipBackground>::Clear()
inline void List_1_Clear_mA3FAB35A25139BA1D7CFC37DC1F87F49304323C7_inline (List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// T[] UnityEngine.Component::GetComponents<Microsoft.MixedReality.Toolkit.UI.IToolTipBackground>()
inline IToolTipBackgroundU5BU5D_t0226238ACE7357677E7C23DEC267F4AEC373D869* Component_GetComponents_TisIToolTipBackground_tEEEA12E151BA739CAAA3E47ACFC61146A3AFD3C8_m5EF1B99E6E3F98E749F3FB8388009E0DD57CC817 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  IToolTipBackgroundU5BU5D_t0226238ACE7357677E7C23DEC267F4AEC373D869* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.IToolTipBackground>::Add(T)
inline void List_1_Add_mC926CD809AEBD9C517D273C442076D205D0BE863_inline (List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void BannerLabel::set_ShowBackground(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerLabel_set_ShowBackground_m7FF8D34F335A8D602CE251E9E6818042C257A28F_inline (BannerLabel_t5E12C461D19C2713BFBAB7AB4CE543FF0F7521C6* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void BannerLabel::RefreshLocalContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerLabel_RefreshLocalContent_mF96E4F63241A95F5B6DD822257412F6627F14596 (BannerLabel_t5E12C461D19C2713BFBAB7AB4CE543FF0F7521C6* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TextMeshPro>()
inline TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_fontSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_alignment(TMPro.TextAlignmentOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_alignment_mE5216A28797987CC19927ED3CB8DFAC438C6B95A (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform TMPro.TextMeshPro::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TextMeshPro_get_transform_m750148EC362B176A0E80D6F4ABAC1062E5281E11 (TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Bounds TMPro.TMP_Text::get_textBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TMP_Text_get_textBounds_m0D3E180B72130830D1C16BC7E5097AF2958E2740 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.IToolTipBackground>::GetEnumerator()
inline Enumerator_tEA66A96991A6C3FF9B40564AA7C01996CDF7F7C2 List_1_GetEnumerator_m0D75211E3993E5EA4C617CBCCDAEF5BA36AB62A0 (List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEA66A96991A6C3FF9B40564AA7C01996CDF7F7C2 (*) (List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.UI.IToolTipBackground>::Dispose()
inline void Enumerator_Dispose_mB980741131342998F6B11321F49DA48431C5DFD5 (Enumerator_tEA66A96991A6C3FF9B40564AA7C01996CDF7F7C2* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEA66A96991A6C3FF9B40564AA7C01996CDF7F7C2*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.UI.IToolTipBackground>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m658D2776741B15F8EB6CA424B406AA807E940C01_inline (Enumerator_tEA66A96991A6C3FF9B40564AA7C01996CDF7F7C2* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tEA66A96991A6C3FF9B40564AA7C01996CDF7F7C2*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 BannerLabel::get_LocalContentOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BannerLabel_get_LocalContentOffset_m0717A60DFE621C8F45B97CDE31F49A6E8A1E2192_inline (BannerLabel_t5E12C461D19C2713BFBAB7AB4CE543FF0F7521C6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.UI.IToolTipBackground>::MoveNext()
inline bool Enumerator_MoveNext_m58A37EA33D72FAC34829170CEC6997898F01E639 (Enumerator_tEA66A96991A6C3FF9B40564AA7C01996CDF7F7C2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEA66A96991A6C3FF9B40564AA7C01996CDF7F7C2*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.IToolTipBackground>::.ctor()
inline void List_1__ctor_mCB54942FBC0A562E7B390A6B8F935F0A374DAF3B (List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void MeasurementManager::InstantiateListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementManager_InstantiateListeners_mE66825B1096EF7DDFC89B2A85123393C8195565C (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<MeasurementSubpath>>::.ctor()
inline void Dictionary_2__ctor_m25B88BF42A4FC58A4A3BF232D5F6FA1AFA4F5620 (Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<MeasurementSubpath>::.ctor()
inline void List_1__ctor_mE7CF0C9F87E812B742459553E666D56884B42691 (List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<MeasurementSubpath>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m3097FC77D59929435D13145406238B00DAE41CD8 (Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C* __this, int32_t ___key0, List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C*, int32_t, List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// MeasurementWaypoint MeasurementManager::CreateNewWaypoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* MeasurementManager_CreateNewWaypoint_mD7DF3352B42AB72C1F6D0A417ED3F8CF30E407A1 (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, const RuntimeMethod* method) ;
// System.Void MeasurementManager::OnPathToggled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementManager_OnPathToggled_mC5858AFB92FED3AE990D6642759C60554833F94D (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void MeasurementManager/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mC5F6DF5B82331F220B2CBD935CBCB9E8F759BAD8 (U3CU3Ec__DisplayClass21_0_tEA751F07D5469797EE7D141B432E89B05243A2D7* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> MeasurementManager::PrepareExportData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* MeasurementManager_PrepareExportData_m301CDC54CC2B94E99C144800D118B1CEA5C33527 (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.IO.StreamWriter::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_m7C83908E2616C22FA632EF67E36E137932E534D7 (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Int32 Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection::get_CurrentIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InteractableToggleCollection_get_CurrentIndex_m89A38FF60EF3438B49EF7AAF6FBCA0123AAF0818_inline (InteractableToggleCollection_tED7CB6F6C4E1FE135A63096FD807A0B53FE767FA* __this, const RuntimeMethod* method) ;
// System.Void MeasurementWaypoint::SetWaypointParent(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeasurementWaypoint_SetWaypointParent_mB40C90D1321217EB9E6EBFABFFDA9D79E11613CD_inline (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, const RuntimeMethod* method) ;
// System.Void MeasurementWaypoint::SetWaypointName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementWaypoint_SetWaypointName_mF7884CF93D4C3BD3B87BCF8F3B1F7DAA446ADA50 (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, int32_t ___waypointNum0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void MeasurementManager::UpdateTotalPathLength(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementManager_UpdateTotalPathLength_m0F7501F9E10F24848209F912ACAF888197DBA5EC (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, int32_t ___pathNum0, bool ___resetToZero1, const RuntimeMethod* method) ;
// System.Void MeasurementManager::OnChoosePath(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementManager_OnChoosePath_m40B226B3F1FBB16DB208BD9471A0ACD947DCD957 (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, bool ___resetToZero0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<MeasurementSubpath>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mCFA05363BA4A9601CF4B95F95B5753DCBE36C83D (Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C* __this, int32_t ___key0, List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C*, int32_t, List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mE974DCECE6BCBB030F70F1618B707F587B99BDB4_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// T UnityEngine.GameObject::GetComponent<MeasurementWaypoint>()
inline MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* GameObject_GetComponent_TisMeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F_m317301671C2F51B15D175E7FE28E010ABCB0CB57 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void MeasurementWaypoint::InitializeWaypoint(System.Int32,UnityEngine.Transform,MeasurementManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementWaypoint_InitializeWaypoint_m65A7239E5081DAF4E17E51D706059733B85D46C0 (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, int32_t ___waypointNum0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* ___manager2, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// T UnityEngine.GameObject::GetComponent<MeasurementSubpath>()
inline MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* GameObject_GetComponent_TisMeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088_mEFE41E81BDF40A37450C6BE05143F19E5BDF4554 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<MeasurementSubpath>>::get_Item(TKey)
inline List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA* Dictionary_2_get_Item_mF3FF744A99362F0515FC52A128F165DD01542637 (Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA* (*) (Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.List`1<MeasurementSubpath>::get_Count()
inline int32_t List_1_get_Count_mBAC2E9F39FB2B4583EAB215CC921D7ED322D9B58_inline (List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void MeasurementSubpath::InitializeSubpath(System.Int32,UnityEngine.Transform,MeasurementWaypoint,MeasurementWaypoint,MeasurementManager,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementSubpath_InitializeSubpath_m6ED5E5B9FCDAA4C7CAF6D0148255E24ACA802AE1 (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, int32_t ___subpathNum0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___point12, MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___point23, MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* ___manager4, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material5, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<MeasurementWaypoint>()
inline MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* Component_GetComponent_TisMeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F_m9DC4E8BCFBBA48CD26A4513EBD1A7D43184E4520 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// MeasurementSubpath MeasurementManager::CreateNewSubpath(MeasurementWaypoint,MeasurementWaypoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* MeasurementManager_CreateNewSubpath_mBE9C67ECD0CA523EE63DDBB700741EF287C1F1D1 (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___startPoint0, MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___endPoint1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Last<MeasurementSubpath>(System.Collections.Generic.IEnumerable`1<TSource>)
inline MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* Enumerable_Last_TisMeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088_m0D9AA4E50DC7A642FFEDB3C15E69B07E14EDD904 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Last_TisRuntimeObject_mCAB07698079CD05A16F547890122EC092ACC25E0_gshared)(___source0, method);
}
// MeasurementWaypoint MeasurementSubpath::get_endPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* MeasurementSubpath_get_endPoint_m53D5B81DDFA34CDB4D0789E88612A82014A5A4DC_inline (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, const RuntimeMethod* method) ;
// System.Void MeasurementWaypoint::set_subpath2(MeasurementSubpath)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeasurementWaypoint_set_subpath2_m18CC4DFF877A083CC92119C606C669D1311D809B_inline (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* ___value0, const RuntimeMethod* method) ;
// System.Void MeasurementWaypoint::set_subpath1(MeasurementSubpath)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeasurementWaypoint_set_subpath1_m74F10767F5A80D821541C4224D47310E31080962_inline (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<MeasurementSubpath>::Add(T)
inline void List_1_Add_m8F318B5D9C89349E31A75693486491AD63B62198_inline (List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA* __this, MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA*, MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 MeasurementManager::CalculateTotalPathLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeasurementManager_CalculateTotalPathLength_m541035BA9A334D82202F9D74B0B1C4AA49D8102B (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, int32_t ___pathNum0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<MeasurementSubpath>::GetEnumerator()
inline Enumerator_t5CF6BD9625620BC4A25140134608B1DC6612D4A1 List_1_GetEnumerator_mFA2E71819380DE6822CB407108AF1C081C0DC05E (List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5CF6BD9625620BC4A25140134608B1DC6612D4A1 (*) (List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<MeasurementSubpath>::Dispose()
inline void Enumerator_Dispose_m280EA5496E7A748B2DCD7A45BF267F4C03CD155B (Enumerator_t5CF6BD9625620BC4A25140134608B1DC6612D4A1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5CF6BD9625620BC4A25140134608B1DC6612D4A1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<MeasurementSubpath>::get_Current()
inline MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* Enumerator_get_Current_mBFC33221231F81C2618361544D0030CE84B9E754_inline (Enumerator_t5CF6BD9625620BC4A25140134608B1DC6612D4A1* __this, const RuntimeMethod* method)
{
	return ((  MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* (*) (Enumerator_t5CF6BD9625620BC4A25140134608B1DC6612D4A1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Int32 MeasurementSubpath::get_pathLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeasurementSubpath_get_pathLength_mB68D305AF5C7F17CDD530304E6DD8981B906F933_inline (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<MeasurementSubpath>::MoveNext()
inline bool Enumerator_MoveNext_m09968149EDDBEBE15990592FF016245930A9AA08 (Enumerator_t5CF6BD9625620BC4A25140134608B1DC6612D4A1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5CF6BD9625620BC4A25140134608B1DC6612D4A1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void System.Net.Http.HttpClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpClient__ctor_mD64C48138600CF1398E7BB24BF33EB582ECB1AFD (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void MeasurementManager::OnClearPathClicked(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementManager_OnClearPathClicked_mB6EAAAF235AF26EE2C3866228350F36480F47DDF (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, int32_t ___pathNum0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_useWorldSpace(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_useWorldSpace_m0204DB2541CC37DC4DC15DA15FD5A66EDC507CE8 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.Billboard::set_TargetTransform(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Billboard_set_TargetTransform_m56A8C153474D84C8946FE520C94B7445EF695E92_inline (Billboard_tC740A69446594896C52DF6A718F80D1E028DAD00* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void MeasurementSubpath::UpdateDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementSubpath_UpdateDistance_m3D8371B6CB5006DC594820ECF28ADA510D99D72D (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Void MeasurementSubpath::set_measurementManager(MeasurementManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeasurementSubpath_set_measurementManager_mE8A257B85174A84AA4AFF4A74B123A04EAF869E6_inline (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* ___value0, const RuntimeMethod* method) ;
// System.Void MeasurementSubpath::SetWaypoints(MeasurementWaypoint,MeasurementWaypoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementSubpath_SetWaypoints_mA92972B44631EFF22F70499B40CA36B730475FBA (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___target10, MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___target21, const RuntimeMethod* method) ;
// System.Void MeasurementSubpath::SetLineMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementSubpath_SetLineMaterial_m118B0EDDD3031A9DF228CDE899BAC7E76710950D (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) ;
// MeasurementWaypoint MeasurementSubpath::get_startPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* MeasurementSubpath_get_startPoint_mD585516AFA93D9A2B04AB1E7BE4CCEF7C4AD075C_inline (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void MeasurementSubpath::CalculateDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementSubpath_CalculateDistance_m92CE114DC95F060B0DDEC2350F42496B8A448A9A (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, const RuntimeMethod* method) ;
// System.Void BannerLabel::SetBannerText(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerLabel_SetBannerText_m0FF8D4904A06E741EEDD4E02E56625B6BF3DE89A_inline (BannerLabel_t5E12C461D19C2713BFBAB7AB4CE543FF0F7521C6* __this, String_t* ___text0, const RuntimeMethod* method) ;
// MeasurementManager MeasurementSubpath::get_measurementManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* MeasurementSubpath_get_measurementManager_mB498D85F35F3F867EBB623A81C8B8A70AFE2F87A_inline (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, const RuntimeMethod* method) ;
// System.Void MeasurementSubpath::set_startPoint(MeasurementWaypoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeasurementSubpath_set_startPoint_m3F2E12B5C0FAB2780F689D69D028DBF648E5C930_inline (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___value0, const RuntimeMethod* method) ;
// System.Void MeasurementSubpath::set_endPoint(MeasurementWaypoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeasurementSubpath_set_endPoint_m7ABC4448C300DC38392105B48F0AC16F9D1F36F2_inline (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MeasurementWaypoint::GetWorldPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MeasurementWaypoint_GetWorldPosition_m943C23EDC3E8EE4C9B540DD63461FD8F9F12A96C (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void MeasurementSubpath::set_pathLength(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeasurementSubpath_set_pathLength_mA0C11BD1DF7A647C86B186C8B94FC4D345624E27_inline (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, int32_t ___value0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::get_OnManipulationEnded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* ObjectManipulator_get_OnManipulationEnded_m342FD627CB115449ED8BE8C1A36FABD9C875E630_inline (ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Microsoft.MixedReality.Toolkit.UI.ManipulationEventData>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mFCCE72B022568BFF6808E4C468007FF699A26D2E (UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Microsoft.MixedReality.Toolkit.UI.ManipulationEventData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mCE472D576E4B9591F706A2D7A00FC0BA3C985BBF (UnityEvent_1_t0BD17C20BEE262A9D68E86035A0112D1D2BF9749* __this, UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t0BD17C20BEE262A9D68E86035A0112D1D2BF9749*, UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void MeasurementWaypoint::set_measurementManager(MeasurementManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeasurementWaypoint_set_measurementManager_mA3027609CB63C1358EF0C88D5C0A99ABDFBE2512_inline (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// MeasurementSubpath MeasurementWaypoint::get_subpath1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* MeasurementWaypoint_get_subpath1_m967445ECCA7E87EA8CF82628D0A119DB5E2EA5D7_inline (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, const RuntimeMethod* method) ;
// MeasurementSubpath MeasurementWaypoint::get_subpath2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* MeasurementWaypoint_get_subpath2_m7B000E118A879823D193146B88D7582D1299ED6A_inline (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, const RuntimeMethod* method) ;
// MeasurementManager MeasurementWaypoint::get_measurementManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* MeasurementWaypoint_get_measurementManager_m23F66BC86B360E1EC2D6A7E70CE9E46677DE7C41_inline (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, const RuntimeMethod* method) ;
// System.Void MeasurementManager::AddToPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementManager_AddToPath_m641A3B9608BA421744D67E858E291099CC9BEDAF (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BannerLabel::set_ShowBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerLabel_set_ShowBackground_m7FF8D34F335A8D602CE251E9E6818042C257A28F (BannerLabel_t5E12C461D19C2713BFBAB7AB4CE543FF0F7521C6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { showBackground = value; }
		bool L_0 = ___value0;
		__this->___showBackground_4 = L_0;
		// set { showBackground = value; }
		return;
	}
}
// UnityEngine.Vector3 BannerLabel::get_LocalContentOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BannerLabel_get_LocalContentOffset_m0717A60DFE621C8F45B97CDE31F49A6E8A1E2192 (BannerLabel_t5E12C461D19C2713BFBAB7AB4CE543FF0F7521C6* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 LocalContentOffset => backgroundOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___backgroundOffset_9;
		return L_0;
	}
}
// System.Void BannerLabel::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerLabel_OnEnable_mEE5FBB890589E39076B50ABACDCF494BFADB1DCF (BannerLabel_t5E12C461D19C2713BFBAB7AB4CE543FF0F7521C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisIToolTipBackground_tEEEA12E151BA739CAAA3E47ACFC61146A3AFD3C8_m5EF1B99E6E3F98E749F3FB8388009E0DD57CC817_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC926CD809AEBD9C517D273C442076D205D0BE863_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mA3FAB35A25139BA1D7CFC37DC1F87F49304323C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	IToolTipBackgroundU5BU5D_t0226238ACE7357677E7C23DEC267F4AEC373D869* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		// backgrounds.Clear();
		List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13* L_0 = __this->___backgrounds_13;
		NullCheck(L_0);
		List_1_Clear_mA3FAB35A25139BA1D7CFC37DC1F87F49304323C7_inline(L_0, List_1_Clear_mA3FAB35A25139BA1D7CFC37DC1F87F49304323C7_RuntimeMethod_var);
		// foreach (IToolTipBackground background in GetComponents<IToolTipBackground>())
		IToolTipBackgroundU5BU5D_t0226238ACE7357677E7C23DEC267F4AEC373D869* L_1;
		L_1 = Component_GetComponents_TisIToolTipBackground_tEEEA12E151BA739CAAA3E47ACFC61146A3AFD3C8_m5EF1B99E6E3F98E749F3FB8388009E0DD57CC817(__this, Component_GetComponents_TisIToolTipBackground_tEEEA12E151BA739CAAA3E47ACFC61146A3AFD3C8_m5EF1B99E6E3F98E749F3FB8388009E0DD57CC817_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_002a;
	}

IL_0016:
	{
		// foreach (IToolTipBackground background in GetComponents<IToolTipBackground>())
		IToolTipBackgroundU5BU5D_t0226238ACE7357677E7C23DEC267F4AEC373D869* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// backgrounds.Add(background);
		List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13* L_6 = __this->___backgrounds_13;
		RuntimeObject* L_7 = V_2;
		NullCheck(L_6);
		List_1_Add_mC926CD809AEBD9C517D273C442076D205D0BE863_inline(L_6, L_7, List_1_Add_mC926CD809AEBD9C517D273C442076D205D0BE863_RuntimeMethod_var);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002a:
	{
		// foreach (IToolTipBackground background in GetComponents<IToolTipBackground>())
		int32_t L_9 = V_1;
		IToolTipBackgroundU5BU5D_t0226238ACE7357677E7C23DEC267F4AEC373D869* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		// ShowBackground = showBackground;
		bool L_11 = __this->___showBackground_4;
		BannerLabel_set_ShowBackground_m7FF8D34F335A8D602CE251E9E6818042C257A28F_inline(__this, L_11, NULL);
		// }
		return;
	}
}
// System.Void BannerLabel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerLabel_Update_m40741BA0A36CD786179AD2462E67CBA2FFEB1A13 (BannerLabel_t5E12C461D19C2713BFBAB7AB4CE543FF0F7521C6* __this, const RuntimeMethod* method) 
{
	{
		// RefreshLocalContent();
		BannerLabel_RefreshLocalContent_mF96E4F63241A95F5B6DD822257412F6627F14596(__this, NULL);
		// }
		return;
	}
}
// System.Void BannerLabel::RefreshLocalContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerLabel_RefreshLocalContent_mF96E4F63241A95F5B6DD822257412F6627F14596 (BannerLabel_t5E12C461D19C2713BFBAB7AB4CE543FF0F7521C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB980741131342998F6B11321F49DA48431C5DFD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m58A37EA33D72FAC34829170CEC6997898F01E639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m658D2776741B15F8EB6CA424B406AA807E940C01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToolTipBackground_tEEEA12E151BA739CAAA3E47ACFC61146A3AFD3C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0D75211E3993E5EA4C617CBCCDAEF5BA36AB62A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tEA66A96991A6C3FF9B40564AA7C01996CDF7F7C2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// contentParent.transform.localScale = Vector3.one * contentScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___contentParent_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_3 = __this->___contentScale_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, L_3, NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_4, NULL);
		// label.transform.localScale = Vector3.one * 0.005f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___label_5;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_7, (0.00499999989f), NULL);
		NullCheck(L_6);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_6, L_8, NULL);
		// if (cachedLabelText == null)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_9 = __this->___cachedLabelText_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		// cachedLabelText = label.GetComponent<TextMeshPro>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___label_5;
		NullCheck(L_11);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_12;
		L_12 = GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F(L_11, GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F_RuntimeMethod_var);
		__this->___cachedLabelText_14 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachedLabelText_14), (void*)L_12);
	}

IL_005e:
	{
		// if (!string.IsNullOrEmpty(bannerText))
		String_t* L_13 = __this->___bannerText_7;
		bool L_14;
		L_14 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_13, NULL);
		if (L_14)
		{
			goto IL_0081;
		}
	}
	{
		// cachedLabelText.text = bannerText.Trim();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_15 = __this->___cachedLabelText_14;
		String_t* L_16 = __this->___bannerText_7;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_16, NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_15, L_17);
	}

IL_0081:
	{
		// cachedLabelText.fontSize = fontSize;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_18 = __this->___cachedLabelText_14;
		int32_t L_19 = __this->___fontSize_11;
		NullCheck(L_18);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_18, ((float)L_19), NULL);
		// cachedLabelText.alignment = TextAlignmentOptions.CenterGeoAligned;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_20 = __this->___cachedLabelText_14;
		NullCheck(L_20);
		TMP_Text_set_alignment_mE5216A28797987CC19927ED3CB8DFAC438C6B95A(L_20, ((int32_t)544), NULL);
		// cachedLabelText.ForceMeshUpdate();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_21 = __this->___cachedLabelText_14;
		NullCheck(L_21);
		VirtualActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_21, (bool)0, (bool)0);
		// Vector3 localScale = Vector3.Scale(cachedLabelText.transform.localScale / contentScale, cachedLabelText.textBounds.size);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_22 = __this->___cachedLabelText_14;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = TextMeshPro_get_transform_m750148EC362B176A0E80D6F4ABAC1062E5281E11(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_23, NULL);
		float L_25 = __this->___contentScale_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_24, L_25, NULL);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_27 = __this->___cachedLabelText_14;
		NullCheck(L_27);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_28;
		L_28 = TMP_Text_get_textBounds_m0D3E180B72130830D1C16BC7E5097AF2958E2740(L_27, NULL);
		V_1 = L_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline(L_26, L_29, NULL);
		V_0 = L_30;
		// localContentSize.x = localScale.x + backgroundPadding.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_31 = (&__this->___localContentSize_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_0;
		float L_33 = L_32.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_34 = (&__this->___backgroundPadding_8);
		float L_35 = L_34->___x_0;
		L_31->___x_0 = ((float)il2cpp_codegen_add(L_33, L_35));
		// localContentSize.y = localScale.y + backgroundPadding.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_36 = (&__this->___localContentSize_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_0;
		float L_38 = L_37.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_39 = (&__this->___backgroundPadding_8);
		float L_40 = L_39->___y_1;
		L_36->___y_1 = ((float)il2cpp_codegen_add(L_38, L_40));
		// foreach (IToolTipBackground background in backgrounds)
		List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13* L_41 = __this->___backgrounds_13;
		NullCheck(L_41);
		Enumerator_tEA66A96991A6C3FF9B40564AA7C01996CDF7F7C2 L_42;
		L_42 = List_1_GetEnumerator_m0D75211E3993E5EA4C617CBCCDAEF5BA36AB62A0(L_41, List_1_GetEnumerator_m0D75211E3993E5EA4C617CBCCDAEF5BA36AB62A0_RuntimeMethod_var);
		V_2 = L_42;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_015f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB980741131342998F6B11321F49DA48431C5DFD5((&V_2), Enumerator_Dispose_mB980741131342998F6B11321F49DA48431C5DFD5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0154_1;
			}

IL_012c_1:
			{
				// foreach (IToolTipBackground background in backgrounds)
				RuntimeObject* L_43;
				L_43 = Enumerator_get_Current_m658D2776741B15F8EB6CA424B406AA807E940C01_inline((&V_2), Enumerator_get_Current_m658D2776741B15F8EB6CA424B406AA807E940C01_RuntimeMethod_var);
				// background.OnContentChange(localContentSize, LocalContentOffset, contentParent.transform);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = __this->___localContentSize_12;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
				L_45 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_44, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
				L_46 = BannerLabel_get_LocalContentOffset_m0717A60DFE621C8F45B97CDE31F49A6E8A1E2192_inline(__this, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___contentParent_6;
				NullCheck(L_47);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
				L_48 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_47, NULL);
				NullCheck(L_43);
				InterfaceActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.UI.IToolTipBackground::OnContentChange(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Transform) */, IToolTipBackground_tEEEA12E151BA739CAAA3E47ACFC61146A3AFD3C8_il2cpp_TypeInfo_var, L_43, L_45, L_46, L_48);
			}

IL_0154_1:
			{
				// foreach (IToolTipBackground background in backgrounds)
				bool L_49;
				L_49 = Enumerator_MoveNext_m58A37EA33D72FAC34829170CEC6997898F01E639((&V_2), Enumerator_MoveNext_m58A37EA33D72FAC34829170CEC6997898F01E639_RuntimeMethod_var);
				if (L_49)
				{
					goto IL_012c_1;
				}
			}
			{
				goto IL_016d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_016d:
	{
		// foreach (IToolTipBackground background in backgrounds)
		List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13* L_50 = __this->___backgrounds_13;
		NullCheck(L_50);
		Enumerator_tEA66A96991A6C3FF9B40564AA7C01996CDF7F7C2 L_51;
		L_51 = List_1_GetEnumerator_m0D75211E3993E5EA4C617CBCCDAEF5BA36AB62A0(L_50, List_1_GetEnumerator_m0D75211E3993E5EA4C617CBCCDAEF5BA36AB62A0_RuntimeMethod_var);
		V_2 = L_51;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0198:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB980741131342998F6B11321F49DA48431C5DFD5((&V_2), Enumerator_Dispose_mB980741131342998F6B11321F49DA48431C5DFD5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_018d_1;
			}

IL_017b_1:
			{
				// foreach (IToolTipBackground background in backgrounds)
				RuntimeObject* L_52;
				L_52 = Enumerator_get_Current_m658D2776741B15F8EB6CA424B406AA807E940C01_inline((&V_2), Enumerator_get_Current_m658D2776741B15F8EB6CA424B406AA807E940C01_RuntimeMethod_var);
				// background.IsVisible = showBackground;
				bool L_53 = __this->___showBackground_4;
				NullCheck(L_52);
				InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.UI.IToolTipBackground::set_IsVisible(System.Boolean) */, IToolTipBackground_tEEEA12E151BA739CAAA3E47ACFC61146A3AFD3C8_il2cpp_TypeInfo_var, L_52, L_53);
			}

IL_018d_1:
			{
				// foreach (IToolTipBackground background in backgrounds)
				bool L_54;
				L_54 = Enumerator_MoveNext_m58A37EA33D72FAC34829170CEC6997898F01E639((&V_2), Enumerator_MoveNext_m58A37EA33D72FAC34829170CEC6997898F01E639_RuntimeMethod_var);
				if (L_54)
				{
					goto IL_017b_1;
				}
			}
			{
				goto IL_01a6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01a6:
	{
		// }
		return;
	}
}
// System.Void BannerLabel::SetBannerText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerLabel_SetBannerText_m0FF8D4904A06E741EEDD4E02E56625B6BF3DE89A (BannerLabel_t5E12C461D19C2713BFBAB7AB4CE543FF0F7521C6* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		// public void SetBannerText(string text) => bannerText = text;
		String_t* L_0 = ___text0;
		__this->___bannerText_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bannerText_7), (void*)L_0);
		return;
	}
}
// System.Void BannerLabel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerLabel__ctor_m2DD2F12D86E35282D5A7CDA3DC287821FD23EF93 (BannerLabel_t5E12C461D19C2713BFBAB7AB4CE543FF0F7521C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCB54942FBC0A562E7B390A6B8F935F0A374DAF3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private bool showBackground = true;
		__this->___showBackground_4 = (bool)1;
		// private Vector2 backgroundPadding = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___backgroundPadding_8 = L_0;
		// private Vector3 backgroundOffset = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___backgroundOffset_9 = L_1;
		// private float contentScale = 1f;
		__this->___contentScale_10 = (1.0f);
		// [SerializeField] [Range(10, 60)] private int fontSize = 20;
		__this->___fontSize_11 = ((int32_t)20);
		// private List<IToolTipBackground> backgrounds = new List<IToolTipBackground>();
		List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13* L_2 = (List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13*)il2cpp_codegen_object_new(List_1_t7EFBF90A7CB2C383288A5910FDAA0534E8364F13_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCB54942FBC0A562E7B390A6B8F935F0A374DAF3B(L_2, List_1__ctor_mCB54942FBC0A562E7B390A6B8F935F0A374DAF3B_RuntimeMethod_var);
		__this->___backgrounds_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___backgrounds_13), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MeasurementManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementManager_Awake_m052A9DCFCCBC8D2DFF91A0826BB170E6460E766B (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m3097FC77D59929435D13145406238B00DAE41CD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m25B88BF42A4FC58A4A3BF232D5F6FA1AFA4F5620_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE7CF0C9F87E812B742459553E666D56884B42691_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// InstantiateListeners();
		MeasurementManager_InstantiateListeners_mE66825B1096EF7DDFC89B2A85123393C8195565C(__this, NULL);
		// foreach (GameObject pathParent in pathParents)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___pathParents_7;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0051;
	}

IL_0011:
	{
		// foreach (GameObject pathParent in pathParents)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// waypointParents.Add(pathParent.transform.GetChild(0).gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___waypointParents_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_2;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_7, 0, NULL);
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_5);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_5, L_9, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// subpathParents.Add(pathParent.transform.GetChild(1).gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = __this->___subpathParents_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_2;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_12, 1, NULL);
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		NullCheck(L_10);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_10, L_14, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0051:
	{
		// foreach (GameObject pathParent in pathParents)
		int32_t L_16 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// paths = new Dictionary<int, List<MeasurementSubpath>>()
		//     { { 0, new List<MeasurementSubpath>() }, { 1, new List<MeasurementSubpath>() } };
		Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C* L_18 = (Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C*)il2cpp_codegen_object_new(Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Dictionary_2__ctor_m25B88BF42A4FC58A4A3BF232D5F6FA1AFA4F5620(L_18, Dictionary_2__ctor_m25B88BF42A4FC58A4A3BF232D5F6FA1AFA4F5620_RuntimeMethod_var);
		Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C* L_19 = L_18;
		List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA* L_20 = (List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA*)il2cpp_codegen_object_new(List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		List_1__ctor_mE7CF0C9F87E812B742459553E666D56884B42691(L_20, List_1__ctor_mE7CF0C9F87E812B742459553E666D56884B42691_RuntimeMethod_var);
		NullCheck(L_19);
		Dictionary_2_Add_m3097FC77D59929435D13145406238B00DAE41CD8(L_19, 0, L_20, Dictionary_2_Add_m3097FC77D59929435D13145406238B00DAE41CD8_RuntimeMethod_var);
		Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C* L_21 = L_19;
		List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA* L_22 = (List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA*)il2cpp_codegen_object_new(List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		List_1__ctor_mE7CF0C9F87E812B742459553E666D56884B42691(L_22, List_1__ctor_mE7CF0C9F87E812B742459553E666D56884B42691_RuntimeMethod_var);
		NullCheck(L_21);
		Dictionary_2_Add_m3097FC77D59929435D13145406238B00DAE41CD8(L_21, 1, L_22, Dictionary_2_Add_m3097FC77D59929435D13145406238B00DAE41CD8_RuntimeMethod_var);
		__this->___paths_18 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___paths_18), (void*)L_21);
		// previousWaypoint = CreateNewWaypoint();
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_23;
		L_23 = MeasurementManager_CreateNewWaypoint_mD7DF3352B42AB72C1F6D0A417ED3F8CF30E407A1(__this, NULL);
		__this->___previousWaypoint_19 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previousWaypoint_19), (void*)L_23);
		// OnPathToggled();
		MeasurementManager_OnPathToggled_mC5858AFB92FED3AE990D6642759C60554833F94D(__this, NULL);
		// }
		return;
	}
}
// System.Void MeasurementManager::InstantiateListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementManager_InstantiateListeners_mE66825B1096EF7DDFC89B2A85123393C8195565C (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeasurementManager_OnExportButtonClicked_mF0E38B125C661628B77D2FA7635A90D0E50A6BDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeasurementManager_OnPathToggled_mC5858AFB92FED3AE990D6642759C60554833F94D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeasurementManager_U3CInstantiateListenersU3Eb__21_0_m2C3FAA05FAE58D0B43ECF710B55D0DC5945A8C71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CInstantiateListenersU3Eb__1_m245CF230649349E59E5FA636E54372F4DFD7F921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_tEA751F07D5469797EE7D141B432E89B05243A2D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InteractableU5BU5D_tF1DE825046569AB7A4BD344DEB0B2F772FD8FF8D* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	U3CU3Ec__DisplayClass21_0_tEA751F07D5469797EE7D141B432E89B05243A2D7* V_3 = NULL;
	{
		// foreach (Interactable toggle in pathToggles)
		InteractableU5BU5D_tF1DE825046569AB7A4BD344DEB0B2F772FD8FF8D* L_0 = __this->___pathToggles_10;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0028;
	}

IL_000b:
	{
		// foreach (Interactable toggle in pathToggles)
		InteractableU5BU5D_tF1DE825046569AB7A4BD344DEB0B2F772FD8FF8D* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Interactable_t6ED173AE0E4636B62ED17D7E640C726B03FA0FF3* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// toggle.OnClick.AddListener(OnPathToggled);
		NullCheck(L_4);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5 = L_4->___OnClick_19;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_6, __this, (intptr_t)((void*)MeasurementManager_OnPathToggled_mC5858AFB92FED3AE990D6642759C60554833F94D_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_5, L_6, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0028:
	{
		// foreach (Interactable toggle in pathToggles)
		int32_t L_8 = V_1;
		InteractableU5BU5D_tF1DE825046569AB7A4BD344DEB0B2F772FD8FF8D* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// for (int i = 0; i < clearPathButtons.Length; i++)
		V_2 = 0;
		goto IL_0068;
	}

IL_0032:
	{
		U3CU3Ec__DisplayClass21_0_tEA751F07D5469797EE7D141B432E89B05243A2D7* L_10 = (U3CU3Ec__DisplayClass21_0_tEA751F07D5469797EE7D141B432E89B05243A2D7*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_tEA751F07D5469797EE7D141B432E89B05243A2D7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		U3CU3Ec__DisplayClass21_0__ctor_mC5F6DF5B82331F220B2CBD935CBCB9E8F759BAD8(L_10, NULL);
		V_3 = L_10;
		U3CU3Ec__DisplayClass21_0_tEA751F07D5469797EE7D141B432E89B05243A2D7* L_11 = V_3;
		NullCheck(L_11);
		L_11->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___U3CU3E4__this_1), (void*)__this);
		// int j = i;
		U3CU3Ec__DisplayClass21_0_tEA751F07D5469797EE7D141B432E89B05243A2D7* L_12 = V_3;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		L_12->___j_0 = L_13;
		// clearPathButtons[i].OnClick.AddListener(delegate { OnClearPathClicked(j); });
		InteractableU5BU5D_tF1DE825046569AB7A4BD344DEB0B2F772FD8FF8D* L_14 = __this->___clearPathButtons_11;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Interactable_t6ED173AE0E4636B62ED17D7E640C726B03FA0FF3* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_18 = L_17->___OnClick_19;
		U3CU3Ec__DisplayClass21_0_tEA751F07D5469797EE7D141B432E89B05243A2D7* L_19 = V_3;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_20 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_20, L_19, (intptr_t)((void*)U3CU3Ec__DisplayClass21_0_U3CInstantiateListenersU3Eb__1_m245CF230649349E59E5FA636E54372F4DFD7F921_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_18, L_20, NULL);
		// for (int i = 0; i < clearPathButtons.Length; i++)
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0068:
	{
		// for (int i = 0; i < clearPathButtons.Length; i++)
		int32_t L_22 = V_2;
		InteractableU5BU5D_tF1DE825046569AB7A4BD344DEB0B2F772FD8FF8D* L_23 = __this->___clearPathButtons_11;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0032;
		}
	}
	{
		// choosePathRadials.OnSelectionEvents.AddListener(delegate { OnChoosePath(); });
		InteractableToggleCollection_tED7CB6F6C4E1FE135A63096FD807A0B53FE767FA* L_24 = __this->___choosePathRadials_9;
		NullCheck(L_24);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_25 = L_24->___OnSelectionEvents_6;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_26 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_26, __this, (intptr_t)((void*)MeasurementManager_U3CInstantiateListenersU3Eb__21_0_m2C3FAA05FAE58D0B43ECF710B55D0DC5945A8C71_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_25, L_26, NULL);
		// exportButton.OnClick.AddListener(OnExportButtonClicked);
		Interactable_t6ED173AE0E4636B62ED17D7E640C726B03FA0FF3* L_27 = __this->___exportButton_12;
		NullCheck(L_27);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_28 = L_27->___OnClick_19;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_29 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_29, __this, (intptr_t)((void*)MeasurementManager_OnExportButtonClicked_mF0E38B125C661628B77D2FA7635A90D0E50A6BDF_RuntimeMethod_var), NULL);
		NullCheck(L_28);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_28, L_29, NULL);
		// }
		return;
	}
}
// System.Void MeasurementManager::OnExportButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementManager_OnExportButtonClicked_mF0E38B125C661628B77D2FA7635A90D0E50A6BDF (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C564D053473C96A3C60B57CDF8C1EA02B1AC0A9);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	String_t* V_1 = NULL;
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* V_2 = NULL;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	{
		// List<string> outputData = PrepareExportData();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0;
		L_0 = MeasurementManager_PrepareExportData_m301CDC54CC2B94E99C144800D118B1CEA5C33527(__this, NULL);
		V_0 = L_0;
		// string path = string.Format("{0}/{1}.csv", Application.persistentDataPath, filename);
		String_t* L_1;
		L_1 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		String_t* L_2 = __this->___filename_22;
		String_t* L_3;
		L_3 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral4C564D053473C96A3C60B57CDF8C1EA02B1AC0A9, L_1, L_2, NULL);
		V_1 = L_3;
		// using (StreamWriter outputFile = new StreamWriter(path))
		String_t* L_4 = V_1;
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_5 = (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4*)il2cpp_codegen_object_new(StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		StreamWriter__ctor_m7C83908E2616C22FA632EF67E36E137932E534D7(L_5, L_4, NULL);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0057:
			{// begin finally (depth: 1)
				{
					StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_6 = V_2;
					if (!L_6)
					{
						goto IL_0060;
					}
				}
				{
					StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_7 = V_2;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0060:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// foreach (string line in outputData)
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = V_0;
				NullCheck(L_8);
				Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_9;
				L_9 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_8, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
				V_3 = L_9;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0049_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_3), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_003e_2;
					}

IL_002d_2:
					{
						// foreach (string line in outputData)
						String_t* L_10;
						L_10 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_3), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
						V_4 = L_10;
						// outputFile.WriteLine(line);
						StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_11 = V_2;
						String_t* L_12 = V_4;
						NullCheck(L_11);
						VirtualActionInvoker1< String_t* >::Invoke(17 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_11, L_12);
					}

IL_003e_2:
					{
						// foreach (string line in outputData)
						bool L_13;
						L_13 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_3), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
						if (L_13)
						{
							goto IL_002d_2;
						}
					}
					{
						goto IL_0061;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0061:
	{
		// Debug.Log(path);
		String_t* L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_14, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.String> MeasurementManager::PrepareExportData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* MeasurementManager_PrepareExportData_m301CDC54CC2B94E99C144800D118B1CEA5C33527 (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1539AB884165A2F749D881DC03DF6022F04BB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_1 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	int32_t V_3 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	int32_t V_5 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	String_t* V_11 = NULL;
	int32_t V_12 = 0;
	{
		// List<string> outputData = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_0;
		// List<GameObject> waypointObjects = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		V_1 = L_1;
		// foreach (GameObject go in pathParents)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___pathParents_7;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0038;
	}

IL_0017:
	{
		// foreach (GameObject go in pathParents)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_4 = L_6;
		// waypointObjects.Add(go.transform.GetChild(0).gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_4;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_9, 0, NULL);
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_7);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_7, L_11, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0038:
	{
		// foreach (GameObject go in pathParents)
		int32_t L_13 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = V_2;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// for (int i = 0; i < waypointObjects.Count; i++)
		V_5 = 0;
		goto IL_011f;
	}

IL_0046:
	{
		// outputData.Add("Path " + (i + 1));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = V_0;
		int32_t L_16 = V_5;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_18;
		L_18 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralDA1539AB884165A2F749D881DC03DF6022F04BB6, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_15, L_18, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// GameObject waypointObject = waypointObjects[i];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_19 = V_1;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_19, L_20, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		V_6 = L_21;
		// int numChildren = waypointObject.transform.childCount;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_6;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_23, NULL);
		V_7 = L_24;
		// float x = 0f;
		V_8 = (0.0f);
		// float y = 0f;
		V_9 = (0.0f);
		// float z = 0f;
		V_10 = (0.0f);
		// string formattedStr = "";
		V_11 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < numChildren; j++)
		V_12 = 0;
		goto IL_0113;
	}

IL_009b:
	{
		// Vector3 waypointLocalPosition = waypointObject.transform.GetChild(j).transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_6;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		int32_t L_27 = V_12;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_26, L_27, NULL);
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_29, NULL);
		// x = waypointLocalPosition.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = L_30;
		float L_32 = L_31.___x_2;
		V_8 = L_32;
		// y = waypointLocalPosition.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = L_31;
		float L_34 = L_33.___y_3;
		V_9 = L_34;
		// z = waypointLocalPosition.z;
		float L_35 = L_33.___z_4;
		V_10 = L_35;
		// formattedStr = x + "," + y + "," + z;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_36;
		String_t* L_38;
		L_38 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_8), NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_38);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_37;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
		String_t* L_41;
		L_41 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_9), NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_41);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_40;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_42;
		String_t* L_44;
		L_44 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_10), NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_44);
		String_t* L_45;
		L_45 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_43, NULL);
		V_11 = L_45;
		// outputData.Add(formattedStr);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_46 = V_0;
		String_t* L_47 = V_11;
		NullCheck(L_46);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_46, L_47, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// for (int j = 0; j < numChildren; j++)
		int32_t L_48 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0113:
	{
		// for (int j = 0; j < numChildren; j++)
		int32_t L_49 = V_12;
		int32_t L_50 = V_7;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_009b;
		}
	}
	{
		// for (int i = 0; i < waypointObjects.Count; i++)
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_011f:
	{
		// for (int i = 0; i < waypointObjects.Count; i++)
		int32_t L_52 = V_5;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_53 = V_1;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_53, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_52) < ((int32_t)L_54)))
		{
			goto IL_0046;
		}
	}
	{
		// return outputData;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_55 = V_0;
		return L_55;
	}
}
// System.Void MeasurementManager::OnPathToggled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementManager_OnPathToggled_mC5858AFB92FED3AE990D6642759C60554833F94D (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* G_B3_0 = NULL;
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* G_B4_1 = NULL;
	{
		// for (int i = 0; i < pathParents.Length; i++)
		V_0 = 0;
		goto IL_004b;
	}

IL_0004:
	{
		// pathParents[i].SetActive(pathToggles[i].IsToggled);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___pathParents_7;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		InteractableU5BU5D_tF1DE825046569AB7A4BD344DEB0B2F772FD8FF8D* L_4 = __this->___pathToggles_10;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Interactable_t6ED173AE0E4636B62ED17D7E640C726B03FA0FF3* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(33 /* System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::get_IsToggled() */, L_7);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, L_8, NULL);
		// pathToggleLabels[i].color = pathToggles[i].IsToggled ? Color.white : unselectedLabelWhite;
		TextMeshProU5BU5D_tC24D27573EBF908D9D2D4FD451C3FD1A3817FC28* L_9 = __this->___pathToggleLabels_14;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		InteractableU5BU5D_tF1DE825046569AB7A4BD344DEB0B2F772FD8FF8D* L_13 = __this->___pathToggles_10;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Interactable_t6ED173AE0E4636B62ED17D7E640C726B03FA0FF3* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		bool L_17;
		L_17 = VirtualFuncInvoker0< bool >::Invoke(33 /* System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::get_IsToggled() */, L_16);
		G_B2_0 = L_12;
		if (L_17)
		{
			G_B3_0 = L_12;
			goto IL_003d;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = __this->___unselectedLabelWhite_15;
		G_B4_0 = L_18;
		G_B4_1 = G_B2_0;
		goto IL_0042;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		G_B4_0 = L_19;
		G_B4_1 = G_B3_0;
	}

IL_0042:
	{
		NullCheck(G_B4_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B4_1, G_B4_0);
		// for (int i = 0; i < pathParents.Length; i++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_004b:
	{
		// for (int i = 0; i < pathParents.Length; i++)
		int32_t L_21 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_22 = __this->___pathParents_7;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MeasurementManager::OnChoosePath(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementManager_OnChoosePath_m40B226B3F1FBB16DB208BD9471A0ACD947DCD957 (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, bool ___resetToZero0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* G_B2_0 = NULL;
	MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* G_B3_1 = NULL;
	{
		// currentPath = choosePathRadials.CurrentIndex;
		InteractableToggleCollection_tED7CB6F6C4E1FE135A63096FD807A0B53FE767FA* L_0 = __this->___choosePathRadials_9;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InteractableToggleCollection_get_CurrentIndex_m89A38FF60EF3438B49EF7AAF6FBCA0123AAF0818_inline(L_0, NULL);
		__this->___currentPath_21 = L_1;
		// newWaypoint.SetWaypointParent(waypointParents[currentPath].transform);
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_2 = __this->___newWaypoint_20;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___waypointParents_16;
		int32_t L_4 = __this->___currentPath_21;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_3, L_4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_2);
		MeasurementWaypoint_SetWaypointParent_mB40C90D1321217EB9E6EBFABFFDA9D79E11613CD_inline(L_2, L_6, NULL);
		// newWaypoint.SetWaypointName(resetToZero ? 0 : waypointParents[currentPath].transform.childCount);
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_7 = __this->___newWaypoint_20;
		bool L_8 = ___resetToZero0;
		G_B1_0 = L_7;
		if (L_8)
		{
			G_B2_0 = L_7;
			goto IL_0058;
		}
	}
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___waypointParents_16;
		int32_t L_10 = __this->___currentPath_21;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_9, L_10, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_12, NULL);
		G_B3_0 = L_13;
		G_B3_1 = G_B1_0;
		goto IL_0059;
	}

IL_0058:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0059:
	{
		NullCheck(G_B3_1);
		MeasurementWaypoint_SetWaypointName_mF7884CF93D4C3BD3B87BCF8F3B1F7DAA446ADA50(G_B3_1, G_B3_0, NULL);
		// previousWaypoint = newWaypoint;
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_14 = __this->___newWaypoint_20;
		__this->___previousWaypoint_19 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previousWaypoint_19), (void*)L_14);
		// pathToggles[currentPath].IsToggled = true;
		InteractableU5BU5D_tF1DE825046569AB7A4BD344DEB0B2F772FD8FF8D* L_15 = __this->___pathToggles_10;
		int32_t L_16 = __this->___currentPath_21;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Interactable_t6ED173AE0E4636B62ED17D7E640C726B03FA0FF3* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		VirtualActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.UI.Interactable::set_IsToggled(System.Boolean) */, L_18, (bool)1);
		// OnPathToggled();
		MeasurementManager_OnPathToggled_mC5858AFB92FED3AE990D6642759C60554833F94D(__this, NULL);
		// }
		return;
	}
}
// System.Void MeasurementManager::OnClearPathClicked(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementManager_OnClearPathClicked_mB6EAAAF235AF26EE2C3866228350F36480F47DDF (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, int32_t ___pathNum0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mCFA05363BA4A9601CF4B95F95B5753DCBE36C83D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE7CF0C9F87E812B742459553E666D56884B42691_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// Transform waypointParent = waypointParents[pathNum].transform;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___waypointParents_16;
		int32_t L_1 = ___pathNum0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		V_0 = L_3;
		// for (int i = 0; i < waypointParent.childCount; i++)
		V_2 = 0;
		goto IL_002b;
	}

IL_0016:
	{
		// Destroy(waypointParent.GetChild(i).gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, L_5, NULL);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_7, NULL);
		// for (int i = 0; i < waypointParent.childCount; i++)
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002b:
	{
		// for (int i = 0; i < waypointParent.childCount; i++)
		int32_t L_9 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_10, NULL);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0016;
		}
	}
	{
		// Transform subpathParent = subpathParents[pathNum].transform;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = __this->___subpathParents_17;
		int32_t L_13 = ___pathNum0;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_12, L_13, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		V_1 = L_15;
		// for (int i = 0; i < subpathParent.childCount; i++)
		V_3 = 0;
		goto IL_005f;
	}

IL_004a:
	{
		// Destroy(subpathParent.GetChild(i).gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_16, L_17, NULL);
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_19, NULL);
		// for (int i = 0; i < subpathParent.childCount; i++)
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005f:
	{
		// for (int i = 0; i < subpathParent.childCount; i++)
		int32_t L_21 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_22, NULL);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		// UpdateTotalPathLength(pathNum, true);
		int32_t L_24 = ___pathNum0;
		MeasurementManager_UpdateTotalPathLength_m0F7501F9E10F24848209F912ACAF888197DBA5EC(__this, L_24, (bool)1, NULL);
		// OnChoosePath(true);
		MeasurementManager_OnChoosePath_m40B226B3F1FBB16DB208BD9471A0ACD947DCD957(__this, (bool)1, NULL);
		// paths[pathNum] = new List<MeasurementSubpath>();
		Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C* L_25 = __this->___paths_18;
		int32_t L_26 = ___pathNum0;
		List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA* L_27 = (List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA*)il2cpp_codegen_object_new(List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		List_1__ctor_mE7CF0C9F87E812B742459553E666D56884B42691(L_27, List_1__ctor_mE7CF0C9F87E812B742459553E666D56884B42691_RuntimeMethod_var);
		NullCheck(L_25);
		Dictionary_2_set_Item_mCFA05363BA4A9601CF4B95F95B5753DCBE36C83D(L_25, L_26, L_27, Dictionary_2_set_Item_mCFA05363BA4A9601CF4B95F95B5753DCBE36C83D_RuntimeMethod_var);
		// }
		return;
	}
}
// MeasurementWaypoint MeasurementManager::CreateNewWaypoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* MeasurementManager_CreateNewWaypoint_mD7DF3352B42AB72C1F6D0A417ED3F8CF30E407A1 (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F_m317301671C2F51B15D175E7FE28E010ABCB0CB57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// newWaypoint = Instantiate(waypointPrefab, waypointSpawnPositionHolder.position,
		//     waypointSpawnPositionHolder.rotation, waypointSpawnPositionHolder).GetComponent<MeasurementWaypoint>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___waypointPrefab_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___waypointSpawnPositionHolder_6;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___waypointSpawnPositionHolder_6;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___waypointSpawnPositionHolder_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0(L_0, L_2, L_4, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var);
		NullCheck(L_6);
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_7;
		L_7 = GameObject_GetComponent_TisMeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F_m317301671C2F51B15D175E7FE28E010ABCB0CB57(L_6, GameObject_GetComponent_TisMeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F_m317301671C2F51B15D175E7FE28E010ABCB0CB57_RuntimeMethod_var);
		__this->___newWaypoint_20 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___newWaypoint_20), (void*)L_7);
		// newWaypoint.InitializeWaypoint(waypointParents[currentPath].transform.childCount,
		//     waypointParents[currentPath].transform, this);
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_8 = __this->___newWaypoint_20;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___waypointParents_16;
		int32_t L_10 = __this->___currentPath_21;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_9, L_10, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_12, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = __this->___waypointParents_16;
		int32_t L_15 = __this->___currentPath_21;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_14, L_15, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_8);
		MeasurementWaypoint_InitializeWaypoint_m65A7239E5081DAF4E17E51D706059733B85D46C0(L_8, L_13, L_17, __this, NULL);
		// return newWaypoint;
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_18 = __this->___newWaypoint_20;
		return L_18;
	}
}
// MeasurementSubpath MeasurementManager::CreateNewSubpath(MeasurementWaypoint,MeasurementWaypoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* MeasurementManager_CreateNewSubpath_mBE9C67ECD0CA523EE63DDBB700741EF287C1F1D1 (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___startPoint0, MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___endPoint1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF3FF744A99362F0515FC52A128F165DD01542637_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088_mEFE41E81BDF40A37450C6BE05143F19E5BDF4554_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBAC2E9F39FB2B4583EAB215CC921D7ED322D9B58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MeasurementSubpath newSubpath = Instantiate(subpathPrefab, waypointSpawnPositionHolder)
		//     .GetComponent<MeasurementSubpath>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___subpathPrefab_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___waypointSpawnPositionHolder_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_0, L_1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		NullCheck(L_2);
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_3;
		L_3 = GameObject_GetComponent_TisMeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088_mEFE41E81BDF40A37450C6BE05143F19E5BDF4554(L_2, GameObject_GetComponent_TisMeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088_mEFE41E81BDF40A37450C6BE05143F19E5BDF4554_RuntimeMethod_var);
		// newSubpath.InitializeSubpath(paths[currentPath].Count, subpathParents[currentPath].transform,
		//     startPoint, endPoint, this, pathMaterials[currentPath]);
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_4 = L_3;
		Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C* L_5 = __this->___paths_18;
		int32_t L_6 = __this->___currentPath_21;
		NullCheck(L_5);
		List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA* L_7;
		L_7 = Dictionary_2_get_Item_mF3FF744A99362F0515FC52A128F165DD01542637(L_5, L_6, Dictionary_2_get_Item_mF3FF744A99362F0515FC52A128F165DD01542637_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mBAC2E9F39FB2B4583EAB215CC921D7ED322D9B58_inline(L_7, List_1_get_Count_mBAC2E9F39FB2B4583EAB215CC921D7ED322D9B58_RuntimeMethod_var);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___subpathParents_17;
		int32_t L_10 = __this->___currentPath_21;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_9, L_10, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_13 = ___startPoint0;
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_14 = ___endPoint1;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_15 = __this->___pathMaterials_8;
		int32_t L_16 = __this->___currentPath_21;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_4);
		MeasurementSubpath_InitializeSubpath_m6ED5E5B9FCDAA4C7CAF6D0148255E24ACA802AE1(L_4, L_8, L_12, L_13, L_14, __this, L_18, NULL);
		// return newSubpath;
		return L_4;
	}
}
// System.Void MeasurementManager::AddToPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementManager_AddToPath_m641A3B9608BA421744D67E858E291099CC9BEDAF (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F_m9DC4E8BCFBBA48CD26A4513EBD1A7D43184E4520_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF3FF744A99362F0515FC52A128F165DD01542637_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Last_TisMeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088_m0D9AA4E50DC7A642FFEDB3C15E69B07E14EDD904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8F318B5D9C89349E31A75693486491AD63B62198_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* V_0 = NULL;
	{
		// if (waypointParents[currentPath].transform.childCount > 1)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___waypointParents_16;
		int32_t L_1 = __this->___currentPath_21;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_3, NULL);
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_00d4;
		}
	}
	{
		// if (waypointParents[currentPath].transform.childCount == 2)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___waypointParents_16;
		int32_t L_6 = __this->___currentPath_21;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_5, L_6, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_8, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_006f;
		}
	}
	{
		// newSubpath = CreateNewSubpath(
		//     waypointParents[currentPath].transform.GetChild(0).GetComponent<MeasurementWaypoint>(),
		//     newWaypoint);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = __this->___waypointParents_16;
		int32_t L_11 = __this->___currentPath_21;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_10, L_11, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_13, 0, NULL);
		NullCheck(L_14);
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_15;
		L_15 = Component_GetComponent_TisMeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F_m9DC4E8BCFBBA48CD26A4513EBD1A7D43184E4520(L_14, Component_GetComponent_TisMeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F_m9DC4E8BCFBBA48CD26A4513EBD1A7D43184E4520_RuntimeMethod_var);
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_16 = __this->___newWaypoint_20;
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_17;
		L_17 = MeasurementManager_CreateNewSubpath_mBE9C67ECD0CA523EE63DDBB700741EF287C1F1D1(__this, L_15, L_16, NULL);
		V_0 = L_17;
		goto IL_0097;
	}

IL_006f:
	{
		// newSubpath = CreateNewSubpath(paths[currentPath].Last().endPoint, newWaypoint);
		Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C* L_18 = __this->___paths_18;
		int32_t L_19 = __this->___currentPath_21;
		NullCheck(L_18);
		List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA* L_20;
		L_20 = Dictionary_2_get_Item_mF3FF744A99362F0515FC52A128F165DD01542637(L_18, L_19, Dictionary_2_get_Item_mF3FF744A99362F0515FC52A128F165DD01542637_RuntimeMethod_var);
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_21;
		L_21 = Enumerable_Last_TisMeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088_m0D9AA4E50DC7A642FFEDB3C15E69B07E14EDD904(L_20, Enumerable_Last_TisMeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088_m0D9AA4E50DC7A642FFEDB3C15E69B07E14EDD904_RuntimeMethod_var);
		NullCheck(L_21);
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_22;
		L_22 = MeasurementSubpath_get_endPoint_m53D5B81DDFA34CDB4D0789E88612A82014A5A4DC_inline(L_21, NULL);
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_23 = __this->___newWaypoint_20;
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_24;
		L_24 = MeasurementManager_CreateNewSubpath_mBE9C67ECD0CA523EE63DDBB700741EF287C1F1D1(__this, L_22, L_23, NULL);
		V_0 = L_24;
	}

IL_0097:
	{
		// previousWaypoint.subpath2 = newSubpath;
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_25 = __this->___previousWaypoint_19;
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_26 = V_0;
		NullCheck(L_25);
		MeasurementWaypoint_set_subpath2_m18CC4DFF877A083CC92119C606C669D1311D809B_inline(L_25, L_26, NULL);
		// newWaypoint.subpath1 = newSubpath;
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_27 = __this->___newWaypoint_20;
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_28 = V_0;
		NullCheck(L_27);
		MeasurementWaypoint_set_subpath1_m74F10767F5A80D821541C4224D47310E31080962_inline(L_27, L_28, NULL);
		// previousWaypoint = newWaypoint;
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_29 = __this->___newWaypoint_20;
		__this->___previousWaypoint_19 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previousWaypoint_19), (void*)L_29);
		// paths[currentPath].Add(newSubpath);
		Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C* L_30 = __this->___paths_18;
		int32_t L_31 = __this->___currentPath_21;
		NullCheck(L_30);
		List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA* L_32;
		L_32 = Dictionary_2_get_Item_mF3FF744A99362F0515FC52A128F165DD01542637(L_30, L_31, Dictionary_2_get_Item_mF3FF744A99362F0515FC52A128F165DD01542637_RuntimeMethod_var);
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_33 = V_0;
		NullCheck(L_32);
		List_1_Add_m8F318B5D9C89349E31A75693486491AD63B62198_inline(L_32, L_33, List_1_Add_m8F318B5D9C89349E31A75693486491AD63B62198_RuntimeMethod_var);
		goto IL_00ff;
	}

IL_00d4:
	{
		// newSubpath = CreateNewSubpath(newWaypoint, newWaypoint);
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_34 = __this->___newWaypoint_20;
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_35 = __this->___newWaypoint_20;
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_36;
		L_36 = MeasurementManager_CreateNewSubpath_mBE9C67ECD0CA523EE63DDBB700741EF287C1F1D1(__this, L_34, L_35, NULL);
		V_0 = L_36;
		// newSubpath.gameObject.SetActive(false);
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_37 = V_0;
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_37, NULL);
		NullCheck(L_38);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)0, NULL);
		// newWaypoint.subpath1 = newSubpath;
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_39 = __this->___newWaypoint_20;
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_40 = V_0;
		NullCheck(L_39);
		MeasurementWaypoint_set_subpath1_m74F10767F5A80D821541C4224D47310E31080962_inline(L_39, L_40, NULL);
	}

IL_00ff:
	{
		// CreateNewWaypoint();
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_41;
		L_41 = MeasurementManager_CreateNewWaypoint_mD7DF3352B42AB72C1F6D0A417ED3F8CF30E407A1(__this, NULL);
		// }
		return;
	}
}
// System.Void MeasurementManager::UpdateTotalPathLength(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementManager_UpdateTotalPathLength_m0F7501F9E10F24848209F912ACAF888197DBA5EC (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, int32_t ___pathNum0, bool ___resetToZero1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral858FD3C8BD790C7AE9648241681753040AAA353E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// int chosenPath = pathNum == -1 ? currentPath : pathNum;
		int32_t L_0 = ___pathNum0;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_1 = ___pathNum0;
		G_B3_0 = L_1;
		goto IL_000d;
	}

IL_0007:
	{
		int32_t L_2 = __this->___currentPath_21;
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		// int pathLength = resetToZero ? 0 : CalculateTotalPathLength(chosenPath);
		bool L_3 = ___resetToZero1;
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = MeasurementManager_CalculateTotalPathLength_m541035BA9A334D82202F9D74B0B1C4AA49D8102B(__this, L_4, NULL);
		G_B6_0 = L_5;
		goto IL_001b;
	}

IL_001a:
	{
		G_B6_0 = 0;
	}

IL_001b:
	{
		V_1 = G_B6_0;
		// pathDistanceLabels[chosenPath].text = pathLength + "cm";
		TextMeshProU5BU5D_tC24D27573EBF908D9D2D4FD451C3FD1A3817FC28* L_6 = __this->___pathDistanceLabels_13;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_11;
		L_11 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_10, _stringLiteral858FD3C8BD790C7AE9648241681753040AAA353E, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_9, L_11);
		// }
		return;
	}
}
// System.Int32 MeasurementManager::CalculateTotalPathLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeasurementManager_CalculateTotalPathLength_m541035BA9A334D82202F9D74B0B1C4AA49D8102B (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, int32_t ___pathNum0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF3FF744A99362F0515FC52A128F165DD01542637_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m280EA5496E7A748B2DCD7A45BF267F4C03CD155B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m09968149EDDBEBE15990592FF016245930A9AA08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBFC33221231F81C2618361544D0030CE84B9E754_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFA2E71819380DE6822CB407108AF1C081C0DC05E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t5CF6BD9625620BC4A25140134608B1DC6612D4A1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* V_2 = NULL;
	{
		// int pathLength = 0;
		V_0 = 0;
		// foreach (MeasurementSubpath subpathInstance in paths[pathNum])
		Dictionary_2_t35D7FA05D1239BFF4DA20B4F91339A635777C18C* L_0 = __this->___paths_18;
		int32_t L_1 = ___pathNum0;
		NullCheck(L_0);
		List_1_t81D293855EC1594EA1EF1C59734025DD2F17ECAA* L_2;
		L_2 = Dictionary_2_get_Item_mF3FF744A99362F0515FC52A128F165DD01542637(L_0, L_1, Dictionary_2_get_Item_mF3FF744A99362F0515FC52A128F165DD01542637_RuntimeMethod_var);
		NullCheck(L_2);
		Enumerator_t5CF6BD9625620BC4A25140134608B1DC6612D4A1 L_3;
		L_3 = List_1_GetEnumerator_mFA2E71819380DE6822CB407108AF1C081C0DC05E(L_2, List_1_GetEnumerator_mFA2E71819380DE6822CB407108AF1C081C0DC05E_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m280EA5496E7A748B2DCD7A45BF267F4C03CD155B((&V_1), Enumerator_Dispose_m280EA5496E7A748B2DCD7A45BF267F4C03CD155B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0027_1;
			}

IL_0016_1:
			{
				// foreach (MeasurementSubpath subpathInstance in paths[pathNum])
				MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_4;
				L_4 = Enumerator_get_Current_mBFC33221231F81C2618361544D0030CE84B9E754_inline((&V_1), Enumerator_get_Current_mBFC33221231F81C2618361544D0030CE84B9E754_RuntimeMethod_var);
				V_2 = L_4;
				// pathLength += subpathInstance.pathLength;
				int32_t L_5 = V_0;
				MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_6 = V_2;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = MeasurementSubpath_get_pathLength_mB68D305AF5C7F17CDD530304E6DD8981B906F933_inline(L_6, NULL);
				V_0 = ((int32_t)il2cpp_codegen_add(L_5, L_7));
			}

IL_0027_1:
			{
				// foreach (MeasurementSubpath subpathInstance in paths[pathNum])
				bool L_8;
				L_8 = Enumerator_MoveNext_m09968149EDDBEBE15990592FF016245930A9AA08((&V_1), Enumerator_MoveNext_m09968149EDDBEBE15990592FF016245930A9AA08_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_0040;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		// return pathLength;
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Void MeasurementManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementManager__ctor_mCD006F4338A020414FD7BED29D65F14A5852A1B7 (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1141C0D385A7F00BB929A1282CFCFC4404074DAE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Color unselectedLabelWhite = new Color(1f, 1f, 1f, 0.3f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (0.300000012f), /*hidden argument*/NULL);
		__this->___unselectedLabelWhite_15 = L_0;
		// private List<GameObject> waypointParents = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___waypointParents_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waypointParents_16), (void*)L_1);
		// private List<GameObject> subpathParents = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_2, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___subpathParents_17 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subpathParents_17), (void*)L_2);
		// private string filename = "positionData";
		__this->___filename_22 = _stringLiteral1141C0D385A7F00BB929A1282CFCFC4404074DAE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___filename_22), (void*)_stringLiteral1141C0D385A7F00BB929A1282CFCFC4404074DAE);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void MeasurementManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementManager__cctor_m8D69D02EA12A431712A2A5FFD7F08F3ABE2ED613 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly HttpClient client = new HttpClient();
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_0 = (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42*)il2cpp_codegen_object_new(HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HttpClient__ctor_mD64C48138600CF1398E7BB24BF33EB582ECB1AFD(L_0, NULL);
		((MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C_StaticFields*)il2cpp_codegen_static_fields_for(MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C_il2cpp_TypeInfo_var))->___client_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C_StaticFields*)il2cpp_codegen_static_fields_for(MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C_il2cpp_TypeInfo_var))->___client_23), (void*)L_0);
		return;
	}
}
// System.Void MeasurementManager::<InstantiateListeners>b__21_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementManager_U3CInstantiateListenersU3Eb__21_0_m2C3FAA05FAE58D0B43ECF710B55D0DC5945A8C71 (MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* __this, const RuntimeMethod* method) 
{
	{
		// choosePathRadials.OnSelectionEvents.AddListener(delegate { OnChoosePath(); });
		MeasurementManager_OnChoosePath_m40B226B3F1FBB16DB208BD9471A0ACD947DCD957(__this, (bool)0, NULL);
		// choosePathRadials.OnSelectionEvents.AddListener(delegate { OnChoosePath(); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MeasurementManager/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mC5F6DF5B82331F220B2CBD935CBCB9E8F759BAD8 (U3CU3Ec__DisplayClass21_0_tEA751F07D5469797EE7D141B432E89B05243A2D7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void MeasurementManager/<>c__DisplayClass21_0::<InstantiateListeners>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CInstantiateListenersU3Eb__1_m245CF230649349E59E5FA636E54372F4DFD7F921 (U3CU3Ec__DisplayClass21_0_tEA751F07D5469797EE7D141B432E89B05243A2D7* __this, const RuntimeMethod* method) 
{
	{
		// clearPathButtons[i].OnClick.AddListener(delegate { OnClearPathClicked(j); });
		MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* L_0 = __this->___U3CU3E4__this_1;
		int32_t L_1 = __this->___j_0;
		NullCheck(L_0);
		MeasurementManager_OnClearPathClicked_mB6EAAAF235AF26EE2C3866228350F36480F47DDF(L_0, L_1, NULL);
		// clearPathButtons[i].OnClick.AddListener(delegate { OnClearPathClicked(j); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// MeasurementManager MeasurementSubpath::get_measurementManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* MeasurementSubpath_get_measurementManager_mB498D85F35F3F867EBB623A81C8B8A70AFE2F87A (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, const RuntimeMethod* method) 
{
	{
		// private MeasurementManager measurementManager { get; set; }
		MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* L_0 = __this->___U3CmeasurementManagerU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void MeasurementSubpath::set_measurementManager(MeasurementManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementSubpath_set_measurementManager_mE8A257B85174A84AA4AFF4A74B123A04EAF869E6 (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* ___value0, const RuntimeMethod* method) 
{
	{
		// private MeasurementManager measurementManager { get; set; }
		MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* L_0 = ___value0;
		__this->___U3CmeasurementManagerU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmeasurementManagerU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// MeasurementWaypoint MeasurementSubpath::get_startPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* MeasurementSubpath_get_startPoint_mD585516AFA93D9A2B04AB1E7BE4CCEF7C4AD075C (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, const RuntimeMethod* method) 
{
	{
		// private MeasurementWaypoint startPoint { get; set; }
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_0 = __this->___U3CstartPointU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void MeasurementSubpath::set_startPoint(MeasurementWaypoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementSubpath_set_startPoint_m3F2E12B5C0FAB2780F689D69D028DBF648E5C930 (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___value0, const RuntimeMethod* method) 
{
	{
		// private MeasurementWaypoint startPoint { get; set; }
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_0 = ___value0;
		__this->___U3CstartPointU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstartPointU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// MeasurementWaypoint MeasurementSubpath::get_endPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* MeasurementSubpath_get_endPoint_m53D5B81DDFA34CDB4D0789E88612A82014A5A4DC (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, const RuntimeMethod* method) 
{
	{
		// public MeasurementWaypoint endPoint { get; set; }
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_0 = __this->___U3CendPointU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void MeasurementSubpath::set_endPoint(MeasurementWaypoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementSubpath_set_endPoint_m7ABC4448C300DC38392105B48F0AC16F9D1F36F2 (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___value0, const RuntimeMethod* method) 
{
	{
		// public MeasurementWaypoint endPoint { get; set; }
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_0 = ___value0;
		__this->___U3CendPointU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CendPointU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Int32 MeasurementSubpath::get_pathLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeasurementSubpath_get_pathLength_mB68D305AF5C7F17CDD530304E6DD8981B906F933 (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, const RuntimeMethod* method) 
{
	{
		// public int pathLength { get; private set; }
		int32_t L_0 = __this->___U3CpathLengthU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void MeasurementSubpath::set_pathLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementSubpath_set_pathLength_mA0C11BD1DF7A647C86B186C8B94FC4D345624E27 (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int pathLength { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CpathLengthU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void MeasurementSubpath::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementSubpath_Start_m71509777F9C315B9D84C4CC5D5580DD2EA51C5A3 (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, const RuntimeMethod* method) 
{
	{
		// lineRenderer.useWorldSpace = true;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___lineRenderer_4;
		NullCheck(L_0);
		LineRenderer_set_useWorldSpace_m0204DB2541CC37DC4DC15DA15FD5A66EDC507CE8(L_0, (bool)1, NULL);
		// textBillboard.TargetTransform = CameraCache.Main.transform;
		Billboard_tC740A69446594896C52DF6A718F80D1E028DAD00* L_1 = __this->___textBillboard_6;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_1);
		Billboard_set_TargetTransform_m56A8C153474D84C8946FE520C94B7445EF695E92_inline(L_1, L_3, NULL);
		// UpdateDistance();
		MeasurementSubpath_UpdateDistance_m3D8371B6CB5006DC594820ECF28ADA510D99D72D(__this, NULL);
		// }
		return;
	}
}
// System.Void MeasurementSubpath::InitializeSubpath(System.Int32,UnityEngine.Transform,MeasurementWaypoint,MeasurementWaypoint,MeasurementManager,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementSubpath_InitializeSubpath_m6ED5E5B9FCDAA4C7CAF6D0148255E24ACA802AE1 (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, int32_t ___subpathNum0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___point12, MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___point23, MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* ___manager4, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEAFC6C0B33D2163E8E30509B0CDBC4FD83E3EC2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.name = "Subpath " + subpathNum;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___subpathNum0), NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralAEAFC6C0B33D2163E8E30509B0CDBC4FD83E3EC2, L_1, NULL);
		NullCheck(L_0);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_0, L_2, NULL);
		// transform.SetParent(parent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___parent1;
		NullCheck(L_3);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_3, L_4, NULL);
		// measurementManager = manager;
		MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* L_5 = ___manager4;
		MeasurementSubpath_set_measurementManager_mE8A257B85174A84AA4AFF4A74B123A04EAF869E6_inline(__this, L_5, NULL);
		// SetWaypoints(point1, point2);
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_6 = ___point12;
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_7 = ___point23;
		MeasurementSubpath_SetWaypoints_mA92972B44631EFF22F70499B40CA36B730475FBA(__this, L_6, L_7, NULL);
		// SetLineMaterial(material);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = ___material5;
		MeasurementSubpath_SetLineMaterial_m118B0EDDD3031A9DF228CDE899BAC7E76710950D(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Void MeasurementSubpath::UpdateDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementSubpath_UpdateDistance_m3D8371B6CB5006DC594820ECF28ADA510D99D72D (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2136A922EE529061AEFD5F740886CE07F69EF4A4);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// Vector3 target1 = startPoint.transform.position;
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_0;
		L_0 = MeasurementSubpath_get_startPoint_mD585516AFA93D9A2B04AB1E7BE4CCEF7C4AD075C_inline(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_0 = L_2;
		// Vector3 target2 = endPoint.transform.position;
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_3;
		L_3 = MeasurementSubpath_get_endPoint_m53D5B81DDFA34CDB4D0789E88612A82014A5A4DC_inline(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		V_1 = L_5;
		// lineRenderer.SetPositions(new[] { target1, target2 });
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_6 = __this->___lineRenderer_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_9);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_11);
		NullCheck(L_6);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_6, L_10, NULL);
		// measurementText.transform.position = (target1 + target2) / 2;
		BannerLabel_t5E12C461D19C2713BFBAB7AB4CE543FF0F7521C6* L_12 = __this->___measurementText_5;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_14, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_16, (2.0f), NULL);
		NullCheck(L_13);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_17, NULL);
		// CalculateDistance();
		MeasurementSubpath_CalculateDistance_m92CE114DC95F060B0DDEC2350F42496B8A448A9A(__this, NULL);
		// measurementText.SetBannerText(pathLength + " cm");
		BannerLabel_t5E12C461D19C2713BFBAB7AB4CE543FF0F7521C6* L_18 = __this->___measurementText_5;
		int32_t L_19;
		L_19 = MeasurementSubpath_get_pathLength_mB68D305AF5C7F17CDD530304E6DD8981B906F933_inline(__this, NULL);
		V_2 = L_19;
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_21;
		L_21 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_20, _stringLiteral2136A922EE529061AEFD5F740886CE07F69EF4A4, NULL);
		NullCheck(L_18);
		BannerLabel_SetBannerText_m0FF8D4904A06E741EEDD4E02E56625B6BF3DE89A_inline(L_18, L_21, NULL);
		// measurementManager.UpdateTotalPathLength();
		MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* L_22;
		L_22 = MeasurementSubpath_get_measurementManager_mB498D85F35F3F867EBB623A81C8B8A70AFE2F87A_inline(__this, NULL);
		NullCheck(L_22);
		MeasurementManager_UpdateTotalPathLength_m0F7501F9E10F24848209F912ACAF888197DBA5EC(L_22, (-1), (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MeasurementSubpath::SetWaypoints(MeasurementWaypoint,MeasurementWaypoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementSubpath_SetWaypoints_mA92972B44631EFF22F70499B40CA36B730475FBA (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___target10, MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___target21, const RuntimeMethod* method) 
{
	{
		// startPoint = target1;
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_0 = ___target10;
		MeasurementSubpath_set_startPoint_m3F2E12B5C0FAB2780F689D69D028DBF648E5C930_inline(__this, L_0, NULL);
		// endPoint = target2;
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_1 = ___target21;
		MeasurementSubpath_set_endPoint_m7ABC4448C300DC38392105B48F0AC16F9D1F36F2_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void MeasurementSubpath::SetLineMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementSubpath_SetLineMaterial_m118B0EDDD3031A9DF228CDE899BAC7E76710950D (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) 
{
	{
		// private void SetLineMaterial(Material material) => lineRenderer.material = material;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___lineRenderer_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material0;
		NullCheck(L_0);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_0, L_1, NULL);
		return;
	}
}
// System.Void MeasurementSubpath::CalculateDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementSubpath_CalculateDistance_m92CE114DC95F060B0DDEC2350F42496B8A448A9A (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, const RuntimeMethod* method) 
{
	{
		// private void CalculateDistance() => pathLength = (int)(Vector3.Distance(
		//     startPoint.GetWorldPosition(), endPoint.GetWorldPosition()) * CM_PER_UNITY_UNIT);
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_0;
		L_0 = MeasurementSubpath_get_startPoint_mD585516AFA93D9A2B04AB1E7BE4CCEF7C4AD075C_inline(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = MeasurementWaypoint_GetWorldPosition_m943C23EDC3E8EE4C9B540DD63461FD8F9F12A96C(L_0, NULL);
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_2;
		L_2 = MeasurementSubpath_get_endPoint_m53D5B81DDFA34CDB4D0789E88612A82014A5A4DC_inline(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = MeasurementWaypoint_GetWorldPosition_m943C23EDC3E8EE4C9B540DD63461FD8F9F12A96C(L_2, NULL);
		float L_4;
		L_4 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_1, L_3, NULL);
		MeasurementSubpath_set_pathLength_mA0C11BD1DF7A647C86B186C8B94FC4D345624E27_inline(__this, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_4, (93.7059784f)))), NULL);
		return;
	}
}
// System.Void MeasurementSubpath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementSubpath__ctor_m361A3ABF1B9B2CDF40D7A7DF4731EF7DC05ABD6B (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// MeasurementManager MeasurementWaypoint::get_measurementManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* MeasurementWaypoint_get_measurementManager_m23F66BC86B360E1EC2D6A7E70CE9E46677DE7C41 (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, const RuntimeMethod* method) 
{
	{
		// private MeasurementManager measurementManager { get; set; }
		MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* L_0 = __this->___U3CmeasurementManagerU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void MeasurementWaypoint::set_measurementManager(MeasurementManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementWaypoint_set_measurementManager_mA3027609CB63C1358EF0C88D5C0A99ABDFBE2512 (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* ___value0, const RuntimeMethod* method) 
{
	{
		// private MeasurementManager measurementManager { get; set; }
		MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* L_0 = ___value0;
		__this->___U3CmeasurementManagerU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmeasurementManagerU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// MeasurementSubpath MeasurementWaypoint::get_subpath1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* MeasurementWaypoint_get_subpath1_m967445ECCA7E87EA8CF82628D0A119DB5E2EA5D7 (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, const RuntimeMethod* method) 
{
	{
		// public MeasurementSubpath subpath1 { get; set; }
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_0 = __this->___U3Csubpath1U3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void MeasurementWaypoint::set_subpath1(MeasurementSubpath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementWaypoint_set_subpath1_m74F10767F5A80D821541C4224D47310E31080962 (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* ___value0, const RuntimeMethod* method) 
{
	{
		// public MeasurementSubpath subpath1 { get; set; }
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_0 = ___value0;
		__this->___U3Csubpath1U3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Csubpath1U3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// MeasurementSubpath MeasurementWaypoint::get_subpath2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* MeasurementWaypoint_get_subpath2_m7B000E118A879823D193146B88D7582D1299ED6A (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, const RuntimeMethod* method) 
{
	{
		// public MeasurementSubpath subpath2 { get; set; }
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_0 = __this->___U3Csubpath2U3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void MeasurementWaypoint::set_subpath2(MeasurementSubpath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementWaypoint_set_subpath2_m18CC4DFF877A083CC92119C606C669D1311D809B (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* ___value0, const RuntimeMethod* method) 
{
	{
		// public MeasurementSubpath subpath2 { get; set; }
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_0 = ___value0;
		__this->___U3Csubpath2U3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Csubpath2U3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Void MeasurementWaypoint::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementWaypoint_Awake_m15466B2564782E2E548DFD7F9E4F3F2A1EC15F52 (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeasurementWaypoint_StartManipulationEndedEvents_m9EC07FCB853A3A748EE50A4706F8C143FEF2DB4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mCE472D576E4B9591F706A2D7A00FC0BA3C985BBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// manipulator.OnManipulationEnded.AddListener(StartManipulationEndedEvents);
		ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* L_0 = __this->___manipulator_4;
		NullCheck(L_0);
		ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* L_1;
		L_1 = ObjectManipulator_get_OnManipulationEnded_m342FD627CB115449ED8BE8C1A36FABD9C875E630_inline(L_0, NULL);
		UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49* L_2 = (UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49*)il2cpp_codegen_object_new(UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_mFCCE72B022568BFF6808E4C468007FF699A26D2E(L_2, __this, (intptr_t)((void*)MeasurementWaypoint_StartManipulationEndedEvents_m9EC07FCB853A3A748EE50A4706F8C143FEF2DB4A_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_mCE472D576E4B9591F706A2D7A00FC0BA3C985BBF(L_1, L_2, UnityEvent_1_AddListener_mCE472D576E4B9591F706A2D7A00FC0BA3C985BBF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MeasurementWaypoint::InitializeWaypoint(System.Int32,UnityEngine.Transform,MeasurementManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementWaypoint_InitializeWaypoint_m65A7239E5081DAF4E17E51D706059733B85D46C0 (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, int32_t ___waypointNum0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* ___manager2, const RuntimeMethod* method) 
{
	{
		// SetWaypointName(waypointNum);
		int32_t L_0 = ___waypointNum0;
		MeasurementWaypoint_SetWaypointName_mF7884CF93D4C3BD3B87BCF8F3B1F7DAA446ADA50(__this, L_0, NULL);
		// parentTransform = parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___parent1;
		__this->___parentTransform_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parentTransform_8), (void*)L_1);
		// measurementManager = manager;
		MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* L_2 = ___manager2;
		MeasurementWaypoint_set_measurementManager_mA3027609CB63C1358EF0C88D5C0A99ABDFBE2512_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void MeasurementWaypoint::Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler.OnPointerClicked(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementWaypoint_Microsoft_MixedReality_Toolkit_Input_IMixedRealityPointerHandler_OnPointerClicked_mBDE56A282FD29E5DE1BCA0C79C981A43C8090462 (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform.parent != parentTransform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___parentTransform_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// transform.SetParent(parentTransform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___parentTransform_8;
		NullCheck(L_4);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_4, L_5, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void MeasurementWaypoint::Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler.OnPointerDragged(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementWaypoint_Microsoft_MixedReality_Toolkit_Input_IMixedRealityPointerHandler_OnPointerDragged_mA1568AC56762E77683F5ADC97286F4F7CFD15C32 (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* ___eventData0, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// subpath1.UpdateDistance();
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_0;
		L_0 = MeasurementWaypoint_get_subpath1_m967445ECCA7E87EA8CF82628D0A119DB5E2EA5D7_inline(__this, NULL);
		NullCheck(L_0);
		MeasurementSubpath_UpdateDistance_m3D8371B6CB5006DC594820ECF28ADA510D99D72D(L_0, NULL);
		// subpath2.UpdateDistance();
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_1;
		L_1 = MeasurementWaypoint_get_subpath2_m7B000E118A879823D193146B88D7582D1299ED6A_inline(__this, NULL);
		NullCheck(L_1);
		MeasurementSubpath_UpdateDistance_m3D8371B6CB5006DC594820ECF28ADA510D99D72D(L_1, NULL);
		// measurementManager.UpdateTotalPathLength();
		MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* L_2;
		L_2 = MeasurementWaypoint_get_measurementManager_m23F66BC86B360E1EC2D6A7E70CE9E46677DE7C41_inline(__this, NULL);
		NullCheck(L_2);
		MeasurementManager_UpdateTotalPathLength_m0F7501F9E10F24848209F912ACAF888197DBA5EC(L_2, (-1), (bool)0, NULL);
		// }
		goto IL_0028;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{// begin catch(System.Object)
		// catch
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0028;
	}// end catch (depth: 1)

IL_0028:
	{
		// }
		return;
	}
}
// System.Void MeasurementWaypoint::StartManipulationEndedEvents(Microsoft.MixedReality.Toolkit.UI.ManipulationEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementWaypoint_StartManipulationEndedEvents_m9EC07FCB853A3A748EE50A4706F8C143FEF2DB4A (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, ManipulationEventData_t3669F25A1E18443CE54C89DA7F6B5C641FD80F89* ___arg00, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (subpath1 == null && subpath2 == null)
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_0;
		L_0 = MeasurementWaypoint_get_subpath1_m967445ECCA7E87EA8CF82628D0A119DB5E2EA5D7_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_2;
		L_2 = MeasurementWaypoint_get_subpath2_m7B000E118A879823D193146B88D7582D1299ED6A_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// measurementManager.AddToPath();
		MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* L_4;
		L_4 = MeasurementWaypoint_get_measurementManager_m23F66BC86B360E1EC2D6A7E70CE9E46677DE7C41_inline(__this, NULL);
		NullCheck(L_4);
		MeasurementManager_AddToPath_m641A3B9608BA421744D67E858E291099CC9BEDAF(L_4, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void MeasurementWaypoint::SetWaypointName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementWaypoint_SetWaypointName_mF7884CF93D4C3BD3B87BCF8F3B1F7DAA446ADA50 (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, int32_t ___waypointNum0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE160A073D64497E84A5ACD3C59A9EB02334F459);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void SetWaypointName(int waypointNum) => gameObject.name = "Waypoint " + waypointNum;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___waypointNum0), NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralAE160A073D64497E84A5ACD3C59A9EB02334F459, L_1, NULL);
		NullCheck(L_0);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_0, L_2, NULL);
		return;
	}
}
// System.Void MeasurementWaypoint::SetWaypointParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementWaypoint_SetWaypointParent_mB40C90D1321217EB9E6EBFABFFDA9D79E11613CD (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, const RuntimeMethod* method) 
{
	{
		// public void SetWaypointParent(Transform parent) => parentTransform = parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___parent0;
		__this->___parentTransform_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parentTransform_8), (void*)L_0);
		return;
	}
}
// UnityEngine.Vector3 MeasurementWaypoint::GetWorldPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MeasurementWaypoint_GetWorldPosition_m943C23EDC3E8EE4C9B540DD63461FD8F9F12A96C (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 GetWorldPosition() => transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		return L_1;
	}
}
// System.Void MeasurementWaypoint::Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler.OnPointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementWaypoint_Microsoft_MixedReality_Toolkit_Input_IMixedRealityPointerHandler_OnPointerUp_m66F79C3927E94D9DD651CDD91D4614FE129A991B (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* ___eventData0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MeasurementWaypoint::Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler.OnPointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementWaypoint_Microsoft_MixedReality_Toolkit_Input_IMixedRealityPointerHandler_OnPointerDown_mBDE8620DE48161FAF3592AD3B2B89ABFDD13A847 (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* ___eventData0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MeasurementWaypoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasurementWaypoint__ctor_m4B99BC2D5E35E38AB1F1D46DF5C28092B2394919 (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerLabel_set_ShowBackground_m7FF8D34F335A8D602CE251E9E6818042C257A28F_inline (BannerLabel_t5E12C461D19C2713BFBAB7AB4CE543FF0F7521C6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { showBackground = value; }
		bool L_0 = ___value0;
		__this->___showBackground_4 = L_0;
		// set { showBackground = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BannerLabel_get_LocalContentOffset_m0717A60DFE621C8F45B97CDE31F49A6E8A1E2192_inline (BannerLabel_t5E12C461D19C2713BFBAB7AB4CE543FF0F7521C6* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 LocalContentOffset => backgroundOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___backgroundOffset_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InteractableToggleCollection_get_CurrentIndex_m89A38FF60EF3438B49EF7AAF6FBCA0123AAF0818_inline (InteractableToggleCollection_tED7CB6F6C4E1FE135A63096FD807A0B53FE767FA* __this, const RuntimeMethod* method) 
{
	{
		// get => currentIndex;
		int32_t L_0 = __this->___currentIndex_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeasurementWaypoint_SetWaypointParent_mB40C90D1321217EB9E6EBFABFFDA9D79E11613CD_inline (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, const RuntimeMethod* method) 
{
	{
		// public void SetWaypointParent(Transform parent) => parentTransform = parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___parent0;
		__this->___parentTransform_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parentTransform_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* MeasurementSubpath_get_endPoint_m53D5B81DDFA34CDB4D0789E88612A82014A5A4DC_inline (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, const RuntimeMethod* method) 
{
	{
		// public MeasurementWaypoint endPoint { get; set; }
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_0 = __this->___U3CendPointU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeasurementWaypoint_set_subpath2_m18CC4DFF877A083CC92119C606C669D1311D809B_inline (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* ___value0, const RuntimeMethod* method) 
{
	{
		// public MeasurementSubpath subpath2 { get; set; }
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_0 = ___value0;
		__this->___U3Csubpath2U3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Csubpath2U3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeasurementWaypoint_set_subpath1_m74F10767F5A80D821541C4224D47310E31080962_inline (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* ___value0, const RuntimeMethod* method) 
{
	{
		// public MeasurementSubpath subpath1 { get; set; }
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_0 = ___value0;
		__this->___U3Csubpath1U3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Csubpath1U3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeasurementSubpath_get_pathLength_mB68D305AF5C7F17CDD530304E6DD8981B906F933_inline (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, const RuntimeMethod* method) 
{
	{
		// public int pathLength { get; private set; }
		int32_t L_0 = __this->___U3CpathLengthU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Billboard_set_TargetTransform_m56A8C153474D84C8946FE520C94B7445EF695E92_inline (Billboard_tC740A69446594896C52DF6A718F80D1E028DAD00* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set { targetTransform = value; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___targetTransform_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetTransform_5), (void*)L_0);
		// set { targetTransform = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeasurementSubpath_set_measurementManager_mE8A257B85174A84AA4AFF4A74B123A04EAF869E6_inline (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* ___value0, const RuntimeMethod* method) 
{
	{
		// private MeasurementManager measurementManager { get; set; }
		MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* L_0 = ___value0;
		__this->___U3CmeasurementManagerU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmeasurementManagerU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* MeasurementSubpath_get_startPoint_mD585516AFA93D9A2B04AB1E7BE4CCEF7C4AD075C_inline (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, const RuntimeMethod* method) 
{
	{
		// private MeasurementWaypoint startPoint { get; set; }
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_0 = __this->___U3CstartPointU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerLabel_SetBannerText_m0FF8D4904A06E741EEDD4E02E56625B6BF3DE89A_inline (BannerLabel_t5E12C461D19C2713BFBAB7AB4CE543FF0F7521C6* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		// public void SetBannerText(string text) => bannerText = text;
		String_t* L_0 = ___text0;
		__this->___bannerText_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bannerText_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* MeasurementSubpath_get_measurementManager_mB498D85F35F3F867EBB623A81C8B8A70AFE2F87A_inline (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, const RuntimeMethod* method) 
{
	{
		// private MeasurementManager measurementManager { get; set; }
		MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* L_0 = __this->___U3CmeasurementManagerU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeasurementSubpath_set_startPoint_m3F2E12B5C0FAB2780F689D69D028DBF648E5C930_inline (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___value0, const RuntimeMethod* method) 
{
	{
		// private MeasurementWaypoint startPoint { get; set; }
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_0 = ___value0;
		__this->___U3CstartPointU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstartPointU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeasurementSubpath_set_endPoint_m7ABC4448C300DC38392105B48F0AC16F9D1F36F2_inline (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* ___value0, const RuntimeMethod* method) 
{
	{
		// public MeasurementWaypoint endPoint { get; set; }
		MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* L_0 = ___value0;
		__this->___U3CendPointU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CendPointU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeasurementSubpath_set_pathLength_mA0C11BD1DF7A647C86B186C8B94FC4D345624E27_inline (MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int pathLength { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CpathLengthU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* ObjectManipulator_get_OnManipulationEnded_m342FD627CB115449ED8BE8C1A36FABD9C875E630_inline (ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* __this, const RuntimeMethod* method) 
{
	{
		// get => onManipulationEnded;
		ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* L_0 = __this->___onManipulationEnded_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeasurementWaypoint_set_measurementManager_mA3027609CB63C1358EF0C88D5C0A99ABDFBE2512_inline (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* ___value0, const RuntimeMethod* method) 
{
	{
		// private MeasurementManager measurementManager { get; set; }
		MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* L_0 = ___value0;
		__this->___U3CmeasurementManagerU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmeasurementManagerU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* MeasurementWaypoint_get_subpath1_m967445ECCA7E87EA8CF82628D0A119DB5E2EA5D7_inline (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, const RuntimeMethod* method) 
{
	{
		// public MeasurementSubpath subpath1 { get; set; }
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_0 = __this->___U3Csubpath1U3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* MeasurementWaypoint_get_subpath2_m7B000E118A879823D193146B88D7582D1299ED6A_inline (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, const RuntimeMethod* method) 
{
	{
		// public MeasurementSubpath subpath2 { get; set; }
		MeasurementSubpath_tAFB3243A49FC43D42EAABE1A0E5AFD5A92487088* L_0 = __this->___U3Csubpath2U3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* MeasurementWaypoint_get_measurementManager_m23F66BC86B360E1EC2D6A7E70CE9E46677DE7C41_inline (MeasurementWaypoint_t1A2110C8A3FEEACA40EB99B3C1EA0CC1FCA4612F* __this, const RuntimeMethod* method) 
{
	{
		// private MeasurementManager measurementManager { get; set; }
		MeasurementManager_tC4431AD343D45DD76DBD4A5CB380731EEF52F32C* L_0 = __this->___U3CmeasurementManagerU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}

#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>
struct Action_1_t11340E5174173030E076A75316E18A395082F8A5;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>
struct Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560;
// System.Action`1<UnityEngine.InputSystem.EnhancedTouch.Finger>
struct Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// UnityEngine.InputSystem.LowLevel.InputStateHistory`1<UnityEngine.InputSystem.LowLevel.TouchState>
struct InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>
struct List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane>
struct List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct List_1_t6630EC2D13FD2DC6D86447667371501266C9B3E8;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Action`1<UnityEngine.InputSystem.EnhancedTouch.Finger>[]
struct Action_1U5BU5D_t18C922CAB85EAE463E29566305D718EF64B12A16;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>[]
struct KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.XR.ARFoundation.ARAnchor[]
struct ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.InputSystem.EnhancedTouch.Finger[]
struct FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// UnityEngine.InputSystem.EnhancedTouch.Touch[]
struct TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354;
// UnityEngine.InputSystem.Touchscreen[]
struct TouchscreenU5BU5D_t73D22E3D2A7039C6C374D75B796C8F83BCA897E3;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
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
// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E;
// ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955;
// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0;
// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928;
// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer
struct ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// AnchorCreator
struct AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// BrainCheck.DemoScript
struct DemoScript_tDE267076E50A62A756A6D69BED2F52DB10AB4347;
// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.InputSystem.EnhancedTouch.Finger
struct Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Ghoul
struct Ghoul_tA980E68A0C8CBDD33B7997653B11CA193685F8E1;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// DigitalRuby.LightningBolt.LightningBoltScript
struct LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// BrainCheck.Listener
struct Listener_t29F49A3DD87B62B1F61E0D2797099213ACDA8EC7;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlaceObject
struct PlaceObject_t69096E71B3AF67B110DC0077487F0BBDB8D9E1BF;
// PlayerLifePoints
struct PlayerLifePoints_tCBF5BCB8989FDB4FF14A6BEC870A4E0111FA441D;
// ProjectileController
struct ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// BrainCheck.Shoot
struct Shoot_t3CC2D92172DB803D47CD0D59107089D3FE9A3E1C;
// SpawnEnemy
struct SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89;
// BrainCheck.SpeechRecognitionBridge
struct SpeechRecognitionBridge_t9353BB0EEDD5F6868105118B1AD59B16A01704AA;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
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
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.InputSystem.Touchscreen
struct Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// BrainCheck.UnityReceiveMessages
struct UnityReceiveMessages_tB9D3ED6E7AF4BA5DC730AE75CD638E4336F88016;
// Visyde.V_SMC_Camera
struct V_SMC_Camera_t35AB97D50355AAD8527C1408E9C4FE31D0F10EA0;
// Visyde.V_SMC_Handler
struct V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC;
// Visyde.V_Text
struct V_Text_t2225ECFAE0771E825C719A406AF945D8762616A2;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// Zombie
struct Zombie_tE0343BA7D0F72765740951B2D2D7AD2CEDEB32B8;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// BrainCheck.DemoScript/<BtnAnimation>d__5
struct U3CBtnAnimationU3Ed__5_t2D095EBC7674F843353B05D3FD46D6FB02AEFAC9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Shoot_t3CC2D92172DB803D47CD0D59107089D3FE9A3E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechRecognitionBridge_t9353BB0EEDD5F6868105118B1AD59B16A01704AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBtnAnimationU3Ed__5_t2D095EBC7674F843353B05D3FD46D6FB02AEFAC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityReceiveMessages_tB9D3ED6E7AF4BA5DC730AE75CD638E4336F88016_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral006B26AA05DE1CC3440139132AA91BFDBA29E445;
IL2CPP_EXTERN_C String_t* _stringLiteral123F2B96A8619421874E4CDD3F6F4EFBCBF042E7;
IL2CPP_EXTERN_C String_t* _stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral2BFAFCC944C147FE18DBF9242E940273B5D9759A;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral3A2BAFF629C9EEE8837F088D22FB44E19DB30F9D;
IL2CPP_EXTERN_C String_t* _stringLiteral4C4B11432231B409CC0155BF0761D64C927AF826;
IL2CPP_EXTERN_C String_t* _stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8;
IL2CPP_EXTERN_C String_t* _stringLiteral5C65F42CF5BC97D8117AB25352417D8D45D03590;
IL2CPP_EXTERN_C String_t* _stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8;
IL2CPP_EXTERN_C String_t* _stringLiteral6C09093DB6E729CAF0D5143CB4D1938AE836A79F;
IL2CPP_EXTERN_C String_t* _stringLiteral6D2C56060B3F7353031AD314517C27945CC39748;
IL2CPP_EXTERN_C String_t* _stringLiteral7A812218DD198F6444C4E5C736A93564D840EB95;
IL2CPP_EXTERN_C String_t* _stringLiteral849043193B4849A97BE2F08CFC3CAC883A0F096C;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C;
IL2CPP_EXTERN_C String_t* _stringLiteral93CD35E03C1A424B1F418957BABE8F734B1AD3D4;
IL2CPP_EXTERN_C String_t* _stringLiteral9C39D1EEC1890B28711700FDEE2AC9BED5AB7172;
IL2CPP_EXTERN_C String_t* _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D;
IL2CPP_EXTERN_C String_t* _stringLiteralAAF1410B1606478212F2C2069C82F9C5E43E792B;
IL2CPP_EXTERN_C String_t* _stringLiteralAB1BDA323E583588864596CEA14450B585CC2217;
IL2CPP_EXTERN_C String_t* _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539;
IL2CPP_EXTERN_C String_t* _stringLiteralB45CC07579919A531F49F70E9C189A0CA9F35C15;
IL2CPP_EXTERN_C String_t* _stringLiteralB598EC5BEC4E57D6F879A4496FDA324A057F29A7;
IL2CPP_EXTERN_C String_t* _stringLiteralBAEA1DCD00925D1EF90FD44C2A6CC7F0EFDEFB7E;
IL2CPP_EXTERN_C String_t* _stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F;
IL2CPP_EXTERN_C String_t* _stringLiteralC2B97CB5BF770F8DECFD2A2DA16CABAF8656F157;
IL2CPP_EXTERN_C String_t* _stringLiteralC5417497152F52E77A47F1445398DAE0771DF9F2;
IL2CPP_EXTERN_C String_t* _stringLiteralCF0828672C366AA7C3AA93168568619BCBA55FE7;
IL2CPP_EXTERN_C String_t* _stringLiteralD3F2D1AC8E89A3EC10607A394E326973411FA9B4;
IL2CPP_EXTERN_C String_t* _stringLiteralD5E7903FD10E1B05BDB279849336910B6E46365B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDFCEFF603839CE43FDF4D590D592E42055E8B4A2;
IL2CPP_EXTERN_C String_t* _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6;
IL2CPP_EXTERN_C String_t* _stringLiteralEA76407FB3F262D16FA7B54F0E8128D2AA07645E;
IL2CPP_EXTERN_C String_t* _stringLiteralF10713750201B0DC07B80500C622EE738A56333C;
IL2CPP_EXTERN_C String_t* _stringLiteralF984C9674EDCA2C39EFAD66081B054F073C3815B;
IL2CPP_EXTERN_C const RuntimeMethod* ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisV_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC_m9D9230997617F8055ADC5A94C3BE21C8D136D55A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m01EBE6E815AD7850E1AEBE3F74FA5AFA9D2CEBC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA8A979ABA69619E1F7137A922310D21CCD924EDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4C2D1CE7862FE45C2E0CF07B9A925C93B243EB28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF8CCA57B4BFDC96ED00E7FA3A999859EDECF661A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1010F24B75A333F078C9D14989D99651C3AA8CC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m01FB66CBC7881CD4F65D3FBEA76E99F61514EA4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlaceObject_FingerDown_m8F45C6F6D5360556C0854AAA70419FB18BFE1FA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBtnAnimationU3Ed__5_System_Collections_IEnumerator_Reset_mB448A77ED63182069D80F1F18133FB1E30DA7D3C_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_com;
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
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

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>
struct List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// UnityEngine.InputSystem.EnhancedTouch.Finger
struct Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A  : public RuntimeObject
{
	// UnityEngine.InputSystem.Touchscreen UnityEngine.InputSystem.EnhancedTouch.Finger::<screen>k__BackingField
	Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* ___U3CscreenU3Ek__BackingField_0;
	// System.Int32 UnityEngine.InputSystem.EnhancedTouch.Finger::<index>k__BackingField
	int32_t ___U3CindexU3Ek__BackingField_1;
	// UnityEngine.InputSystem.LowLevel.InputStateHistory`1<UnityEngine.InputSystem.LowLevel.TouchState> UnityEngine.InputSystem.EnhancedTouch.Finger::m_StateHistory
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___m_StateHistory_2;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

// BrainCheck.SpeechRecognitionBridge
struct SpeechRecognitionBridge_t9353BB0EEDD5F6868105118B1AD59B16A01704AA  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>
struct Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ____current_3;
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

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.EnhancedTouch.Finger>>
struct InlinedArray_1_tFABE06D675C714FC44C09C36D7B9C908690ADEAD 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t18C922CAB85EAE463E29566305D718EF64B12A16* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Touchscreen>
struct InlinedArray_1_t1BB3E1C727E53B8F4342843F1042AFE85C5A70C3 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	TouchscreenU5BU5D_t73D22E3D2A7039C6C374D75B796C8F83BCA897E3* ___additionalValues_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// UnityEngine.InputSystem.LowLevel.InputStateHistory`1/Record<UnityEngine.InputSystem.LowLevel.TouchState>
struct Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 
{
	// UnityEngine.InputSystem.LowLevel.InputStateHistory`1<TValue> UnityEngine.InputSystem.LowLevel.InputStateHistory`1/Record::m_Owner
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___m_Owner_0;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputStateHistory`1/Record::m_IndexPlusOne
	int32_t ___m_IndexPlusOne_1;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateHistory`1/Record::m_Version
	uint32_t ___m_Version_2;
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

// UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC 
{
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs::<plane>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC_marshaled_pinvoke
{
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC_marshaled_com
{
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
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

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
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

// UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState
struct FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D 
{
	// UnityEngine.InputSystem.LowLevel.InputUpdateType UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::updateMask
	int32_t ___updateMask_0;
	// UnityEngine.InputSystem.EnhancedTouch.Finger[] UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::fingers
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___fingers_1;
	// UnityEngine.InputSystem.EnhancedTouch.Finger[] UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::activeFingers
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___activeFingers_2;
	// UnityEngine.InputSystem.EnhancedTouch.Touch[] UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::activeTouches
	TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* ___activeTouches_3;
	// System.Int32 UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::activeFingerCount
	int32_t ___activeFingerCount_4;
	// System.Int32 UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::activeTouchCount
	int32_t ___activeTouchCount_5;
	// System.Int32 UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::totalFingerCount
	int32_t ___totalFingerCount_6;
	// System.UInt32 UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::lastId
	uint32_t ___lastId_7;
	// System.Boolean UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::haveBuiltActiveTouches
	bool ___haveBuiltActiveTouches_8;
	// System.Boolean UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::haveActiveTouchesNeedingRefreshNextUpdate
	bool ___haveActiveTouchesNeedingRefreshNextUpdate_9;
	// UnityEngine.InputSystem.LowLevel.InputStateHistory`1<UnityEngine.InputSystem.LowLevel.TouchState> UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::activeTouchState
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___activeTouchState_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState
struct FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D_marshaled_pinvoke
{
	int32_t ___updateMask_0;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___fingers_1;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___activeFingers_2;
	Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_pinvoke* ___activeTouches_3;
	int32_t ___activeFingerCount_4;
	int32_t ___activeTouchCount_5;
	int32_t ___totalFingerCount_6;
	uint32_t ___lastId_7;
	int32_t ___haveBuiltActiveTouches_8;
	int32_t ___haveActiveTouchesNeedingRefreshNextUpdate_9;
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___activeTouchState_10;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState
struct FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D_marshaled_com
{
	int32_t ___updateMask_0;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___fingers_1;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___activeFingers_2;
	Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_com* ___activeTouches_3;
	int32_t ___activeFingerCount_4;
	int32_t ___activeTouchCount_5;
	int32_t ___totalFingerCount_6;
	uint32_t ___lastId_7;
	int32_t ___haveBuiltActiveTouches_8;
	int32_t ___haveActiveTouchesNeedingRefreshNextUpdate_9;
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___activeTouchState_10;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.EnhancedTouch.Finger>>
struct CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tFABE06D675C714FC44C09C36D7B9C908690ADEAD ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tFABE06D675C714FC44C09C36D7B9C908690ADEAD ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tFABE06D675C714FC44C09C36D7B9C908690ADEAD ___m_CallbacksToRemove_3;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
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

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
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

// BrainCheck.DemoScript/<BtnAnimation>d__5
struct U3CBtnAnimationU3Ed__5_t2D095EBC7674F843353B05D3FD46D6FB02AEFAC9  : public RuntimeObject
{
	// System.Int32 BrainCheck.DemoScript/<BtnAnimation>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BrainCheck.DemoScript/<BtnAnimation>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BrainCheck.DemoScript BrainCheck.DemoScript/<BtnAnimation>d__5::<>4__this
	DemoScript_tDE267076E50A62A756A6D69BED2F52DB10AB4347* ___U3CU3E4__this_2;
	// UnityEngine.Vector3 BrainCheck.DemoScript/<BtnAnimation>d__5::<originalScale>5__1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CoriginalScaleU3E5__1_3;
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

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t ___m_SessionId_5;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

// UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState
struct GlobalState_tFDD5D3FE93083EE02E4E8987E61A5D7D5F5CE61A 
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Touchscreen> UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState::touchscreens
	InlinedArray_1_t1BB3E1C727E53B8F4342843F1042AFE85C5A70C3 ___touchscreens_0;
	// System.Int32 UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState::historyLengthPerFinger
	int32_t ___historyLengthPerFinger_1;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.EnhancedTouch.Finger>> UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState::onFingerDown
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerDown_2;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.EnhancedTouch.Finger>> UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState::onFingerMove
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerMove_3;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.EnhancedTouch.Finger>> UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState::onFingerUp
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerUp_4;
	// UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState::playerState
	FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D ___playerState_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState
struct GlobalState_tFDD5D3FE93083EE02E4E8987E61A5D7D5F5CE61A_marshaled_pinvoke
{
	InlinedArray_1_t1BB3E1C727E53B8F4342843F1042AFE85C5A70C3 ___touchscreens_0;
	int32_t ___historyLengthPerFinger_1;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerDown_2;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerMove_3;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerUp_4;
	FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D_marshaled_pinvoke ___playerState_5;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState
struct GlobalState_tFDD5D3FE93083EE02E4E8987E61A5D7D5F5CE61A_marshaled_com
{
	InlinedArray_1_t1BB3E1C727E53B8F4342843F1042AFE85C5A70C3 ___touchscreens_0;
	int32_t ___historyLengthPerFinger_1;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerDown_2;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerMove_3;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerUp_4;
	FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D_marshaled_com ___playerState_5;
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.InputSystem.EnhancedTouch.Finger>
struct Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.EnhancedTouch.Touch
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 
{
	// UnityEngine.InputSystem.EnhancedTouch.Finger UnityEngine.InputSystem.EnhancedTouch.Touch::m_Finger
	Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___m_Finger_0;
	// UnityEngine.InputSystem.LowLevel.InputStateHistory`1/Record<UnityEngine.InputSystem.LowLevel.TouchState> UnityEngine.InputSystem.EnhancedTouch.Touch::m_TouchRecord
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 ___m_TouchRecord_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.EnhancedTouch.Touch
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_pinvoke
{
	Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___m_Finger_0;
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 ___m_TouchRecord_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.EnhancedTouch.Touch
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_com
{
	Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___m_Finger_0;
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 ___m_TouchRecord_1;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Enumerator_t115957CEAEDF4C520C93D4E91842BA940981A122 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 ____current_3;
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

// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

// ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ARFeatheredPlaneMeshVisualizer::m_FeatheringWidth
	float ___m_FeatheringWidth_4;
	// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer ARFeatheredPlaneMeshVisualizer::m_PlaneMeshVisualizer
	ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* ___m_PlaneMeshVisualizer_7;
	// UnityEngine.XR.ARFoundation.ARPlane ARFeatheredPlaneMeshVisualizer::m_Plane
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___m_Plane_8;
	// UnityEngine.Material ARFeatheredPlaneMeshVisualizer::m_FeatheredPlaneMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_FeatheredPlaneMaterial_9;
};

// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer
struct ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Mesh UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::<mesh>k__BackingField
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CmeshU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_TrackingStateVisibilityThreshold
	int32_t ___m_TrackingStateVisibilityThreshold_5;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_HideSubsumed
	bool ___m_HideSubsumed_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_InitialLineWidthMultiplier
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_InitialLineWidthMultiplier_7;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_Plane
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___m_Plane_8;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// AnchorCreator
struct AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject AnchorCreator::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_4;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor> AnchorCreator::m_AnchorPoints
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___m_AnchorPoints_6;
	// UnityEngine.XR.ARFoundation.ARRaycastManager AnchorCreator::m_RaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___m_RaycastManager_7;
	// UnityEngine.XR.ARFoundation.ARAnchorManager AnchorCreator::m_AnchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___m_AnchorManager_8;
	// UnityEngine.XR.ARFoundation.ARPlaneManager AnchorCreator::m_PlaneManager
	ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* ___m_PlaneManager_9;
};

// BrainCheck.DemoScript
struct DemoScript_tDE267076E50A62A756A6D69BED2F52DB10AB4347  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// BrainCheck.SpeechrecognitionOption BrainCheck.DemoScript::myOption
	int32_t ___myOption_4;
	// System.String BrainCheck.DemoScript::textToConvet
	String_t* ___textToConvet_5;
	// System.String BrainCheck.DemoScript::gameObjectName
	String_t* ___gameObjectName_6;
	// System.String BrainCheck.DemoScript::statusMethodName
	String_t* ___statusMethodName_7;
};

// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Enemy::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_4;
	// System.Single Enemy::moveSpeed
	float ___moveSpeed_5;
	// System.Single Enemy::aggroRange
	float ___aggroRange_6;
};

// Ghoul
struct Ghoul_tA980E68A0C8CBDD33B7997653B11CA193685F8E1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Ghoul::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_4;
	// System.Single Ghoul::moveSpeed
	float ___moveSpeed_5;
	// System.Single Ghoul::aggroRange
	float ___aggroRange_6;
	// System.Boolean Ghoul::isDead
	bool ___isDead_7;
};

// DigitalRuby.LightningBolt.LightningBoltScript
struct LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject DigitalRuby.LightningBolt.LightningBoltScript::StartObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___StartObject_4;
	// UnityEngine.Vector3 DigitalRuby.LightningBolt.LightningBoltScript::StartPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___StartPosition_5;
	// UnityEngine.GameObject DigitalRuby.LightningBolt.LightningBoltScript::EndObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EndObject_6;
	// UnityEngine.Vector3 DigitalRuby.LightningBolt.LightningBoltScript::EndPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___EndPosition_7;
	// System.Int32 DigitalRuby.LightningBolt.LightningBoltScript::Generations
	int32_t ___Generations_8;
	// System.Single DigitalRuby.LightningBolt.LightningBoltScript::Duration
	float ___Duration_9;
	// System.Single DigitalRuby.LightningBolt.LightningBoltScript::timer
	float ___timer_10;
	// System.Single DigitalRuby.LightningBolt.LightningBoltScript::ChaosFactor
	float ___ChaosFactor_11;
	// System.Boolean DigitalRuby.LightningBolt.LightningBoltScript::ManualMode
	bool ___ManualMode_12;
	// System.Int32 DigitalRuby.LightningBolt.LightningBoltScript::Rows
	int32_t ___Rows_13;
	// System.Int32 DigitalRuby.LightningBolt.LightningBoltScript::Columns
	int32_t ___Columns_14;
	// DigitalRuby.LightningBolt.LightningBoltAnimationMode DigitalRuby.LightningBolt.LightningBoltScript::AnimationMode
	int32_t ___AnimationMode_15;
	// System.Random DigitalRuby.LightningBolt.LightningBoltScript::RandomGenerator
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___RandomGenerator_16;
	// UnityEngine.LineRenderer DigitalRuby.LightningBolt.LightningBoltScript::lineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___lineRenderer_17;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>> DigitalRuby.LightningBolt.LightningBoltScript::segments
	List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* ___segments_18;
	// System.Int32 DigitalRuby.LightningBolt.LightningBoltScript::startIndex
	int32_t ___startIndex_19;
	// UnityEngine.Vector2 DigitalRuby.LightningBolt.LightningBoltScript::size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size_20;
	// UnityEngine.Vector2[] DigitalRuby.LightningBolt.LightningBoltScript::offsets
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___offsets_21;
	// System.Int32 DigitalRuby.LightningBolt.LightningBoltScript::animationOffsetIndex
	int32_t ___animationOffsetIndex_22;
	// System.Int32 DigitalRuby.LightningBolt.LightningBoltScript::animationPingPongDirection
	int32_t ___animationPingPongDirection_23;
	// System.Boolean DigitalRuby.LightningBolt.LightningBoltScript::orthographic
	bool ___orthographic_24;
};

// BrainCheck.Listener
struct Listener_t29F49A3DD87B62B1F61E0D2797099213ACDA8EC7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String BrainCheck.Listener::gameObjectName
	String_t* ___gameObjectName_4;
	// System.String BrainCheck.Listener::statusMethodName
	String_t* ___statusMethodName_5;
	// UnityEngine.GameObject BrainCheck.Listener::camera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___camera_6;
	// UnityEngine.GameObject BrainCheck.Listener::projectile
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectile_7;
	// System.Single BrainCheck.Listener::shootForce
	float ___shootForce_8;
	// TMPro.TMP_Text BrainCheck.Listener::isRecordingText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___isRecordingText_9;
};

// PlaceObject
struct PlaceObject_t69096E71B3AF67B110DC0077487F0BBDB8D9E1BF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button PlaceObject::recordingButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___recordingButton_4;
	// System.Boolean PlaceObject::pointerOverUI
	bool ___pointerOverUI_5;
	// UnityEngine.GameObject PlaceObject::prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab_6;
	// UnityEngine.XR.ARFoundation.ARRaycastManager PlaceObject::aRRaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___aRRaycastManager_7;
	// UnityEngine.XR.ARFoundation.ARPlaneManager PlaceObject::aRPlaneManager
	ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* ___aRPlaneManager_8;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> PlaceObject::hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hits_9;
};

// PlayerLifePoints
struct PlayerLifePoints_tCBF5BCB8989FDB4FF14A6BEC870A4E0111FA441D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text PlayerLifePoints::lifePointsText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___lifePointsText_4;
	// System.Int32 PlayerLifePoints::lifePoints
	int32_t ___lifePoints_5;
};

// ProjectileController
struct ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// BrainCheck.Shoot
struct Shoot_t3CC2D92172DB803D47CD0D59107089D3FE9A3E1C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject BrainCheck.Shoot::camera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___camera_5;
	// UnityEngine.GameObject BrainCheck.Shoot::projectile
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectile_6;
	// System.Single BrainCheck.Shoot::shootForce
	float ___shootForce_7;
	// System.String BrainCheck.Shoot::newMessage
	String_t* ___newMessage_8;
	// TMPro.TMP_Text BrainCheck.Shoot::isRecordingText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___isRecordingText_9;
	// System.String BrainCheck.Shoot::tempMessage
	String_t* ___tempMessage_10;
};

// SpawnEnemy
struct SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnEnemy::spawnList
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___spawnList_4;
	// UnityEngine.GameObject SpawnEnemy::GhoulToSpawn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GhoulToSpawn_5;
	// UnityEngine.GameObject SpawnEnemy::ZombieToSpawn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ZombieToSpawn_6;
	// System.Single SpawnEnemy::spawnDelay
	float ___spawnDelay_7;
	// System.Single SpawnEnemy::nextSpawnTime
	float ___nextSpawnTime_8;
	// System.Single SpawnEnemy::spawnLocation
	float ___spawnLocation_9;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// BrainCheck.UnityReceiveMessages
struct UnityReceiveMessages_tB9D3ED6E7AF4BA5DC730AE75CD638E4336F88016  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.TextMesh BrainCheck.UnityReceiveMessages::tMesh
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___tMesh_5;
	// UnityEngine.TextMesh BrainCheck.UnityReceiveMessages::tMesh1
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___tMesh1_6;
};

// Visyde.V_SMC_Camera
struct V_SMC_Camera_t35AB97D50355AAD8527C1408E9C4FE31D0F10EA0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Visyde.V_SMC_Handler Visyde.V_SMC_Camera::crosshairHandler
	V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* ___crosshairHandler_4;
	// System.Single Visyde.V_SMC_Camera::rotationX
	float ___rotationX_5;
	// System.Single Visyde.V_SMC_Camera::rotationY
	float ___rotationY_6;
	// UnityEngine.Vector3 Visyde.V_SMC_Camera::fireDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fireDirection_7;
	// UnityEngine.Vector3 Visyde.V_SMC_Camera::firePoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___firePoint_8;
};

// Visyde.V_SMC_Handler
struct V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Sprite[] Visyde.V_SMC_Handler::crossHairs
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___crossHairs_4;
	// System.Int32 Visyde.V_SMC_Handler::curCrossHair
	int32_t ___curCrossHair_5;
};

// Visyde.V_Text
struct V_Text_t2225ECFAE0771E825C719A406AF945D8762616A2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Visyde.V_Text::crosshairNameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___crosshairNameText_4;
	// Visyde.V_SMC_Handler Visyde.V_Text::handler
	V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* ___handler_5;
};

// Zombie
struct Zombie_tE0343BA7D0F72765740951B2D2D7AD2CEDEB32B8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Zombie::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_4;
	// System.Single Zombie::moveSpeed
	float ___moveSpeed_5;
	// System.Single Zombie::aggroRange
	float ___aggroRange_6;
	// UnityEngine.Animator Zombie::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_7;
	// System.Boolean Zombie::isZombieDead
	bool ___isZombieDead_8;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6  : public SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_PendingAdds_10;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103  : public SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_PendingAdds_10;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_10;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06  : public ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B
{
};

// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E  : public ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARAnchorManager::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs> UnityEngine.XR.ARFoundation.ARAnchorManager::anchorsChanged
	Action_1_t11340E5174173030E076A75316E18A395082F8A5* ___anchorsChanged_15;
};

// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0  : public ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341
{
	// System.Single UnityEngine.XR.ARFoundation.ARPlane::m_VertexChangedThreshold
	float ___m_VertexChangedThreshold_7;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlane::boundaryChanged
	Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___boundaryChanged_8;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlane::<subsumedBy>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CsubsumedByU3Ek__BackingField_9;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_Boundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_Boundary_10;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_OldBoundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_OldBoundary_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlane::m_HasBoundaryChanged
	bool ___m_HasBoundaryChanged_12;
};

// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928  : public ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARPlaneManager::m_PlanePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PlanePrefab_14;
	// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARFoundation.ARPlaneManager::m_DetectionMode
	int32_t ___m_DetectionMode_15;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlaneManager::planesChanged
	Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560* ___planesChanged_16;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_19;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>
struct List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// UnityEngine.InputSystem.EnhancedTouch.Finger

// UnityEngine.InputSystem.EnhancedTouch.Finger

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
};

// BrainCheck.SpeechRecognitionBridge
struct SpeechRecognitionBridge_t9353BB0EEDD5F6868105118B1AD59B16A01704AA_StaticFields
{
	// UnityEngine.AndroidJavaClass BrainCheck.SpeechRecognitionBridge::_class
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ____class_0;
};

// BrainCheck.SpeechRecognitionBridge

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs

// UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.XR.ARSubsystems.TrackableId

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>

// UnityEngine.Collision

// UnityEngine.Collision

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// UnityEngine.Touch

// UnityEngine.Touch

// BrainCheck.DemoScript/<BtnAnimation>d__5

// BrainCheck.DemoScript/<BtnAnimation>d__5

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>

// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>

// System.Action`1<UnityEngine.InputSystem.EnhancedTouch.Finger>

// System.Action`1<UnityEngine.InputSystem.EnhancedTouch.Finger>

// UnityEngine.XR.ARFoundation.ARRaycastHit

// UnityEngine.XR.ARFoundation.ARRaycastHit

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.TextMesh

// UnityEngine.TextMesh

// UnityEngine.InputSystem.EnhancedTouch.Touch
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_StaticFields
{
	// UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState UnityEngine.InputSystem.EnhancedTouch.Touch::s_GlobalState
	GlobalState_tFDD5D3FE93083EE02E4E8987E61A5D7D5F5CE61A ___s_GlobalState_2;
};

// UnityEngine.InputSystem.EnhancedTouch.Touch

// UnityEngine.Transform

// UnityEngine.Transform

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARRaycastHit>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARRaycastHit>

// UnityEngine.Animation

// UnityEngine.Animation

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.LineRenderer

// UnityEngine.LineRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ARFeatheredPlaneMeshVisualizer::s_FeatheringUVs
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___s_FeatheringUVs_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ARFeatheredPlaneMeshVisualizer::s_Vertices
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___s_Vertices_6;
};

// ARFeatheredPlaneMeshVisualizer

// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer

// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer

// AnchorCreator
struct AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> AnchorCreator::s_Hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___s_Hits_5;
};

// AnchorCreator

// BrainCheck.DemoScript

// BrainCheck.DemoScript

// Enemy

// Enemy

// Ghoul

// Ghoul

// DigitalRuby.LightningBolt.LightningBoltScript

// DigitalRuby.LightningBolt.LightningBoltScript

// BrainCheck.Listener

// BrainCheck.Listener

// PlaceObject

// PlaceObject

// PlayerLifePoints

// PlayerLifePoints

// ProjectileController

// ProjectileController

// BrainCheck.Shoot
struct Shoot_t3CC2D92172DB803D47CD0D59107089D3FE9A3E1C_StaticFields
{
	// BrainCheck.Shoot BrainCheck.Shoot::Instance
	Shoot_t3CC2D92172DB803D47CD0D59107089D3FE9A3E1C* ___Instance_4;
};

// BrainCheck.Shoot

// SpawnEnemy

// SpawnEnemy

// BrainCheck.UnityReceiveMessages
struct UnityReceiveMessages_tB9D3ED6E7AF4BA5DC730AE75CD638E4336F88016_StaticFields
{
	// BrainCheck.UnityReceiveMessages BrainCheck.UnityReceiveMessages::Instance
	UnityReceiveMessages_tB9D3ED6E7AF4BA5DC730AE75CD638E4336F88016* ___Instance_4;
};

// BrainCheck.UnityReceiveMessages

// Visyde.V_SMC_Camera

// Visyde.V_SMC_Camera

// Visyde.V_SMC_Handler

// Visyde.V_SMC_Handler

// Visyde.V_Text

// Visyde.V_Text

// Zombie

// Zombie

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.EventSystems.EventSystem

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.XR.ARFoundation.ARAnchor

// UnityEngine.XR.ARFoundation.ARAnchor

// UnityEngine.XR.ARFoundation.ARAnchorManager

// UnityEngine.XR.ARFoundation.ARAnchorManager

// UnityEngine.XR.ARFoundation.ARPlane

// UnityEngine.XR.ARFoundation.ARPlane

// UnityEngine.XR.ARFoundation.ARPlaneManager

// UnityEngine.XR.ARFoundation.ARPlaneManager

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_16;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
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
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>[]
struct KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 m_Items[1];

	inline KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 value)
	{
		m_Items[index] = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1_gshared (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t115957CEAEDF4C520C93D4E91842BA940981A122 List_1_GetEnumerator_m1010F24B75A333F078C9D14989D99651C3AA8CC8_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARRaycastHit>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m01EBE6E815AD7850E1AEBE3F74FA5AFA9D2CEBC4_gshared (Enumerator_t115957CEAEDF4C520C93D4E91842BA940981A122* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 Enumerator_get_Current_m4C2D1CE7862FE45C2E0CF07B9A925C93B243EB28_gshared_inline (Enumerator_t115957CEAEDF4C520C93D4E91842BA940981A122* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARRaycastHit>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA8A979ABA69619E1F7137A922310D21CCD924EDC_gshared (Enumerator_t115957CEAEDF4C520C93D4E91842BA940981A122* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60_gshared (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_key, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_gshared_inline (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_gshared_inline (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C_gshared (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_gshared_inline (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_gshared_inline (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF8CCA57B4BFDC96ED00E7FA3A999859EDECF661A_gshared_inline (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m01FB66CBC7881CD4F65D3FBEA76E99F61514EA4C_gshared (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, const RuntimeMethod* method) ;

// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::GetEnumerator()
inline Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502 (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::Dispose()
inline void Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3 (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::get_Current()
inline ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_inline (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054* __this, const RuntimeMethod* method)
{
	return ((  ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* (*) (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::MoveNext()
inline bool Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::Clear()
inline void List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_inline (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARAnchorManager>()
inline ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneManager>()
inline ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::.ctor()
inline void List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4 (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPoint, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___1_hitResults, int32_t ___2_trackableTypes, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___0_index, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARRaycastHit::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARRaycastHit_get_trackableId_m4E510F2C326AFF23086203E4241C8F9B293616C3 (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneManager::GetPlane(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ARPlaneManager_GetPlane_m49FC33F6BC0DCFE67C4FC5F5CEE99CC8A7036FAE (ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARAnchor UnityEngine.XR.ARFoundation.ARAnchorManager::AttachAnchor(UnityEngine.XR.ARFoundation.ARPlane,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ARAnchorManager_AttachAnchor_m8FA6B772401F90B38A06F43B8EA1B02EA82FFA75 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* __this, ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___0_plane, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::Add(T)
inline void List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_inline (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer>()
inline ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlane>()
inline ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1 (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARPlane::add_boundaryChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlane_add_boundaryChanged_m6A9CA2ADF4742C004EF7BCFD48A7C820320616AA (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARPlane::remove_boundaryChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlane_remove_boundaryChanged_m6F71EEF2CD3C71AF069C5FE6CD993906BD8A9A10 (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::get_mesh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline (ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* __this, const RuntimeMethod* method) ;
// System.Void ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
inline int32_t List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_gshared)(__this, ___0_value, method);
}
// System.Void UnityEngine.Mesh::GetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetVertices_m5BF8777074E383AD8C4B9974D27E4AB52963D92E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_vertices, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single ARFeatheredPlaneMeshVisualizer::get_featheringWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_newX, float ___1_newY, float ___2_newZ, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_mFEE20B5977AA358DAFA31CF621BBC4B0247789B2 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___1_uvs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::UploadMeshData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_UploadMeshData_mE4C94F263DAA8CAC1641FE137E1CE7D3F09396EB (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, bool ___0_markNoLongerReadable, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPosition, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animation>()
inline Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Animation::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m95CC43633DC2B587AB3A0D1FF5F93B863A5440D5 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___0_animation, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, float ___1_t, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.EnhancedTouch.TouchSimulation::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchSimulation_Enable_m86E0F695BFC248E7E28DC62C65D92E4666F49513 (const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.EnhancedTouch.EnhancedTouchSupport::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedTouchSupport_Enable_mD8F0AC9B4B4DDBCA5EA779F35A5C28394D3FF6CE (const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.EnhancedTouch.Finger>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE3722D35F4738E246052D0F417753CABA3AD8506 (Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.InputSystem.EnhancedTouch.Touch::add_onFingerDown(System.Action`1<UnityEngine.InputSystem.EnhancedTouch.Finger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Touch_add_onFingerDown_m8A2C32388E43F459FA71AA84B1CDB159597867ED (Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.EnhancedTouch.TouchSimulation::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchSimulation_Disable_m321E8840F88BE92343D64A728694FFA942EEC69E (const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.EnhancedTouch.EnhancedTouchSupport::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedTouchSupport_Disable_m11AAE1A6CE5F340154C0EB0D95FBC168B01F8B48 (const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.EnhancedTouch.Touch::remove_onFingerDown(System.Action`1<UnityEngine.InputSystem.EnhancedTouch.Finger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Touch_remove_onFingerDown_m6CA33BB823569C40703EDC3C1B9F46D2700C6AA6 (Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B* ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.EnhancedTouch.Finger::get_index()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Finger_get_index_mB409A9B5711767D3A6046AEAA4931A0B3633934C_inline (Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.EnhancedTouch.Touch UnityEngine.InputSystem.EnhancedTouch.Finger::get_currentTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 Finger_get_currentTouch_m53721DA3C8AB5C0D600499C33CCD5854E757890D (Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.InputSystem.EnhancedTouch.Touch::get_screenPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_screenPosition_mAEBB428F1E62308A2C3E32A56CBEFCA9F7530B03 (Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::GetEnumerator()
inline Enumerator_t115957CEAEDF4C520C93D4E91842BA940981A122 List_1_GetEnumerator_m1010F24B75A333F078C9D14989D99651C3AA8CC8 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t115957CEAEDF4C520C93D4E91842BA940981A122 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1_GetEnumerator_m1010F24B75A333F078C9D14989D99651C3AA8CC8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARRaycastHit>::Dispose()
inline void Enumerator_Dispose_m01EBE6E815AD7850E1AEBE3F74FA5AFA9D2CEBC4 (Enumerator_t115957CEAEDF4C520C93D4E91842BA940981A122* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t115957CEAEDF4C520C93D4E91842BA940981A122*, const RuntimeMethod*))Enumerator_Dispose_m01EBE6E815AD7850E1AEBE3F74FA5AFA9D2CEBC4_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Current()
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 Enumerator_get_Current_m4C2D1CE7862FE45C2E0CF07B9A925C93B243EB28_inline (Enumerator_t115957CEAEDF4C520C93D4E91842BA940981A122* __this, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (Enumerator_t115957CEAEDF4C520C93D4E91842BA940981A122*, const RuntimeMethod*))Enumerator_get_Current_m4C2D1CE7862FE45C2E0CF07B9A925C93B243EB28_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARFoundation.ARPlane::get_alignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARPlane_get_alignment_mBEF1BCDE0A964ADAE4E5F477BD4C961CA8849EC1 (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARRaycastHit>::MoveNext()
inline bool Enumerator_MoveNext_mA8A979ABA69619E1F7137A922310D21CCD924EDC (Enumerator_t115957CEAEDF4C520C93D4E91842BA940981A122* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t115957CEAEDF4C520C93D4E91842BA940981A122*, const RuntimeMethod*))Enumerator_MoveNext_mA8A979ABA69619E1F7137A922310D21CCD924EDC_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean SpawnEnemy::shouldSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnEnemy_shouldSpawn_m8B33652AD0E84F7C80A579DAC51908C6A5F6EE6A (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) ;
// System.Void SpawnEnemy::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_Spawn_m0EC06F49B42CEDCFBB717E7CF54250DC4ACF7C06 (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7 (bool ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void Visyde.V_SMC_Camera::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_SMC_Camera_Hit_mE986E80AE7401BC7A6F29978D9230668F11608BF (V_SMC_Camera_t35AB97D50355AAD8527C1408E9C4FE31D0F10EA0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___2_hitInfo, float ___3_maxDistance, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void Visyde.V_SMC_Handler::ChangeColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_SMC_Handler_ChangeColor_mF51F82A467A9665B665D0E30D181DEF0437E8F44 (V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_dir, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Visyde.V_SMC_Handler>()
inline V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* Component_GetComponent_TisV_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC_m9D9230997617F8055ADC5A94C3BE21C8D136D55A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void BrainCheck.SpeechRecognitionBridge::setUnityGameObjectNameAndMethodName(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionBridge_setUnityGameObjectNameAndMethodName_m31A6B69251174F4478EB24A39E5A54735BD9E920 (String_t* ___0_gameObjectName, String_t* ___1_statusMethodName, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B (String_t* ___0_permission, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242 (String_t* ___0_permission, const RuntimeMethod* method) ;
// System.Void BrainCheck.SpeechRecognitionBridge::speechToTextInHidenModeWithBeepSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionBridge_speechToTextInHidenModeWithBeepSound_mCA3F4233D7D17E108E3A93D42F2E5D1EB0763EF6 (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, const RuntimeMethod* method) ;
// System.Void BrainCheck.Shoot::fireAbility(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shoot_fireAbility_m41AB79FE96CAE4477EC3E70972B0935B482310D6 (Shoot_t3CC2D92172DB803D47CD0D59107089D3FE9A3E1C* __this, String_t* ___0_messages, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___0_fieldName, method);
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void BrainCheck.SpeechRecognitionBridge::SetupPlugin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionBridge_SetupPlugin_m6BE836CBC656FA4B3554DB7EA81584A305158390 (const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject BrainCheck.SpeechRecognitionBridge::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* SpeechRecognitionBridge_get_instance_m905D985AFF7961875660AA672BE0AB6BF31BF4C9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator BrainCheck.DemoScript::BtnAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DemoScript_BtnAnimation_m210FAAE73FFCB4112A3FBC5B4191A5462E5DDD02 (DemoScript_tDE267076E50A62A756A6D69BED2F52DB10AB4347* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void BrainCheck.DemoScript/<BtnAnimation>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBtnAnimationU3Ed__5__ctor_m30F1AD5AC05AC18755869B75848F91C2607BFFAB (U3CBtnAnimationU3Ed__5_t2D095EBC7674F843353B05D3FD46D6FB02AEFAC9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void BrainCheck.SpeechRecognitionBridge::requestMicPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionBridge_requestMicPermission_m10B6678DF52F29AFF1166CBEC61268B3D861CC7A (const RuntimeMethod* method) ;
// System.Void BrainCheck.SpeechRecognitionBridge::checkMicPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionBridge_checkMicPermission_mD5FB4DFB3DBB7F371018B863C473DB6A971F4188 (const RuntimeMethod* method) ;
// System.Void BrainCheck.SpeechRecognitionBridge::textToSpeech(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionBridge_textToSpeech_mDB5FDACC7FE6B3DA5C483954FE5CAC0464C0E787 (String_t* ___0_text, int32_t ___1_locale, const RuntimeMethod* method) ;
// System.Void BrainCheck.SpeechRecognitionBridge::speechToText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionBridge_speechToText_m0267DA2129DC47B1311CBFBFE16B8F9C5865755B (const RuntimeMethod* method) ;
// System.Void BrainCheck.SpeechRecognitionBridge::speechToTextInSilentMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionBridge_speechToTextInSilentMode_m6562E9C6DA179AD5DF4614EF7D064DD03AACAECC (const RuntimeMethod* method) ;
// System.Void BrainCheck.SpeechRecognitionBridge::unmuteSpeakers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionBridge_unmuteSpeakers_m90639D8E6C68B55B3E59486A5AF0E8E5BB976671 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void BrainCheck.DemoScript::ButtonAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_ButtonAction_m91CFD920C6700ADEA9FC265837F94426D7ACD675 (DemoScript_tDE267076E50A62A756A6D69BED2F52DB10AB4347* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60 (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_key, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>::Add(T)
inline void List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_inline (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD*, KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9, const RuntimeMethod*))List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_gshared_inline)(__this, ___0_item, method);
}
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>::get_Count()
inline int32_t List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_inline (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD*, const RuntimeMethod*))List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>::get_Item(System.Int32)
inline KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 (*) (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD*, int32_t, const RuntimeMethod*))List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C_gshared)(__this, ___0_index, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>::get_Key()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_inline (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>::get_Value()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_inline (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9*, const RuntimeMethod*))KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_gshared_inline)(__this, method);
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::RandomVector(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_RandomVector_m8D5CB399D3CE0038571D41DE824CE673E766B4FA (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_end, float ___2_offsetAmount, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_result, const RuntimeMethod* method) ;
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::GetPerpendicularVector(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_GetPerpendicularVector_m6E14CE8B174161B94706CE092FF3BE4049C53983 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_directionNormalized, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_side, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>::Clear()
inline void List_1_Clear_mF8CCA57B4BFDC96ED00E7FA3A999859EDECF661A_inline (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD*, const RuntimeMethod*))List_1_Clear_mF8CCA57B4BFDC96ED00E7FA3A999859EDECF661A_gshared_inline)(__this, method);
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::SelectOffsetFromAnimationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_SelectOffsetFromAnimationMode_m98F0C804C05EFB6BC3283AC50D654D5A672B6199 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Camera::get_orthographic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::UpdateFromMaterialChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_UpdateFromMaterialChange_m977EBCF7F3B1B47A777F34B0305C7FC8A04E1EF5 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::Trigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_Trigger_mA1EDB81D4D9001D2B19FFBACB0A36BAFEE96C284 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::GenerateLightningBolt(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_GenerateLightningBolt_m6F45F784BE0610F9E9B519C5E290D3515DE0BA49 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, int32_t ___2_generation, int32_t ___3_totalGenerations, float ___4_offsetAmount, const RuntimeMethod* method) ;
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::UpdateLineRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_UpdateLineRenderer_mC709724D71E0E95242108C4B9D6F7DA6BAB71F65 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTextureScale(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureScale_mABC2B4327CCDC6BB0E0EA72C6F29817400F56EF1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>::.ctor()
inline void List_1__ctor_m01FB66CBC7881CD4F65D3FBEA76E99F61514EA4C (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD*, const RuntimeMethod*))List_1__ctor_m01FB66CBC7881CD4F65D3FBEA76E99F61514EA4C_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
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
// UnityEngine.GameObject AnchorCreator::get_AnchorPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnchorCreator_get_AnchorPrefab_mBBAF7805E9D9F8D79408EE642D153BC76306B25A (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	{
		// get => m_AnchorPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_AnchorPrefab_4;
		return L_0;
	}
}
// System.Void AnchorCreator::set_AnchorPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_set_AnchorPrefab_m53CC9CC3022C713826B44536B48B462C8A1FACFF (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_AnchorPrefab = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___m_AnchorPrefab_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorPrefab_4), (void*)L_0);
		return;
	}
}
// System.Void AnchorCreator::RemoveAllAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_RemoveAllAnchors_m6BA302DD9EECA47969FD3F6E5397441DCB09ED21 (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* V_1 = NULL;
	{
		// foreach (var anchor in m_AnchorPoints)
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_0 = __this->___m_AnchorPoints_6;
		NullCheck(L_0);
		Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 L_1;
		L_1 = List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502(L_0, List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3((&V_0), Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0021_1;
			}

IL_0010_1:
			{
				// foreach (var anchor in m_AnchorPoints)
				ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_2;
				L_2 = Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_inline((&V_0), Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var);
				V_1 = L_2;
				// Destroy(anchor);
				ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_3 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
			}

IL_0021_1:
			{
				// foreach (var anchor in m_AnchorPoints)
				bool L_4;
				L_4 = Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F((&V_0), Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// m_AnchorPoints.Clear();
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_5 = __this->___m_AnchorPoints_6;
		NullCheck(L_5);
		List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_inline(L_5, List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AnchorCreator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_Awake_m8820A3F157354D7EDED7B2D7CE2BFA42844F1F8E (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RaycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->___m_RaycastManager_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RaycastManager_7), (void*)L_0);
		// m_AnchorManager = GetComponent<ARAnchorManager>();
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_1;
		L_1 = Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907(__this, Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		__this->___m_AnchorManager_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorManager_8), (void*)L_1);
		// m_PlaneManager = GetComponent<ARPlaneManager>();
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_2;
		L_2 = Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF(__this, Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		__this->___m_PlaneManager_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneManager_9), (void*)L_2);
		// m_AnchorPoints = new List<ARAnchor>();
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_3 = (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*)il2cpp_codegen_object_new(List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4(L_3, List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var);
		__this->___m_AnchorPoints_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorPoints_6), (void*)L_3);
		// }
		return;
	}
}
// System.Void AnchorCreator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_Update_mA0A8BCCBAB0AE50DB087524E6273D11F1D6456D0 (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral849043193B4849A97BE2F08CFC3CAC883A0F096C);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_4;
	memset((&V_4), 0, sizeof(V_4));
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* V_6 = NULL;
	ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* V_7 = NULL;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	{
		// if (Input.touchCount == 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return;
		goto IL_00d9;
	}

IL_0012:
	{
		// var touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_2;
		// if (touch.phase != TouchPhase.Began)
		int32_t L_3;
		L_3 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		V_2 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// return;
		goto IL_00d9;
	}

IL_002c:
	{
		// if (m_RaycastManager.Raycast(touch.position, s_Hits, TrackableType.PlaneWithinPolygon))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_5 = __this->___m_RaycastManager_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = ((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_5);
		bool L_8;
		L_8 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_5, L_6, L_7, 1, NULL);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_00d9;
		}
	}
	{
		// var hitPose = s_Hits[0].pose;
		il2cpp_codegen_runtime_class_init_inline(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_10 = ((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_10);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_11;
		L_11 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_10, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_8 = L_11;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12;
		L_12 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_8), NULL);
		V_4 = L_12;
		// var hitTrackableId = s_Hits[0].trackableId;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_13 = ((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_13);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_14;
		L_14 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_13, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_8 = L_14;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_15;
		L_15 = ARRaycastHit_get_trackableId_m4E510F2C326AFF23086203E4241C8F9B293616C3((&V_8), NULL);
		V_5 = L_15;
		// var hitPlane = m_PlaneManager.GetPlane(hitTrackableId);
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_16 = __this->___m_PlaneManager_9;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_17 = V_5;
		NullCheck(L_16);
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_18;
		L_18 = ARPlaneManager_GetPlane_m49FC33F6BC0DCFE67C4FC5F5CEE99CC8A7036FAE(L_16, L_17, NULL);
		V_6 = L_18;
		// var anchor = m_AnchorManager.AttachAnchor(hitPlane, hitPose);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_19 = __this->___m_AnchorManager_8;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_20 = V_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_21 = V_4;
		NullCheck(L_19);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_22;
		L_22 = ARAnchorManager_AttachAnchor_m8FA6B772401F90B38A06F43B8EA1B02EA82FFA75(L_19, L_20, L_21, NULL);
		V_7 = L_22;
		// Instantiate(m_AnchorPrefab, anchor.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___m_AnchorPrefab_4;
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_24 = V_7;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_23, L_25, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		// if (anchor == null)
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_27 = V_7;
		bool L_28;
		L_28 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_9 = L_28;
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_00c8;
		}
	}
	{
		// Debug.Log("Error creating anchor.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral849043193B4849A97BE2F08CFC3CAC883A0F096C, NULL);
		goto IL_00d8;
	}

IL_00c8:
	{
		// m_AnchorPoints.Add(anchor);
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_30 = __this->___m_AnchorPoints_6;
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_31 = V_7;
		NullCheck(L_30);
		List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_inline(L_30, L_31, List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var);
	}

IL_00d8:
	{
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void AnchorCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator__ctor_m702B01425680D7FD1C9272A423AAF8A913E5476E (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void AnchorCreator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator__cctor_mDE519BED5D639DA8CD4FA7E389C3D97DF4BA54C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5), (void*)L_0);
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
// System.Single ARFeatheredPlaneMeshVisualizer::get_featheringWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return m_FeatheringWidth; }
		float L_0 = __this->___m_FeatheringWidth_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_FeatheringWidth; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::set_featheringWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_set_featheringWidth_mD616A09A3B426EA5DE1FA37334DD194E43EEC110 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_FeatheringWidth = value; }
		float L_0 = ___0_value;
		__this->___m_FeatheringWidth_4 = L_0;
		// set { m_FeatheringWidth = value; }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_Awake_mC5DB0414A2514BF4851266C25141C903F0AC57BA (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PlaneMeshVisualizer = GetComponent<ARPlaneMeshVisualizer>();
		ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* L_0;
		L_0 = Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01(__this, Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var);
		__this->___m_PlaneMeshVisualizer_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneMeshVisualizer_7), (void*)L_0);
		// m_FeatheredPlaneMaterial = GetComponent<MeshRenderer>().material;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		__this->___m_FeatheredPlaneMaterial_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FeatheredPlaneMaterial_9), (void*)L_2);
		// m_Plane = GetComponent<ARPlane>();
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_3;
		L_3 = Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F(__this, Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var);
		__this->___m_Plane_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Plane_8), (void*)L_3);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_OnEnable_m8781C85CFED871C8A81A5B88DB1031856E0FC9F0 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Plane.boundaryChanged += ARPlane_boundaryUpdated;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = __this->___m_Plane_8;
		Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* L_1 = (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*)il2cpp_codegen_object_new(Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1(L_1, __this, (intptr_t)((void*)ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARPlane_add_boundaryChanged_m6A9CA2ADF4742C004EF7BCFD48A7C820320616AA(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_OnDisable_m2343B05B1A8F14BAD4DD516C584281B66FE6A4E8 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Plane.boundaryChanged -= ARPlane_boundaryUpdated;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = __this->___m_Plane_8;
		Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* L_1 = (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*)il2cpp_codegen_object_new(Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1(L_1, __this, (intptr_t)((void*)ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARPlane_remove_boundaryChanged_m6F71EEF2CD3C71AF069C5FE6CD993906BD8A9A10(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::ARPlane_boundaryUpdated(UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC ___0_eventArgs, const RuntimeMethod* method) 
{
	{
		// GenerateBoundaryUVs(m_PlaneMeshVisualizer.mesh);
		ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* L_0 = __this->___m_PlaneMeshVisualizer_7;
		NullCheck(L_0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1;
		L_1 = ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline(L_0, NULL);
		ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	bool V_4 = false;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	bool V_8 = false;
	bool V_9 = false;
	{
		// int vertexCount = mesh.vertexCount;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___0_mesh;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(L_0, NULL);
		V_0 = L_1;
		// s_FeatheringUVs.Clear();
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_2);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_2, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// if (s_FeatheringUVs.Capacity < vertexCount) { s_FeatheringUVs.Capacity = vertexCount; }
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6(L_3, List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var);
		int32_t L_5 = V_0;
		V_4 = (bool)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		// if (s_FeatheringUVs.Capacity < vertexCount) { s_FeatheringUVs.Capacity = vertexCount; }
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_7 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE(L_7, L_8, List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var);
	}

IL_0034:
	{
		// mesh.GetVertices(s_Vertices);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9 = ___0_mesh;
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_10 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		NullCheck(L_9);
		Mesh_GetVertices_m5BF8777074E383AD8C4B9974D27E4AB52963D92E(L_9, L_10, NULL);
		// Vector3 centerInPlaneSpace = s_Vertices[s_Vertices.Count - 1];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_12 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_12, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_11, ((int32_t)il2cpp_codegen_subtract(L_13, 1)), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		V_1 = L_14;
		// Vector3 uv = new Vector3(0, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		// float shortestUVMapping = float.MaxValue;
		V_3 = ((std::numeric_limits<float>::max)());
		// for (int i = 0; i < vertexCount - 1; i++)
		V_5 = 0;
		goto IL_00d1;
	}

IL_0078:
	{
		// float vertexDist = Vector3.Distance(s_Vertices[i], centerInPlaneSpace);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_15 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_15, L_16, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		float L_19;
		L_19 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_17, L_18, NULL);
		V_6 = L_19;
		// float uvMapping = vertexDist / Mathf.Max(vertexDist - featheringWidth, 0.001f);
		float L_20 = V_6;
		float L_21 = V_6;
		float L_22;
		L_22 = ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D(__this, NULL);
		float L_23;
		L_23 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract(L_21, L_22)), (0.00100000005f), NULL);
		V_7 = ((float)(L_20/L_23));
		// uv.x = uvMapping;
		float L_24 = V_7;
		(&V_2)->___x_2 = L_24;
		// if (shortestUVMapping > uvMapping) { shortestUVMapping = uvMapping; }
		float L_25 = V_3;
		float L_26 = V_7;
		V_8 = (bool)((((float)L_25) > ((float)L_26))? 1 : 0);
		bool L_27 = V_8;
		if (!L_27)
		{
			goto IL_00be;
		}
	}
	{
		// if (shortestUVMapping > uvMapping) { shortestUVMapping = uvMapping; }
		float L_28 = V_7;
		V_3 = L_28;
	}

IL_00be:
	{
		// s_FeatheringUVs.Add(uv);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_29 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_2;
		NullCheck(L_29);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_29, L_30, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < vertexCount - 1; i++)
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00d1:
	{
		// for (int i = 0; i < vertexCount - 1; i++)
		int32_t L_32 = V_5;
		int32_t L_33 = V_0;
		V_9 = (bool)((((int32_t)L_32) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_33, 1))))? 1 : 0);
		bool L_34 = V_9;
		if (L_34)
		{
			goto IL_0078;
		}
	}
	{
		// m_FeatheredPlaneMaterial.SetFloat("_ShortestUVMapping", shortestUVMapping);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___m_FeatheredPlaneMaterial_9;
		float L_36 = V_3;
		NullCheck(L_35);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_35, _stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24, L_36, NULL);
		// uv.Set(0, 0, 0);
		Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		// s_FeatheringUVs.Add(uv);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_37 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_2;
		NullCheck(L_37);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_37, L_38, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// mesh.SetUVs(1, s_FeatheringUVs);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_39 = ___0_mesh;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_40 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_39);
		Mesh_SetUVs_mFEE20B5977AA358DAFA31CF621BBC4B0247789B2(L_39, 1, L_40, NULL);
		// mesh.UploadMeshData(false);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_41 = ___0_mesh;
		NullCheck(L_41);
		Mesh_UploadMeshData_mE4C94F263DAA8CAC1641FE137E1CE7D3F09396EB(L_41, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer__ctor_m9A77651BCAE58AA0B994FFF6C6B63B1CFF2729F6 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	{
		// float m_FeatheringWidth = 0.2f;
		__this->___m_FeatheringWidth_4 = (0.200000003f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer__cctor_m56285A000EE27A1631BE9C5BCDA5C376E5D133C3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<Vector3> s_FeatheringUVs = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5), (void*)L_0);
		// static List<Vector3> s_Vertices = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_1, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6), (void*)L_1);
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
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m8BBD9A5AE10A27ABDFCD9168B93CD9C69D229034 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2B97CB5BF770F8DECFD2A2DA16CABAF8656F157);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target = GameObject.Find("CameraObject");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralC2B97CB5BF770F8DECFD2A2DA16CABAF8656F157, NULL);
		__this->___target_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_4), (void*)L_0);
		// aggroRange = 0.8f;
		__this->___aggroRange_6 = (0.800000012f);
		// moveSpeed = 10;
		__this->___moveSpeed_5 = (10.0f);
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_m4149CFC3AC081AF0D654D9BDB6BC9B5540CE03D8 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93CD35E03C1A424B1F418957BABE8F734B1AD3D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		// float distanceFromPlayer = Vector3.Distance(this.transform.position, target.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___target_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_4, NULL);
		V_0 = L_5;
		// if (distanceFromPlayer >= aggroRange)
		float L_6 = V_0;
		float L_7 = __this->___aggroRange_6;
		V_1 = (bool)((((int32_t)((!(((float)L_6) >= ((float)L_7)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0095;
		}
	}
	{
		// transform.position = Vector3.Lerp(transform.position, target.transform.position, moveSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___target_4;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = __this->___moveSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_11, L_14, L_15, NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_16, NULL);
		// transform.LookAt(target.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___target_4;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		NullCheck(L_17);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_17, L_20, NULL);
		// GetComponent<Animation>().Play("Walk");
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_21;
		L_21 = Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290(__this, Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		NullCheck(L_21);
		bool L_22;
		L_22 = Animation_Play_m95CC43633DC2B587AB3A0D1FF5F93B863A5440D5(L_21, _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		goto IL_00a8;
	}

IL_0095:
	{
		// GetComponent<Animation>().Play("Attack1");
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_23;
		L_23 = Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290(__this, Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		NullCheck(L_23);
		bool L_24;
		L_24 = Animation_Play_m95CC43633DC2B587AB3A0D1FF5F93B863A5440D5(L_23, _stringLiteral93CD35E03C1A424B1F418957BABE8F734B1AD3D4, NULL);
	}

IL_00a8:
	{
		// }
		return;
	}
}
// System.Void Enemy::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnCollisionEnter_mA8E3F644B8068B1BA5496C6AD2E43A65EBA978DB (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (collision.gameObject.tag == "Projectile")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// Destroy(collision.gameObject);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_5 = ___0_collision;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
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
// System.Void Ghoul::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghoul_Start_m9993A5388BCE161825471078E3DB434BBF6CA556 (Ghoul_tA980E68A0C8CBDD33B7997653B11CA193685F8E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2B97CB5BF770F8DECFD2A2DA16CABAF8656F157);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target = GameObject.Find("CameraObject");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralC2B97CB5BF770F8DECFD2A2DA16CABAF8656F157, NULL);
		__this->___target_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_4), (void*)L_0);
		// aggroRange = 1.2f;
		__this->___aggroRange_6 = (1.20000005f);
		// moveSpeed = 0.005f;
		__this->___moveSpeed_5 = (0.00499999989f);
		// isDead = false;
		__this->___isDead_7 = (bool)0;
		// }
		return;
	}
}
// System.Void Ghoul::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghoul_Update_mC96FD17EF1C78643867E8F1CD48BF03F96DFEE12 (Ghoul_tA980E68A0C8CBDD33B7997653B11CA193685F8E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93CD35E03C1A424B1F418957BABE8F734B1AD3D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	{
		// float distanceFromPlayer = Vector3.Distance(this.transform.position, target.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___target_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_4, NULL);
		V_0 = L_5;
		// if (!isDead)
		bool L_6 = __this->___isDead_7;
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_00ba;
		}
	}
	{
		// if (distanceFromPlayer >= aggroRange)
		float L_8 = V_0;
		float L_9 = __this->___aggroRange_6;
		V_2 = (bool)((((int32_t)((!(((float)L_8) >= ((float)L_9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_00a6;
		}
	}
	{
		// transform.position = Vector3.Lerp(transform.position, target.transform.position, moveSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___target_4;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = __this->___moveSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_13, L_16, L_17, NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_18, NULL);
		// transform.LookAt(target.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___target_4;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		NullCheck(L_19);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_19, L_22, NULL);
		// GetComponent<Animation>().Play("Walk");
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_23;
		L_23 = Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290(__this, Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		NullCheck(L_23);
		bool L_24;
		L_24 = Animation_Play_m95CC43633DC2B587AB3A0D1FF5F93B863A5440D5(L_23, _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		goto IL_00b9;
	}

IL_00a6:
	{
		// GetComponent<Animation>().Play("Attack1");
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_25;
		L_25 = Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290(__this, Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		NullCheck(L_25);
		bool L_26;
		L_26 = Animation_Play_m95CC43633DC2B587AB3A0D1FF5F93B863A5440D5(L_25, _stringLiteral93CD35E03C1A424B1F418957BABE8F734B1AD3D4, NULL);
	}

IL_00b9:
	{
	}

IL_00ba:
	{
		// }
		return;
	}
}
// System.Void Ghoul::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghoul_OnCollisionEnter_m3B01F2D6CA680F34B4069637E796302DFC90A542 (Ghoul_tA980E68A0C8CBDD33B7997653B11CA193685F8E1* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF10713750201B0DC07B80500C622EE738A56333C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (collision.gameObject.tag == "Projectile")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// GetComponent<Animation>().Play("Death");
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_5;
		L_5 = Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290(__this, Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6;
		L_6 = Animation_Play_m95CC43633DC2B587AB3A0D1FF5F93B863A5440D5(L_5, _stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8, NULL);
		// isDead = true;
		__this->___isDead_7 = (bool)1;
		// Destroy(this.gameObject, 1.1f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_7, (1.10000002f), NULL);
	}

IL_0045:
	{
		// if(collision.gameObject.tag == "MainCamera")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_8 = ___0_collision;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, NULL);
		V_1 = L_11;
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		// Debug.Log("Arms hit");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF10713750201B0DC07B80500C622EE738A56333C, NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void Ghoul::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghoul__ctor_mA673771558EE8B05B7EDFCBF2B70E231CA41B190 (Ghoul_tA980E68A0C8CBDD33B7997653B11CA193685F8E1* __this, const RuntimeMethod* method) 
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
// System.Void PlaceObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceObject_Update_mE52445879BBA344DEBFEDBF6CF23FEE92A059358 (PlaceObject_t69096E71B3AF67B110DC0077487F0BBDB8D9E1BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pointerOverUI = EventSystem.current.IsPointerOverGameObject();
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38(L_0, NULL);
		__this->___pointerOverUI_5 = L_1;
		// }
		return;
	}
}
// System.Void PlaceObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceObject_Awake_mD6993E74BE76ED7E3B9AAA189F1B37638B7D2E70 (PlaceObject_t69096E71B3AF67B110DC0077487F0BBDB8D9E1BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aRRaycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->___aRRaycastManager_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aRRaycastManager_7), (void*)L_0);
		// aRPlaneManager = GetComponent<ARPlaneManager>();
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_1;
		L_1 = Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF(__this, Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		__this->___aRPlaneManager_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aRPlaneManager_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void PlaceObject::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceObject_OnEnable_mB3104C829382C28FD236E0635DD37DC931A2F3EC (PlaceObject_t69096E71B3AF67B110DC0077487F0BBDB8D9E1BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaceObject_FingerDown_m8F45C6F6D5360556C0854AAA70419FB18BFE1FA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EnhancedTouch.TouchSimulation.Enable();
		TouchSimulation_Enable_m86E0F695BFC248E7E28DC62C65D92E4666F49513(NULL);
		// EnhancedTouch.EnhancedTouchSupport.Enable();
		EnhancedTouchSupport_Enable_mD8F0AC9B4B4DDBCA5EA779F35A5C28394D3FF6CE(NULL);
		// EnhancedTouch.Touch.onFingerDown += FingerDown;
		Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B* L_0 = (Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B*)il2cpp_codegen_object_new(Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_mE3722D35F4738E246052D0F417753CABA3AD8506(L_0, __this, (intptr_t)((void*)PlaceObject_FingerDown_m8F45C6F6D5360556C0854AAA70419FB18BFE1FA9_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_il2cpp_TypeInfo_var);
		Touch_add_onFingerDown_m8A2C32388E43F459FA71AA84B1CDB159597867ED(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlaceObject::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceObject_OnDisable_m4538A06E715E9ADB0910F24DA7BC187D3C6474F1 (PlaceObject_t69096E71B3AF67B110DC0077487F0BBDB8D9E1BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaceObject_FingerDown_m8F45C6F6D5360556C0854AAA70419FB18BFE1FA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EnhancedTouch.TouchSimulation.Disable();
		TouchSimulation_Disable_m321E8840F88BE92343D64A728694FFA942EEC69E(NULL);
		// EnhancedTouch.EnhancedTouchSupport.Disable();
		EnhancedTouchSupport_Disable_m11AAE1A6CE5F340154C0EB0D95FBC168B01F8B48(NULL);
		// EnhancedTouch.Touch.onFingerDown -= FingerDown;
		Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B* L_0 = (Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B*)il2cpp_codegen_object_new(Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_mE3722D35F4738E246052D0F417753CABA3AD8506(L_0, __this, (intptr_t)((void*)PlaceObject_FingerDown_m8F45C6F6D5360556C0854AAA70419FB18BFE1FA9_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_il2cpp_TypeInfo_var);
		Touch_remove_onFingerDown_m6CA33BB823569C40703EDC3C1B9F46D2700C6AA6(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlaceObject::FingerDown(UnityEngine.InputSystem.EnhancedTouch.Finger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceObject_FingerDown_m8F45C6F6D5360556C0854AAA70419FB18BFE1FA9 (PlaceObject_t69096E71B3AF67B110DC0077487F0BBDB8D9E1BF* __this, Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___0_finger, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m01EBE6E815AD7850E1AEBE3F74FA5AFA9D2CEBC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA8A979ABA69619E1F7137A922310D21CCD924EDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4C2D1CE7862FE45C2E0CF07B9A925C93B243EB28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1010F24B75A333F078C9D14989D99651C3AA8CC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t115957CEAEDF4C520C93D4E91842BA940981A122 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_7 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_15;
	memset((&V_15), 0, sizeof(V_15));
	int32_t G_B8_0 = 0;
	{
		// if(finger.index != 0)
		Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* L_0 = ___0_finger;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Finger_get_index_mB409A9B5711767D3A6046AEAA4931A0B3633934C_inline(L_0, NULL);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_014f;
	}

IL_0013:
	{
		// if(aRRaycastManager.Raycast(finger.currentTouch.screenPosition, hits, TrackableType.PlaneWithinPolygon))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_3 = __this->___aRRaycastManager_7;
		Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* L_4 = ___0_finger;
		NullCheck(L_4);
		Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 L_5;
		L_5 = Finger_get_currentTouch_m53721DA3C8AB5C0D600499C33CCD5854E757890D(L_4, NULL);
		V_2 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Touch_get_screenPosition_mAEBB428F1E62308A2C3E32A56CBEFCA9F7530B03((&V_2), NULL);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = __this->___hits_9;
		NullCheck(L_3);
		bool L_8;
		L_8 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_3, L_6, L_7, 1, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_014f;
		}
	}
	{
		// foreach(ARRaycastHit hit in hits)
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_10 = __this->___hits_9;
		NullCheck(L_10);
		Enumerator_t115957CEAEDF4C520C93D4E91842BA940981A122 L_11;
		L_11 = List_1_GetEnumerator_m1010F24B75A333F078C9D14989D99651C3AA8CC8(L_10, List_1_GetEnumerator_m1010F24B75A333F078C9D14989D99651C3AA8CC8_RuntimeMethod_var);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m01EBE6E815AD7850E1AEBE3F74FA5AFA9D2CEBC4((&V_3), Enumerator_Dispose_m01EBE6E815AD7850E1AEBE3F74FA5AFA9D2CEBC4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0131_1;
			}

IL_004d_1:
			{
				// foreach(ARRaycastHit hit in hits)
				ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_12;
				L_12 = Enumerator_get_Current_m4C2D1CE7862FE45C2E0CF07B9A925C93B243EB28_inline((&V_3), Enumerator_get_Current_m4C2D1CE7862FE45C2E0CF07B9A925C93B243EB28_RuntimeMethod_var);
				V_4 = L_12;
				// Pose pose = hit.pose;
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13;
				L_13 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_4), NULL);
				V_5 = L_13;
				// if (aRPlaneManager.GetPlane(hit.trackableId).alignment == PlaneAlignment.HorizontalUp && !pointerOverUI)
				ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_14 = __this->___aRPlaneManager_8;
				TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_15;
				L_15 = ARRaycastHit_get_trackableId_m4E510F2C326AFF23086203E4241C8F9B293616C3((&V_4), NULL);
				NullCheck(L_14);
				ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_16;
				L_16 = ARPlaneManager_GetPlane_m49FC33F6BC0DCFE67C4FC5F5CEE99CC8A7036FAE(L_14, L_15, NULL);
				NullCheck(L_16);
				int32_t L_17;
				L_17 = ARPlane_get_alignment_mBEF1BCDE0A964ADAE4E5F477BD4C961CA8849EC1(L_16, NULL);
				if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)100)))))
				{
					goto IL_0086_1;
				}
			}
			{
				bool L_18 = __this->___pointerOverUI_5;
				G_B8_0 = ((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
				goto IL_0087_1;
			}

IL_0086_1:
			{
				G_B8_0 = 0;
			}

IL_0087_1:
			{
				V_6 = (bool)G_B8_0;
				bool L_19 = V_6;
				if (!L_19)
				{
					goto IL_0130_1;
				}
			}
			{
				// GameObject obj = Instantiate(prefab, pose.position, pose.rotation);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___prefab_6;
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_21 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = L_21.___position_0;
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_23 = V_5;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = L_23.___rotation_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
				L_25 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_20, L_22, L_24, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
				V_7 = L_25;
				// Vector3 position = obj.transform.position;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_7;
				NullCheck(L_26);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
				L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
				NullCheck(L_27);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
				L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
				V_8 = L_28;
				// Vector3 cameraPosition = Camera.main.transform.position;
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_29;
				L_29 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
				NullCheck(L_29);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
				L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
				NullCheck(L_30);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
				L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
				V_9 = L_31;
				// Vector3 direction = cameraPosition - position;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_9;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
				L_34 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_32, L_33, NULL);
				V_10 = L_34;
				// Vector3 targetRotationEuler = Quaternion.LookRotation(direction).eulerAngles;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_10;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
				L_36 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_35, NULL);
				V_14 = L_36;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
				L_37 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_14), NULL);
				V_11 = L_37;
				// Vector3 scaledEuler = Vector3.Scale(targetRotationEuler, obj.transform.up.normalized);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_11;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = V_7;
				NullCheck(L_39);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
				L_40 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_39, NULL);
				NullCheck(L_40);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
				L_41 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_40, NULL);
				V_15 = L_41;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
				L_42 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_15), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
				L_43 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_38, L_42, NULL);
				V_12 = L_43;
				// Quaternion targetRotation = Quaternion.Euler(scaledEuler);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_12;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45;
				L_45 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_44, NULL);
				V_13 = L_45;
				// obj.transform.rotation = obj.transform.rotation * targetRotation;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = V_7;
				NullCheck(L_46);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
				L_47 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_46, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = V_7;
				NullCheck(L_48);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
				L_49 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_48, NULL);
				NullCheck(L_49);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50;
				L_50 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_49, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51 = V_13;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52;
				L_52 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_50, L_51, NULL);
				NullCheck(L_47);
				Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_47, L_52, NULL);
			}

IL_0130_1:
			{
			}

IL_0131_1:
			{
				// foreach(ARRaycastHit hit in hits)
				bool L_53;
				L_53 = Enumerator_MoveNext_mA8A979ABA69619E1F7137A922310D21CCD924EDC((&V_3), Enumerator_MoveNext_mA8A979ABA69619E1F7137A922310D21CCD924EDC_RuntimeMethod_var);
				if (L_53)
				{
					goto IL_004d_1;
				}
			}
			{
				goto IL_014e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014e:
	{
	}

IL_014f:
	{
		// }
		return;
	}
}
// System.Void PlaceObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceObject__ctor_m73094142430E3C4071B1660682AB5867522D1510 (PlaceObject_t69096E71B3AF67B110DC0077487F0BBDB8D9E1BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool pointerOverUI = false;
		__this->___pointerOverUI_5 = (bool)0;
		// private List<ARRaycastHit> hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		__this->___hits_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hits_9), (void*)L_0);
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
// System.Void PlayerLifePoints::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLifePoints_Start_m580DAE0A54BFBF9A6537FE774A93FCE09EEDC865 (PlayerLifePoints_tCBF5BCB8989FDB4FF14A6BEC870A4E0111FA441D* __this, const RuntimeMethod* method) 
{
	{
		// lifePoints = 50;
		__this->___lifePoints_5 = ((int32_t)50);
		// }
		return;
	}
}
// System.Void PlayerLifePoints::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLifePoints_Update_mF2AA45EDAACCFFF788D15C40D7E042F3F76B5400 (PlayerLifePoints_tCBF5BCB8989FDB4FF14A6BEC870A4E0111FA441D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF984C9674EDCA2C39EFAD66081B054F073C3815B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(lifePoints == 0)
		int32_t L_0 = __this->___lifePoints_5;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// lifePointsText.text = "Game Over";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = __this->___lifePointsText_4;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, _stringLiteralF984C9674EDCA2C39EFAD66081B054F073C3815B);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void PlayerLifePoints::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLifePoints_OnCollisionEnter_m494F37A629D18912F8409B9B2EC4C5FDE516B699 (PlayerLifePoints_tCBF5BCB8989FDB4FF14A6BEC870A4E0111FA441D* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BFAFCC944C147FE18DBF9242E940273B5D9759A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (collision.gameObject.tag == "Enemy" && lifePoints > 0)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = __this->___lifePoints_5;
		G_B3_0 = ((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0064;
		}
	}
	{
		// lifePoints -= 1;
		int32_t L_6 = __this->___lifePoints_5;
		__this->___lifePoints_5 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		// lifePointsText.text = "Life Points: " + lifePoints.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = __this->___lifePointsText_4;
		int32_t* L_8 = (&__this->___lifePoints_5);
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2BFAFCC944C147FE18DBF9242E940273B5D9759A, L_9, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_10);
		// Debug.Log("Hit");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C, NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void PlayerLifePoints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLifePoints__ctor_m80F053C640BB110F8DC82D0CD5CD282312D00EEE (PlayerLifePoints_tCBF5BCB8989FDB4FF14A6BEC870A4E0111FA441D* __this, const RuntimeMethod* method) 
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
// System.Void ProjectileController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileController_Start_mC8286D6B48220A4E8A284879C39F93F4F033A213 (ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject,5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_0, (5.0f), NULL);
		// }
		return;
	}
}
// System.Void ProjectileController::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileController_OnCollisionEnter_m820941CF79CE45D73F608CBDA16645A5FA2A3C74 (ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (collision.gameObject.tag == "Enemy")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void ProjectileController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileController__ctor_mB1B701C69DFB3576EAE38B3B962C26C6E5AE2E38 (ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46* __this, const RuntimeMethod* method) 
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
// System.Void SpawnEnemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_Start_mC7726203354D875E8F7DBF2A39480C6F312BF75B (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawnList = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___spawnList_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnList_4), (void*)L_0);
		// spawnList.Add(GhoulToSpawn);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___spawnList_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___GhoulToSpawn_5;
		NullCheck(L_1);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_1, L_2, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// spawnList.Add(ZombieToSpawn);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___spawnList_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___ZombieToSpawn_6;
		NullCheck(L_3);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_3, L_4, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SpawnEnemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_Update_m8C17771352CA43D1CE958B5B5D5A151C0BBBB35F (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (shouldSpawn())
		bool L_0;
		L_0 = SpawnEnemy_shouldSpawn_m8B33652AD0E84F7C80A579DAC51908C6A5F6EE6A(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Spawn();
		SpawnEnemy_Spawn_m0EC06F49B42CEDCFBB717E7CF54250DC4ACF7C06(__this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Boolean SpawnEnemy::shouldSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnEnemy_shouldSpawn_m8B33652AD0E84F7C80A579DAC51908C6A5F6EE6A (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return Time.time >= nextSpawnTime;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___nextSpawnTime_8;
		V_0 = (bool)((((int32_t)((!(((float)L_0) >= ((float)L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void SpawnEnemy::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_Spawn_m0EC06F49B42CEDCFBB717E7CF54250DC4ACF7C06 (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// nextSpawnTime = Time.time + spawnDelay;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___spawnDelay_7;
		__this->___nextSpawnTime_8 = ((float)il2cpp_codegen_add(L_0, L_1));
		// int randomNumber = Random.Range(0, spawnList.Count);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___spawnList_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_2, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_4;
		L_4 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_3, NULL);
		V_0 = L_4;
		// spawnLocation = Random.Range(-3, 3);
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)-3), 3, NULL);
		__this->___spawnLocation_9 = ((float)L_5);
		// Debug.Log(spawnLocation);
		float L_6 = __this->___spawnLocation_9;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// Instantiate(spawnList[randomNumber], transform.position + new Vector3(spawnLocation,0,0), transform.rotation);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___spawnList_4;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_9, L_10, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = __this->___spawnLocation_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), L_14, (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_11, L_16, L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SpawnEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy__ctor_mF4ACB2F1D347568304B1A0FE83882EB99DCECA57 (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
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
// System.Void Zombie::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zombie_Start_m478D7F11289A1F406964DA248134532441D4E52E (Zombie_tE0343BA7D0F72765740951B2D2D7AD2CEDEB32B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB1BDA323E583588864596CEA14450B585CC2217);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2B97CB5BF770F8DECFD2A2DA16CABAF8656F157);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target = GameObject.Find("CameraObject");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralC2B97CB5BF770F8DECFD2A2DA16CABAF8656F157, NULL);
		__this->___target_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_4), (void*)L_0);
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_7), (void*)L_1);
		// animator.SetBool("startAttacking", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_7;
		NullCheck(L_2);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteralAB1BDA323E583588864596CEA14450B585CC2217, (bool)0, NULL);
		// aggroRange = 1.3f;
		__this->___aggroRange_6 = (1.29999995f);
		// moveSpeed = 0.007f;
		__this->___moveSpeed_5 = (0.00700000022f);
		// isZombieDead = false;
		__this->___isZombieDead_8 = (bool)0;
		// }
		return;
	}
}
// System.Void Zombie::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zombie_Update_mB7E693A8605FDC1236C6FD956989A0454234B0F3 (Zombie_tE0343BA7D0F72765740951B2D2D7AD2CEDEB32B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB1BDA323E583588864596CEA14450B585CC2217);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		// if (!isZombieDead)
		bool L_0 = __this->___isZombieDead_8;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00bc;
		}
	}
	{
		// float distanceFromPlayer = Vector3.Distance(this.transform.position, target.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___target_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7;
		L_7 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_6, NULL);
		V_1 = L_7;
		// if (distanceFromPlayer >= aggroRange)
		float L_8 = V_1;
		float L_9 = __this->___aggroRange_6;
		V_2 = (bool)((((int32_t)((!(((float)L_8) >= ((float)L_9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_00a7;
		}
	}
	{
		// transform.position = Vector3.Lerp(transform.position, target.transform.position, moveSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___target_4;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = __this->___moveSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_13, L_16, L_17, NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_18, NULL);
		// transform.LookAt(target.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___target_4;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		NullCheck(L_19);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_19, L_22, NULL);
		// animator.SetBool("startAttacking", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = __this->___animator_7;
		NullCheck(L_23);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_23, _stringLiteralAB1BDA323E583588864596CEA14450B585CC2217, (bool)0, NULL);
		goto IL_00bb;
	}

IL_00a7:
	{
		// animator.SetBool("startAttacking", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_24 = __this->___animator_7;
		NullCheck(L_24);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_24, _stringLiteralAB1BDA323E583588864596CEA14450B585CC2217, (bool)1, NULL);
	}

IL_00bb:
	{
	}

IL_00bc:
	{
		// }
		return;
	}
}
// System.Void Zombie::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zombie_OnCollisionEnter_m791922AAEAC2327576775C67F34643260100406B (Zombie_tE0343BA7D0F72765740951B2D2D7AD2CEDEB32B8* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A2BAFF629C9EEE8837F088D22FB44E19DB30F9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (collision.gameObject.tag == "Projectile")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		// animator.SetBool("isDeadZombie", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___animator_7;
		NullCheck(L_5);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_5, _stringLiteral3A2BAFF629C9EEE8837F088D22FB44E19DB30F9D, (bool)1, NULL);
		// isZombieDead = true;
		__this->___isZombieDead_8 = (bool)1;
		// Destroy(this.gameObject,1.5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_6, (1.5f), NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void Zombie::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zombie__ctor_m3CA658C4BC347F71B7C6F90172F19865934C9D31 (Zombie_tE0343BA7D0F72765740951B2D2D7AD2CEDEB32B8* __this, const RuntimeMethod* method) 
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
// System.Void Visyde.V_SMC_Camera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_SMC_Camera_Start_m042D7339C7EEC60EE95207A6D609899101D45C2C (V_SMC_Camera_t35AB97D50355AAD8527C1408E9C4FE31D0F10EA0* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// Cursor.visible = false;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)0, NULL);
		// }
		return;
	}
}
// System.Void Visyde.V_SMC_Camera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_SMC_Camera_Update_m5A20B03D75E774E4ECAC49DBA2F39D54126BBC03 (V_SMC_Camera_t35AB97D50355AAD8527C1408E9C4FE31D0F10EA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// rotationX += Input.GetAxis("Mouse X") * 2;
		float L_0 = __this->___rotationX_5;
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		__this->___rotationX_5 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, (2.0f)))));
		// rotationY -= Input.GetAxis("Mouse Y") * 2;
		float L_2 = __this->___rotationY_6;
		float L_3;
		L_3 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		__this->___rotationY_6 = ((float)il2cpp_codegen_subtract(L_2, ((float)il2cpp_codegen_multiply(L_3, (2.0f)))));
		// Quaternion rotation = Quaternion.Euler(rotationY, rotationX, 0);
		float L_4 = __this->___rotationY_6;
		float L_5 = __this->___rotationX_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_4, L_5, (0.0f), NULL);
		V_0 = L_6;
		// transform.rotation = rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_0;
		NullCheck(L_7);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_7, L_8, NULL);
		// Hit ();
		V_SMC_Camera_Hit_mE986E80AE7401BC7A6F29978D9230668F11608BF(__this, NULL);
		// }
		return;
	}
}
// System.Void Visyde.V_SMC_Camera::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_SMC_Camera_Hit_mE986E80AE7401BC7A6F29978D9230668F11608BF (V_SMC_Camera_t35AB97D50355AAD8527C1408E9C4FE31D0F10EA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5417497152F52E77A47F1445398DAE0771DF9F2);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// fireDirection = transform.TransformDirection(Vector3.forward) * 10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_0, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, (10.0f), NULL);
		__this->___fireDirection_7 = L_3;
		// firePoint = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		__this->___firePoint_8 = L_5;
		// if (Physics.Raycast (firePoint, (fireDirection), out hit, Mathf.Infinity)) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___firePoint_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___fireDirection_7;
		bool L_8;
		L_8 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_6, L_7, (&V_0), (std::numeric_limits<float>::infinity()), NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_00c3;
		}
	}
	{
		// if (hit.transform.name == "Friendly") {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralC5417497152F52E77A47F1445398DAE0771DF9F2, NULL);
		V_2 = L_12;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_007e;
		}
	}
	{
		// crosshairHandler.ChangeColor (Color.green);
		V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* L_14 = __this->___crosshairHandler_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_14);
		V_SMC_Handler_ChangeColor_mF51F82A467A9665B665D0E30D181DEF0437E8F44(L_14, L_15, NULL);
		goto IL_00c0;
	}

IL_007e:
	{
		// } else if (hit.transform.name == "Enemy") {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_16, NULL);
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		V_3 = L_18;
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_00ad;
		}
	}
	{
		// crosshairHandler.ChangeColor (Color.red);
		V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* L_20 = __this->___crosshairHandler_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_20);
		V_SMC_Handler_ChangeColor_mF51F82A467A9665B665D0E30D181DEF0437E8F44(L_20, L_21, NULL);
		goto IL_00c0;
	}

IL_00ad:
	{
		// crosshairHandler.ChangeColor (Color.white);
		V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* L_22 = __this->___crosshairHandler_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		L_23 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_22);
		V_SMC_Handler_ChangeColor_mF51F82A467A9665B665D0E30D181DEF0437E8F44(L_22, L_23, NULL);
	}

IL_00c0:
	{
		goto IL_00d6;
	}

IL_00c3:
	{
		// crosshairHandler.ChangeColor (Color.white);
		V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* L_24 = __this->___crosshairHandler_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		L_25 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_24);
		V_SMC_Handler_ChangeColor_mF51F82A467A9665B665D0E30D181DEF0437E8F44(L_24, L_25, NULL);
	}

IL_00d6:
	{
		// Debug.DrawRay(firePoint, fireDirection, Color.green);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = __this->___firePoint_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->___fireDirection_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53(L_26, L_27, L_28, NULL);
		// }
		return;
	}
}
// System.Void Visyde.V_SMC_Camera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_SMC_Camera__ctor_mE811C23268506BC66AEBEE61C61137702CDC9514 (V_SMC_Camera_t35AB97D50355AAD8527C1408E9C4FE31D0F10EA0* __this, const RuntimeMethod* method) 
{
	{
		// float rotationX = 0F;
		__this->___rotationX_5 = (0.0f);
		// float rotationY = 0F;
		__this->___rotationY_6 = (0.0f);
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
// System.Void Visyde.V_SMC_Handler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_SMC_Handler_Update_m091367E6AD7F4CE60C83EEADF5B8F9662D3FA617 (V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (Input.GetKeyDown (KeyCode.Mouse1)) {
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)324), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// if (curCrossHair < crossHairs.Length - 1) {
		int32_t L_2 = __this->___curCrossHair_5;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_3 = __this->___crossHairs_4;
		NullCheck(L_3);
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), 1))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// curCrossHair += 1;
		int32_t L_5 = __this->___curCrossHair_5;
		__this->___curCrossHair_5 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		goto IL_0041;
	}

IL_0038:
	{
		// curCrossHair = 0;
		__this->___curCrossHair_5 = 0;
	}

IL_0041:
	{
	}

IL_0042:
	{
		// GetComponent<Image> ().sprite = crossHairs [curCrossHair];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_7 = __this->___crossHairs_4;
		int32_t L_8 = __this->___curCrossHair_5;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_6, L_10, NULL);
		// }
		return;
	}
}
// System.Void Visyde.V_SMC_Handler::ChangeColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_SMC_Handler_ChangeColor_mF51F82A467A9665B665D0E30D181DEF0437E8F44 (V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.GetComponent<Image> ().color = color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___0_color;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Visyde.V_SMC_Handler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_SMC_Handler__ctor_m1F885D36D860D8D5C935068A1FE61D4CB4F208A2 (V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* __this, const RuntimeMethod* method) 
{
	{
		// public int curCrossHair = 0;
		__this->___curCrossHair_5 = 0;
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
// System.Void Visyde.V_Text::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_Text_Start_m5367B83B14F3976D3BD76CD4773BE9E98B166809 (V_Text_t2225ECFAE0771E825C719A406AF945D8762616A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisV_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC_m9D9230997617F8055ADC5A94C3BE21C8D136D55A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handler = GetComponent<V_SMC_Handler> ();
		V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* L_0;
		L_0 = Component_GetComponent_TisV_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC_m9D9230997617F8055ADC5A94C3BE21C8D136D55A(__this, Component_GetComponent_TisV_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC_m9D9230997617F8055ADC5A94C3BE21C8D136D55A_RuntimeMethod_var);
		__this->___handler_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handler_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Visyde.V_Text::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_Text_Update_m26A0479BB72DB68637513A87F3F44449E496ECB7 (V_Text_t2225ECFAE0771E825C719A406AF945D8762616A2* __this, const RuntimeMethod* method) 
{
	{
		// crosshairNameText.text = handler.crossHairs [handler.curCrossHair].name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___crosshairNameText_4;
		V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* L_1 = __this->___handler_5;
		NullCheck(L_1);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_2 = L_1->___crossHairs_4;
		V_SMC_Handler_t3CB1A1FACC52D119525F7FD61EBA1EE61BFC95BC* L_3 = __this->___handler_5;
		NullCheck(L_3);
		int32_t L_4 = L_3->___curCrossHair_5;
		NullCheck(L_2);
		int32_t L_5 = L_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_7);
		// }
		return;
	}
}
// System.Void Visyde.V_Text::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V_Text__ctor_m4B475C1C417E68F3B67AC2AE7F20E102F3E33340 (V_Text_t2225ECFAE0771E825C719A406AF945D8762616A2* __this, const RuntimeMethod* method) 
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
// System.Void BrainCheck.Listener::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Start_mEA56F7DC2CAE6C80776AA93EB20AABE97149A366 (Listener_t29F49A3DD87B62B1F61E0D2797099213ACDA8EC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// BrainCheck.SpeechRecognitionBridge.setUnityGameObjectNameAndMethodName(gameObjectName, statusMethodName);
		String_t* L_0 = __this->___gameObjectName_4;
		String_t* L_1 = __this->___statusMethodName_5;
		SpeechRecognitionBridge_setUnityGameObjectNameAndMethodName_m31A6B69251174F4478EB24A39E5A54735BD9E920(L_0, L_1, NULL);
		// if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
		bool L_2;
		L_2 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// Permission.RequestUserPermission(Permission.Microphone);
		Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242(_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void BrainCheck.Listener::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Update_m872C93123C467E7E4E9D2806EC57F6BE791EDE5B (Listener_t29F49A3DD87B62B1F61E0D2797099213ACDA8EC7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BrainCheck.Listener::startListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_startListening_m10E63A551FF8A23E10C87DE44DC23725C6A17978 (Listener_t29F49A3DD87B62B1F61E0D2797099213ACDA8EC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFCEFF603839CE43FDF4D590D592E42055E8B4A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BrainCheck.SpeechRecognitionBridge.speechToTextInHidenModeWithBeepSound();
		SpeechRecognitionBridge_speechToTextInHidenModeWithBeepSound_mCA3F4233D7D17E108E3A93D42F2E5D1EB0763EF6(NULL);
		// isRecordingText.text = "Recording";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___isRecordingText_9;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteralDFCEFF603839CE43FDF4D590D592E42055E8B4A2);
		// }
		return;
	}
}
// System.Void BrainCheck.Listener::tempShootFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_tempShootFunction_mABCD98E8383239AD248D0F7649175F2C6CF36AC3 (Listener_t29F49A3DD87B62B1F61E0D2797099213ACDA8EC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject newProjectile = (GameObject)Instantiate(projectile, camera.transform.position, camera.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___projectile_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___camera_6;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___camera_6;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_3, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_7;
		// newProjectile.GetComponent<Rigidbody>().AddForce(camera.transform.forward * shootForce);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_8);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9;
		L_9 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_8, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___camera_6;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_11, NULL);
		float L_13 = __this->___shootForce_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_13, NULL);
		NullCheck(L_9);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_9, L_14, NULL);
		// }
		return;
	}
}
// System.Void BrainCheck.Listener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener__ctor_mE9DDEC9431D28F3493756F0E3F47FA520540EFE8 (Listener_t29F49A3DD87B62B1F61E0D2797099213ACDA8EC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAEA1DCD00925D1EF90FD44C2A6CC7F0EFDEFB7E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string gameObjectName = "Shoot";
		__this->___gameObjectName_4 = _stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameObjectName_4), (void*)_stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8);
		// string statusMethodName = "CallbackMethod";
		__this->___statusMethodName_5 = _stringLiteralBAEA1DCD00925D1EF90FD44C2A6CC7F0EFDEFB7E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___statusMethodName_5), (void*)_stringLiteralBAEA1DCD00925D1EF90FD44C2A6CC7F0EFDEFB7E);
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
// System.Void BrainCheck.Shoot::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shoot_Awake_m0DB64BED598C905B36D7234B0C094DA425635CEB (Shoot_t3CC2D92172DB803D47CD0D59107089D3FE9A3E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shoot_t3CC2D92172DB803D47CD0D59107089D3FE9A3E1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((Shoot_t3CC2D92172DB803D47CD0D59107089D3FE9A3E1C_StaticFields*)il2cpp_codegen_static_fields_for(Shoot_t3CC2D92172DB803D47CD0D59107089D3FE9A3E1C_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Shoot_t3CC2D92172DB803D47CD0D59107089D3FE9A3E1C_StaticFields*)il2cpp_codegen_static_fields_for(Shoot_t3CC2D92172DB803D47CD0D59107089D3FE9A3E1C_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void BrainCheck.Shoot::CallbackMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shoot_CallbackMethod_mA7A829982E8A013DA52C13042F38C773BEE8FD9A (Shoot_t3CC2D92172DB803D47CD0D59107089D3FE9A3E1C* __this, String_t* ___0_messages, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF0828672C366AA7C3AA93168568619BCBA55FE7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// tempMessage = messages;
		String_t* L_0 = ___0_messages;
		__this->___tempMessage_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMessage_10), (void*)L_0);
		// if(tempMessage == "SpeechRecognitionFinished")
		String_t* L_1 = __this->___tempMessage_10;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralCF0828672C366AA7C3AA93168568619BCBA55FE7, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// fireAbility(newMessage);
		String_t* L_4 = __this->___newMessage_8;
		Shoot_fireAbility_m41AB79FE96CAE4477EC3E70972B0935B482310D6(__this, L_4, NULL);
		goto IL_0036;
	}

IL_002d:
	{
		// newMessage = messages;
		String_t* L_5 = ___0_messages;
		__this->___newMessage_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___newMessage_8), (void*)L_5);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void BrainCheck.Shoot::fireAbility(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shoot_fireAbility_m41AB79FE96CAE4477EC3E70972B0935B482310D6 (Shoot_t3CC2D92172DB803D47CD0D59107089D3FE9A3E1C* __this, String_t* ___0_messages, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C4B11432231B409CC0155BF0761D64C927AF826);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C39D1EEC1890B28711700FDEE2AC9BED5AB7172);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// if (messages.Contains("shoot"))
		String_t* L_0 = ___0_messages;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_0, _stringLiteral9C39D1EEC1890B28711700FDEE2AC9BED5AB7172, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		// GameObject newProjectile = (GameObject)Instantiate(projectile, camera.transform.position, camera.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___projectile_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___camera_5;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___camera_5;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_3, L_6, L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_1 = L_10;
		// newProjectile.GetComponent<Rigidbody>().AddForce(camera.transform.forward * shootForce);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_1;
		NullCheck(L_11);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12;
		L_12 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_11, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___camera_5;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_14, NULL);
		float L_16 = __this->___shootForce_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		NullCheck(L_12);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_12, L_17, NULL);
	}

IL_0065:
	{
		// isRecordingText.text = "Press to Record";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_18 = __this->___isRecordingText_9;
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_18, _stringLiteral4C4B11432231B409CC0155BF0761D64C927AF826);
		// }
		return;
	}
}
// System.Void BrainCheck.Shoot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shoot__ctor_m74E1CE51CCC5028561F79B115A8F182A3DC5DB1C (Shoot_t3CC2D92172DB803D47CD0D59107089D3FE9A3E1C* __this, const RuntimeMethod* method) 
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
// UnityEngine.AndroidJavaObject BrainCheck.SpeechRecognitionBridge::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* SpeechRecognitionBridge_get_instance_m905D985AFF7961875660AA672BE0AB6BF31BF4C9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionBridge_t9353BB0EEDD5F6868105118B1AD59B16A01704AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// static AndroidJavaObject instance { get { return _class.GetStatic<AndroidJavaObject>("instance"); } }
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((SpeechRecognitionBridge_t9353BB0EEDD5F6868105118B1AD59B16A01704AA_StaticFields*)il2cpp_codegen_static_fields_for(SpeechRecognitionBridge_t9353BB0EEDD5F6868105118B1AD59B16A01704AA_il2cpp_TypeInfo_var))->____class_0;
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_0, _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		// static AndroidJavaObject instance { get { return _class.GetStatic<AndroidJavaObject>("instance"); } }
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
		return L_2;
	}
}
// System.Void BrainCheck.SpeechRecognitionBridge::SetupPlugin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionBridge_SetupPlugin_m6BE836CBC656FA4B3554DB7EA81584A305158390 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionBridge_t9353BB0EEDD5F6868105118B1AD59B16A01704AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A812218DD198F6444C4E5C736A93564D840EB95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA76407FB3F262D16FA7B54F0E8128D2AA07645E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_class == null) {
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((SpeechRecognitionBridge_t9353BB0EEDD5F6868105118B1AD59B16A01704AA_StaticFields*)il2cpp_codegen_static_fields_for(SpeechRecognitionBridge_t9353BB0EEDD5F6868105118B1AD59B16A01704AA_il2cpp_TypeInfo_var))->____class_0;
		V_0 = (bool)((((RuntimeObject*)(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// _class = new AndroidJavaClass ("mayankgupta.com.textToSpeech.TextToSpeechPlugin");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral7A812218DD198F6444C4E5C736A93564D840EB95, NULL);
		((SpeechRecognitionBridge_t9353BB0EEDD5F6868105118B1AD59B16A01704AA_StaticFields*)il2cpp_codegen_static_fields_for(SpeechRecognitionBridge_t9353BB0EEDD5F6868105118B1AD59B16A01704AA_il2cpp_TypeInfo_var))->____class_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SpeechRecognitionBridge_t9353BB0EEDD5F6868105118B1AD59B16A01704AA_StaticFields*)il2cpp_codegen_static_fields_for(SpeechRecognitionBridge_t9353BB0EEDD5F6868105118B1AD59B16A01704AA_il2cpp_TypeInfo_var))->____class_0), (void*)L_2);
		// _class.CallStatic ("_initiateFragment");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = ((SpeechRecognitionBridge_t9353BB0EEDD5F6868105118B1AD59B16A01704AA_StaticFields*)il2cpp_codegen_static_fields_for(SpeechRecognitionBridge_t9353BB0EEDD5F6868105118B1AD59B16A01704AA_il2cpp_TypeInfo_var))->____class_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_3, _stringLiteralEA76407FB3F262D16FA7B54F0E8128D2AA07645E, L_4, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void BrainCheck.SpeechRecognitionBridge::requestMicPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionBridge_requestMicPermission_m10B6678DF52F29AFF1166CBEC61268B3D861CC7A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C09093DB6E729CAF0D5143CB4D1938AE836A79F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetupPlugin ();
		SpeechRecognitionBridge_SetupPlugin_m6BE836CBC656FA4B3554DB7EA81584A305158390(NULL);
		// instance.Call("requestMicrophonePermission");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = SpeechRecognitionBridge_get_instance_m905D985AFF7961875660AA672BE0AB6BF31BF4C9(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral6C09093DB6E729CAF0D5143CB4D1938AE836A79F, L_1, NULL);
		// }
		return;
	}
}
// System.Void BrainCheck.SpeechRecognitionBridge::checkMicPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionBridge_checkMicPermission_mD5FB4DFB3DBB7F371018B863C473DB6A971F4188 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5E7903FD10E1B05BDB279849336910B6E46365B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetupPlugin ();
		SpeechRecognitionBridge_SetupPlugin_m6BE836CBC656FA4B3554DB7EA81584A305158390(NULL);
		// instance.Call("checkMicrophonePermission");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = SpeechRecognitionBridge_get_instance_m905D985AFF7961875660AA672BE0AB6BF31BF4C9(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralD5E7903FD10E1B05BDB279849336910B6E46365B, L_1, NULL);
		// }
		return;
	}
}
// System.Void BrainCheck.SpeechRecognitionBridge::textToSpeech(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionBridge_textToSpeech_mDB5FDACC7FE6B3DA5C483954FE5CAC0464C0E787 (String_t* ___0_text, int32_t ___1_locale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB598EC5BEC4E57D6F879A4496FDA324A057F29A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetupPlugin ();
		SpeechRecognitionBridge_SetupPlugin_m6BE836CBC656FA4B3554DB7EA81584A305158390(NULL);
		// instance.Call("convertTextToSpeech", text, locale);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = SpeechRecognitionBridge_get_instance_m905D985AFF7961875660AA672BE0AB6BF31BF4C9(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_text;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = ___1_locale;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralB598EC5BEC4E57D6F879A4496FDA324A057F29A7, L_4, NULL);
		// }
		return;
	}
}
// System.Void BrainCheck.SpeechRecognitionBridge::speechToText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionBridge_speechToText_m0267DA2129DC47B1311CBFBFE16B8F9C5865755B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3F2D1AC8E89A3EC10607A394E326973411FA9B4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetupPlugin ();
		SpeechRecognitionBridge_SetupPlugin_m6BE836CBC656FA4B3554DB7EA81584A305158390(NULL);
		// instance.Call("startSpeechToTextConversion");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = SpeechRecognitionBridge_get_instance_m905D985AFF7961875660AA672BE0AB6BF31BF4C9(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralD3F2D1AC8E89A3EC10607A394E326973411FA9B4, L_1, NULL);
		// }
		return;
	}
}
// System.Void BrainCheck.SpeechRecognitionBridge::speechToTextInHidenModeWithBeepSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionBridge_speechToTextInHidenModeWithBeepSound_mCA3F4233D7D17E108E3A93D42F2E5D1EB0763EF6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral123F2B96A8619421874E4CDD3F6F4EFBCBF042E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetupPlugin ();
		SpeechRecognitionBridge_SetupPlugin_m6BE836CBC656FA4B3554DB7EA81584A305158390(NULL);
		// instance.Call("startHiddenSpeechToTextConversion");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = SpeechRecognitionBridge_get_instance_m905D985AFF7961875660AA672BE0AB6BF31BF4C9(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral123F2B96A8619421874E4CDD3F6F4EFBCBF042E7, L_1, NULL);
		// }
		return;
	}
}
// System.Void BrainCheck.SpeechRecognitionBridge::speechToTextInSilentMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionBridge_speechToTextInSilentMode_m6562E9C6DA179AD5DF4614EF7D064DD03AACAECC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral006B26AA05DE1CC3440139132AA91BFDBA29E445);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetupPlugin ();
		SpeechRecognitionBridge_SetupPlugin_m6BE836CBC656FA4B3554DB7EA81584A305158390(NULL);
		// instance.Call("startSilentSpeechToTextConversion");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = SpeechRecognitionBridge_get_instance_m905D985AFF7961875660AA672BE0AB6BF31BF4C9(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral006B26AA05DE1CC3440139132AA91BFDBA29E445, L_1, NULL);
		// }
		return;
	}
}
// System.Void BrainCheck.SpeechRecognitionBridge::unmuteSpeakers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionBridge_unmuteSpeakers_m90639D8E6C68B55B3E59486A5AF0E8E5BB976671 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C65F42CF5BC97D8117AB25352417D8D45D03590);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetupPlugin ();
		SpeechRecognitionBridge_SetupPlugin_m6BE836CBC656FA4B3554DB7EA81584A305158390(NULL);
		// instance.Call("unMuteAudioManager");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = SpeechRecognitionBridge_get_instance_m905D985AFF7961875660AA672BE0AB6BF31BF4C9(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral5C65F42CF5BC97D8117AB25352417D8D45D03590, L_1, NULL);
		// }
		return;
	}
}
// System.Void BrainCheck.SpeechRecognitionBridge::setUnityGameObjectNameAndMethodName(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionBridge_setUnityGameObjectNameAndMethodName_m31A6B69251174F4478EB24A39E5A54735BD9E920 (String_t* ___0_gameObjectName, String_t* ___1_statusMethodName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB45CC07579919A531F49F70E9C189A0CA9F35C15);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetupPlugin ();
		SpeechRecognitionBridge_SetupPlugin_m6BE836CBC656FA4B3554DB7EA81584A305158390(NULL);
		// Debug.Log(statusMethodName);
		String_t* L_0 = ___1_statusMethodName;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// instance.Call("_setUnityGameObjectNameAndMethodName", gameObjectName, statusMethodName);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = SpeechRecognitionBridge_get_instance_m905D985AFF7961875660AA672BE0AB6BF31BF4C9(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___0_gameObjectName;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___1_statusMethodName;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteralB45CC07579919A531F49F70E9C189A0CA9F35C15, L_5, NULL);
		// }
		return;
	}
}
// System.Void BrainCheck.SpeechRecognitionBridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionBridge__ctor_m9E03D917E1DF785BBAFAA04BEC03938F35AD856D (SpeechRecognitionBridge_t9353BB0EEDD5F6868105118B1AD59B16A01704AA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void BrainCheck.DemoScript::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_OnMouseUp_m64BF524B2874C5B3CF23B7F880028209CDF03580 (DemoScript_tDE267076E50A62A756A6D69BED2F52DB10AB4347* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(BtnAnimation());
		RuntimeObject* L_0;
		L_0 = DemoScript_BtnAnimation_m210FAAE73FFCB4112A3FBC5B4191A5462E5DDD02(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator BrainCheck.DemoScript::BtnAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DemoScript_BtnAnimation_m210FAAE73FFCB4112A3FBC5B4191A5462E5DDD02 (DemoScript_tDE267076E50A62A756A6D69BED2F52DB10AB4347* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBtnAnimationU3Ed__5_t2D095EBC7674F843353B05D3FD46D6FB02AEFAC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBtnAnimationU3Ed__5_t2D095EBC7674F843353B05D3FD46D6FB02AEFAC9* L_0 = (U3CBtnAnimationU3Ed__5_t2D095EBC7674F843353B05D3FD46D6FB02AEFAC9*)il2cpp_codegen_object_new(U3CBtnAnimationU3Ed__5_t2D095EBC7674F843353B05D3FD46D6FB02AEFAC9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CBtnAnimationU3Ed__5__ctor_m30F1AD5AC05AC18755869B75848F91C2607BFFAB(L_0, 0, NULL);
		U3CBtnAnimationU3Ed__5_t2D095EBC7674F843353B05D3FD46D6FB02AEFAC9* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void BrainCheck.DemoScript::ButtonAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_ButtonAction_m91CFD920C6700ADEA9FC265837F94426D7ACD675 (DemoScript_tDE267076E50A62A756A6D69BED2F52DB10AB4347* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// BrainCheck.SpeechRecognitionBridge.setUnityGameObjectNameAndMethodName(gameObjectName, statusMethodName);
		String_t* L_0 = __this->___gameObjectName_6;
		String_t* L_1 = __this->___statusMethodName_7;
		SpeechRecognitionBridge_setUnityGameObjectNameAndMethodName_m31A6B69251174F4478EB24A39E5A54735BD9E920(L_0, L_1, NULL);
		// switch(myOption)
		int32_t L_2 = __this->___myOption_4;
		V_1 = L_2;
		int32_t L_3 = V_1;
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_005c;
			}
			case 1:
			{
				goto IL_006b;
			}
			case 2:
			{
				goto IL_0054;
			}
			case 3:
			{
				goto IL_0073;
			}
			case 4:
			{
				goto IL_007b;
			}
			case 5:
			{
				goto IL_004c;
			}
			case 6:
			{
				goto IL_0044;
			}
			case 7:
			{
				goto IL_0083;
			}
		}
	}
	{
		goto IL_008b;
	}

IL_0044:
	{
		// BrainCheck.SpeechRecognitionBridge.requestMicPermission();
		SpeechRecognitionBridge_requestMicPermission_m10B6678DF52F29AFF1166CBEC61268B3D861CC7A(NULL);
		// break;
		goto IL_008b;
	}

IL_004c:
	{
		// BrainCheck.SpeechRecognitionBridge.checkMicPermission();
		SpeechRecognitionBridge_checkMicPermission_mD5FB4DFB3DBB7F371018B863C473DB6A971F4188(NULL);
		// break;
		goto IL_008b;
	}

IL_0054:
	{
		// BrainCheck.SpeechRecognitionBridge.SetupPlugin();
		SpeechRecognitionBridge_SetupPlugin_m6BE836CBC656FA4B3554DB7EA81584A305158390(NULL);
		// break;
		goto IL_008b;
	}

IL_005c:
	{
		// BrainCheck.SpeechRecognitionBridge.textToSpeech(textToConvet, 0);  // 0 is for default locale.
		String_t* L_5 = __this->___textToConvet_5;
		SpeechRecognitionBridge_textToSpeech_mDB5FDACC7FE6B3DA5C483954FE5CAC0464C0E787(L_5, 0, NULL);
		// break;
		goto IL_008b;
	}

IL_006b:
	{
		// BrainCheck.SpeechRecognitionBridge.speechToText();
		SpeechRecognitionBridge_speechToText_m0267DA2129DC47B1311CBFBFE16B8F9C5865755B(NULL);
		// break;
		goto IL_008b;
	}

IL_0073:
	{
		// BrainCheck.SpeechRecognitionBridge.speechToTextInSilentMode();
		SpeechRecognitionBridge_speechToTextInSilentMode_m6562E9C6DA179AD5DF4614EF7D064DD03AACAECC(NULL);
		// break;
		goto IL_008b;
	}

IL_007b:
	{
		// BrainCheck.SpeechRecognitionBridge.unmuteSpeakers();
		SpeechRecognitionBridge_unmuteSpeakers_m90639D8E6C68B55B3E59486A5AF0E8E5BB976671(NULL);
		// break;
		goto IL_008b;
	}

IL_0083:
	{
		// BrainCheck.SpeechRecognitionBridge.speechToTextInHidenModeWithBeepSound();
		SpeechRecognitionBridge_speechToTextInHidenModeWithBeepSound_mCA3F4233D7D17E108E3A93D42F2E5D1EB0763EF6(NULL);
		// break;
		goto IL_008b;
	}

IL_008b:
	{
		// }
		return;
	}
}
// System.Void BrainCheck.DemoScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript__ctor_mD55A4FF3F5F8F0CCD815646878311A55EF79780D (DemoScript_tDE267076E50A62A756A6D69BED2F52DB10AB4347* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAF1410B1606478212F2C2069C82F9C5E43E792B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAEA1DCD00925D1EF90FD44C2A6CC7F0EFDEFB7E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string gameObjectName = "UnityReceiveMessage";
		__this->___gameObjectName_6 = _stringLiteralAAF1410B1606478212F2C2069C82F9C5E43E792B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameObjectName_6), (void*)_stringLiteralAAF1410B1606478212F2C2069C82F9C5E43E792B);
		// string statusMethodName = "CallbackMethod";
		__this->___statusMethodName_7 = _stringLiteralBAEA1DCD00925D1EF90FD44C2A6CC7F0EFDEFB7E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___statusMethodName_7), (void*)_stringLiteralBAEA1DCD00925D1EF90FD44C2A6CC7F0EFDEFB7E);
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
// System.Void BrainCheck.DemoScript/<BtnAnimation>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBtnAnimationU3Ed__5__ctor_m30F1AD5AC05AC18755869B75848F91C2607BFFAB (U3CBtnAnimationU3Ed__5_t2D095EBC7674F843353B05D3FD46D6FB02AEFAC9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BrainCheck.DemoScript/<BtnAnimation>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBtnAnimationU3Ed__5_System_IDisposable_Dispose_mCE1CE4E123AF14F095330A99358A90223B5DE73E (U3CBtnAnimationU3Ed__5_t2D095EBC7674F843353B05D3FD46D6FB02AEFAC9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BrainCheck.DemoScript/<BtnAnimation>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBtnAnimationU3Ed__5_MoveNext_mD53D80CCDDDE091FB6E3BD0AE9E3AFD3E8922566 (U3CBtnAnimationU3Ed__5_t2D095EBC7674F843353B05D3FD46D6FB02AEFAC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0089;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Vector3 originalScale = gameObject.transform.localScale;
		DemoScript_tDE267076E50A62A756A6D69BED2F52DB10AB4347* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		__this->___U3CoriginalScaleU3E5__1_3 = L_6;
		// gameObject.transform.localScale = 0.9f * gameObject.transform.localScale;
		DemoScript_tDE267076E50A62A756A6D69BED2F52DB10AB4347* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		DemoScript_tDE267076E50A62A756A6D69BED2F52DB10AB4347* L_10 = __this->___U3CU3E4__this_2;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((0.899999976f), L_13, NULL);
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_14, NULL);
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_15 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_15, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0089:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gameObject.transform.localScale = originalScale;
		DemoScript_tDE267076E50A62A756A6D69BED2F52DB10AB4347* L_16 = __this->___U3CU3E4__this_2;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->___U3CoriginalScaleU3E5__1_3;
		NullCheck(L_18);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_18, L_19, NULL);
		// ButtonAction();
		DemoScript_tDE267076E50A62A756A6D69BED2F52DB10AB4347* L_20 = __this->___U3CU3E4__this_2;
		NullCheck(L_20);
		DemoScript_ButtonAction_m91CFD920C6700ADEA9FC265837F94426D7ACD675(L_20, NULL);
		// }
		return (bool)0;
	}
}
// System.Object BrainCheck.DemoScript/<BtnAnimation>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBtnAnimationU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m402CF565F207D6EE3489B1BD960E27DAF0E42DCE (U3CBtnAnimationU3Ed__5_t2D095EBC7674F843353B05D3FD46D6FB02AEFAC9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BrainCheck.DemoScript/<BtnAnimation>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBtnAnimationU3Ed__5_System_Collections_IEnumerator_Reset_mB448A77ED63182069D80F1F18133FB1E30DA7D3C (U3CBtnAnimationU3Ed__5_t2D095EBC7674F843353B05D3FD46D6FB02AEFAC9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBtnAnimationU3Ed__5_System_Collections_IEnumerator_Reset_mB448A77ED63182069D80F1F18133FB1E30DA7D3C_RuntimeMethod_var)));
	}
}
// System.Object BrainCheck.DemoScript/<BtnAnimation>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBtnAnimationU3Ed__5_System_Collections_IEnumerator_get_Current_mC3C44AC2CE6C76E8B2FACD906A84391E34ECA396 (U3CBtnAnimationU3Ed__5_t2D095EBC7674F843353B05D3FD46D6FB02AEFAC9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void BrainCheck.UnityReceiveMessages::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityReceiveMessages_Awake_m636ABFD692B6BA6ED00DD78BED4F76ED8849C8D1 (UnityReceiveMessages_tB9D3ED6E7AF4BA5DC730AE75CD638E4336F88016* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityReceiveMessages_tB9D3ED6E7AF4BA5DC730AE75CD638E4336F88016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((UnityReceiveMessages_tB9D3ED6E7AF4BA5DC730AE75CD638E4336F88016_StaticFields*)il2cpp_codegen_static_fields_for(UnityReceiveMessages_tB9D3ED6E7AF4BA5DC730AE75CD638E4336F88016_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityReceiveMessages_tB9D3ED6E7AF4BA5DC730AE75CD638E4336F88016_StaticFields*)il2cpp_codegen_static_fields_for(UnityReceiveMessages_tB9D3ED6E7AF4BA5DC730AE75CD638E4336F88016_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void BrainCheck.UnityReceiveMessages::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityReceiveMessages_Start_mC542CF8BE621ECA6E3B1C338796E6E10A077E546 (UnityReceiveMessages_tB9D3ED6E7AF4BA5DC730AE75CD638E4336F88016* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BrainCheck.UnityReceiveMessages::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityReceiveMessages_Update_mDA94E51BFB0826ACAB92AE3EF49429863C475870 (UnityReceiveMessages_tB9D3ED6E7AF4BA5DC730AE75CD638E4336F88016* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BrainCheck.UnityReceiveMessages::CallbackMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityReceiveMessages_CallbackMethod_m5E22E1681A5D4143D6ACEF7B7919EB69D99FB434 (UnityReceiveMessages_tB9D3ED6E7AF4BA5DC730AE75CD638E4336F88016* __this, String_t* ___0_messages, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF0828672C366AA7C3AA93168568619BCBA55FE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (messages.Equals("SpeechRecognitionFinished")) {
		String_t* L_0 = ___0_messages;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_0, _stringLiteralCF0828672C366AA7C3AA93168568619BCBA55FE7, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// tMesh1.text = messages;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_3 = __this->___tMesh1_6;
		String_t* L_4 = ___0_messages;
		NullCheck(L_3);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_3, L_4, NULL);
		goto IL_0041;
	}

IL_0021:
	{
		// tMesh.text = messages;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_5 = __this->___tMesh_5;
		String_t* L_6 = ___0_messages;
		NullCheck(L_5);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_5, L_6, NULL);
		// tMesh1.text = "";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_7 = __this->___tMesh1_6;
		NullCheck(L_7);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void BrainCheck.UnityReceiveMessages::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityReceiveMessages__ctor_m187D645E1D37830CDA1D20D69978CACA37D031DF (UnityReceiveMessages_tB9D3ED6E7AF4BA5DC730AE75CD638E4336F88016* __this, const RuntimeMethod* method) 
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
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::GetPerpendicularVector(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_GetPerpendicularVector_m6E14CE8B174161B94706CE092FF3BE4049C53983 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_directionNormalized, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_side, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	bool V_10 = false;
	bool V_11 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t G_B5_0 = 0;
	{
		// if (directionNormalized == Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_directionNormalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_3;
		L_3 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// side = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___1_side;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_5 = L_6;
		goto IL_00f5;
	}

IL_0027:
	{
		// float x = directionNormalized.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_directionNormalized;
		float L_8 = L_7->___x_2;
		V_1 = L_8;
		// float y = directionNormalized.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = ___0_directionNormalized;
		float L_10 = L_9->___y_3;
		V_2 = L_10;
		// float z = directionNormalized.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = ___0_directionNormalized;
		float L_12 = L_11->___z_4;
		V_3 = L_12;
		// float ax = Mathf.Abs(x), ay = Mathf.Abs(y), az = Mathf.Abs(z);
		float L_13 = V_1;
		float L_14;
		L_14 = fabsf(L_13);
		V_7 = L_14;
		// float ax = Mathf.Abs(x), ay = Mathf.Abs(y), az = Mathf.Abs(z);
		float L_15 = V_2;
		float L_16;
		L_16 = fabsf(L_15);
		V_8 = L_16;
		// float ax = Mathf.Abs(x), ay = Mathf.Abs(y), az = Mathf.Abs(z);
		float L_17 = V_3;
		float L_18;
		L_18 = fabsf(L_17);
		V_9 = L_18;
		// if (ax >= ay && ay >= az)
		float L_19 = V_7;
		float L_20 = V_8;
		if ((!(((float)L_19) >= ((float)L_20))))
		{
			goto IL_0066;
		}
	}
	{
		float L_21 = V_8;
		float L_22 = V_9;
		G_B5_0 = ((((int32_t)((!(((float)L_21) >= ((float)L_22)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_10 = (bool)G_B5_0;
		bool L_23 = V_10;
		if (!L_23)
		{
			goto IL_008d;
		}
	}
	{
		// py = 1.0f;
		V_5 = (1.0f);
		// pz = 1.0f;
		V_6 = (1.0f);
		// px = -(y * py + z * pz) / x;
		float L_24 = V_2;
		float L_25 = V_5;
		float L_26 = V_3;
		float L_27 = V_6;
		float L_28 = V_1;
		V_4 = ((float)(((-((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_24, L_25)), ((float)il2cpp_codegen_multiply(L_26, L_27))))))/L_28));
		goto IL_00da;
	}

IL_008d:
	{
		// else if (ay >= az)
		float L_29 = V_8;
		float L_30 = V_9;
		V_11 = (bool)((((int32_t)((!(((float)L_29) >= ((float)L_30)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_11;
		if (!L_31)
		{
			goto IL_00bc;
		}
	}
	{
		// px = 1.0f;
		V_4 = (1.0f);
		// pz = 1.0f;
		V_6 = (1.0f);
		// py = -(x * px + z * pz) / y;
		float L_32 = V_1;
		float L_33 = V_4;
		float L_34 = V_3;
		float L_35 = V_6;
		float L_36 = V_2;
		V_5 = ((float)(((-((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_32, L_33)), ((float)il2cpp_codegen_multiply(L_34, L_35))))))/L_36));
		goto IL_00da;
	}

IL_00bc:
	{
		// px = 1.0f;
		V_4 = (1.0f);
		// py = 1.0f;
		V_5 = (1.0f);
		// pz = -(x * px + y * py) / z;
		float L_37 = V_1;
		float L_38 = V_4;
		float L_39 = V_2;
		float L_40 = V_5;
		float L_41 = V_3;
		V_6 = ((float)(((-((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_37, L_38)), ((float)il2cpp_codegen_multiply(L_39, L_40))))))/L_41));
	}

IL_00da:
	{
		// side = new Vector3(px, py, pz).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_42 = ___1_side;
		float L_43 = V_4;
		float L_44 = V_5;
		float L_45 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_46), L_43, L_44, L_45, /*hidden argument*/NULL);
		V_12 = L_46;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_12), NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_42 = L_47;
	}

IL_00f5:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::GenerateLightningBolt(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_GenerateLightningBolt_m6F45F784BE0610F9E9B519C5E290D3515DE0BA49 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, int32_t ___2_generation, int32_t ___3_totalGenerations, float ___4_offsetAmount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B3_0 = 0;
	{
		// if (generation < 0 || generation > 8)
		int32_t L_0 = ___2_generation;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___2_generation;
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)8))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		goto IL_0178;
	}

IL_0016:
	{
		// else if (orthographic)
		bool L_3 = __this->___orthographic_24;
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		// start.z = end.z = Mathf.Min(start.z, end.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_start;
		float L_6 = L_5.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___1_end;
		float L_8 = L_7.___z_4;
		float L_9;
		L_9 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_6, L_8, NULL);
		float L_10 = L_9;
		V_3 = L_10;
		(&___1_end)->___z_4 = L_10;
		float L_11 = V_3;
		(&___0_start)->___z_4 = L_11;
	}

IL_0044:
	{
		// segments.Add(new KeyValuePair<Vector3, Vector3>(start, end));
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_12 = __this->___segments_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_end;
		KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 L_15;
		memset((&L_15), 0, sizeof(L_15));
		KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60((&L_15), L_13, L_14, /*hidden argument*/KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60_RuntimeMethod_var);
		NullCheck(L_12);
		List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_inline(L_12, L_15, List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_RuntimeMethod_var);
		// if (generation == 0)
		int32_t L_16 = ___2_generation;
		V_4 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0067;
		}
	}
	{
		// return;
		goto IL_0178;
	}

IL_0067:
	{
		// if (offsetAmount <= 0.0f)
		float L_18 = ___4_offsetAmount;
		V_5 = (bool)((((int32_t)((!(((float)L_18) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_0094;
		}
	}
	{
		// offsetAmount = (end - start).magnitude * ChaosFactor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___1_end;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_20, L_21, NULL);
		V_6 = L_22;
		float L_23;
		L_23 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_6), NULL);
		float L_24 = __this->___ChaosFactor_11;
		___4_offsetAmount = ((float)il2cpp_codegen_multiply(L_23, L_24));
	}

IL_0094:
	{
		goto IL_0166;
	}

IL_0099:
	{
		// int previousStartIndex = startIndex;
		int32_t L_25 = __this->___startIndex_19;
		V_7 = L_25;
		// startIndex = segments.Count;
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_26 = __this->___segments_18;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_inline(L_26, List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_RuntimeMethod_var);
		__this->___startIndex_19 = L_27;
		// for (int i = previousStartIndex; i < startIndex; i++)
		int32_t L_28 = V_7;
		V_8 = L_28;
		goto IL_0148;
	}

IL_00bc:
	{
		// start = segments[i].Key;
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_29 = __this->___segments_18;
		int32_t L_30 = V_8;
		NullCheck(L_29);
		KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 L_31;
		L_31 = List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C(L_29, L_30, List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C_RuntimeMethod_var);
		V_10 = L_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_inline((&V_10), KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_RuntimeMethod_var);
		___0_start = L_32;
		// end = segments[i].Value;
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_33 = __this->___segments_18;
		int32_t L_34 = V_8;
		NullCheck(L_33);
		KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 L_35;
		L_35 = List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C(L_33, L_34, List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C_RuntimeMethod_var);
		V_10 = L_35;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_inline((&V_10), KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_RuntimeMethod_var);
		___1_end = L_36;
		// Vector3 midPoint = (start + end) * 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = ___1_end;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_37, L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_39, (0.5f), NULL);
		V_9 = L_40;
		// RandomVector(ref start, ref end, offsetAmount, out randomVector);
		float L_41 = ___4_offsetAmount;
		LightningBoltScript_RandomVector_m8D5CB399D3CE0038571D41DE824CE673E766B4FA(__this, (&___0_start), (&___1_end), L_41, (&V_0), NULL);
		// midPoint += randomVector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_42, L_43, NULL);
		V_9 = L_44;
		// segments.Add(new KeyValuePair<Vector3, Vector3>(start, midPoint));
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_45 = __this->___segments_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_9;
		KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 L_48;
		memset((&L_48), 0, sizeof(L_48));
		KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60((&L_48), L_46, L_47, /*hidden argument*/KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60_RuntimeMethod_var);
		NullCheck(L_45);
		List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_inline(L_45, L_48, List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_RuntimeMethod_var);
		// segments.Add(new KeyValuePair<Vector3, Vector3>(midPoint, end));
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_49 = __this->___segments_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = ___1_end;
		KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 L_52;
		memset((&L_52), 0, sizeof(L_52));
		KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60((&L_52), L_50, L_51, /*hidden argument*/KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60_RuntimeMethod_var);
		NullCheck(L_49);
		List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_inline(L_49, L_52, List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_RuntimeMethod_var);
		// for (int i = previousStartIndex; i < startIndex; i++)
		int32_t L_53 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_0148:
	{
		// for (int i = previousStartIndex; i < startIndex; i++)
		int32_t L_54 = V_8;
		int32_t L_55 = __this->___startIndex_19;
		V_11 = (bool)((((int32_t)L_54) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_11;
		if (L_56)
		{
			goto IL_00bc;
		}
	}
	{
		// offsetAmount *= 0.5f;
		float L_57 = ___4_offsetAmount;
		___4_offsetAmount = ((float)il2cpp_codegen_multiply(L_57, (0.5f)));
	}

IL_0166:
	{
		// while (generation-- > 0)
		int32_t L_58 = ___2_generation;
		int32_t L_59 = L_58;
		___2_generation = ((int32_t)il2cpp_codegen_subtract(L_59, 1));
		V_12 = (bool)((((int32_t)L_59) > ((int32_t)0))? 1 : 0);
		bool L_60 = V_12;
		if (L_60)
		{
			goto IL_0099;
		}
	}

IL_0178:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::RandomVector(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_RandomVector_m8D5CB399D3CE0038571D41DE824CE673E766B4FA (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_end, float ___2_offsetAmount, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_result, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	{
		// if (orthographic)
		bool L_0 = __this->___orthographic_24;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0069;
		}
	}
	{
		// Vector3 directionNormalized = (end - start).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___1_end;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_5, NULL);
		V_4 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		V_1 = L_7;
		// Vector3 side = new Vector3(-directionNormalized.y, directionNormalized.x, directionNormalized.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_1;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		float L_13 = L_12.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), ((-L_9)), L_11, L_13, NULL);
		// float distance = ((float)RandomGenerator.NextDouble() * offsetAmount * 2.0f) - offsetAmount;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_14 = __this->___RandomGenerator_16;
		NullCheck(L_14);
		double L_15;
		L_15 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_14);
		float L_16 = ___2_offsetAmount;
		float L_17 = ___2_offsetAmount;
		V_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_15), L_16)), (2.0f))), L_17));
		// result = side * distance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = ___3_result;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
		float L_20 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_18 = L_21;
		goto IL_00da;
	}

IL_0069:
	{
		// Vector3 directionNormalized = (end - start).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_22 = ___1_end;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_23, L_25, NULL);
		V_4 = L_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		V_5 = L_27;
		// GetPerpendicularVector(ref directionNormalized, out side);
		LightningBoltScript_GetPerpendicularVector_m6E14CE8B174161B94706CE092FF3BE4049C53983(__this, (&V_5), (&V_6), NULL);
		// float distance = (((float)RandomGenerator.NextDouble() + 0.1f) * offsetAmount);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_28 = __this->___RandomGenerator_16;
		NullCheck(L_28);
		double L_29;
		L_29 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_28);
		float L_30 = ___2_offsetAmount;
		V_7 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)L_29), (0.100000001f))), L_30));
		// float rotationAngle = ((float)RandomGenerator.NextDouble() * 360.0f);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_31 = __this->___RandomGenerator_16;
		NullCheck(L_31);
		double L_32;
		L_32 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_31);
		V_8 = ((float)il2cpp_codegen_multiply(((float)L_32), (360.0f)));
		// result = Quaternion.AngleAxis(rotationAngle, directionNormalized) * side * distance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_33 = ___3_result;
		float L_34 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_34, L_35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_36, L_37, NULL);
		float L_39 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_38, L_39, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_33 = L_40;
	}

IL_00da:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::SelectOffsetFromAnimationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_SelectOffsetFromAnimationMode_m98F0C804C05EFB6BC3283AC50D654D5A672B6199 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B16_0 = 0;
	{
		// if (AnimationMode == LightningBoltAnimationMode.None)
		int32_t L_0 = __this->___AnimationMode_15;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		// lineRenderer.material.mainTextureOffset = offsets[0];
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = __this->___lineRenderer_17;
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_2, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = __this->___offsets_21;
		NullCheck(L_4);
		int32_t L_5 = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_3);
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_3, L_6, NULL);
		// return;
		goto IL_0166;
	}

IL_0031:
	{
		// else if (AnimationMode == LightningBoltAnimationMode.PingPong)
		int32_t L_7 = __this->___AnimationMode_15;
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)3))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_00ad;
		}
	}
	{
		// index = animationOffsetIndex;
		int32_t L_9 = __this->___animationOffsetIndex_22;
		V_0 = L_9;
		// animationOffsetIndex += animationPingPongDirection;
		int32_t L_10 = __this->___animationOffsetIndex_22;
		int32_t L_11 = __this->___animationPingPongDirection_23;
		__this->___animationOffsetIndex_22 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		// if (animationOffsetIndex >= offsets.Length)
		int32_t L_12 = __this->___animationOffsetIndex_22;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_13 = __this->___offsets_21;
		NullCheck(L_13);
		V_3 = (bool)((((int32_t)((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_008b;
		}
	}
	{
		// animationOffsetIndex = offsets.Length - 2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_15 = __this->___offsets_21;
		NullCheck(L_15);
		__this->___animationOffsetIndex_22 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), 2));
		// animationPingPongDirection = -1;
		__this->___animationPingPongDirection_23 = (-1);
		goto IL_00aa;
	}

IL_008b:
	{
		// else if (animationOffsetIndex < 0)
		int32_t L_16 = __this->___animationOffsetIndex_22;
		V_4 = (bool)((((int32_t)L_16) < ((int32_t)0))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_00aa;
		}
	}
	{
		// animationOffsetIndex = 1;
		__this->___animationOffsetIndex_22 = 1;
		// animationPingPongDirection = 1;
		__this->___animationPingPongDirection_23 = 1;
	}

IL_00aa:
	{
		goto IL_010e;
	}

IL_00ad:
	{
		// else if (AnimationMode == LightningBoltAnimationMode.Loop)
		int32_t L_18 = __this->___AnimationMode_15;
		V_5 = (bool)((((int32_t)L_18) == ((int32_t)2))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_00f7;
		}
	}
	{
		// index = animationOffsetIndex++;
		int32_t L_20 = __this->___animationOffsetIndex_22;
		V_6 = L_20;
		int32_t L_21 = V_6;
		__this->___animationOffsetIndex_22 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		int32_t L_22 = V_6;
		V_0 = L_22;
		// if (animationOffsetIndex >= offsets.Length)
		int32_t L_23 = __this->___animationOffsetIndex_22;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_24 = __this->___offsets_21;
		NullCheck(L_24);
		V_7 = (bool)((((int32_t)((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00f4;
		}
	}
	{
		// animationOffsetIndex = 0;
		__this->___animationOffsetIndex_22 = 0;
	}

IL_00f4:
	{
		goto IL_010e;
	}

IL_00f7:
	{
		// index = RandomGenerator.Next(0, offsets.Length);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_26 = __this->___RandomGenerator_16;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_27 = __this->___offsets_21;
		NullCheck(L_27);
		NullCheck(L_26);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_26, 0, ((int32_t)(((RuntimeArray*)L_27)->max_length)));
		V_0 = L_28;
	}

IL_010e:
	{
		// if (index >= 0 && index < offsets.Length)
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_011f;
		}
	}
	{
		int32_t L_30 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_31 = __this->___offsets_21;
		NullCheck(L_31);
		G_B16_0 = ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))? 1 : 0);
		goto IL_0120;
	}

IL_011f:
	{
		G_B16_0 = 0;
	}

IL_0120:
	{
		V_8 = (bool)G_B16_0;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0147;
		}
	}
	{
		// lineRenderer.material.mainTextureOffset = offsets[index];
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_33 = __this->___lineRenderer_17;
		NullCheck(L_33);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34;
		L_34 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_33, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_35 = __this->___offsets_21;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_34);
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_34, L_38, NULL);
		goto IL_0166;
	}

IL_0147:
	{
		// lineRenderer.material.mainTextureOffset = offsets[0];
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_39 = __this->___lineRenderer_17;
		NullCheck(L_39);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40;
		L_40 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_39, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_41 = __this->___offsets_21;
		NullCheck(L_41);
		int32_t L_42 = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_40);
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_40, L_43, NULL);
	}

IL_0166:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::UpdateLineRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_UpdateLineRenderer_mC709724D71E0E95242108C4B9D6F7DA6BAB71F65 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF8CCA57B4BFDC96ED00E7FA3A999859EDECF661A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		// int segmentCount = (segments.Count - startIndex) + 1;
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_0 = __this->___segments_18;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_inline(L_0, List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_RuntimeMethod_var);
		int32_t L_2 = __this->___startIndex_19;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_1, L_2)), 1));
		// lineRenderer.positionCount = segmentCount;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = __this->___lineRenderer_17;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_3, L_4, NULL);
		// if (segmentCount < 1)
		int32_t L_5 = V_0;
		V_2 = (bool)((((int32_t)L_5) < ((int32_t)1))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// return;
		goto IL_00bd;
	}

IL_0031:
	{
		// int index = 0;
		V_1 = 0;
		// lineRenderer.SetPosition(index++, segments[startIndex].Key);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_7 = __this->___lineRenderer_17;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_10 = __this->___segments_18;
		int32_t L_11 = __this->___startIndex_19;
		NullCheck(L_10);
		KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 L_12;
		L_12 = List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C(L_10, L_11, List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C_RuntimeMethod_var);
		V_3 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_inline((&V_3), KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_RuntimeMethod_var);
		NullCheck(L_7);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_7, L_9, L_13, NULL);
		// for (int i = startIndex; i < segments.Count; i++)
		int32_t L_14 = __this->___startIndex_19;
		V_4 = L_14;
		goto IL_0095;
	}

IL_0067:
	{
		// lineRenderer.SetPosition(index++, segments[i].Value);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_15 = __this->___lineRenderer_17;
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_18 = __this->___segments_18;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 L_20;
		L_20 = List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C(L_18, L_19, List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C_RuntimeMethod_var);
		V_3 = L_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_inline((&V_3), KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_RuntimeMethod_var);
		NullCheck(L_15);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_15, L_17, L_21, NULL);
		// for (int i = startIndex; i < segments.Count; i++)
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0095:
	{
		// for (int i = startIndex; i < segments.Count; i++)
		int32_t L_23 = V_4;
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_24 = __this->___segments_18;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_inline(L_24, List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_23) < ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_5;
		if (L_26)
		{
			goto IL_0067;
		}
	}
	{
		// segments.Clear();
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_27 = __this->___segments_18;
		NullCheck(L_27);
		List_1_Clear_mF8CCA57B4BFDC96ED00E7FA3A999859EDECF661A_inline(L_27, List_1_Clear_mF8CCA57B4BFDC96ED00E7FA3A999859EDECF661A_RuntimeMethod_var);
		// SelectOffsetFromAnimationMode();
		LightningBoltScript_SelectOffsetFromAnimationMode_m98F0C804C05EFB6BC3283AC50D654D5A672B6199(__this, NULL);
	}

IL_00bd:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_Start_m980C378E5754957B1F4DE221515969B6A328240E (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* G_B2_0 = NULL;
	LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* G_B3_1 = NULL;
	{
		// orthographic = (Camera.main != null && Camera.main.orthographic);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_001b;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F(L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		NullCheck(G_B3_1);
		G_B3_1->___orthographic_24 = (bool)G_B3_0;
		// lineRenderer = GetComponent<LineRenderer>();
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_4;
		L_4 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(__this, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		__this->___lineRenderer_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lineRenderer_17), (void*)L_4);
		// lineRenderer.positionCount = 0;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_5 = __this->___lineRenderer_17;
		NullCheck(L_5);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_5, 0, NULL);
		// UpdateFromMaterialChange();
		LightningBoltScript_UpdateFromMaterialChange_m977EBCF7F3B1B47A777F34B0305C7FC8A04E1EF5(__this, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_Update_m0BE2BF4FB4CD027E8C78FE58991FFF103836AF31 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* G_B2_0 = NULL;
	LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* G_B3_1 = NULL;
	{
		// orthographic = (Camera.main != null && Camera.main.orthographic);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_001b;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F(L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		NullCheck(G_B3_1);
		G_B3_1->___orthographic_24 = (bool)G_B3_0;
		// if (timer <= 0.0f)
		float L_4 = __this->___timer_10;
		V_0 = (bool)((((int32_t)((!(((float)L_4) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0067;
		}
	}
	{
		// if (ManualMode)
		bool L_6 = __this->___ManualMode_12;
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_005d;
		}
	}
	{
		// timer = Duration;
		float L_8 = __this->___Duration_9;
		__this->___timer_10 = L_8;
		// lineRenderer.positionCount = 0;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_9 = __this->___lineRenderer_17;
		NullCheck(L_9);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_9, 0, NULL);
		goto IL_0066;
	}

IL_005d:
	{
		// Trigger();
		LightningBoltScript_Trigger_mA1EDB81D4D9001D2B19FFBACB0A36BAFEE96C284(__this, NULL);
	}

IL_0066:
	{
	}

IL_0067:
	{
		// timer -= Time.deltaTime;
		float L_10 = __this->___timer_10;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_10 = ((float)il2cpp_codegen_subtract(L_10, L_11));
		// }
		return;
	}
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::Trigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_Trigger_mA1EDB81D4D9001D2B19FFBACB0A36BAFEE96C284 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	{
		// timer = Duration + Mathf.Min(0.0f, timer);
		float L_0 = __this->___Duration_9;
		float L_1 = __this->___timer_10;
		float L_2;
		L_2 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline((0.0f), L_1, NULL);
		__this->___timer_10 = ((float)il2cpp_codegen_add(L_0, L_2));
		// if (StartObject == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___StartObject_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// start = StartPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___StartPosition_5;
		V_0 = L_6;
		goto IL_0057;
	}

IL_0039:
	{
		// start = StartObject.transform.position + StartPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___StartObject_4;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___StartPosition_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_10, NULL);
		V_0 = L_11;
	}

IL_0057:
	{
		// if (EndObject == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___EndObject_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0072;
		}
	}
	{
		// end = EndPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___EndPosition_7;
		V_1 = L_15;
		goto IL_0090;
	}

IL_0072:
	{
		// end = EndObject.transform.position + EndPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___EndObject_6;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->___EndPosition_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_19, NULL);
		V_1 = L_20;
	}

IL_0090:
	{
		// startIndex = 0;
		__this->___startIndex_19 = 0;
		// GenerateLightningBolt(start, end, Generations, Generations, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		int32_t L_23 = __this->___Generations_8;
		int32_t L_24 = __this->___Generations_8;
		LightningBoltScript_GenerateLightningBolt_m6F45F784BE0610F9E9B519C5E290D3515DE0BA49(__this, L_21, L_22, L_23, L_24, (0.0f), NULL);
		// UpdateLineRenderer();
		LightningBoltScript_UpdateLineRenderer_mC709724D71E0E95242108C4B9D6F7DA6BAB71F65(__this, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::UpdateFromMaterialChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_UpdateFromMaterialChange_m977EBCF7F3B1B47A777F34B0305C7FC8A04E1EF5 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// size = new Vector2(1.0f / (float)Columns, 1.0f / (float)Rows);
		int32_t L_0 = __this->___Columns_14;
		int32_t L_1 = __this->___Rows_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), ((float)((1.0f)/((float)L_0))), ((float)((1.0f)/((float)L_1))), /*hidden argument*/NULL);
		__this->___size_20 = L_2;
		// lineRenderer.material.mainTextureScale = size;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = __this->___lineRenderer_17;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___size_20;
		NullCheck(L_4);
		Material_set_mainTextureScale_mABC2B4327CCDC6BB0E0EA72C6F29817400F56EF1(L_4, L_5, NULL);
		// offsets = new Vector2[Rows * Columns];
		int32_t L_6 = __this->___Rows_13;
		int32_t L_7 = __this->___Columns_14;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_8 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_6, L_7)));
		__this->___offsets_21 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___offsets_21), (void*)L_8);
		// for (int y = 0; y < Rows; y++)
		V_0 = 0;
		goto IL_00a4;
	}

IL_0059:
	{
		// for (int x = 0; x < Columns; x++)
		V_1 = 0;
		goto IL_0092;
	}

IL_005e:
	{
		// offsets[x + (y * Columns)] = new Vector2((float)x / Columns, (float)y / Rows);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_9 = __this->___offsets_21;
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___Columns_14;
		int32_t L_13 = V_1;
		int32_t L_14 = __this->___Columns_14;
		int32_t L_15 = V_0;
		int32_t L_16 = __this->___Rows_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), ((float)(((float)L_13)/((float)L_14))), ((float)(((float)L_15)/((float)L_16))), /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_multiply(L_11, L_12))))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_17);
		// for (int x = 0; x < Columns; x++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0092:
	{
		// for (int x = 0; x < Columns; x++)
		int32_t L_19 = V_1;
		int32_t L_20 = __this->___Columns_14;
		V_2 = (bool)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_005e;
		}
	}
	{
		// for (int y = 0; y < Rows; y++)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_00a4:
	{
		// for (int y = 0; y < Rows; y++)
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___Rows_13;
		V_3 = (bool)((((int32_t)L_23) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_3;
		if (L_25)
		{
			goto IL_0059;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript__ctor_m6B404ACF4FA73DFC000CE86270A4409AA1BBDD42 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m01FB66CBC7881CD4F65D3FBEA76E99F61514EA4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Generations = 6;
		__this->___Generations_8 = 6;
		// public float Duration = 0.05f;
		__this->___Duration_9 = (0.0500000007f);
		// public float ChaosFactor = 0.15f;
		__this->___ChaosFactor_11 = (0.150000006f);
		// public int Rows = 1;
		__this->___Rows_13 = 1;
		// public int Columns = 1;
		__this->___Columns_14 = 1;
		// public LightningBoltAnimationMode AnimationMode = LightningBoltAnimationMode.PingPong;
		__this->___AnimationMode_15 = 3;
		// public System.Random RandomGenerator = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		__this->___RandomGenerator_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RandomGenerator_16), (void*)L_0);
		// private List<KeyValuePair<Vector3, Vector3>> segments = new List<KeyValuePair<Vector3, Vector3>>();
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_1 = (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD*)il2cpp_codegen_object_new(List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m01FB66CBC7881CD4F65D3FBEA76E99F61514EA4C(L_1, List_1__ctor_m01FB66CBC7881CD4F65D3FBEA76E99F61514EA4C_RuntimeMethod_var);
		__this->___segments_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___segments_18), (void*)L_1);
		// private int animationPingPongDirection = 1;
		__this->___animationPingPongDirection_23 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline (ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* __this, const RuntimeMethod* method) 
{
	{
		// public Mesh mesh { get; private set; }
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___U3CmeshU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_newX, float ___1_newY, float ___2_newZ, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_newX;
		__this->___x_2 = L_0;
		float L_1 = ___1_newY;
		__this->___y_3 = L_1;
		float L_2 = ___2_newZ;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Finger_get_index_mB409A9B5711767D3A6046AEAA4931A0B3633934C_inline (Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* __this, const RuntimeMethod* method) 
{
	{
		// public int index { get; }
		int32_t L_0 = __this->___U3CindexU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
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
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
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
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_item;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 Enumerator_get_Current_m4C2D1CE7862FE45C2E0CF07B9A925C93B243EB28_gshared_inline (Enumerator_t115957CEAEDF4C520C93D4E91842BA940981A122* __this, const RuntimeMethod* method) 
{
	{
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_0 = (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70)__this->____current_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_gshared_inline (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 ___0_item, const RuntimeMethod* method) 
{
	KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6* L_1 = (KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6* L_6 = V_0;
		int32_t L_7 = V_1;
		KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9)L_8);
		return;
	}

IL_0034:
	{
		KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 L_9 = ___0_item;
		((  void (*) (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD*, KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_gshared_inline (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_gshared_inline (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_gshared_inline (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF8CCA57B4BFDC96ED00E7FA3A999859EDECF661A_gshared_inline (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
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
		KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6* L_3 = (KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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

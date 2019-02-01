#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_t132251570;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t377119663;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ExtensionsToggle>
struct IEnumerable_1_t1576014625;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t3491343620;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t2475741330;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t537414295;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t881764471;
// System.Collections.Generic.List`1<UnityEngine.UI.ExtensionsToggle>
struct List_1_t4068236478;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t3135238028;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Exception
struct Exception_t;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t3759279471;
// System.Func`2<System.Single,System.Single>
struct Func_2_t3660230206;
// System.Func`2<UnityEngine.UI.ExtensionsToggle,System.Boolean>
struct Func_2_t4105555595;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Predicate`1<System.Object>
struct Predicate_1_t3905400288;
// System.Predicate`1<UnityEngine.UI.ExtensionsToggle>
struct Predicate_1_t3421455860;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t3309123499;
// UnityEngine.CanvasGroup
struct CanvasGroup_t4083511760;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t2331243652;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3903027533;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t3630163547;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t2019268878;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t4150874583;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t1764640198;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t3373214253;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t3995630009;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t2867327688;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t1475332338;
// UnityEngine.EventSystems.IDeselectHandler
struct IDeselectHandler_t393712923;
// UnityEngine.EventSystems.IPointerEnterHandler
struct IPointerEnterHandler_t1016128679;
// UnityEngine.EventSystems.IPointerExitHandler
struct IPointerExitHandler_t4182793654;
// UnityEngine.EventSystems.ISubmitHandler
struct ISubmitHandler_t2790798304;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3807901092;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_t3495933518;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t682124106;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2741065664;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t2581268647;
// UnityEngine.Events.UnityEvent[]
struct UnityEventU5BU5D_t4042265822;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t978947469;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t3832605257;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3961765668;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t2278926278;
// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.PointerEventData/InputButton>
struct UnityEvent_1_t290703556;
// UnityEngine.Events.UnityEvent`1<UnityEngine.UI.ExtensionsToggle>
struct UnityEvent_1_t3477821240;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t3037889027;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1068524471;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_t107129948;
// UnityEngine.Shader
struct Shader_t4151988712;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t48803504;
// UnityEngine.UI.ContentSizeFitter
struct ContentSizeFitter_t3850442145;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.Extensions.KnobFloatValueEvent
struct KnobFloatValueEvent_t1285673625;
// UnityEngine.UI.Extensions.ScrollSnapBase
struct ScrollSnapBase_t2887778829;
// UnityEngine.UI.Extensions.ScrollSnapBase/SelectionChangeEndEvent
struct SelectionChangeEndEvent_t4247191949;
// UnityEngine.UI.Extensions.ScrollSnapBase/SelectionChangeStartEvent
struct SelectionChangeStartEvent_t3723081512;
// UnityEngine.UI.Extensions.ScrollSnapBase/SelectionPageChangedEvent
struct SelectionPageChangedEvent_t415408402;
// UnityEngine.UI.Extensions.UIScrollToSelectionXY
struct UIScrollToSelectionXY_t1454929589;
// UnityEngine.UI.Extensions.UISelectableExtension
struct UISelectableExtension_t989851811;
// UnityEngine.UI.Extensions.UISelectableExtension/UIButtonEvent
struct UIButtonEvent_t4276706895;
// UnityEngine.UI.Extensions.UISoftAdditiveEffect
struct UISoftAdditiveEffect_t1842650896;
// UnityEngine.UI.Extensions.UIVerticalScroller
struct UIVerticalScroller_t3292120078;
// UnityEngine.UI.Extensions.UIVerticalScroller/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t1582113759;
// UnityEngine.UI.Extensions.UIWindowBase
struct UIWindowBase_t1803419093;
// UnityEngine.UI.Extensions.UI_InfiniteScroll
struct UI_InfiniteScroll_t3303149176;
// UnityEngine.UI.Extensions.UI_Knob
struct UI_Knob_t1735628298;
// UnityEngine.UI.Extensions.UI_ScrollRectOcclusion
struct UI_ScrollRectOcclusion_t2700427833;
// UnityEngine.UI.Extensions.UI_TweenScale
struct UI_TweenScale_t1206981451;
// UnityEngine.UI.Extensions.UI_TweenScale/<Tween>d__11
struct U3CTweenU3Ed__11_t869818022;
// UnityEngine.UI.Extensions.VRCursor
struct VRCursor_t3235369382;
// UnityEngine.UI.Extensions.VRInputModule
struct VRInputModule_t2321821966;
// UnityEngine.UI.Extensions.VerticalScrollSnap
struct VerticalScrollSnap_t3018533569;
// UnityEngine.UI.ExtensionsToggle
struct ExtensionsToggle_t2596161736;
// UnityEngine.UI.ExtensionsToggle/ToggleEvent
struct ToggleEvent_t1375193345;
// UnityEngine.UI.ExtensionsToggle/ToggleEventObject
struct ToggleEventObject_t1392807266;
// UnityEngine.UI.ExtensionsToggleGroup
struct ExtensionsToggleGroup_t1470432035;
// UnityEngine.UI.ExtensionsToggleGroup/<>c
struct U3CU3Ec_t1762776327;
// UnityEngine.UI.ExtensionsToggleGroup/ToggleGroupEvent
struct ToggleGroupEvent_t2519216546;
// UnityEngine.UI.ExtensionsToggle[]
struct ExtensionsToggleU5BU5D_t3190215449;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_t3046220461;
// UnityEngine.UI.HorizontalLayoutGroup
struct HorizontalLayoutGroup_t2586782146;
// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t3839221559;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.ReturnKeyTriggersButton
struct ReturnKeyTriggersButton_t3211538107;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t4137855814;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t343079324;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t1494447233;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.VerticalLayoutGroup
struct VerticalLayoutGroup_t923838031;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// Unoper.Unity.Utils.IPosition
struct IPosition_t2226019748;
// Unoper.Unity.Utils.IPosition[]
struct IPositionU5BU5D_t982770509;
// Unoper.Unity.Utils.LerpPosition
struct LerpPosition_t3084015375;
// Unoper.Unity.Utils.LerpPosition/<>c
struct U3CU3Ec_t909697984;
// Unoper.Unity.Utils.RelativePosition
struct RelativePosition_t539149730;
// Unoper.Unity.Utils.Remover
struct Remover_t313276069;
// Unoper.Unity.Utils.Sequencer
struct Sequencer_t2140344483;
// Unoper.Unity.Utils.SpherePosition
struct SpherePosition_t3726833336;
// Unoper.Unity.Utils.SumPosition
struct SumPosition_t3390953611;
// Unoper.Unity.Utils.Timer
struct Timer_t3412046349;
// Unoper.Unity.Utils.Timer/<Countdown>d__6
struct U3CCountdownU3Ed__6_t2310584700;
// pressToStart
struct pressToStart_t369169045;

extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* BaseEventData_t3903027533_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* EventSystem_t1003666588_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ExecuteEvents_t3484638744_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t3660230206_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t4105555595_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObjectU5BU5D_t3328599146_il2cpp_TypeInfo_var;
extern RuntimeClass* IPosition_t2226019748_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t4068236478_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t881764471_il2cpp_TypeInfo_var;
extern RuntimeClass* Material_t340375123_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* PointerEventData_t3807901092_il2cpp_TypeInfo_var;
extern RuntimeClass* Predicate_1_t3421455860_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* Selectable_t3250028441_il2cpp_TypeInfo_var;
extern RuntimeClass* SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var;
extern RuntimeClass* ToggleEventObject_t1392807266_il2cpp_TypeInfo_var;
extern RuntimeClass* ToggleEvent_t1375193345_il2cpp_TypeInfo_var;
extern RuntimeClass* ToggleGroupEvent_t2519216546_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CCountdownU3Ed__6_t2310584700_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CTweenU3Ed__11_t869818022_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass17_0_t1582113759_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t1762776327_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t909697984_il2cpp_TypeInfo_var;
extern RuntimeClass* UIWindowBase_t1803419093_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_1_t2741065664_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_1_t682124106_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_t3245792599_il2cpp_TypeInfo_var;
extern RuntimeClass* VRInputModule_t2321821966_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1020834103;
extern String_t* _stringLiteral1090892683;
extern String_t* _stringLiteral1137710801;
extern String_t* _stringLiteral2174982236;
extern String_t* _stringLiteral2230982815;
extern String_t* _stringLiteral2883495320;
extern String_t* _stringLiteral3228161487;
extern String_t* _stringLiteral3288259443;
extern String_t* _stringLiteral3399935163;
extern String_t* _stringLiteral3444685408;
extern String_t* _stringLiteral3452614643;
extern String_t* _stringLiteral3541663665;
extern String_t* _stringLiteral3768136113;
extern String_t* _stringLiteral4043732841;
extern String_t* _stringLiteral4251913489;
extern String_t* _stringLiteral503068089;
extern String_t* _stringLiteral77625732;
extern String_t* _stringLiteral869358600;
extern String_t* _stringLiteral871021102;
extern String_t* _stringLiteral978535982;
extern const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t3310196443_m1339529724_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisContentSizeFitter_t3850442145_m1301783278_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisGridLayoutGroup_t3046220461_m2458911910_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisHorizontalLayoutGroup_t2586782146_m1824140114_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisMaskableGraphic_t3839221559_m1169390343_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisScrollRect_t4137855814_m3636214290_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisTransform_t3600365921_m1200784320_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Select_TisSingle_t1397266774_TisSingle_t1397266774_m618648055_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToArray_TisSingle_t1397266774_m536015028_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Where_TisExtensionsToggle_t2596161736_m2906480068_RuntimeMethod_var;
extern const RuntimeMethod* ExecuteEvents_Execute_TisIDeselectHandler_t393712923_m2480832291_RuntimeMethod_var;
extern const RuntimeMethod* ExecuteEvents_Execute_TisIPointerEnterHandler_t1016128679_m878985392_RuntimeMethod_var;
extern const RuntimeMethod* ExecuteEvents_Execute_TisIPointerExitHandler_t4182793654_m767184367_RuntimeMethod_var;
extern const RuntimeMethod* ExecuteEvents_Execute_TisISubmitHandler_t2790798304_m3136014644_RuntimeMethod_var;
extern const RuntimeMethod* ExtensionsToggleGroup_NotifyToggleChanged_m2968039673_RuntimeMethod_var;
extern const RuntimeMethod* ExtensionsToggleGroup_ValidateToggleIsInGroup_m109885595_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m1950624581_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m4008246522_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponentInChildren_TisText_t1901882714_m3637202860_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisCanvasGroup_t4083511760_m378106990_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1464644364_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2091984383_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m1961169762_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Find_m1863931225_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m2913572375_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3408116030_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3922113147_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1749180329_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2396720711_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1632548537_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1718277669_RuntimeMethod_var;
extern const RuntimeMethod* Predicate_1__ctor_m4046004448_RuntimeMethod_var;
extern const RuntimeMethod* U3CCountdownU3Ed__6_System_Collections_IEnumerator_Reset_m2057072719_RuntimeMethod_var;
extern const RuntimeMethod* U3CTweenU3Ed__11_System_Collections_IEnumerator_Reset_m3050605367_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CActiveTogglesU3Eb__19_0_m2656202366_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CAnyTogglesOnU3Eb__18_0_m1309946229_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CGetPositionU3Eb__1_0_m1750348014_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass17_0_U3CAddListenerU3Eb__0_m945469347_RuntimeMethod_var;
extern const RuntimeMethod* UIVerticalScroller_U3CStartU3Eb__16_0_m3376465101_RuntimeMethod_var;
extern const RuntimeMethod* UIVerticalScroller_U3CStartU3Eb__16_1_m1037812941_RuntimeMethod_var;
extern const RuntimeMethod* UIWindowBase_ScreenToCanvas_m2805835704_RuntimeMethod_var;
extern const RuntimeMethod* UI_InfiniteScroll_OnScroll_m574852483_RuntimeMethod_var;
extern const RuntimeMethod* UI_ScrollRectOcclusion_OnScroll_m2744204337_RuntimeMethod_var;
extern const RuntimeMethod* UnityAction_1__ctor_m2239151228_RuntimeMethod_var;
extern const RuntimeMethod* UnityAction_1__ctor_m3007623985_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_1_AddListener_m1581989708_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_1_AddListener_m2847988282_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_1_Invoke_m1044068497_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_1_Invoke_m234972032_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_1_Invoke_m3400677460_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_1_Invoke_m3604335408_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_1_Invoke_m933614109_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_1_RemoveListener_m1238899611_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_1__ctor_m1380996682_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_1__ctor_m3322849880_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_1__ctor_m3777630589_RuntimeMethod_var;
extern const uint32_t ExtensionsToggleGroup_ActiveToggles_m3969557810_MetadataUsageId;
extern const uint32_t ExtensionsToggleGroup_AnyTogglesOn_m1412797946_MetadataUsageId;
extern const uint32_t ExtensionsToggleGroup_HasAToggleFlipped_m1398989923_MetadataUsageId;
extern const uint32_t ExtensionsToggleGroup_HasTheGroupToggle_m3536484585_MetadataUsageId;
extern const uint32_t ExtensionsToggleGroup_NotifyToggleChanged_m2968039673_MetadataUsageId;
extern const uint32_t ExtensionsToggleGroup_NotifyToggleOn_m2414242010_MetadataUsageId;
extern const uint32_t ExtensionsToggleGroup_RegisterToggle_m1743226738_MetadataUsageId;
extern const uint32_t ExtensionsToggleGroup_SetAllTogglesOff_m3584637526_MetadataUsageId;
extern const uint32_t ExtensionsToggleGroup_UnregisterToggle_m3687746851_MetadataUsageId;
extern const uint32_t ExtensionsToggleGroup_ValidateToggleIsInGroup_m109885595_MetadataUsageId;
extern const uint32_t ExtensionsToggleGroup__ctor_m604027088_MetadataUsageId;
extern const uint32_t ExtensionsToggle_OnDidApplyAnimationProperties_m1280441327_MetadataUsageId;
extern const uint32_t ExtensionsToggle_PlayEffect_m859397774_MetadataUsageId;
extern const uint32_t ExtensionsToggle_SetToggleGroup_m1928026226_MetadataUsageId;
extern const uint32_t ExtensionsToggle_Set_m3452279008_MetadataUsageId;
extern const uint32_t ExtensionsToggle__ctor_m987051837_MetadataUsageId;
extern const uint32_t LerpPosition_GetPosition_m1124823380_MetadataUsageId;
extern const uint32_t RelativePosition_GetPosition_m1089523561_MetadataUsageId;
extern const uint32_t Remover_Remove_m3730739065_MetadataUsageId;
extern const uint32_t ReturnKeyTriggersButton_OnSubmit_m3896732961_MetadataUsageId;
extern const uint32_t ReturnKeyTriggersButton_RemoveHighlight_m3430807560_MetadataUsageId;
extern const uint32_t ReturnKeyTriggersButton_Start_m4233398959_MetadataUsageId;
extern const uint32_t SpherePosition_GetPosition_m3002760028_MetadataUsageId;
extern const uint32_t SumPosition_GetPosition_m3878572370_MetadataUsageId;
extern const uint32_t Timer_Countdown_m3824537230_MetadataUsageId;
extern const uint32_t ToggleEventObject__ctor_m1904034588_MetadataUsageId;
extern const uint32_t ToggleEvent__ctor_m4228789907_MetadataUsageId;
extern const uint32_t ToggleGroupEvent__ctor_m3122901364_MetadataUsageId;
extern const uint32_t U3CCountdownU3Ed__6_MoveNext_m1381097623_MetadataUsageId;
extern const uint32_t U3CCountdownU3Ed__6_System_Collections_IEnumerator_Reset_m2057072719_MetadataUsageId;
extern const uint32_t U3CTweenU3Ed__11_MoveNext_m934310171_MetadataUsageId;
extern const uint32_t U3CTweenU3Ed__11_System_Collections_IEnumerator_Reset_m3050605367_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m1215978411_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m3513572747_MetadataUsageId;
extern const uint32_t UIButtonEvent__ctor_m2764734376_MetadataUsageId;
extern const uint32_t UIScrollToSelectionXY_ScrollRectToLevelSelection_m975918840_MetadataUsageId;
extern const uint32_t UIScrollToSelectionXY_Start_m4014267542_MetadataUsageId;
extern const uint32_t UISelectableExtension_UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown_m2281235530_MetadataUsageId;
extern const uint32_t UISelectableExtension_UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp_m266565460_MetadataUsageId;
extern const uint32_t UISelectableExtension_Update_m2916837538_MetadataUsageId;
extern const uint32_t UISoftAdditiveEffect_SetMaterial_m1527550642_MetadataUsageId;
extern const uint32_t UIVerticalScroller_AddListener_m822110344_MetadataUsageId;
extern const uint32_t UIVerticalScroller_Awake_m2944379975_MetadataUsageId;
extern const uint32_t UIVerticalScroller_DoSomething_m2639774279_MetadataUsageId;
extern const uint32_t UIVerticalScroller_ScrollDown_m3744983971_MetadataUsageId;
extern const uint32_t UIVerticalScroller_ScrollUp_m1381309139_MetadataUsageId;
extern const uint32_t UIVerticalScroller_ScrollingElements_m701951019_MetadataUsageId;
extern const uint32_t UIVerticalScroller_SnapToElement_m3251754663_MetadataUsageId;
extern const uint32_t UIVerticalScroller_Start_m3813810380_MetadataUsageId;
extern const uint32_t UIVerticalScroller_Update_m3840691586_MetadataUsageId;
extern const uint32_t UIWindowBase_OnBeginDrag_m2504115778_MetadataUsageId;
extern const uint32_t UIWindowBase_OnDrag_m3920327827_MetadataUsageId;
extern const uint32_t UIWindowBase_ScreenToCanvas_m2805835704_MetadataUsageId;
extern const uint32_t UIWindowBase_Start_m478307939_MetadataUsageId;
extern const uint32_t UIWindowBase_Update_m2853233331_MetadataUsageId;
extern const uint32_t UIWindowBase__ctor_m3039225257_MetadataUsageId;
extern const uint32_t UIWindowBase_resetCoordinatePosition_m2901949189_MetadataUsageId;
extern const uint32_t UI_InfiniteScroll_DisableGridComponents_m2970094095_MetadataUsageId;
extern const uint32_t UI_InfiniteScroll_Init_m1065705655_MetadataUsageId;
extern const uint32_t UI_InfiniteScroll_OnScroll_m574852483_MetadataUsageId;
extern const uint32_t UI_InfiniteScroll__ctor_m745528630_MetadataUsageId;
extern const uint32_t UI_Knob_InvokeEvents_m2920931428_MetadataUsageId;
extern const uint32_t UI_Knob_OnDrag_m1989378055_MetadataUsageId;
extern const uint32_t UI_Knob_SetInitPointerData_m2203880447_MetadataUsageId;
extern const uint32_t UI_Knob_SnapToPosition_m3789174925_MetadataUsageId;
extern const uint32_t UI_ScrollRectOcclusion_DisableGridComponents_m1933239258_MetadataUsageId;
extern const uint32_t UI_ScrollRectOcclusion_Init_m3669417748_MetadataUsageId;
extern const uint32_t UI_ScrollRectOcclusion_OnScroll_m2744204337_MetadataUsageId;
extern const uint32_t UI_ScrollRectOcclusion__ctor_m582086741_MetadataUsageId;
extern const uint32_t UI_TweenScale_Awake_m3743567440_MetadataUsageId;
extern const uint32_t UI_TweenScale_Play_m2475340060_MetadataUsageId;
extern const uint32_t UI_TweenScale_ResetTween_m1087967488_MetadataUsageId;
extern const uint32_t UI_TweenScale_Tween_m780170309_MetadataUsageId;
extern const uint32_t UI_TweenScale__ctor_m3790213344_MetadataUsageId;
extern const uint32_t VRCursor_Update_m314003991_MetadataUsageId;
extern const uint32_t VRInputModule_Awake_m2567655949_MetadataUsageId;
extern const uint32_t VRInputModule_PointerEnter_m4958081_MetadataUsageId;
extern const uint32_t VRInputModule_PointerExit_m3267747566_MetadataUsageId;
extern const uint32_t VRInputModule_PointerSubmit_m276617441_MetadataUsageId;
extern const uint32_t VRInputModule_Process_m3847371587_MetadataUsageId;
extern const uint32_t VerticalScrollSnap_AddChild_m3633366043_MetadataUsageId;
extern const uint32_t VerticalScrollSnap_DistributePages_m3256480868_MetadataUsageId;
extern const uint32_t VerticalScrollSnap_OnEnable_m3285445207_MetadataUsageId;
extern const uint32_t VerticalScrollSnap_OnEndDrag_m2821904435_MetadataUsageId;
extern const uint32_t VerticalScrollSnap_OnRectTransformDimensionsChange_m2898657906_MetadataUsageId;
extern const uint32_t VerticalScrollSnap_RemoveAllChildren_m3982600434_MetadataUsageId;
extern const uint32_t VerticalScrollSnap_RemoveChild_m3946971085_MetadataUsageId;
extern const uint32_t VerticalScrollSnap_Start_m32339692_MetadataUsageId;
extern const uint32_t VerticalScrollSnap_UpdateLayout_m832716593_MetadataUsageId;
extern const uint32_t VerticalScrollSnap_Update_m3348101550_MetadataUsageId;
extern const uint32_t pressToStart_Update_m360635304_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Vector3_t3722313464 ;

struct ObjectU5BU5D_t2843939325;
struct SingleU5BU5D_t1444911251;
struct UnityEventU5BU5D_t4042265822;
struct GameObjectU5BU5D_t3328599146;
struct KeyframeU5BU5D_t1068524471;
struct Vector3U5BU5D_t1718750761;
struct IPositionU5BU5D_t982770509;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T881764471_H
#define LIST_1_T881764471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct  List_1_t881764471  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RectTransformU5BU5D_t107129948* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t881764471, ____items_1)); }
	inline RectTransformU5BU5D_t107129948* get__items_1() const { return ____items_1; }
	inline RectTransformU5BU5D_t107129948** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RectTransformU5BU5D_t107129948* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t881764471, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t881764471, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t881764471, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t881764471_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RectTransformU5BU5D_t107129948* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t881764471_StaticFields, ____emptyArray_5)); }
	inline RectTransformU5BU5D_t107129948* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RectTransformU5BU5D_t107129948** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RectTransformU5BU5D_t107129948* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T881764471_H
#ifndef LIST_1_T4068236478_H
#define LIST_1_T4068236478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.UI.ExtensionsToggle>
struct  List_1_t4068236478  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ExtensionsToggleU5BU5D_t3190215449* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4068236478, ____items_1)); }
	inline ExtensionsToggleU5BU5D_t3190215449* get__items_1() const { return ____items_1; }
	inline ExtensionsToggleU5BU5D_t3190215449** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ExtensionsToggleU5BU5D_t3190215449* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4068236478, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4068236478, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4068236478, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t4068236478_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ExtensionsToggleU5BU5D_t3190215449* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4068236478_StaticFields, ____emptyArray_5)); }
	inline ExtensionsToggleU5BU5D_t3190215449* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ExtensionsToggleU5BU5D_t3190215449** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ExtensionsToggleU5BU5D_t3190215449* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4068236478_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef U3CU3EC__DISPLAYCLASS17_0_T1582113759_H
#define U3CU3EC__DISPLAYCLASS17_0_T1582113759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UIVerticalScroller/<>c__DisplayClass17_0
struct  U3CU3Ec__DisplayClass17_0_t1582113759  : public RuntimeObject
{
public:
	// UnityEngine.UI.Extensions.UIVerticalScroller UnityEngine.UI.Extensions.UIVerticalScroller/<>c__DisplayClass17_0::<>4__this
	UIVerticalScroller_t3292120078 * ___U3CU3E4__this_0;
	// System.Int32 UnityEngine.UI.Extensions.UIVerticalScroller/<>c__DisplayClass17_0::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t1582113759, ___U3CU3E4__this_0)); }
	inline UIVerticalScroller_t3292120078 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline UIVerticalScroller_t3292120078 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(UIVerticalScroller_t3292120078 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t1582113759, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS17_0_T1582113759_H
#ifndef U3CTWEENU3ED__11_T869818022_H
#define U3CTWEENU3ED__11_T869818022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UI_TweenScale/<Tween>d__11
struct  U3CTweenU3Ed__11_t869818022  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.Extensions.UI_TweenScale/<Tween>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.Extensions.UI_TweenScale/<Tween>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.UI.Extensions.UI_TweenScale UnityEngine.UI.Extensions.UI_TweenScale/<Tween>d__11::<>4__this
	UI_TweenScale_t1206981451 * ___U3CU3E4__this_2;
	// System.Single UnityEngine.UI.Extensions.UI_TweenScale/<Tween>d__11::<t>5__2
	float ___U3CtU3E5__2_3;
	// System.Single UnityEngine.UI.Extensions.UI_TweenScale/<Tween>d__11::<maxT>5__3
	float ___U3CmaxTU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTweenU3Ed__11_t869818022, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTweenU3Ed__11_t869818022, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTweenU3Ed__11_t869818022, ___U3CU3E4__this_2)); }
	inline UI_TweenScale_t1206981451 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UI_TweenScale_t1206981451 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UI_TweenScale_t1206981451 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CtU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CTweenU3Ed__11_t869818022, ___U3CtU3E5__2_3)); }
	inline float get_U3CtU3E5__2_3() const { return ___U3CtU3E5__2_3; }
	inline float* get_address_of_U3CtU3E5__2_3() { return &___U3CtU3E5__2_3; }
	inline void set_U3CtU3E5__2_3(float value)
	{
		___U3CtU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CmaxTU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CTweenU3Ed__11_t869818022, ___U3CmaxTU3E5__3_4)); }
	inline float get_U3CmaxTU3E5__3_4() const { return ___U3CmaxTU3E5__3_4; }
	inline float* get_address_of_U3CmaxTU3E5__3_4() { return &___U3CmaxTU3E5__3_4; }
	inline void set_U3CmaxTU3E5__3_4(float value)
	{
		___U3CmaxTU3E5__3_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTWEENU3ED__11_T869818022_H
#ifndef U3CU3EC_T1762776327_H
#define U3CU3EC_T1762776327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ExtensionsToggleGroup/<>c
struct  U3CU3Ec_t1762776327  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1762776327_StaticFields
{
public:
	// UnityEngine.UI.ExtensionsToggleGroup/<>c UnityEngine.UI.ExtensionsToggleGroup/<>c::<>9
	U3CU3Ec_t1762776327 * ___U3CU3E9_0;
	// System.Predicate`1<UnityEngine.UI.ExtensionsToggle> UnityEngine.UI.ExtensionsToggleGroup/<>c::<>9__18_0
	Predicate_1_t3421455860 * ___U3CU3E9__18_0_1;
	// System.Func`2<UnityEngine.UI.ExtensionsToggle,System.Boolean> UnityEngine.UI.ExtensionsToggleGroup/<>c::<>9__19_0
	Func_2_t4105555595 * ___U3CU3E9__19_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1762776327_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1762776327 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1762776327 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1762776327 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1762776327_StaticFields, ___U3CU3E9__18_0_1)); }
	inline Predicate_1_t3421455860 * get_U3CU3E9__18_0_1() const { return ___U3CU3E9__18_0_1; }
	inline Predicate_1_t3421455860 ** get_address_of_U3CU3E9__18_0_1() { return &___U3CU3E9__18_0_1; }
	inline void set_U3CU3E9__18_0_1(Predicate_1_t3421455860 * value)
	{
		___U3CU3E9__18_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__18_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1762776327_StaticFields, ___U3CU3E9__19_0_2)); }
	inline Func_2_t4105555595 * get_U3CU3E9__19_0_2() const { return ___U3CU3E9__19_0_2; }
	inline Func_2_t4105555595 ** get_address_of_U3CU3E9__19_0_2() { return &___U3CU3E9__19_0_2; }
	inline void set_U3CU3E9__19_0_2(Func_2_t4105555595 * value)
	{
		___U3CU3E9__19_0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__19_0_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T1762776327_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef U3CU3EC_T909697984_H
#define U3CU3EC_T909697984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unoper.Unity.Utils.LerpPosition/<>c
struct  U3CU3Ec_t909697984  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t909697984_StaticFields
{
public:
	// Unoper.Unity.Utils.LerpPosition/<>c Unoper.Unity.Utils.LerpPosition/<>c::<>9
	U3CU3Ec_t909697984 * ___U3CU3E9_0;
	// System.Func`2<System.Single,System.Single> Unoper.Unity.Utils.LerpPosition/<>c::<>9__1_0
	Func_2_t3660230206 * ___U3CU3E9__1_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t909697984_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t909697984 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t909697984 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t909697984 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t909697984_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_t3660230206 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_t3660230206 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_t3660230206 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__1_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T909697984_H
#ifndef U3CCOUNTDOWNU3ED__6_T2310584700_H
#define U3CCOUNTDOWNU3ED__6_T2310584700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unoper.Unity.Utils.Timer/<Countdown>d__6
struct  U3CCountdownU3Ed__6_t2310584700  : public RuntimeObject
{
public:
	// System.Int32 Unoper.Unity.Utils.Timer/<Countdown>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Unoper.Unity.Utils.Timer/<Countdown>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Unoper.Unity.Utils.Timer Unoper.Unity.Utils.Timer/<Countdown>d__6::<>4__this
	Timer_t3412046349 * ___U3CU3E4__this_2;
	// System.Single Unoper.Unity.Utils.Timer/<Countdown>d__6::<intervals>5__2
	float ___U3CintervalsU3E5__2_3;
	// System.Int32 Unoper.Unity.Utils.Timer/<Countdown>d__6::<i>5__3
	int32_t ___U3CiU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCountdownU3Ed__6_t2310584700, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCountdownU3Ed__6_t2310584700, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCountdownU3Ed__6_t2310584700, ___U3CU3E4__this_2)); }
	inline Timer_t3412046349 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Timer_t3412046349 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Timer_t3412046349 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CintervalsU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CCountdownU3Ed__6_t2310584700, ___U3CintervalsU3E5__2_3)); }
	inline float get_U3CintervalsU3E5__2_3() const { return ___U3CintervalsU3E5__2_3; }
	inline float* get_address_of_U3CintervalsU3E5__2_3() { return &___U3CintervalsU3E5__2_3; }
	inline void set_U3CintervalsU3E5__2_3(float value)
	{
		___U3CintervalsU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CCountdownU3Ed__6_t2310584700, ___U3CiU3E5__3_4)); }
	inline int32_t get_U3CiU3E5__3_4() const { return ___U3CiU3E5__3_4; }
	inline int32_t* get_address_of_U3CiU3E5__3_4() { return &___U3CiU3E5__3_4; }
	inline void set_U3CiU3E5__3_4(int32_t value)
	{
		___U3CiU3E5__3_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCOUNTDOWNU3ED__6_T2310584700_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#define DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t2562230146 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t2562230146__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
#ifndef UNITYEVENT_T2581268647_H
#define UNITYEVENT_T2581268647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t2581268647  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t2581268647, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T2581268647_H
#ifndef UNITYEVENT_1_T978947469_H
#define UNITYEVENT_1_T978947469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct  UnityEvent_1_t978947469  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t978947469, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T978947469_H
#ifndef UNITYEVENT_1_T3832605257_H
#define UNITYEVENT_1_T3832605257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t3832605257  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3832605257, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3832605257_H
#ifndef UNITYEVENT_1_T2278926278_H
#define UNITYEVENT_1_T2278926278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Single>
struct  UnityEvent_1_t2278926278  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t2278926278, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T2278926278_H
#ifndef UNITYEVENT_1_T290703556_H
#define UNITYEVENT_1_T290703556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.PointerEventData/InputButton>
struct  UnityEvent_1_t290703556  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t290703556, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T290703556_H
#ifndef UNITYEVENT_1_T3477821240_H
#define UNITYEVENT_1_T3477821240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.UI.ExtensionsToggle>
struct  UnityEvent_1_t3477821240  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3477821240, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3477821240_H
#ifndef UNITYEVENT_1_T3037889027_H
#define UNITYEVENT_1_T3037889027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct  UnityEvent_1_t3037889027  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3037889027, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3037889027_H
#ifndef KEYFRAME_T4206410242_H
#define KEYFRAME_T4206410242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t4206410242 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T4206410242_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef VECTOR3_ARRAY2D_T2295860118_H
#define VECTOR3_ARRAY2D_T2295860118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.Vector3_Array2D
struct  Vector3_Array2D_t2295860118 
{
public:
	// UnityEngine.Vector3[] UnityEngine.UI.Extensions.Vector3_Array2D::array
	Vector3U5BU5D_t1718750761* ___array_0;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(Vector3_Array2D_t2295860118, ___array_0)); }
	inline Vector3U5BU5D_t1718750761* get_array_0() const { return ___array_0; }
	inline Vector3U5BU5D_t1718750761** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(Vector3U5BU5D_t1718750761* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((&___array_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Extensions.Vector3_Array2D
struct Vector3_Array2D_t2295860118_marshaled_pinvoke
{
	Vector3_t3722313464 * ___array_0;
};
// Native definition for COM marshalling of UnityEngine.UI.Extensions.Vector3_Array2D
struct Vector3_Array2D_t2295860118_marshaled_com
{
	Vector3_t3722313464 * ___array_0;
};
#endif // VECTOR3_ARRAY2D_T2295860118_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef ANIMATIONCURVE_T3046754366_H
#define ANIMATIONCURVE_T3046754366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t3046754366  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t3046754366, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T3046754366_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef INPUTBUTTON_T3704011348_H
#define INPUTBUTTON_T3704011348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_t3704011348 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_t3704011348, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTBUTTON_T3704011348_H
#ifndef RAYCASTRESULT_T3360306849_H
#define RAYCASTRESULT_T3360306849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t3360306849 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1113636619 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t4150874583 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t3722313464  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t3722313464  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2156229523  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___m_GameObject_0)); }
	inline GameObject_t1113636619 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1113636619 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___module_1)); }
	inline BaseRaycaster_t4150874583 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t4150874583 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t4150874583 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldPosition_7)); }
	inline Vector3_t3722313464  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t3722313464 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t3722313464  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldNormal_8)); }
	inline Vector3_t3722313464  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t3722313464 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t3722313464  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___screenPosition_9)); }
	inline Vector2_t2156229523  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2156229523 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2156229523  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_pinvoke
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_com
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T3360306849_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef PLANE_T1000493321_H
#define PLANE_T1000493321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Plane
struct  Plane_t1000493321 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t3722313464  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t1000493321, ___m_Normal_0)); }
	inline Vector3_t3722313464  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t3722313464  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t1000493321, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANE_T1000493321_H
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
#ifndef RENDERMODE_T4077056833_H
#define RENDERMODE_T4077056833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderMode
struct  RenderMode_t4077056833 
{
public:
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderMode_t4077056833, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERMODE_T4077056833_H
#ifndef TEXTANCHOR_T2035777396_H
#define TEXTANCHOR_T2035777396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t2035777396 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_t2035777396, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTANCHOR_T2035777396_H
#ifndef BUTTONCLICKEDEVENT_T48803504_H
#define BUTTONCLICKEDEVENT_T48803504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button/ButtonClickedEvent
struct  ButtonClickedEvent_t48803504  : public UnityEvent_t2581268647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONCLICKEDEVENT_T48803504_H
#ifndef CANVASUPDATE_T2572322932_H
#define CANVASUPDATE_T2572322932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CanvasUpdate
struct  CanvasUpdate_t2572322932 
{
public:
	// System.Int32 UnityEngine.UI.CanvasUpdate::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CanvasUpdate_t2572322932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASUPDATE_T2572322932_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef FITMODE_T3267881214_H
#define FITMODE_T3267881214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ContentSizeFitter/FitMode
struct  FitMode_t3267881214 
{
public:
	// System.Int32 UnityEngine.UI.ContentSizeFitter/FitMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FitMode_t3267881214, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FITMODE_T3267881214_H
#ifndef KNOBFLOATVALUEEVENT_T1285673625_H
#define KNOBFLOATVALUEEVENT_T1285673625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.KnobFloatValueEvent
struct  KnobFloatValueEvent_t1285673625  : public UnityEvent_1_t2278926278
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KNOBFLOATVALUEEVENT_T1285673625_H
#ifndef SCROLLTYPE_T1077815876_H
#define SCROLLTYPE_T1077815876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UIScrollToSelection/ScrollType
struct  ScrollType_t1077815876 
{
public:
	// System.Int32 UnityEngine.UI.Extensions.UIScrollToSelection/ScrollType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScrollType_t1077815876, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLTYPE_T1077815876_H
#ifndef UIBUTTONEVENT_T4276706895_H
#define UIBUTTONEVENT_T4276706895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UISelectableExtension/UIButtonEvent
struct  UIButtonEvent_t4276706895  : public UnityEvent_1_t290703556
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBUTTONEVENT_T4276706895_H
#ifndef DIRECTION_T2018151358_H
#define DIRECTION_T2018151358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UI_Knob/Direction
struct  Direction_t2018151358 
{
public:
	// System.Int32 UnityEngine.UI.Extensions.UI_Knob/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_t2018151358, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTION_T2018151358_H
#ifndef TOGGLEEVENT_T1375193345_H
#define TOGGLEEVENT_T1375193345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ExtensionsToggle/ToggleEvent
struct  ToggleEvent_t1375193345  : public UnityEvent_1_t978947469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLEEVENT_T1375193345_H
#ifndef TOGGLEEVENTOBJECT_T1392807266_H
#define TOGGLEEVENTOBJECT_T1392807266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ExtensionsToggle/ToggleEventObject
struct  ToggleEventObject_t1392807266  : public UnityEvent_1_t3477821240
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLEEVENTOBJECT_T1392807266_H
#ifndef TOGGLETRANSITION_T807101644_H
#define TOGGLETRANSITION_T807101644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ExtensionsToggle/ToggleTransition
struct  ToggleTransition_t807101644 
{
public:
	// System.Int32 UnityEngine.UI.ExtensionsToggle/ToggleTransition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleTransition_t807101644, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLETRANSITION_T807101644_H
#ifndef TOGGLEGROUPEVENT_T2519216546_H
#define TOGGLEGROUPEVENT_T2519216546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ExtensionsToggleGroup/ToggleGroupEvent
struct  ToggleGroupEvent_t2519216546  : public UnityEvent_1_t978947469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLEGROUPEVENT_T2519216546_H
#ifndef AXIS_T3613393006_H
#define AXIS_T3613393006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.GridLayoutGroup/Axis
struct  Axis_t3613393006 
{
public:
	// System.Int32 UnityEngine.UI.GridLayoutGroup/Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_t3613393006, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXIS_T3613393006_H
#ifndef CONSTRAINT_T814224393_H
#define CONSTRAINT_T814224393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.GridLayoutGroup/Constraint
struct  Constraint_t814224393 
{
public:
	// System.Int32 UnityEngine.UI.GridLayoutGroup/Constraint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Constraint_t814224393, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINT_T814224393_H
#ifndef CORNER_T1493259673_H
#define CORNER_T1493259673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.GridLayoutGroup/Corner
struct  Corner_t1493259673 
{
public:
	// System.Int32 UnityEngine.UI.GridLayoutGroup/Corner::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Corner_t1493259673, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CORNER_T1493259673_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef MOVEMENTTYPE_T4072922106_H
#define MOVEMENTTYPE_T4072922106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ScrollRect/MovementType
struct  MovementType_t4072922106 
{
public:
	// System.Int32 UnityEngine.UI.ScrollRect/MovementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MovementType_t4072922106, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVEMENTTYPE_T4072922106_H
#ifndef SCROLLRECTEVENT_T343079324_H
#define SCROLLRECTEVENT_T343079324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct  ScrollRectEvent_t343079324  : public UnityEvent_1_t3037889027
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLRECTEVENT_T343079324_H
#ifndef SCROLLBARVISIBILITY_T705693775_H
#define SCROLLBARVISIBILITY_T705693775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ScrollRect/ScrollbarVisibility
struct  ScrollbarVisibility_t705693775 
{
public:
	// System.Int32 UnityEngine.UI.ScrollRect/ScrollbarVisibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScrollbarVisibility_t705693775, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLBARVISIBILITY_T705693775_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef POINTEREVENTDATA_T3807901092_H
#define POINTEREVENTDATA_T3807901092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_t3807901092  : public BaseEventData_t3903027533
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t1113636619 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t1113636619 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t1113636619 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t1113636619 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t1113636619 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t2585711361 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t2156229523  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t2156229523  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t2156229523  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t3722313464  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t3722313464  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t2156229523  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_t1113636619 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_t1113636619 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerEnterU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___m_PointerPress_3)); }
	inline GameObject_t1113636619 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_t1113636619 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_t1113636619 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerPress_3), value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_t1113636619 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_t1113636619 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_t1113636619 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClastPressU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_t1113636619 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_t1113636619 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_t1113636619 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrawPointerPressU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_t1113636619 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_t1113636619 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerDragU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t3360306849  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t3360306849  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t3360306849  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t3360306849  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___hovered_9)); }
	inline List_1_t2585711361 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t2585711361 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t2585711361 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((&___hovered_9), value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_t2156229523  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_t2156229523 * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_t2156229523  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_t2156229523  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_t2156229523 * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_t2156229523  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_t2156229523  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_t2156229523 * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_t2156229523  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_t3722313464  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_t3722313464 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_t3722313464  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_t3722313464  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_t3722313464 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_t3722313464  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_t2156229523  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_t2156229523 * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_t2156229523  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEREVENTDATA_T3807901092_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef SHADER_T4151988712_H
#define SHADER_T4151988712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t4151988712  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T4151988712_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef FUNC_2_T3660230206_H
#define FUNC_2_T3660230206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Single,System.Single>
struct  Func_2_t3660230206  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3660230206_H
#ifndef FUNC_2_T4105555595_H
#define FUNC_2_T4105555595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<UnityEngine.UI.ExtensionsToggle,System.Boolean>
struct  Func_2_t4105555595  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T4105555595_H
#ifndef PREDICATE_1_T3421455860_H
#define PREDICATE_1_T3421455860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<UnityEngine.UI.ExtensionsToggle>
struct  Predicate_1_t3421455860  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T3421455860_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef CANVASGROUP_T4083511760_H
#define CANVASGROUP_T4083511760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CanvasGroup
struct  CanvasGroup_t4083511760  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASGROUP_T4083511760_H
#ifndef CANVASRENDERER_T2598313366_H
#define CANVASRENDERER_T2598313366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CanvasRenderer
struct  CanvasRenderer_t2598313366  : public Component_t1923634451
{
public:
	// System.Boolean UnityEngine.CanvasRenderer::<isMask>k__BackingField
	bool ___U3CisMaskU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CisMaskU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CanvasRenderer_t2598313366, ___U3CisMaskU3Ek__BackingField_4)); }
	inline bool get_U3CisMaskU3Ek__BackingField_4() const { return ___U3CisMaskU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisMaskU3Ek__BackingField_4() { return &___U3CisMaskU3Ek__BackingField_4; }
	inline void set_U3CisMaskU3Ek__BackingField_4(bool value)
	{
		___U3CisMaskU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASRENDERER_T2598313366_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef EVENTFUNCTION_1_T3373214253_H
#define EVENTFUNCTION_1_T3373214253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct  EventFunction_1_t3373214253  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTFUNCTION_1_T3373214253_H
#ifndef EVENTFUNCTION_1_T3995630009_H
#define EVENTFUNCTION_1_T3995630009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct  EventFunction_1_t3995630009  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTFUNCTION_1_T3995630009_H
#ifndef EVENTFUNCTION_1_T2867327688_H
#define EVENTFUNCTION_1_T2867327688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct  EventFunction_1_t2867327688  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTFUNCTION_1_T2867327688_H
#ifndef EVENTFUNCTION_1_T1475332338_H
#define EVENTFUNCTION_1_T1475332338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct  EventFunction_1_t1475332338  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTFUNCTION_1_T1475332338_H
#ifndef UNITYACTION_T3245792599_H
#define UNITYACTION_T3245792599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t3245792599  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T3245792599_H
#ifndef UNITYACTION_1_T682124106_H
#define UNITYACTION_1_T682124106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct  UnityAction_1_t682124106  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T682124106_H
#ifndef UNITYACTION_1_T2741065664_H
#define UNITYACTION_1_T2741065664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct  UnityAction_1_t2741065664  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T2741065664_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:
	// System.Int32 UnityEngine.Transform::<hierarchyCount>k__BackingField
	int32_t ___U3ChierarchyCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ChierarchyCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Transform_t3600365921, ___U3ChierarchyCountU3Ek__BackingField_4)); }
	inline int32_t get_U3ChierarchyCountU3Ek__BackingField_4() const { return ___U3ChierarchyCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3ChierarchyCountU3Ek__BackingField_4() { return &___U3ChierarchyCountU3Ek__BackingField_4; }
	inline void set_U3ChierarchyCountU3Ek__BackingField_4(int32_t value)
	{
		___U3ChierarchyCountU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef CANVAS_T3310196443_H
#define CANVAS_T3310196443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_t3310196443  : public Behaviour_t1437897464
{
public:

public:
};

struct Canvas_t3310196443_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t3309123499 * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t3310196443_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_t3309123499 * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_t3309123499 ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_t3309123499 * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_T3310196443_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_5;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_5() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_5)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_5() const { return ___reapplyDrivenProperties_5; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_5() { return &___reapplyDrivenProperties_5; }
	inline void set_reapplyDrivenProperties_5(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_5 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef SCROLLSNAPBASE_T2887778829_H
#define SCROLLSNAPBASE_T2887778829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.ScrollSnapBase
struct  ScrollSnapBase_t2887778829  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Rect UnityEngine.UI.Extensions.ScrollSnapBase::panelDimensions
	Rect_t2360479859  ___panelDimensions_4;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.ScrollSnapBase::_screensContainer
	RectTransform_t3704657025 * ____screensContainer_5;
	// System.Boolean UnityEngine.UI.Extensions.ScrollSnapBase::_isVertical
	bool ____isVertical_6;
	// System.Int32 UnityEngine.UI.Extensions.ScrollSnapBase::_screens
	int32_t ____screens_7;
	// System.Single UnityEngine.UI.Extensions.ScrollSnapBase::_scrollStartPosition
	float ____scrollStartPosition_8;
	// System.Single UnityEngine.UI.Extensions.ScrollSnapBase::_childSize
	float ____childSize_9;
	// System.Single UnityEngine.UI.Extensions.ScrollSnapBase::_childPos
	float ____childPos_10;
	// System.Single UnityEngine.UI.Extensions.ScrollSnapBase::_maskSize
	float ____maskSize_11;
	// UnityEngine.Vector2 UnityEngine.UI.Extensions.ScrollSnapBase::_childAnchorPoint
	Vector2_t2156229523  ____childAnchorPoint_12;
	// UnityEngine.UI.ScrollRect UnityEngine.UI.Extensions.ScrollSnapBase::_scroll_rect
	ScrollRect_t4137855814 * ____scroll_rect_13;
	// UnityEngine.Vector3 UnityEngine.UI.Extensions.ScrollSnapBase::_lerp_target
	Vector3_t3722313464  ____lerp_target_14;
	// System.Boolean UnityEngine.UI.Extensions.ScrollSnapBase::_lerp
	bool ____lerp_15;
	// System.Boolean UnityEngine.UI.Extensions.ScrollSnapBase::_pointerDown
	bool ____pointerDown_16;
	// System.Boolean UnityEngine.UI.Extensions.ScrollSnapBase::_settled
	bool ____settled_17;
	// UnityEngine.Vector3 UnityEngine.UI.Extensions.ScrollSnapBase::_startPosition
	Vector3_t3722313464  ____startPosition_18;
	// System.Int32 UnityEngine.UI.Extensions.ScrollSnapBase::_currentPage
	int32_t ____currentPage_19;
	// System.Int32 UnityEngine.UI.Extensions.ScrollSnapBase::_previousPage
	int32_t ____previousPage_20;
	// System.Int32 UnityEngine.UI.Extensions.ScrollSnapBase::_halfNoVisibleItems
	int32_t ____halfNoVisibleItems_21;
	// System.Boolean UnityEngine.UI.Extensions.ScrollSnapBase::_moveStarted
	bool ____moveStarted_22;
	// System.Int32 UnityEngine.UI.Extensions.ScrollSnapBase::_bottomItem
	int32_t ____bottomItem_23;
	// System.Int32 UnityEngine.UI.Extensions.ScrollSnapBase::_topItem
	int32_t ____topItem_24;
	// System.Int32 UnityEngine.UI.Extensions.ScrollSnapBase::StartingScreen
	int32_t ___StartingScreen_25;
	// System.Single UnityEngine.UI.Extensions.ScrollSnapBase::PageStep
	float ___PageStep_26;
	// UnityEngine.GameObject UnityEngine.UI.Extensions.ScrollSnapBase::Pagination
	GameObject_t1113636619 * ___Pagination_27;
	// UnityEngine.GameObject UnityEngine.UI.Extensions.ScrollSnapBase::PrevButton
	GameObject_t1113636619 * ___PrevButton_28;
	// UnityEngine.GameObject UnityEngine.UI.Extensions.ScrollSnapBase::NextButton
	GameObject_t1113636619 * ___NextButton_29;
	// System.Single UnityEngine.UI.Extensions.ScrollSnapBase::transitionSpeed
	float ___transitionSpeed_30;
	// System.Boolean UnityEngine.UI.Extensions.ScrollSnapBase::UseFastSwipe
	bool ___UseFastSwipe_31;
	// System.Int32 UnityEngine.UI.Extensions.ScrollSnapBase::FastSwipeThreshold
	int32_t ___FastSwipeThreshold_32;
	// System.Int32 UnityEngine.UI.Extensions.ScrollSnapBase::SwipeVelocityThreshold
	int32_t ___SwipeVelocityThreshold_33;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.ScrollSnapBase::MaskArea
	RectTransform_t3704657025 * ___MaskArea_34;
	// System.Single UnityEngine.UI.Extensions.ScrollSnapBase::MaskBuffer
	float ___MaskBuffer_35;
	// System.Boolean UnityEngine.UI.Extensions.ScrollSnapBase::JumpOnEnable
	bool ___JumpOnEnable_36;
	// System.Boolean UnityEngine.UI.Extensions.ScrollSnapBase::RestartOnEnable
	bool ___RestartOnEnable_37;
	// System.Boolean UnityEngine.UI.Extensions.ScrollSnapBase::UseParentTransform
	bool ___UseParentTransform_38;
	// UnityEngine.GameObject[] UnityEngine.UI.Extensions.ScrollSnapBase::ChildObjects
	GameObjectU5BU5D_t3328599146* ___ChildObjects_39;
	// UnityEngine.UI.Extensions.ScrollSnapBase/SelectionChangeStartEvent UnityEngine.UI.Extensions.ScrollSnapBase::m_OnSelectionChangeStartEvent
	SelectionChangeStartEvent_t3723081512 * ___m_OnSelectionChangeStartEvent_40;
	// UnityEngine.UI.Extensions.ScrollSnapBase/SelectionPageChangedEvent UnityEngine.UI.Extensions.ScrollSnapBase::m_OnSelectionPageChangedEvent
	SelectionPageChangedEvent_t415408402 * ___m_OnSelectionPageChangedEvent_41;
	// UnityEngine.UI.Extensions.ScrollSnapBase/SelectionChangeEndEvent UnityEngine.UI.Extensions.ScrollSnapBase::m_OnSelectionChangeEndEvent
	SelectionChangeEndEvent_t4247191949 * ___m_OnSelectionChangeEndEvent_42;

public:
	inline static int32_t get_offset_of_panelDimensions_4() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ___panelDimensions_4)); }
	inline Rect_t2360479859  get_panelDimensions_4() const { return ___panelDimensions_4; }
	inline Rect_t2360479859 * get_address_of_panelDimensions_4() { return &___panelDimensions_4; }
	inline void set_panelDimensions_4(Rect_t2360479859  value)
	{
		___panelDimensions_4 = value;
	}

	inline static int32_t get_offset_of__screensContainer_5() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ____screensContainer_5)); }
	inline RectTransform_t3704657025 * get__screensContainer_5() const { return ____screensContainer_5; }
	inline RectTransform_t3704657025 ** get_address_of__screensContainer_5() { return &____screensContainer_5; }
	inline void set__screensContainer_5(RectTransform_t3704657025 * value)
	{
		____screensContainer_5 = value;
		Il2CppCodeGenWriteBarrier((&____screensContainer_5), value);
	}

	inline static int32_t get_offset_of__isVertical_6() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ____isVertical_6)); }
	inline bool get__isVertical_6() const { return ____isVertical_6; }
	inline bool* get_address_of__isVertical_6() { return &____isVertical_6; }
	inline void set__isVertical_6(bool value)
	{
		____isVertical_6 = value;
	}

	inline static int32_t get_offset_of__screens_7() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ____screens_7)); }
	inline int32_t get__screens_7() const { return ____screens_7; }
	inline int32_t* get_address_of__screens_7() { return &____screens_7; }
	inline void set__screens_7(int32_t value)
	{
		____screens_7 = value;
	}

	inline static int32_t get_offset_of__scrollStartPosition_8() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ____scrollStartPosition_8)); }
	inline float get__scrollStartPosition_8() const { return ____scrollStartPosition_8; }
	inline float* get_address_of__scrollStartPosition_8() { return &____scrollStartPosition_8; }
	inline void set__scrollStartPosition_8(float value)
	{
		____scrollStartPosition_8 = value;
	}

	inline static int32_t get_offset_of__childSize_9() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ____childSize_9)); }
	inline float get__childSize_9() const { return ____childSize_9; }
	inline float* get_address_of__childSize_9() { return &____childSize_9; }
	inline void set__childSize_9(float value)
	{
		____childSize_9 = value;
	}

	inline static int32_t get_offset_of__childPos_10() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ____childPos_10)); }
	inline float get__childPos_10() const { return ____childPos_10; }
	inline float* get_address_of__childPos_10() { return &____childPos_10; }
	inline void set__childPos_10(float value)
	{
		____childPos_10 = value;
	}

	inline static int32_t get_offset_of__maskSize_11() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ____maskSize_11)); }
	inline float get__maskSize_11() const { return ____maskSize_11; }
	inline float* get_address_of__maskSize_11() { return &____maskSize_11; }
	inline void set__maskSize_11(float value)
	{
		____maskSize_11 = value;
	}

	inline static int32_t get_offset_of__childAnchorPoint_12() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ____childAnchorPoint_12)); }
	inline Vector2_t2156229523  get__childAnchorPoint_12() const { return ____childAnchorPoint_12; }
	inline Vector2_t2156229523 * get_address_of__childAnchorPoint_12() { return &____childAnchorPoint_12; }
	inline void set__childAnchorPoint_12(Vector2_t2156229523  value)
	{
		____childAnchorPoint_12 = value;
	}

	inline static int32_t get_offset_of__scroll_rect_13() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ____scroll_rect_13)); }
	inline ScrollRect_t4137855814 * get__scroll_rect_13() const { return ____scroll_rect_13; }
	inline ScrollRect_t4137855814 ** get_address_of__scroll_rect_13() { return &____scroll_rect_13; }
	inline void set__scroll_rect_13(ScrollRect_t4137855814 * value)
	{
		____scroll_rect_13 = value;
		Il2CppCodeGenWriteBarrier((&____scroll_rect_13), value);
	}

	inline static int32_t get_offset_of__lerp_target_14() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ____lerp_target_14)); }
	inline Vector3_t3722313464  get__lerp_target_14() const { return ____lerp_target_14; }
	inline Vector3_t3722313464 * get_address_of__lerp_target_14() { return &____lerp_target_14; }
	inline void set__lerp_target_14(Vector3_t3722313464  value)
	{
		____lerp_target_14 = value;
	}

	inline static int32_t get_offset_of__lerp_15() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ____lerp_15)); }
	inline bool get__lerp_15() const { return ____lerp_15; }
	inline bool* get_address_of__lerp_15() { return &____lerp_15; }
	inline void set__lerp_15(bool value)
	{
		____lerp_15 = value;
	}

	inline static int32_t get_offset_of__pointerDown_16() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ____pointerDown_16)); }
	inline bool get__pointerDown_16() const { return ____pointerDown_16; }
	inline bool* get_address_of__pointerDown_16() { return &____pointerDown_16; }
	inline void set__pointerDown_16(bool value)
	{
		____pointerDown_16 = value;
	}

	inline static int32_t get_offset_of__settled_17() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ____settled_17)); }
	inline bool get__settled_17() const { return ____settled_17; }
	inline bool* get_address_of__settled_17() { return &____settled_17; }
	inline void set__settled_17(bool value)
	{
		____settled_17 = value;
	}

	inline static int32_t get_offset_of__startPosition_18() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ____startPosition_18)); }
	inline Vector3_t3722313464  get__startPosition_18() const { return ____startPosition_18; }
	inline Vector3_t3722313464 * get_address_of__startPosition_18() { return &____startPosition_18; }
	inline void set__startPosition_18(Vector3_t3722313464  value)
	{
		____startPosition_18 = value;
	}

	inline static int32_t get_offset_of__currentPage_19() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ____currentPage_19)); }
	inline int32_t get__currentPage_19() const { return ____currentPage_19; }
	inline int32_t* get_address_of__currentPage_19() { return &____currentPage_19; }
	inline void set__currentPage_19(int32_t value)
	{
		____currentPage_19 = value;
	}

	inline static int32_t get_offset_of__previousPage_20() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ____previousPage_20)); }
	inline int32_t get__previousPage_20() const { return ____previousPage_20; }
	inline int32_t* get_address_of__previousPage_20() { return &____previousPage_20; }
	inline void set__previousPage_20(int32_t value)
	{
		____previousPage_20 = value;
	}

	inline static int32_t get_offset_of__halfNoVisibleItems_21() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ____halfNoVisibleItems_21)); }
	inline int32_t get__halfNoVisibleItems_21() const { return ____halfNoVisibleItems_21; }
	inline int32_t* get_address_of__halfNoVisibleItems_21() { return &____halfNoVisibleItems_21; }
	inline void set__halfNoVisibleItems_21(int32_t value)
	{
		____halfNoVisibleItems_21 = value;
	}

	inline static int32_t get_offset_of__moveStarted_22() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ____moveStarted_22)); }
	inline bool get__moveStarted_22() const { return ____moveStarted_22; }
	inline bool* get_address_of__moveStarted_22() { return &____moveStarted_22; }
	inline void set__moveStarted_22(bool value)
	{
		____moveStarted_22 = value;
	}

	inline static int32_t get_offset_of__bottomItem_23() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ____bottomItem_23)); }
	inline int32_t get__bottomItem_23() const { return ____bottomItem_23; }
	inline int32_t* get_address_of__bottomItem_23() { return &____bottomItem_23; }
	inline void set__bottomItem_23(int32_t value)
	{
		____bottomItem_23 = value;
	}

	inline static int32_t get_offset_of__topItem_24() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ____topItem_24)); }
	inline int32_t get__topItem_24() const { return ____topItem_24; }
	inline int32_t* get_address_of__topItem_24() { return &____topItem_24; }
	inline void set__topItem_24(int32_t value)
	{
		____topItem_24 = value;
	}

	inline static int32_t get_offset_of_StartingScreen_25() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ___StartingScreen_25)); }
	inline int32_t get_StartingScreen_25() const { return ___StartingScreen_25; }
	inline int32_t* get_address_of_StartingScreen_25() { return &___StartingScreen_25; }
	inline void set_StartingScreen_25(int32_t value)
	{
		___StartingScreen_25 = value;
	}

	inline static int32_t get_offset_of_PageStep_26() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ___PageStep_26)); }
	inline float get_PageStep_26() const { return ___PageStep_26; }
	inline float* get_address_of_PageStep_26() { return &___PageStep_26; }
	inline void set_PageStep_26(float value)
	{
		___PageStep_26 = value;
	}

	inline static int32_t get_offset_of_Pagination_27() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ___Pagination_27)); }
	inline GameObject_t1113636619 * get_Pagination_27() const { return ___Pagination_27; }
	inline GameObject_t1113636619 ** get_address_of_Pagination_27() { return &___Pagination_27; }
	inline void set_Pagination_27(GameObject_t1113636619 * value)
	{
		___Pagination_27 = value;
		Il2CppCodeGenWriteBarrier((&___Pagination_27), value);
	}

	inline static int32_t get_offset_of_PrevButton_28() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ___PrevButton_28)); }
	inline GameObject_t1113636619 * get_PrevButton_28() const { return ___PrevButton_28; }
	inline GameObject_t1113636619 ** get_address_of_PrevButton_28() { return &___PrevButton_28; }
	inline void set_PrevButton_28(GameObject_t1113636619 * value)
	{
		___PrevButton_28 = value;
		Il2CppCodeGenWriteBarrier((&___PrevButton_28), value);
	}

	inline static int32_t get_offset_of_NextButton_29() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ___NextButton_29)); }
	inline GameObject_t1113636619 * get_NextButton_29() const { return ___NextButton_29; }
	inline GameObject_t1113636619 ** get_address_of_NextButton_29() { return &___NextButton_29; }
	inline void set_NextButton_29(GameObject_t1113636619 * value)
	{
		___NextButton_29 = value;
		Il2CppCodeGenWriteBarrier((&___NextButton_29), value);
	}

	inline static int32_t get_offset_of_transitionSpeed_30() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ___transitionSpeed_30)); }
	inline float get_transitionSpeed_30() const { return ___transitionSpeed_30; }
	inline float* get_address_of_transitionSpeed_30() { return &___transitionSpeed_30; }
	inline void set_transitionSpeed_30(float value)
	{
		___transitionSpeed_30 = value;
	}

	inline static int32_t get_offset_of_UseFastSwipe_31() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ___UseFastSwipe_31)); }
	inline bool get_UseFastSwipe_31() const { return ___UseFastSwipe_31; }
	inline bool* get_address_of_UseFastSwipe_31() { return &___UseFastSwipe_31; }
	inline void set_UseFastSwipe_31(bool value)
	{
		___UseFastSwipe_31 = value;
	}

	inline static int32_t get_offset_of_FastSwipeThreshold_32() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ___FastSwipeThreshold_32)); }
	inline int32_t get_FastSwipeThreshold_32() const { return ___FastSwipeThreshold_32; }
	inline int32_t* get_address_of_FastSwipeThreshold_32() { return &___FastSwipeThreshold_32; }
	inline void set_FastSwipeThreshold_32(int32_t value)
	{
		___FastSwipeThreshold_32 = value;
	}

	inline static int32_t get_offset_of_SwipeVelocityThreshold_33() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ___SwipeVelocityThreshold_33)); }
	inline int32_t get_SwipeVelocityThreshold_33() const { return ___SwipeVelocityThreshold_33; }
	inline int32_t* get_address_of_SwipeVelocityThreshold_33() { return &___SwipeVelocityThreshold_33; }
	inline void set_SwipeVelocityThreshold_33(int32_t value)
	{
		___SwipeVelocityThreshold_33 = value;
	}

	inline static int32_t get_offset_of_MaskArea_34() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ___MaskArea_34)); }
	inline RectTransform_t3704657025 * get_MaskArea_34() const { return ___MaskArea_34; }
	inline RectTransform_t3704657025 ** get_address_of_MaskArea_34() { return &___MaskArea_34; }
	inline void set_MaskArea_34(RectTransform_t3704657025 * value)
	{
		___MaskArea_34 = value;
		Il2CppCodeGenWriteBarrier((&___MaskArea_34), value);
	}

	inline static int32_t get_offset_of_MaskBuffer_35() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ___MaskBuffer_35)); }
	inline float get_MaskBuffer_35() const { return ___MaskBuffer_35; }
	inline float* get_address_of_MaskBuffer_35() { return &___MaskBuffer_35; }
	inline void set_MaskBuffer_35(float value)
	{
		___MaskBuffer_35 = value;
	}

	inline static int32_t get_offset_of_JumpOnEnable_36() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ___JumpOnEnable_36)); }
	inline bool get_JumpOnEnable_36() const { return ___JumpOnEnable_36; }
	inline bool* get_address_of_JumpOnEnable_36() { return &___JumpOnEnable_36; }
	inline void set_JumpOnEnable_36(bool value)
	{
		___JumpOnEnable_36 = value;
	}

	inline static int32_t get_offset_of_RestartOnEnable_37() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ___RestartOnEnable_37)); }
	inline bool get_RestartOnEnable_37() const { return ___RestartOnEnable_37; }
	inline bool* get_address_of_RestartOnEnable_37() { return &___RestartOnEnable_37; }
	inline void set_RestartOnEnable_37(bool value)
	{
		___RestartOnEnable_37 = value;
	}

	inline static int32_t get_offset_of_UseParentTransform_38() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ___UseParentTransform_38)); }
	inline bool get_UseParentTransform_38() const { return ___UseParentTransform_38; }
	inline bool* get_address_of_UseParentTransform_38() { return &___UseParentTransform_38; }
	inline void set_UseParentTransform_38(bool value)
	{
		___UseParentTransform_38 = value;
	}

	inline static int32_t get_offset_of_ChildObjects_39() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ___ChildObjects_39)); }
	inline GameObjectU5BU5D_t3328599146* get_ChildObjects_39() const { return ___ChildObjects_39; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_ChildObjects_39() { return &___ChildObjects_39; }
	inline void set_ChildObjects_39(GameObjectU5BU5D_t3328599146* value)
	{
		___ChildObjects_39 = value;
		Il2CppCodeGenWriteBarrier((&___ChildObjects_39), value);
	}

	inline static int32_t get_offset_of_m_OnSelectionChangeStartEvent_40() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ___m_OnSelectionChangeStartEvent_40)); }
	inline SelectionChangeStartEvent_t3723081512 * get_m_OnSelectionChangeStartEvent_40() const { return ___m_OnSelectionChangeStartEvent_40; }
	inline SelectionChangeStartEvent_t3723081512 ** get_address_of_m_OnSelectionChangeStartEvent_40() { return &___m_OnSelectionChangeStartEvent_40; }
	inline void set_m_OnSelectionChangeStartEvent_40(SelectionChangeStartEvent_t3723081512 * value)
	{
		___m_OnSelectionChangeStartEvent_40 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnSelectionChangeStartEvent_40), value);
	}

	inline static int32_t get_offset_of_m_OnSelectionPageChangedEvent_41() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ___m_OnSelectionPageChangedEvent_41)); }
	inline SelectionPageChangedEvent_t415408402 * get_m_OnSelectionPageChangedEvent_41() const { return ___m_OnSelectionPageChangedEvent_41; }
	inline SelectionPageChangedEvent_t415408402 ** get_address_of_m_OnSelectionPageChangedEvent_41() { return &___m_OnSelectionPageChangedEvent_41; }
	inline void set_m_OnSelectionPageChangedEvent_41(SelectionPageChangedEvent_t415408402 * value)
	{
		___m_OnSelectionPageChangedEvent_41 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnSelectionPageChangedEvent_41), value);
	}

	inline static int32_t get_offset_of_m_OnSelectionChangeEndEvent_42() { return static_cast<int32_t>(offsetof(ScrollSnapBase_t2887778829, ___m_OnSelectionChangeEndEvent_42)); }
	inline SelectionChangeEndEvent_t4247191949 * get_m_OnSelectionChangeEndEvent_42() const { return ___m_OnSelectionChangeEndEvent_42; }
	inline SelectionChangeEndEvent_t4247191949 ** get_address_of_m_OnSelectionChangeEndEvent_42() { return &___m_OnSelectionChangeEndEvent_42; }
	inline void set_m_OnSelectionChangeEndEvent_42(SelectionChangeEndEvent_t4247191949 * value)
	{
		___m_OnSelectionChangeEndEvent_42 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnSelectionChangeEndEvent_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLSNAPBASE_T2887778829_H
#ifndef UISCROLLTOSELECTIONXY_T1454929589_H
#define UISCROLLTOSELECTIONXY_T1454929589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UIScrollToSelectionXY
struct  UIScrollToSelectionXY_t1454929589  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UnityEngine.UI.Extensions.UIScrollToSelectionXY::scrollSpeed
	float ___scrollSpeed_4;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.UIScrollToSelectionXY::layoutListGroup
	RectTransform_t3704657025 * ___layoutListGroup_5;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.UIScrollToSelectionXY::targetScrollObject
	RectTransform_t3704657025 * ___targetScrollObject_6;
	// System.Boolean UnityEngine.UI.Extensions.UIScrollToSelectionXY::scrollToSelection
	bool ___scrollToSelection_7;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.UIScrollToSelectionXY::scrollWindow
	RectTransform_t3704657025 * ___scrollWindow_8;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.UIScrollToSelectionXY::currentCanvas
	RectTransform_t3704657025 * ___currentCanvas_9;
	// UnityEngine.UI.ScrollRect UnityEngine.UI.Extensions.UIScrollToSelectionXY::targetScrollRect
	ScrollRect_t4137855814 * ___targetScrollRect_10;

public:
	inline static int32_t get_offset_of_scrollSpeed_4() { return static_cast<int32_t>(offsetof(UIScrollToSelectionXY_t1454929589, ___scrollSpeed_4)); }
	inline float get_scrollSpeed_4() const { return ___scrollSpeed_4; }
	inline float* get_address_of_scrollSpeed_4() { return &___scrollSpeed_4; }
	inline void set_scrollSpeed_4(float value)
	{
		___scrollSpeed_4 = value;
	}

	inline static int32_t get_offset_of_layoutListGroup_5() { return static_cast<int32_t>(offsetof(UIScrollToSelectionXY_t1454929589, ___layoutListGroup_5)); }
	inline RectTransform_t3704657025 * get_layoutListGroup_5() const { return ___layoutListGroup_5; }
	inline RectTransform_t3704657025 ** get_address_of_layoutListGroup_5() { return &___layoutListGroup_5; }
	inline void set_layoutListGroup_5(RectTransform_t3704657025 * value)
	{
		___layoutListGroup_5 = value;
		Il2CppCodeGenWriteBarrier((&___layoutListGroup_5), value);
	}

	inline static int32_t get_offset_of_targetScrollObject_6() { return static_cast<int32_t>(offsetof(UIScrollToSelectionXY_t1454929589, ___targetScrollObject_6)); }
	inline RectTransform_t3704657025 * get_targetScrollObject_6() const { return ___targetScrollObject_6; }
	inline RectTransform_t3704657025 ** get_address_of_targetScrollObject_6() { return &___targetScrollObject_6; }
	inline void set_targetScrollObject_6(RectTransform_t3704657025 * value)
	{
		___targetScrollObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___targetScrollObject_6), value);
	}

	inline static int32_t get_offset_of_scrollToSelection_7() { return static_cast<int32_t>(offsetof(UIScrollToSelectionXY_t1454929589, ___scrollToSelection_7)); }
	inline bool get_scrollToSelection_7() const { return ___scrollToSelection_7; }
	inline bool* get_address_of_scrollToSelection_7() { return &___scrollToSelection_7; }
	inline void set_scrollToSelection_7(bool value)
	{
		___scrollToSelection_7 = value;
	}

	inline static int32_t get_offset_of_scrollWindow_8() { return static_cast<int32_t>(offsetof(UIScrollToSelectionXY_t1454929589, ___scrollWindow_8)); }
	inline RectTransform_t3704657025 * get_scrollWindow_8() const { return ___scrollWindow_8; }
	inline RectTransform_t3704657025 ** get_address_of_scrollWindow_8() { return &___scrollWindow_8; }
	inline void set_scrollWindow_8(RectTransform_t3704657025 * value)
	{
		___scrollWindow_8 = value;
		Il2CppCodeGenWriteBarrier((&___scrollWindow_8), value);
	}

	inline static int32_t get_offset_of_currentCanvas_9() { return static_cast<int32_t>(offsetof(UIScrollToSelectionXY_t1454929589, ___currentCanvas_9)); }
	inline RectTransform_t3704657025 * get_currentCanvas_9() const { return ___currentCanvas_9; }
	inline RectTransform_t3704657025 ** get_address_of_currentCanvas_9() { return &___currentCanvas_9; }
	inline void set_currentCanvas_9(RectTransform_t3704657025 * value)
	{
		___currentCanvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___currentCanvas_9), value);
	}

	inline static int32_t get_offset_of_targetScrollRect_10() { return static_cast<int32_t>(offsetof(UIScrollToSelectionXY_t1454929589, ___targetScrollRect_10)); }
	inline ScrollRect_t4137855814 * get_targetScrollRect_10() const { return ___targetScrollRect_10; }
	inline ScrollRect_t4137855814 ** get_address_of_targetScrollRect_10() { return &___targetScrollRect_10; }
	inline void set_targetScrollRect_10(ScrollRect_t4137855814 * value)
	{
		___targetScrollRect_10 = value;
		Il2CppCodeGenWriteBarrier((&___targetScrollRect_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UISCROLLTOSELECTIONXY_T1454929589_H
#ifndef UISELECTABLEEXTENSION_T989851811_H
#define UISELECTABLEEXTENSION_T989851811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UISelectableExtension
struct  UISelectableExtension_t989851811  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Extensions.UISelectableExtension/UIButtonEvent UnityEngine.UI.Extensions.UISelectableExtension::OnButtonPress
	UIButtonEvent_t4276706895 * ___OnButtonPress_4;
	// UnityEngine.UI.Extensions.UISelectableExtension/UIButtonEvent UnityEngine.UI.Extensions.UISelectableExtension::OnButtonRelease
	UIButtonEvent_t4276706895 * ___OnButtonRelease_5;
	// UnityEngine.UI.Extensions.UISelectableExtension/UIButtonEvent UnityEngine.UI.Extensions.UISelectableExtension::OnButtonHeld
	UIButtonEvent_t4276706895 * ___OnButtonHeld_6;
	// System.Boolean UnityEngine.UI.Extensions.UISelectableExtension::_pressed
	bool ____pressed_7;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.UI.Extensions.UISelectableExtension::_heldEventData
	PointerEventData_t3807901092 * ____heldEventData_8;

public:
	inline static int32_t get_offset_of_OnButtonPress_4() { return static_cast<int32_t>(offsetof(UISelectableExtension_t989851811, ___OnButtonPress_4)); }
	inline UIButtonEvent_t4276706895 * get_OnButtonPress_4() const { return ___OnButtonPress_4; }
	inline UIButtonEvent_t4276706895 ** get_address_of_OnButtonPress_4() { return &___OnButtonPress_4; }
	inline void set_OnButtonPress_4(UIButtonEvent_t4276706895 * value)
	{
		___OnButtonPress_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnButtonPress_4), value);
	}

	inline static int32_t get_offset_of_OnButtonRelease_5() { return static_cast<int32_t>(offsetof(UISelectableExtension_t989851811, ___OnButtonRelease_5)); }
	inline UIButtonEvent_t4276706895 * get_OnButtonRelease_5() const { return ___OnButtonRelease_5; }
	inline UIButtonEvent_t4276706895 ** get_address_of_OnButtonRelease_5() { return &___OnButtonRelease_5; }
	inline void set_OnButtonRelease_5(UIButtonEvent_t4276706895 * value)
	{
		___OnButtonRelease_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnButtonRelease_5), value);
	}

	inline static int32_t get_offset_of_OnButtonHeld_6() { return static_cast<int32_t>(offsetof(UISelectableExtension_t989851811, ___OnButtonHeld_6)); }
	inline UIButtonEvent_t4276706895 * get_OnButtonHeld_6() const { return ___OnButtonHeld_6; }
	inline UIButtonEvent_t4276706895 ** get_address_of_OnButtonHeld_6() { return &___OnButtonHeld_6; }
	inline void set_OnButtonHeld_6(UIButtonEvent_t4276706895 * value)
	{
		___OnButtonHeld_6 = value;
		Il2CppCodeGenWriteBarrier((&___OnButtonHeld_6), value);
	}

	inline static int32_t get_offset_of__pressed_7() { return static_cast<int32_t>(offsetof(UISelectableExtension_t989851811, ____pressed_7)); }
	inline bool get__pressed_7() const { return ____pressed_7; }
	inline bool* get_address_of__pressed_7() { return &____pressed_7; }
	inline void set__pressed_7(bool value)
	{
		____pressed_7 = value;
	}

	inline static int32_t get_offset_of__heldEventData_8() { return static_cast<int32_t>(offsetof(UISelectableExtension_t989851811, ____heldEventData_8)); }
	inline PointerEventData_t3807901092 * get__heldEventData_8() const { return ____heldEventData_8; }
	inline PointerEventData_t3807901092 ** get_address_of__heldEventData_8() { return &____heldEventData_8; }
	inline void set__heldEventData_8(PointerEventData_t3807901092 * value)
	{
		____heldEventData_8 = value;
		Il2CppCodeGenWriteBarrier((&____heldEventData_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UISELECTABLEEXTENSION_T989851811_H
#ifndef UISOFTADDITIVEEFFECT_T1842650896_H
#define UISOFTADDITIVEEFFECT_T1842650896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UISoftAdditiveEffect
struct  UISoftAdditiveEffect_t1842650896  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.MaskableGraphic UnityEngine.UI.Extensions.UISoftAdditiveEffect::mGraphic
	MaskableGraphic_t3839221559 * ___mGraphic_4;

public:
	inline static int32_t get_offset_of_mGraphic_4() { return static_cast<int32_t>(offsetof(UISoftAdditiveEffect_t1842650896, ___mGraphic_4)); }
	inline MaskableGraphic_t3839221559 * get_mGraphic_4() const { return ___mGraphic_4; }
	inline MaskableGraphic_t3839221559 ** get_address_of_mGraphic_4() { return &___mGraphic_4; }
	inline void set_mGraphic_4(MaskableGraphic_t3839221559 * value)
	{
		___mGraphic_4 = value;
		Il2CppCodeGenWriteBarrier((&___mGraphic_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UISOFTADDITIVEEFFECT_T1842650896_H
#ifndef UIVERTICALSCROLLER_T3292120078_H
#define UIVERTICALSCROLLER_T3292120078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UIVerticalScroller
struct  UIVerticalScroller_t3292120078  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.UIVerticalScroller::_scrollingPanel
	RectTransform_t3704657025 * ____scrollingPanel_4;
	// UnityEngine.GameObject[] UnityEngine.UI.Extensions.UIVerticalScroller::_arrayOfElements
	GameObjectU5BU5D_t3328599146* ____arrayOfElements_5;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.UIVerticalScroller::_center
	RectTransform_t3704657025 * ____center_6;
	// System.Int32 UnityEngine.UI.Extensions.UIVerticalScroller::StartingIndex
	int32_t ___StartingIndex_7;
	// UnityEngine.GameObject UnityEngine.UI.Extensions.UIVerticalScroller::ScrollUpButton
	GameObject_t1113636619 * ___ScrollUpButton_8;
	// UnityEngine.GameObject UnityEngine.UI.Extensions.UIVerticalScroller::ScrollDownButton
	GameObject_t1113636619 * ___ScrollDownButton_9;
	// UnityEngine.Events.UnityEvent`1<System.Int32> UnityEngine.UI.Extensions.UIVerticalScroller::ButtonClicked
	UnityEvent_1_t3832605257 * ___ButtonClicked_10;
	// System.Single[] UnityEngine.UI.Extensions.UIVerticalScroller::distReposition
	SingleU5BU5D_t1444911251* ___distReposition_11;
	// System.Single[] UnityEngine.UI.Extensions.UIVerticalScroller::distance
	SingleU5BU5D_t1444911251* ___distance_12;
	// System.Int32 UnityEngine.UI.Extensions.UIVerticalScroller::minElementsNum
	int32_t ___minElementsNum_13;
	// System.Int32 UnityEngine.UI.Extensions.UIVerticalScroller::elementLength
	int32_t ___elementLength_14;
	// System.Single UnityEngine.UI.Extensions.UIVerticalScroller::deltaY
	float ___deltaY_15;
	// System.String UnityEngine.UI.Extensions.UIVerticalScroller::result
	String_t* ___result_16;

public:
	inline static int32_t get_offset_of__scrollingPanel_4() { return static_cast<int32_t>(offsetof(UIVerticalScroller_t3292120078, ____scrollingPanel_4)); }
	inline RectTransform_t3704657025 * get__scrollingPanel_4() const { return ____scrollingPanel_4; }
	inline RectTransform_t3704657025 ** get_address_of__scrollingPanel_4() { return &____scrollingPanel_4; }
	inline void set__scrollingPanel_4(RectTransform_t3704657025 * value)
	{
		____scrollingPanel_4 = value;
		Il2CppCodeGenWriteBarrier((&____scrollingPanel_4), value);
	}

	inline static int32_t get_offset_of__arrayOfElements_5() { return static_cast<int32_t>(offsetof(UIVerticalScroller_t3292120078, ____arrayOfElements_5)); }
	inline GameObjectU5BU5D_t3328599146* get__arrayOfElements_5() const { return ____arrayOfElements_5; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__arrayOfElements_5() { return &____arrayOfElements_5; }
	inline void set__arrayOfElements_5(GameObjectU5BU5D_t3328599146* value)
	{
		____arrayOfElements_5 = value;
		Il2CppCodeGenWriteBarrier((&____arrayOfElements_5), value);
	}

	inline static int32_t get_offset_of__center_6() { return static_cast<int32_t>(offsetof(UIVerticalScroller_t3292120078, ____center_6)); }
	inline RectTransform_t3704657025 * get__center_6() const { return ____center_6; }
	inline RectTransform_t3704657025 ** get_address_of__center_6() { return &____center_6; }
	inline void set__center_6(RectTransform_t3704657025 * value)
	{
		____center_6 = value;
		Il2CppCodeGenWriteBarrier((&____center_6), value);
	}

	inline static int32_t get_offset_of_StartingIndex_7() { return static_cast<int32_t>(offsetof(UIVerticalScroller_t3292120078, ___StartingIndex_7)); }
	inline int32_t get_StartingIndex_7() const { return ___StartingIndex_7; }
	inline int32_t* get_address_of_StartingIndex_7() { return &___StartingIndex_7; }
	inline void set_StartingIndex_7(int32_t value)
	{
		___StartingIndex_7 = value;
	}

	inline static int32_t get_offset_of_ScrollUpButton_8() { return static_cast<int32_t>(offsetof(UIVerticalScroller_t3292120078, ___ScrollUpButton_8)); }
	inline GameObject_t1113636619 * get_ScrollUpButton_8() const { return ___ScrollUpButton_8; }
	inline GameObject_t1113636619 ** get_address_of_ScrollUpButton_8() { return &___ScrollUpButton_8; }
	inline void set_ScrollUpButton_8(GameObject_t1113636619 * value)
	{
		___ScrollUpButton_8 = value;
		Il2CppCodeGenWriteBarrier((&___ScrollUpButton_8), value);
	}

	inline static int32_t get_offset_of_ScrollDownButton_9() { return static_cast<int32_t>(offsetof(UIVerticalScroller_t3292120078, ___ScrollDownButton_9)); }
	inline GameObject_t1113636619 * get_ScrollDownButton_9() const { return ___ScrollDownButton_9; }
	inline GameObject_t1113636619 ** get_address_of_ScrollDownButton_9() { return &___ScrollDownButton_9; }
	inline void set_ScrollDownButton_9(GameObject_t1113636619 * value)
	{
		___ScrollDownButton_9 = value;
		Il2CppCodeGenWriteBarrier((&___ScrollDownButton_9), value);
	}

	inline static int32_t get_offset_of_ButtonClicked_10() { return static_cast<int32_t>(offsetof(UIVerticalScroller_t3292120078, ___ButtonClicked_10)); }
	inline UnityEvent_1_t3832605257 * get_ButtonClicked_10() const { return ___ButtonClicked_10; }
	inline UnityEvent_1_t3832605257 ** get_address_of_ButtonClicked_10() { return &___ButtonClicked_10; }
	inline void set_ButtonClicked_10(UnityEvent_1_t3832605257 * value)
	{
		___ButtonClicked_10 = value;
		Il2CppCodeGenWriteBarrier((&___ButtonClicked_10), value);
	}

	inline static int32_t get_offset_of_distReposition_11() { return static_cast<int32_t>(offsetof(UIVerticalScroller_t3292120078, ___distReposition_11)); }
	inline SingleU5BU5D_t1444911251* get_distReposition_11() const { return ___distReposition_11; }
	inline SingleU5BU5D_t1444911251** get_address_of_distReposition_11() { return &___distReposition_11; }
	inline void set_distReposition_11(SingleU5BU5D_t1444911251* value)
	{
		___distReposition_11 = value;
		Il2CppCodeGenWriteBarrier((&___distReposition_11), value);
	}

	inline static int32_t get_offset_of_distance_12() { return static_cast<int32_t>(offsetof(UIVerticalScroller_t3292120078, ___distance_12)); }
	inline SingleU5BU5D_t1444911251* get_distance_12() const { return ___distance_12; }
	inline SingleU5BU5D_t1444911251** get_address_of_distance_12() { return &___distance_12; }
	inline void set_distance_12(SingleU5BU5D_t1444911251* value)
	{
		___distance_12 = value;
		Il2CppCodeGenWriteBarrier((&___distance_12), value);
	}

	inline static int32_t get_offset_of_minElementsNum_13() { return static_cast<int32_t>(offsetof(UIVerticalScroller_t3292120078, ___minElementsNum_13)); }
	inline int32_t get_minElementsNum_13() const { return ___minElementsNum_13; }
	inline int32_t* get_address_of_minElementsNum_13() { return &___minElementsNum_13; }
	inline void set_minElementsNum_13(int32_t value)
	{
		___minElementsNum_13 = value;
	}

	inline static int32_t get_offset_of_elementLength_14() { return static_cast<int32_t>(offsetof(UIVerticalScroller_t3292120078, ___elementLength_14)); }
	inline int32_t get_elementLength_14() const { return ___elementLength_14; }
	inline int32_t* get_address_of_elementLength_14() { return &___elementLength_14; }
	inline void set_elementLength_14(int32_t value)
	{
		___elementLength_14 = value;
	}

	inline static int32_t get_offset_of_deltaY_15() { return static_cast<int32_t>(offsetof(UIVerticalScroller_t3292120078, ___deltaY_15)); }
	inline float get_deltaY_15() const { return ___deltaY_15; }
	inline float* get_address_of_deltaY_15() { return &___deltaY_15; }
	inline void set_deltaY_15(float value)
	{
		___deltaY_15 = value;
	}

	inline static int32_t get_offset_of_result_16() { return static_cast<int32_t>(offsetof(UIVerticalScroller_t3292120078, ___result_16)); }
	inline String_t* get_result_16() const { return ___result_16; }
	inline String_t** get_address_of_result_16() { return &___result_16; }
	inline void set_result_16(String_t* value)
	{
		___result_16 = value;
		Il2CppCodeGenWriteBarrier((&___result_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIVERTICALSCROLLER_T3292120078_H
#ifndef UIWINDOWBASE_T1803419093_H
#define UIWINDOWBASE_T1803419093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UIWindowBase
struct  UIWindowBase_t1803419093  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.UIWindowBase::m_transform
	RectTransform_t3704657025 * ___m_transform_4;
	// System.Boolean UnityEngine.UI.Extensions.UIWindowBase::_isDragging
	bool ____isDragging_5;
	// UnityEngine.Vector3 UnityEngine.UI.Extensions.UIWindowBase::m_originalCoods
	Vector3_t3722313464  ___m_originalCoods_7;
	// UnityEngine.Canvas UnityEngine.UI.Extensions.UIWindowBase::m_canvas
	Canvas_t3310196443 * ___m_canvas_8;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.UIWindowBase::m_canvasRectTransform
	RectTransform_t3704657025 * ___m_canvasRectTransform_9;
	// System.Int32 UnityEngine.UI.Extensions.UIWindowBase::KeepWindowInCanvas
	int32_t ___KeepWindowInCanvas_10;

public:
	inline static int32_t get_offset_of_m_transform_4() { return static_cast<int32_t>(offsetof(UIWindowBase_t1803419093, ___m_transform_4)); }
	inline RectTransform_t3704657025 * get_m_transform_4() const { return ___m_transform_4; }
	inline RectTransform_t3704657025 ** get_address_of_m_transform_4() { return &___m_transform_4; }
	inline void set_m_transform_4(RectTransform_t3704657025 * value)
	{
		___m_transform_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_transform_4), value);
	}

	inline static int32_t get_offset_of__isDragging_5() { return static_cast<int32_t>(offsetof(UIWindowBase_t1803419093, ____isDragging_5)); }
	inline bool get__isDragging_5() const { return ____isDragging_5; }
	inline bool* get_address_of__isDragging_5() { return &____isDragging_5; }
	inline void set__isDragging_5(bool value)
	{
		____isDragging_5 = value;
	}

	inline static int32_t get_offset_of_m_originalCoods_7() { return static_cast<int32_t>(offsetof(UIWindowBase_t1803419093, ___m_originalCoods_7)); }
	inline Vector3_t3722313464  get_m_originalCoods_7() const { return ___m_originalCoods_7; }
	inline Vector3_t3722313464 * get_address_of_m_originalCoods_7() { return &___m_originalCoods_7; }
	inline void set_m_originalCoods_7(Vector3_t3722313464  value)
	{
		___m_originalCoods_7 = value;
	}

	inline static int32_t get_offset_of_m_canvas_8() { return static_cast<int32_t>(offsetof(UIWindowBase_t1803419093, ___m_canvas_8)); }
	inline Canvas_t3310196443 * get_m_canvas_8() const { return ___m_canvas_8; }
	inline Canvas_t3310196443 ** get_address_of_m_canvas_8() { return &___m_canvas_8; }
	inline void set_m_canvas_8(Canvas_t3310196443 * value)
	{
		___m_canvas_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_canvas_8), value);
	}

	inline static int32_t get_offset_of_m_canvasRectTransform_9() { return static_cast<int32_t>(offsetof(UIWindowBase_t1803419093, ___m_canvasRectTransform_9)); }
	inline RectTransform_t3704657025 * get_m_canvasRectTransform_9() const { return ___m_canvasRectTransform_9; }
	inline RectTransform_t3704657025 ** get_address_of_m_canvasRectTransform_9() { return &___m_canvasRectTransform_9; }
	inline void set_m_canvasRectTransform_9(RectTransform_t3704657025 * value)
	{
		___m_canvasRectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_canvasRectTransform_9), value);
	}

	inline static int32_t get_offset_of_KeepWindowInCanvas_10() { return static_cast<int32_t>(offsetof(UIWindowBase_t1803419093, ___KeepWindowInCanvas_10)); }
	inline int32_t get_KeepWindowInCanvas_10() const { return ___KeepWindowInCanvas_10; }
	inline int32_t* get_address_of_KeepWindowInCanvas_10() { return &___KeepWindowInCanvas_10; }
	inline void set_KeepWindowInCanvas_10(int32_t value)
	{
		___KeepWindowInCanvas_10 = value;
	}
};

struct UIWindowBase_t1803419093_StaticFields
{
public:
	// System.Boolean UnityEngine.UI.Extensions.UIWindowBase::ResetCoords
	bool ___ResetCoords_6;

public:
	inline static int32_t get_offset_of_ResetCoords_6() { return static_cast<int32_t>(offsetof(UIWindowBase_t1803419093_StaticFields, ___ResetCoords_6)); }
	inline bool get_ResetCoords_6() const { return ___ResetCoords_6; }
	inline bool* get_address_of_ResetCoords_6() { return &___ResetCoords_6; }
	inline void set_ResetCoords_6(bool value)
	{
		___ResetCoords_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIWINDOWBASE_T1803419093_H
#ifndef UI_INFINITESCROLL_T3303149176_H
#define UI_INFINITESCROLL_T3303149176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UI_InfiniteScroll
struct  UI_InfiniteScroll_t3303149176  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean UnityEngine.UI.Extensions.UI_InfiniteScroll::InitByUser
	bool ___InitByUser_4;
	// UnityEngine.UI.ScrollRect UnityEngine.UI.Extensions.UI_InfiniteScroll::_scrollRect
	ScrollRect_t4137855814 * ____scrollRect_5;
	// UnityEngine.UI.ContentSizeFitter UnityEngine.UI.Extensions.UI_InfiniteScroll::_contentSizeFitter
	ContentSizeFitter_t3850442145 * ____contentSizeFitter_6;
	// UnityEngine.UI.VerticalLayoutGroup UnityEngine.UI.Extensions.UI_InfiniteScroll::_verticalLayoutGroup
	VerticalLayoutGroup_t923838031 * ____verticalLayoutGroup_7;
	// UnityEngine.UI.HorizontalLayoutGroup UnityEngine.UI.Extensions.UI_InfiniteScroll::_horizontalLayoutGroup
	HorizontalLayoutGroup_t2586782146 * ____horizontalLayoutGroup_8;
	// UnityEngine.UI.GridLayoutGroup UnityEngine.UI.Extensions.UI_InfiniteScroll::_gridLayoutGroup
	GridLayoutGroup_t3046220461 * ____gridLayoutGroup_9;
	// System.Boolean UnityEngine.UI.Extensions.UI_InfiniteScroll::_isVertical
	bool ____isVertical_10;
	// System.Boolean UnityEngine.UI.Extensions.UI_InfiniteScroll::_isHorizontal
	bool ____isHorizontal_11;
	// System.Single UnityEngine.UI.Extensions.UI_InfiniteScroll::_disableMarginX
	float ____disableMarginX_12;
	// System.Single UnityEngine.UI.Extensions.UI_InfiniteScroll::_disableMarginY
	float ____disableMarginY_13;
	// System.Boolean UnityEngine.UI.Extensions.UI_InfiniteScroll::_hasDisabledGridComponents
	bool ____hasDisabledGridComponents_14;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.Extensions.UI_InfiniteScroll::items
	List_1_t881764471 * ___items_15;
	// UnityEngine.Vector2 UnityEngine.UI.Extensions.UI_InfiniteScroll::_newAnchoredPosition
	Vector2_t2156229523  ____newAnchoredPosition_16;
	// System.Single UnityEngine.UI.Extensions.UI_InfiniteScroll::_treshold
	float ____treshold_17;
	// System.Int32 UnityEngine.UI.Extensions.UI_InfiniteScroll::_itemCount
	int32_t ____itemCount_18;
	// System.Single UnityEngine.UI.Extensions.UI_InfiniteScroll::_recordOffsetX
	float ____recordOffsetX_19;
	// System.Single UnityEngine.UI.Extensions.UI_InfiniteScroll::_recordOffsetY
	float ____recordOffsetY_20;

public:
	inline static int32_t get_offset_of_InitByUser_4() { return static_cast<int32_t>(offsetof(UI_InfiniteScroll_t3303149176, ___InitByUser_4)); }
	inline bool get_InitByUser_4() const { return ___InitByUser_4; }
	inline bool* get_address_of_InitByUser_4() { return &___InitByUser_4; }
	inline void set_InitByUser_4(bool value)
	{
		___InitByUser_4 = value;
	}

	inline static int32_t get_offset_of__scrollRect_5() { return static_cast<int32_t>(offsetof(UI_InfiniteScroll_t3303149176, ____scrollRect_5)); }
	inline ScrollRect_t4137855814 * get__scrollRect_5() const { return ____scrollRect_5; }
	inline ScrollRect_t4137855814 ** get_address_of__scrollRect_5() { return &____scrollRect_5; }
	inline void set__scrollRect_5(ScrollRect_t4137855814 * value)
	{
		____scrollRect_5 = value;
		Il2CppCodeGenWriteBarrier((&____scrollRect_5), value);
	}

	inline static int32_t get_offset_of__contentSizeFitter_6() { return static_cast<int32_t>(offsetof(UI_InfiniteScroll_t3303149176, ____contentSizeFitter_6)); }
	inline ContentSizeFitter_t3850442145 * get__contentSizeFitter_6() const { return ____contentSizeFitter_6; }
	inline ContentSizeFitter_t3850442145 ** get_address_of__contentSizeFitter_6() { return &____contentSizeFitter_6; }
	inline void set__contentSizeFitter_6(ContentSizeFitter_t3850442145 * value)
	{
		____contentSizeFitter_6 = value;
		Il2CppCodeGenWriteBarrier((&____contentSizeFitter_6), value);
	}

	inline static int32_t get_offset_of__verticalLayoutGroup_7() { return static_cast<int32_t>(offsetof(UI_InfiniteScroll_t3303149176, ____verticalLayoutGroup_7)); }
	inline VerticalLayoutGroup_t923838031 * get__verticalLayoutGroup_7() const { return ____verticalLayoutGroup_7; }
	inline VerticalLayoutGroup_t923838031 ** get_address_of__verticalLayoutGroup_7() { return &____verticalLayoutGroup_7; }
	inline void set__verticalLayoutGroup_7(VerticalLayoutGroup_t923838031 * value)
	{
		____verticalLayoutGroup_7 = value;
		Il2CppCodeGenWriteBarrier((&____verticalLayoutGroup_7), value);
	}

	inline static int32_t get_offset_of__horizontalLayoutGroup_8() { return static_cast<int32_t>(offsetof(UI_InfiniteScroll_t3303149176, ____horizontalLayoutGroup_8)); }
	inline HorizontalLayoutGroup_t2586782146 * get__horizontalLayoutGroup_8() const { return ____horizontalLayoutGroup_8; }
	inline HorizontalLayoutGroup_t2586782146 ** get_address_of__horizontalLayoutGroup_8() { return &____horizontalLayoutGroup_8; }
	inline void set__horizontalLayoutGroup_8(HorizontalLayoutGroup_t2586782146 * value)
	{
		____horizontalLayoutGroup_8 = value;
		Il2CppCodeGenWriteBarrier((&____horizontalLayoutGroup_8), value);
	}

	inline static int32_t get_offset_of__gridLayoutGroup_9() { return static_cast<int32_t>(offsetof(UI_InfiniteScroll_t3303149176, ____gridLayoutGroup_9)); }
	inline GridLayoutGroup_t3046220461 * get__gridLayoutGroup_9() const { return ____gridLayoutGroup_9; }
	inline GridLayoutGroup_t3046220461 ** get_address_of__gridLayoutGroup_9() { return &____gridLayoutGroup_9; }
	inline void set__gridLayoutGroup_9(GridLayoutGroup_t3046220461 * value)
	{
		____gridLayoutGroup_9 = value;
		Il2CppCodeGenWriteBarrier((&____gridLayoutGroup_9), value);
	}

	inline static int32_t get_offset_of__isVertical_10() { return static_cast<int32_t>(offsetof(UI_InfiniteScroll_t3303149176, ____isVertical_10)); }
	inline bool get__isVertical_10() const { return ____isVertical_10; }
	inline bool* get_address_of__isVertical_10() { return &____isVertical_10; }
	inline void set__isVertical_10(bool value)
	{
		____isVertical_10 = value;
	}

	inline static int32_t get_offset_of__isHorizontal_11() { return static_cast<int32_t>(offsetof(UI_InfiniteScroll_t3303149176, ____isHorizontal_11)); }
	inline bool get__isHorizontal_11() const { return ____isHorizontal_11; }
	inline bool* get_address_of__isHorizontal_11() { return &____isHorizontal_11; }
	inline void set__isHorizontal_11(bool value)
	{
		____isHorizontal_11 = value;
	}

	inline static int32_t get_offset_of__disableMarginX_12() { return static_cast<int32_t>(offsetof(UI_InfiniteScroll_t3303149176, ____disableMarginX_12)); }
	inline float get__disableMarginX_12() const { return ____disableMarginX_12; }
	inline float* get_address_of__disableMarginX_12() { return &____disableMarginX_12; }
	inline void set__disableMarginX_12(float value)
	{
		____disableMarginX_12 = value;
	}

	inline static int32_t get_offset_of__disableMarginY_13() { return static_cast<int32_t>(offsetof(UI_InfiniteScroll_t3303149176, ____disableMarginY_13)); }
	inline float get__disableMarginY_13() const { return ____disableMarginY_13; }
	inline float* get_address_of__disableMarginY_13() { return &____disableMarginY_13; }
	inline void set__disableMarginY_13(float value)
	{
		____disableMarginY_13 = value;
	}

	inline static int32_t get_offset_of__hasDisabledGridComponents_14() { return static_cast<int32_t>(offsetof(UI_InfiniteScroll_t3303149176, ____hasDisabledGridComponents_14)); }
	inline bool get__hasDisabledGridComponents_14() const { return ____hasDisabledGridComponents_14; }
	inline bool* get_address_of__hasDisabledGridComponents_14() { return &____hasDisabledGridComponents_14; }
	inline void set__hasDisabledGridComponents_14(bool value)
	{
		____hasDisabledGridComponents_14 = value;
	}

	inline static int32_t get_offset_of_items_15() { return static_cast<int32_t>(offsetof(UI_InfiniteScroll_t3303149176, ___items_15)); }
	inline List_1_t881764471 * get_items_15() const { return ___items_15; }
	inline List_1_t881764471 ** get_address_of_items_15() { return &___items_15; }
	inline void set_items_15(List_1_t881764471 * value)
	{
		___items_15 = value;
		Il2CppCodeGenWriteBarrier((&___items_15), value);
	}

	inline static int32_t get_offset_of__newAnchoredPosition_16() { return static_cast<int32_t>(offsetof(UI_InfiniteScroll_t3303149176, ____newAnchoredPosition_16)); }
	inline Vector2_t2156229523  get__newAnchoredPosition_16() const { return ____newAnchoredPosition_16; }
	inline Vector2_t2156229523 * get_address_of__newAnchoredPosition_16() { return &____newAnchoredPosition_16; }
	inline void set__newAnchoredPosition_16(Vector2_t2156229523  value)
	{
		____newAnchoredPosition_16 = value;
	}

	inline static int32_t get_offset_of__treshold_17() { return static_cast<int32_t>(offsetof(UI_InfiniteScroll_t3303149176, ____treshold_17)); }
	inline float get__treshold_17() const { return ____treshold_17; }
	inline float* get_address_of__treshold_17() { return &____treshold_17; }
	inline void set__treshold_17(float value)
	{
		____treshold_17 = value;
	}

	inline static int32_t get_offset_of__itemCount_18() { return static_cast<int32_t>(offsetof(UI_InfiniteScroll_t3303149176, ____itemCount_18)); }
	inline int32_t get__itemCount_18() const { return ____itemCount_18; }
	inline int32_t* get_address_of__itemCount_18() { return &____itemCount_18; }
	inline void set__itemCount_18(int32_t value)
	{
		____itemCount_18 = value;
	}

	inline static int32_t get_offset_of__recordOffsetX_19() { return static_cast<int32_t>(offsetof(UI_InfiniteScroll_t3303149176, ____recordOffsetX_19)); }
	inline float get__recordOffsetX_19() const { return ____recordOffsetX_19; }
	inline float* get_address_of__recordOffsetX_19() { return &____recordOffsetX_19; }
	inline void set__recordOffsetX_19(float value)
	{
		____recordOffsetX_19 = value;
	}

	inline static int32_t get_offset_of__recordOffsetY_20() { return static_cast<int32_t>(offsetof(UI_InfiniteScroll_t3303149176, ____recordOffsetY_20)); }
	inline float get__recordOffsetY_20() const { return ____recordOffsetY_20; }
	inline float* get_address_of__recordOffsetY_20() { return &____recordOffsetY_20; }
	inline void set__recordOffsetY_20(float value)
	{
		____recordOffsetY_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UI_INFINITESCROLL_T3303149176_H
#ifndef UI_KNOB_T1735628298_H
#define UI_KNOB_T1735628298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UI_Knob
struct  UI_Knob_t1735628298  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Extensions.UI_Knob/Direction UnityEngine.UI.Extensions.UI_Knob::direction
	int32_t ___direction_4;
	// System.Single UnityEngine.UI.Extensions.UI_Knob::knobValue
	float ___knobValue_5;
	// System.Single UnityEngine.UI.Extensions.UI_Knob::maxValue
	float ___maxValue_6;
	// System.Int32 UnityEngine.UI.Extensions.UI_Knob::loops
	int32_t ___loops_7;
	// System.Boolean UnityEngine.UI.Extensions.UI_Knob::clampOutput01
	bool ___clampOutput01_8;
	// System.Boolean UnityEngine.UI.Extensions.UI_Knob::snapToPosition
	bool ___snapToPosition_9;
	// System.Int32 UnityEngine.UI.Extensions.UI_Knob::snapStepsPerLoop
	int32_t ___snapStepsPerLoop_10;
	// UnityEngine.UI.Extensions.KnobFloatValueEvent UnityEngine.UI.Extensions.UI_Knob::OnValueChanged
	KnobFloatValueEvent_t1285673625 * ___OnValueChanged_11;
	// System.Single UnityEngine.UI.Extensions.UI_Knob::_currentLoops
	float ____currentLoops_12;
	// System.Single UnityEngine.UI.Extensions.UI_Knob::_previousValue
	float ____previousValue_13;
	// System.Single UnityEngine.UI.Extensions.UI_Knob::_initAngle
	float ____initAngle_14;
	// System.Single UnityEngine.UI.Extensions.UI_Knob::_currentAngle
	float ____currentAngle_15;
	// UnityEngine.Vector2 UnityEngine.UI.Extensions.UI_Knob::_currentVector
	Vector2_t2156229523  ____currentVector_16;
	// UnityEngine.Quaternion UnityEngine.UI.Extensions.UI_Knob::_initRotation
	Quaternion_t2301928331  ____initRotation_17;
	// System.Boolean UnityEngine.UI.Extensions.UI_Knob::_canDrag
	bool ____canDrag_18;

public:
	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(UI_Knob_t1735628298, ___direction_4)); }
	inline int32_t get_direction_4() const { return ___direction_4; }
	inline int32_t* get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(int32_t value)
	{
		___direction_4 = value;
	}

	inline static int32_t get_offset_of_knobValue_5() { return static_cast<int32_t>(offsetof(UI_Knob_t1735628298, ___knobValue_5)); }
	inline float get_knobValue_5() const { return ___knobValue_5; }
	inline float* get_address_of_knobValue_5() { return &___knobValue_5; }
	inline void set_knobValue_5(float value)
	{
		___knobValue_5 = value;
	}

	inline static int32_t get_offset_of_maxValue_6() { return static_cast<int32_t>(offsetof(UI_Knob_t1735628298, ___maxValue_6)); }
	inline float get_maxValue_6() const { return ___maxValue_6; }
	inline float* get_address_of_maxValue_6() { return &___maxValue_6; }
	inline void set_maxValue_6(float value)
	{
		___maxValue_6 = value;
	}

	inline static int32_t get_offset_of_loops_7() { return static_cast<int32_t>(offsetof(UI_Knob_t1735628298, ___loops_7)); }
	inline int32_t get_loops_7() const { return ___loops_7; }
	inline int32_t* get_address_of_loops_7() { return &___loops_7; }
	inline void set_loops_7(int32_t value)
	{
		___loops_7 = value;
	}

	inline static int32_t get_offset_of_clampOutput01_8() { return static_cast<int32_t>(offsetof(UI_Knob_t1735628298, ___clampOutput01_8)); }
	inline bool get_clampOutput01_8() const { return ___clampOutput01_8; }
	inline bool* get_address_of_clampOutput01_8() { return &___clampOutput01_8; }
	inline void set_clampOutput01_8(bool value)
	{
		___clampOutput01_8 = value;
	}

	inline static int32_t get_offset_of_snapToPosition_9() { return static_cast<int32_t>(offsetof(UI_Knob_t1735628298, ___snapToPosition_9)); }
	inline bool get_snapToPosition_9() const { return ___snapToPosition_9; }
	inline bool* get_address_of_snapToPosition_9() { return &___snapToPosition_9; }
	inline void set_snapToPosition_9(bool value)
	{
		___snapToPosition_9 = value;
	}

	inline static int32_t get_offset_of_snapStepsPerLoop_10() { return static_cast<int32_t>(offsetof(UI_Knob_t1735628298, ___snapStepsPerLoop_10)); }
	inline int32_t get_snapStepsPerLoop_10() const { return ___snapStepsPerLoop_10; }
	inline int32_t* get_address_of_snapStepsPerLoop_10() { return &___snapStepsPerLoop_10; }
	inline void set_snapStepsPerLoop_10(int32_t value)
	{
		___snapStepsPerLoop_10 = value;
	}

	inline static int32_t get_offset_of_OnValueChanged_11() { return static_cast<int32_t>(offsetof(UI_Knob_t1735628298, ___OnValueChanged_11)); }
	inline KnobFloatValueEvent_t1285673625 * get_OnValueChanged_11() const { return ___OnValueChanged_11; }
	inline KnobFloatValueEvent_t1285673625 ** get_address_of_OnValueChanged_11() { return &___OnValueChanged_11; }
	inline void set_OnValueChanged_11(KnobFloatValueEvent_t1285673625 * value)
	{
		___OnValueChanged_11 = value;
		Il2CppCodeGenWriteBarrier((&___OnValueChanged_11), value);
	}

	inline static int32_t get_offset_of__currentLoops_12() { return static_cast<int32_t>(offsetof(UI_Knob_t1735628298, ____currentLoops_12)); }
	inline float get__currentLoops_12() const { return ____currentLoops_12; }
	inline float* get_address_of__currentLoops_12() { return &____currentLoops_12; }
	inline void set__currentLoops_12(float value)
	{
		____currentLoops_12 = value;
	}

	inline static int32_t get_offset_of__previousValue_13() { return static_cast<int32_t>(offsetof(UI_Knob_t1735628298, ____previousValue_13)); }
	inline float get__previousValue_13() const { return ____previousValue_13; }
	inline float* get_address_of__previousValue_13() { return &____previousValue_13; }
	inline void set__previousValue_13(float value)
	{
		____previousValue_13 = value;
	}

	inline static int32_t get_offset_of__initAngle_14() { return static_cast<int32_t>(offsetof(UI_Knob_t1735628298, ____initAngle_14)); }
	inline float get__initAngle_14() const { return ____initAngle_14; }
	inline float* get_address_of__initAngle_14() { return &____initAngle_14; }
	inline void set__initAngle_14(float value)
	{
		____initAngle_14 = value;
	}

	inline static int32_t get_offset_of__currentAngle_15() { return static_cast<int32_t>(offsetof(UI_Knob_t1735628298, ____currentAngle_15)); }
	inline float get__currentAngle_15() const { return ____currentAngle_15; }
	inline float* get_address_of__currentAngle_15() { return &____currentAngle_15; }
	inline void set__currentAngle_15(float value)
	{
		____currentAngle_15 = value;
	}

	inline static int32_t get_offset_of__currentVector_16() { return static_cast<int32_t>(offsetof(UI_Knob_t1735628298, ____currentVector_16)); }
	inline Vector2_t2156229523  get__currentVector_16() const { return ____currentVector_16; }
	inline Vector2_t2156229523 * get_address_of__currentVector_16() { return &____currentVector_16; }
	inline void set__currentVector_16(Vector2_t2156229523  value)
	{
		____currentVector_16 = value;
	}

	inline static int32_t get_offset_of__initRotation_17() { return static_cast<int32_t>(offsetof(UI_Knob_t1735628298, ____initRotation_17)); }
	inline Quaternion_t2301928331  get__initRotation_17() const { return ____initRotation_17; }
	inline Quaternion_t2301928331 * get_address_of__initRotation_17() { return &____initRotation_17; }
	inline void set__initRotation_17(Quaternion_t2301928331  value)
	{
		____initRotation_17 = value;
	}

	inline static int32_t get_offset_of__canDrag_18() { return static_cast<int32_t>(offsetof(UI_Knob_t1735628298, ____canDrag_18)); }
	inline bool get__canDrag_18() const { return ____canDrag_18; }
	inline bool* get_address_of__canDrag_18() { return &____canDrag_18; }
	inline void set__canDrag_18(bool value)
	{
		____canDrag_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UI_KNOB_T1735628298_H
#ifndef UI_SCROLLRECTOCCLUSION_T2700427833_H
#define UI_SCROLLRECTOCCLUSION_T2700427833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UI_ScrollRectOcclusion
struct  UI_ScrollRectOcclusion_t2700427833  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::InitByUser
	bool ___InitByUser_4;
	// UnityEngine.UI.ScrollRect UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::_scrollRect
	ScrollRect_t4137855814 * ____scrollRect_5;
	// UnityEngine.UI.ContentSizeFitter UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::_contentSizeFitter
	ContentSizeFitter_t3850442145 * ____contentSizeFitter_6;
	// UnityEngine.UI.VerticalLayoutGroup UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::_verticalLayoutGroup
	VerticalLayoutGroup_t923838031 * ____verticalLayoutGroup_7;
	// UnityEngine.UI.HorizontalLayoutGroup UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::_horizontalLayoutGroup
	HorizontalLayoutGroup_t2586782146 * ____horizontalLayoutGroup_8;
	// UnityEngine.UI.GridLayoutGroup UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::_gridLayoutGroup
	GridLayoutGroup_t3046220461 * ____gridLayoutGroup_9;
	// System.Boolean UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::_isVertical
	bool ____isVertical_10;
	// System.Boolean UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::_isHorizontal
	bool ____isHorizontal_11;
	// System.Single UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::_disableMarginX
	float ____disableMarginX_12;
	// System.Single UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::_disableMarginY
	float ____disableMarginY_13;
	// System.Boolean UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::hasDisabledGridComponents
	bool ___hasDisabledGridComponents_14;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::items
	List_1_t881764471 * ___items_15;

public:
	inline static int32_t get_offset_of_InitByUser_4() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ___InitByUser_4)); }
	inline bool get_InitByUser_4() const { return ___InitByUser_4; }
	inline bool* get_address_of_InitByUser_4() { return &___InitByUser_4; }
	inline void set_InitByUser_4(bool value)
	{
		___InitByUser_4 = value;
	}

	inline static int32_t get_offset_of__scrollRect_5() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ____scrollRect_5)); }
	inline ScrollRect_t4137855814 * get__scrollRect_5() const { return ____scrollRect_5; }
	inline ScrollRect_t4137855814 ** get_address_of__scrollRect_5() { return &____scrollRect_5; }
	inline void set__scrollRect_5(ScrollRect_t4137855814 * value)
	{
		____scrollRect_5 = value;
		Il2CppCodeGenWriteBarrier((&____scrollRect_5), value);
	}

	inline static int32_t get_offset_of__contentSizeFitter_6() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ____contentSizeFitter_6)); }
	inline ContentSizeFitter_t3850442145 * get__contentSizeFitter_6() const { return ____contentSizeFitter_6; }
	inline ContentSizeFitter_t3850442145 ** get_address_of__contentSizeFitter_6() { return &____contentSizeFitter_6; }
	inline void set__contentSizeFitter_6(ContentSizeFitter_t3850442145 * value)
	{
		____contentSizeFitter_6 = value;
		Il2CppCodeGenWriteBarrier((&____contentSizeFitter_6), value);
	}

	inline static int32_t get_offset_of__verticalLayoutGroup_7() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ____verticalLayoutGroup_7)); }
	inline VerticalLayoutGroup_t923838031 * get__verticalLayoutGroup_7() const { return ____verticalLayoutGroup_7; }
	inline VerticalLayoutGroup_t923838031 ** get_address_of__verticalLayoutGroup_7() { return &____verticalLayoutGroup_7; }
	inline void set__verticalLayoutGroup_7(VerticalLayoutGroup_t923838031 * value)
	{
		____verticalLayoutGroup_7 = value;
		Il2CppCodeGenWriteBarrier((&____verticalLayoutGroup_7), value);
	}

	inline static int32_t get_offset_of__horizontalLayoutGroup_8() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ____horizontalLayoutGroup_8)); }
	inline HorizontalLayoutGroup_t2586782146 * get__horizontalLayoutGroup_8() const { return ____horizontalLayoutGroup_8; }
	inline HorizontalLayoutGroup_t2586782146 ** get_address_of__horizontalLayoutGroup_8() { return &____horizontalLayoutGroup_8; }
	inline void set__horizontalLayoutGroup_8(HorizontalLayoutGroup_t2586782146 * value)
	{
		____horizontalLayoutGroup_8 = value;
		Il2CppCodeGenWriteBarrier((&____horizontalLayoutGroup_8), value);
	}

	inline static int32_t get_offset_of__gridLayoutGroup_9() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ____gridLayoutGroup_9)); }
	inline GridLayoutGroup_t3046220461 * get__gridLayoutGroup_9() const { return ____gridLayoutGroup_9; }
	inline GridLayoutGroup_t3046220461 ** get_address_of__gridLayoutGroup_9() { return &____gridLayoutGroup_9; }
	inline void set__gridLayoutGroup_9(GridLayoutGroup_t3046220461 * value)
	{
		____gridLayoutGroup_9 = value;
		Il2CppCodeGenWriteBarrier((&____gridLayoutGroup_9), value);
	}

	inline static int32_t get_offset_of__isVertical_10() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ____isVertical_10)); }
	inline bool get__isVertical_10() const { return ____isVertical_10; }
	inline bool* get_address_of__isVertical_10() { return &____isVertical_10; }
	inline void set__isVertical_10(bool value)
	{
		____isVertical_10 = value;
	}

	inline static int32_t get_offset_of__isHorizontal_11() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ____isHorizontal_11)); }
	inline bool get__isHorizontal_11() const { return ____isHorizontal_11; }
	inline bool* get_address_of__isHorizontal_11() { return &____isHorizontal_11; }
	inline void set__isHorizontal_11(bool value)
	{
		____isHorizontal_11 = value;
	}

	inline static int32_t get_offset_of__disableMarginX_12() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ____disableMarginX_12)); }
	inline float get__disableMarginX_12() const { return ____disableMarginX_12; }
	inline float* get_address_of__disableMarginX_12() { return &____disableMarginX_12; }
	inline void set__disableMarginX_12(float value)
	{
		____disableMarginX_12 = value;
	}

	inline static int32_t get_offset_of__disableMarginY_13() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ____disableMarginY_13)); }
	inline float get__disableMarginY_13() const { return ____disableMarginY_13; }
	inline float* get_address_of__disableMarginY_13() { return &____disableMarginY_13; }
	inline void set__disableMarginY_13(float value)
	{
		____disableMarginY_13 = value;
	}

	inline static int32_t get_offset_of_hasDisabledGridComponents_14() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ___hasDisabledGridComponents_14)); }
	inline bool get_hasDisabledGridComponents_14() const { return ___hasDisabledGridComponents_14; }
	inline bool* get_address_of_hasDisabledGridComponents_14() { return &___hasDisabledGridComponents_14; }
	inline void set_hasDisabledGridComponents_14(bool value)
	{
		___hasDisabledGridComponents_14 = value;
	}

	inline static int32_t get_offset_of_items_15() { return static_cast<int32_t>(offsetof(UI_ScrollRectOcclusion_t2700427833, ___items_15)); }
	inline List_1_t881764471 * get_items_15() const { return ___items_15; }
	inline List_1_t881764471 ** get_address_of_items_15() { return &___items_15; }
	inline void set_items_15(List_1_t881764471 * value)
	{
		___items_15 = value;
		Il2CppCodeGenWriteBarrier((&___items_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UI_SCROLLRECTOCCLUSION_T2700427833_H
#ifndef UI_TWEENSCALE_T1206981451_H
#define UI_TWEENSCALE_T1206981451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UI_TweenScale
struct  UI_TweenScale_t1206981451  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AnimationCurve UnityEngine.UI.Extensions.UI_TweenScale::animCurve
	AnimationCurve_t3046754366 * ___animCurve_4;
	// System.Single UnityEngine.UI.Extensions.UI_TweenScale::speed
	float ___speed_5;
	// System.Boolean UnityEngine.UI.Extensions.UI_TweenScale::isLoop
	bool ___isLoop_6;
	// System.Boolean UnityEngine.UI.Extensions.UI_TweenScale::playAtAwake
	bool ___playAtAwake_7;
	// System.Boolean UnityEngine.UI.Extensions.UI_TweenScale::isUniform
	bool ___isUniform_8;
	// UnityEngine.AnimationCurve UnityEngine.UI.Extensions.UI_TweenScale::animCurveY
	AnimationCurve_t3046754366 * ___animCurveY_9;
	// UnityEngine.Vector3 UnityEngine.UI.Extensions.UI_TweenScale::initScale
	Vector3_t3722313464  ___initScale_10;
	// UnityEngine.Transform UnityEngine.UI.Extensions.UI_TweenScale::myTransform
	Transform_t3600365921 * ___myTransform_11;
	// UnityEngine.Vector3 UnityEngine.UI.Extensions.UI_TweenScale::newScale
	Vector3_t3722313464  ___newScale_12;

public:
	inline static int32_t get_offset_of_animCurve_4() { return static_cast<int32_t>(offsetof(UI_TweenScale_t1206981451, ___animCurve_4)); }
	inline AnimationCurve_t3046754366 * get_animCurve_4() const { return ___animCurve_4; }
	inline AnimationCurve_t3046754366 ** get_address_of_animCurve_4() { return &___animCurve_4; }
	inline void set_animCurve_4(AnimationCurve_t3046754366 * value)
	{
		___animCurve_4 = value;
		Il2CppCodeGenWriteBarrier((&___animCurve_4), value);
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(UI_TweenScale_t1206981451, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_isLoop_6() { return static_cast<int32_t>(offsetof(UI_TweenScale_t1206981451, ___isLoop_6)); }
	inline bool get_isLoop_6() const { return ___isLoop_6; }
	inline bool* get_address_of_isLoop_6() { return &___isLoop_6; }
	inline void set_isLoop_6(bool value)
	{
		___isLoop_6 = value;
	}

	inline static int32_t get_offset_of_playAtAwake_7() { return static_cast<int32_t>(offsetof(UI_TweenScale_t1206981451, ___playAtAwake_7)); }
	inline bool get_playAtAwake_7() const { return ___playAtAwake_7; }
	inline bool* get_address_of_playAtAwake_7() { return &___playAtAwake_7; }
	inline void set_playAtAwake_7(bool value)
	{
		___playAtAwake_7 = value;
	}

	inline static int32_t get_offset_of_isUniform_8() { return static_cast<int32_t>(offsetof(UI_TweenScale_t1206981451, ___isUniform_8)); }
	inline bool get_isUniform_8() const { return ___isUniform_8; }
	inline bool* get_address_of_isUniform_8() { return &___isUniform_8; }
	inline void set_isUniform_8(bool value)
	{
		___isUniform_8 = value;
	}

	inline static int32_t get_offset_of_animCurveY_9() { return static_cast<int32_t>(offsetof(UI_TweenScale_t1206981451, ___animCurveY_9)); }
	inline AnimationCurve_t3046754366 * get_animCurveY_9() const { return ___animCurveY_9; }
	inline AnimationCurve_t3046754366 ** get_address_of_animCurveY_9() { return &___animCurveY_9; }
	inline void set_animCurveY_9(AnimationCurve_t3046754366 * value)
	{
		___animCurveY_9 = value;
		Il2CppCodeGenWriteBarrier((&___animCurveY_9), value);
	}

	inline static int32_t get_offset_of_initScale_10() { return static_cast<int32_t>(offsetof(UI_TweenScale_t1206981451, ___initScale_10)); }
	inline Vector3_t3722313464  get_initScale_10() const { return ___initScale_10; }
	inline Vector3_t3722313464 * get_address_of_initScale_10() { return &___initScale_10; }
	inline void set_initScale_10(Vector3_t3722313464  value)
	{
		___initScale_10 = value;
	}

	inline static int32_t get_offset_of_myTransform_11() { return static_cast<int32_t>(offsetof(UI_TweenScale_t1206981451, ___myTransform_11)); }
	inline Transform_t3600365921 * get_myTransform_11() const { return ___myTransform_11; }
	inline Transform_t3600365921 ** get_address_of_myTransform_11() { return &___myTransform_11; }
	inline void set_myTransform_11(Transform_t3600365921 * value)
	{
		___myTransform_11 = value;
		Il2CppCodeGenWriteBarrier((&___myTransform_11), value);
	}

	inline static int32_t get_offset_of_newScale_12() { return static_cast<int32_t>(offsetof(UI_TweenScale_t1206981451, ___newScale_12)); }
	inline Vector3_t3722313464  get_newScale_12() const { return ___newScale_12; }
	inline Vector3_t3722313464 * get_address_of_newScale_12() { return &___newScale_12; }
	inline void set_newScale_12(Vector3_t3722313464  value)
	{
		___newScale_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UI_TWEENSCALE_T1206981451_H
#ifndef VRCURSOR_T3235369382_H
#define VRCURSOR_T3235369382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.VRCursor
struct  VRCursor_t3235369382  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UnityEngine.UI.Extensions.VRCursor::xSens
	float ___xSens_4;
	// System.Single UnityEngine.UI.Extensions.VRCursor::ySens
	float ___ySens_5;
	// UnityEngine.Collider UnityEngine.UI.Extensions.VRCursor::currentCollider
	Collider_t1773347010 * ___currentCollider_6;

public:
	inline static int32_t get_offset_of_xSens_4() { return static_cast<int32_t>(offsetof(VRCursor_t3235369382, ___xSens_4)); }
	inline float get_xSens_4() const { return ___xSens_4; }
	inline float* get_address_of_xSens_4() { return &___xSens_4; }
	inline void set_xSens_4(float value)
	{
		___xSens_4 = value;
	}

	inline static int32_t get_offset_of_ySens_5() { return static_cast<int32_t>(offsetof(VRCursor_t3235369382, ___ySens_5)); }
	inline float get_ySens_5() const { return ___ySens_5; }
	inline float* get_address_of_ySens_5() { return &___ySens_5; }
	inline void set_ySens_5(float value)
	{
		___ySens_5 = value;
	}

	inline static int32_t get_offset_of_currentCollider_6() { return static_cast<int32_t>(offsetof(VRCursor_t3235369382, ___currentCollider_6)); }
	inline Collider_t1773347010 * get_currentCollider_6() const { return ___currentCollider_6; }
	inline Collider_t1773347010 ** get_address_of_currentCollider_6() { return &___currentCollider_6; }
	inline void set_currentCollider_6(Collider_t1773347010 * value)
	{
		___currentCollider_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentCollider_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VRCURSOR_T3235369382_H
#ifndef RETURNKEYTRIGGERSBUTTON_T3211538107_H
#define RETURNKEYTRIGGERSBUTTON_T3211538107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ReturnKeyTriggersButton
struct  ReturnKeyTriggersButton_t3211538107  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.UI.ReturnKeyTriggersButton::_system
	EventSystem_t1003666588 * ____system_4;
	// UnityEngine.UI.Button UnityEngine.UI.ReturnKeyTriggersButton::button
	Button_t4055032469 * ___button_5;
	// System.Boolean UnityEngine.UI.ReturnKeyTriggersButton::highlight
	bool ___highlight_6;
	// System.Single UnityEngine.UI.ReturnKeyTriggersButton::highlightDuration
	float ___highlightDuration_7;

public:
	inline static int32_t get_offset_of__system_4() { return static_cast<int32_t>(offsetof(ReturnKeyTriggersButton_t3211538107, ____system_4)); }
	inline EventSystem_t1003666588 * get__system_4() const { return ____system_4; }
	inline EventSystem_t1003666588 ** get_address_of__system_4() { return &____system_4; }
	inline void set__system_4(EventSystem_t1003666588 * value)
	{
		____system_4 = value;
		Il2CppCodeGenWriteBarrier((&____system_4), value);
	}

	inline static int32_t get_offset_of_button_5() { return static_cast<int32_t>(offsetof(ReturnKeyTriggersButton_t3211538107, ___button_5)); }
	inline Button_t4055032469 * get_button_5() const { return ___button_5; }
	inline Button_t4055032469 ** get_address_of_button_5() { return &___button_5; }
	inline void set_button_5(Button_t4055032469 * value)
	{
		___button_5 = value;
		Il2CppCodeGenWriteBarrier((&___button_5), value);
	}

	inline static int32_t get_offset_of_highlight_6() { return static_cast<int32_t>(offsetof(ReturnKeyTriggersButton_t3211538107, ___highlight_6)); }
	inline bool get_highlight_6() const { return ___highlight_6; }
	inline bool* get_address_of_highlight_6() { return &___highlight_6; }
	inline void set_highlight_6(bool value)
	{
		___highlight_6 = value;
	}

	inline static int32_t get_offset_of_highlightDuration_7() { return static_cast<int32_t>(offsetof(ReturnKeyTriggersButton_t3211538107, ___highlightDuration_7)); }
	inline float get_highlightDuration_7() const { return ___highlightDuration_7; }
	inline float* get_address_of_highlightDuration_7() { return &___highlightDuration_7; }
	inline void set_highlightDuration_7(float value)
	{
		___highlightDuration_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RETURNKEYTRIGGERSBUTTON_T3211538107_H
#ifndef LERPPOSITION_T3084015375_H
#define LERPPOSITION_T3084015375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unoper.Unity.Utils.LerpPosition
struct  LerpPosition_t3084015375  : public MonoBehaviour_t3962482529
{
public:
	// Unoper.Unity.Utils.IPosition[] Unoper.Unity.Utils.LerpPosition::ipositions
	IPositionU5BU5D_t982770509* ___ipositions_4;

public:
	inline static int32_t get_offset_of_ipositions_4() { return static_cast<int32_t>(offsetof(LerpPosition_t3084015375, ___ipositions_4)); }
	inline IPositionU5BU5D_t982770509* get_ipositions_4() const { return ___ipositions_4; }
	inline IPositionU5BU5D_t982770509** get_address_of_ipositions_4() { return &___ipositions_4; }
	inline void set_ipositions_4(IPositionU5BU5D_t982770509* value)
	{
		___ipositions_4 = value;
		Il2CppCodeGenWriteBarrier((&___ipositions_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LERPPOSITION_T3084015375_H
#ifndef RELATIVEPOSITION_T539149730_H
#define RELATIVEPOSITION_T539149730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unoper.Unity.Utils.RelativePosition
struct  RelativePosition_t539149730  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform Unoper.Unity.Utils.RelativePosition::Base
	Transform_t3600365921 * ___Base_4;
	// UnityEngine.Vector3 Unoper.Unity.Utils.RelativePosition::Offset
	Vector3_t3722313464  ___Offset_5;

public:
	inline static int32_t get_offset_of_Base_4() { return static_cast<int32_t>(offsetof(RelativePosition_t539149730, ___Base_4)); }
	inline Transform_t3600365921 * get_Base_4() const { return ___Base_4; }
	inline Transform_t3600365921 ** get_address_of_Base_4() { return &___Base_4; }
	inline void set_Base_4(Transform_t3600365921 * value)
	{
		___Base_4 = value;
		Il2CppCodeGenWriteBarrier((&___Base_4), value);
	}

	inline static int32_t get_offset_of_Offset_5() { return static_cast<int32_t>(offsetof(RelativePosition_t539149730, ___Offset_5)); }
	inline Vector3_t3722313464  get_Offset_5() const { return ___Offset_5; }
	inline Vector3_t3722313464 * get_address_of_Offset_5() { return &___Offset_5; }
	inline void set_Offset_5(Vector3_t3722313464  value)
	{
		___Offset_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELATIVEPOSITION_T539149730_H
#ifndef REMOVER_T313276069_H
#define REMOVER_T313276069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unoper.Unity.Utils.Remover
struct  Remover_t313276069  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject[] Unoper.Unity.Utils.Remover::gameObjects
	GameObjectU5BU5D_t3328599146* ___gameObjects_4;

public:
	inline static int32_t get_offset_of_gameObjects_4() { return static_cast<int32_t>(offsetof(Remover_t313276069, ___gameObjects_4)); }
	inline GameObjectU5BU5D_t3328599146* get_gameObjects_4() const { return ___gameObjects_4; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_gameObjects_4() { return &___gameObjects_4; }
	inline void set_gameObjects_4(GameObjectU5BU5D_t3328599146* value)
	{
		___gameObjects_4 = value;
		Il2CppCodeGenWriteBarrier((&___gameObjects_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOVER_T313276069_H
#ifndef SEQUENCER_T2140344483_H
#define SEQUENCER_T2140344483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unoper.Unity.Utils.Sequencer
struct  Sequencer_t2140344483  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Unoper.Unity.Utils.Sequencer::executeOnStart
	bool ___executeOnStart_4;
	// UnityEngine.Events.UnityEvent[] Unoper.Unity.Utils.Sequencer::UnityEventSequence
	UnityEventU5BU5D_t4042265822* ___UnityEventSequence_5;

public:
	inline static int32_t get_offset_of_executeOnStart_4() { return static_cast<int32_t>(offsetof(Sequencer_t2140344483, ___executeOnStart_4)); }
	inline bool get_executeOnStart_4() const { return ___executeOnStart_4; }
	inline bool* get_address_of_executeOnStart_4() { return &___executeOnStart_4; }
	inline void set_executeOnStart_4(bool value)
	{
		___executeOnStart_4 = value;
	}

	inline static int32_t get_offset_of_UnityEventSequence_5() { return static_cast<int32_t>(offsetof(Sequencer_t2140344483, ___UnityEventSequence_5)); }
	inline UnityEventU5BU5D_t4042265822* get_UnityEventSequence_5() const { return ___UnityEventSequence_5; }
	inline UnityEventU5BU5D_t4042265822** get_address_of_UnityEventSequence_5() { return &___UnityEventSequence_5; }
	inline void set_UnityEventSequence_5(UnityEventU5BU5D_t4042265822* value)
	{
		___UnityEventSequence_5 = value;
		Il2CppCodeGenWriteBarrier((&___UnityEventSequence_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEQUENCER_T2140344483_H
#ifndef SPHEREPOSITION_T3726833336_H
#define SPHEREPOSITION_T3726833336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unoper.Unity.Utils.SpherePosition
struct  SpherePosition_t3726833336  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Unoper.Unity.Utils.SpherePosition::radius
	float ___radius_4;

public:
	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(SpherePosition_t3726833336, ___radius_4)); }
	inline float get_radius_4() const { return ___radius_4; }
	inline float* get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(float value)
	{
		___radius_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPHEREPOSITION_T3726833336_H
#ifndef SUMPOSITION_T3390953611_H
#define SUMPOSITION_T3390953611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unoper.Unity.Utils.SumPosition
struct  SumPosition_t3390953611  : public MonoBehaviour_t3962482529
{
public:
	// Unoper.Unity.Utils.IPosition[] Unoper.Unity.Utils.SumPosition::ipositions
	IPositionU5BU5D_t982770509* ___ipositions_4;

public:
	inline static int32_t get_offset_of_ipositions_4() { return static_cast<int32_t>(offsetof(SumPosition_t3390953611, ___ipositions_4)); }
	inline IPositionU5BU5D_t982770509* get_ipositions_4() const { return ___ipositions_4; }
	inline IPositionU5BU5D_t982770509** get_address_of_ipositions_4() { return &___ipositions_4; }
	inline void set_ipositions_4(IPositionU5BU5D_t982770509* value)
	{
		___ipositions_4 = value;
		Il2CppCodeGenWriteBarrier((&___ipositions_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUMPOSITION_T3390953611_H
#ifndef TIMER_T3412046349_H
#define TIMER_T3412046349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unoper.Unity.Utils.Timer
struct  Timer_t3412046349  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Unoper.Unity.Utils.Timer::CountdownTime
	float ___CountdownTime_4;
	// System.Single Unoper.Unity.Utils.Timer::IntervalTime
	float ___IntervalTime_5;
	// UnityEngine.Events.UnityEvent Unoper.Unity.Utils.Timer::OnBegin
	UnityEvent_t2581268647 * ___OnBegin_6;
	// UnityEngine.Events.UnityEvent Unoper.Unity.Utils.Timer::OnInterval
	UnityEvent_t2581268647 * ___OnInterval_7;
	// UnityEngine.Events.UnityEvent Unoper.Unity.Utils.Timer::OnComplete
	UnityEvent_t2581268647 * ___OnComplete_8;

public:
	inline static int32_t get_offset_of_CountdownTime_4() { return static_cast<int32_t>(offsetof(Timer_t3412046349, ___CountdownTime_4)); }
	inline float get_CountdownTime_4() const { return ___CountdownTime_4; }
	inline float* get_address_of_CountdownTime_4() { return &___CountdownTime_4; }
	inline void set_CountdownTime_4(float value)
	{
		___CountdownTime_4 = value;
	}

	inline static int32_t get_offset_of_IntervalTime_5() { return static_cast<int32_t>(offsetof(Timer_t3412046349, ___IntervalTime_5)); }
	inline float get_IntervalTime_5() const { return ___IntervalTime_5; }
	inline float* get_address_of_IntervalTime_5() { return &___IntervalTime_5; }
	inline void set_IntervalTime_5(float value)
	{
		___IntervalTime_5 = value;
	}

	inline static int32_t get_offset_of_OnBegin_6() { return static_cast<int32_t>(offsetof(Timer_t3412046349, ___OnBegin_6)); }
	inline UnityEvent_t2581268647 * get_OnBegin_6() const { return ___OnBegin_6; }
	inline UnityEvent_t2581268647 ** get_address_of_OnBegin_6() { return &___OnBegin_6; }
	inline void set_OnBegin_6(UnityEvent_t2581268647 * value)
	{
		___OnBegin_6 = value;
		Il2CppCodeGenWriteBarrier((&___OnBegin_6), value);
	}

	inline static int32_t get_offset_of_OnInterval_7() { return static_cast<int32_t>(offsetof(Timer_t3412046349, ___OnInterval_7)); }
	inline UnityEvent_t2581268647 * get_OnInterval_7() const { return ___OnInterval_7; }
	inline UnityEvent_t2581268647 ** get_address_of_OnInterval_7() { return &___OnInterval_7; }
	inline void set_OnInterval_7(UnityEvent_t2581268647 * value)
	{
		___OnInterval_7 = value;
		Il2CppCodeGenWriteBarrier((&___OnInterval_7), value);
	}

	inline static int32_t get_offset_of_OnComplete_8() { return static_cast<int32_t>(offsetof(Timer_t3412046349, ___OnComplete_8)); }
	inline UnityEvent_t2581268647 * get_OnComplete_8() const { return ___OnComplete_8; }
	inline UnityEvent_t2581268647 ** get_address_of_OnComplete_8() { return &___OnComplete_8; }
	inline void set_OnComplete_8(UnityEvent_t2581268647 * value)
	{
		___OnComplete_8 = value;
		Il2CppCodeGenWriteBarrier((&___OnComplete_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMER_T3412046349_H
#ifndef PRESSTOSTART_T369169045_H
#define PRESSTOSTART_T369169045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// pressToStart
struct  pressToStart_t369169045  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESSTOSTART_T369169045_H
#ifndef BASEINPUTMODULE_T2019268878_H
#define BASEINPUTMODULE_T2019268878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseInputModule
struct  BaseInputModule_t2019268878  : public UIBehaviour_t3495933518
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t537414295 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t2331243652 * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t3903027533 * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t3630163547 * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t3630163547 * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_RaycastResultCache_4)); }
	inline List_1_t537414295 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t537414295 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t537414295 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_RaycastResultCache_4), value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_AxisEventData_5)); }
	inline AxisEventData_t2331243652 * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t2331243652 ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t2331243652 * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_AxisEventData_5), value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_EventSystem_6)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_6), value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_BaseEventData_7)); }
	inline BaseEventData_t3903027533 * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t3903027533 ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t3903027533 * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_BaseEventData_7), value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_InputOverride_8)); }
	inline BaseInput_t3630163547 * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_t3630163547 ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_t3630163547 * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_InputOverride_8), value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_DefaultInput_9)); }
	inline BaseInput_t3630163547 * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_t3630163547 ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_t3630163547 * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_DefaultInput_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINPUTMODULE_T2019268878_H
#ifndef EVENTSYSTEM_T1003666588_H
#define EVENTSYSTEM_T1003666588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t1003666588  : public UIBehaviour_t3495933518
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t3491343620 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t2019268878 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t1113636619 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t1113636619 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t3903027533 * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_SystemInputModules_4)); }
	inline List_1_t3491343620 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t3491343620 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t3491343620 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SystemInputModules_4), value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t2019268878 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t2019268878 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t2019268878 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentInputModule_5), value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_FirstSelected_7)); }
	inline GameObject_t1113636619 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_t1113636619 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_t1113636619 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_FirstSelected_7), value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_CurrentSelected_10)); }
	inline GameObject_t1113636619 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_t1113636619 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_t1113636619 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentSelected_10), value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_DummyData_13)); }
	inline BaseEventData_t3903027533 * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t3903027533 ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t3903027533 * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_DummyData_13), value);
	}
};

struct EventSystem_t1003666588_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_t2475741330 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t3135238028 * ___s_RaycastComparer_14;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::<>f__mg$cache0
	Comparison_1_t3135238028 * ___U3CU3Ef__mgU24cache0_15;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___m_EventSystems_6)); }
	inline List_1_t2475741330 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_t2475741330 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_t2475741330 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystems_6), value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t3135238028 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t3135238028 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t3135238028 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_RaycastComparer_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_15() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___U3CU3Ef__mgU24cache0_15)); }
	inline Comparison_1_t3135238028 * get_U3CU3Ef__mgU24cache0_15() const { return ___U3CU3Ef__mgU24cache0_15; }
	inline Comparison_1_t3135238028 ** get_address_of_U3CU3Ef__mgU24cache0_15() { return &___U3CU3Ef__mgU24cache0_15; }
	inline void set_U3CU3Ef__mgU24cache0_15(Comparison_1_t3135238028 * value)
	{
		___U3CU3Ef__mgU24cache0_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTSYSTEM_T1003666588_H
#ifndef CONTENTSIZEFITTER_T3850442145_H
#define CONTENTSIZEFITTER_T3850442145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ContentSizeFitter
struct  ContentSizeFitter_t3850442145  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.ContentSizeFitter/FitMode UnityEngine.UI.ContentSizeFitter::m_HorizontalFit
	int32_t ___m_HorizontalFit_4;
	// UnityEngine.UI.ContentSizeFitter/FitMode UnityEngine.UI.ContentSizeFitter::m_VerticalFit
	int32_t ___m_VerticalFit_5;
	// UnityEngine.RectTransform UnityEngine.UI.ContentSizeFitter::m_Rect
	RectTransform_t3704657025 * ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ContentSizeFitter::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_7;

public:
	inline static int32_t get_offset_of_m_HorizontalFit_4() { return static_cast<int32_t>(offsetof(ContentSizeFitter_t3850442145, ___m_HorizontalFit_4)); }
	inline int32_t get_m_HorizontalFit_4() const { return ___m_HorizontalFit_4; }
	inline int32_t* get_address_of_m_HorizontalFit_4() { return &___m_HorizontalFit_4; }
	inline void set_m_HorizontalFit_4(int32_t value)
	{
		___m_HorizontalFit_4 = value;
	}

	inline static int32_t get_offset_of_m_VerticalFit_5() { return static_cast<int32_t>(offsetof(ContentSizeFitter_t3850442145, ___m_VerticalFit_5)); }
	inline int32_t get_m_VerticalFit_5() const { return ___m_VerticalFit_5; }
	inline int32_t* get_address_of_m_VerticalFit_5() { return &___m_VerticalFit_5; }
	inline void set_m_VerticalFit_5(int32_t value)
	{
		___m_VerticalFit_5 = value;
	}

	inline static int32_t get_offset_of_m_Rect_6() { return static_cast<int32_t>(offsetof(ContentSizeFitter_t3850442145, ___m_Rect_6)); }
	inline RectTransform_t3704657025 * get_m_Rect_6() const { return ___m_Rect_6; }
	inline RectTransform_t3704657025 ** get_address_of_m_Rect_6() { return &___m_Rect_6; }
	inline void set_m_Rect_6(RectTransform_t3704657025 * value)
	{
		___m_Rect_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rect_6), value);
	}

	inline static int32_t get_offset_of_m_Tracker_7() { return static_cast<int32_t>(offsetof(ContentSizeFitter_t3850442145, ___m_Tracker_7)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_7() const { return ___m_Tracker_7; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_7() { return &___m_Tracker_7; }
	inline void set_m_Tracker_7(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTSIZEFITTER_T3850442145_H
#ifndef VERTICALSCROLLSNAP_T3018533569_H
#define VERTICALSCROLLSNAP_T3018533569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.VerticalScrollSnap
struct  VerticalScrollSnap_t3018533569  : public ScrollSnapBase_t2887778829
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTICALSCROLLSNAP_T3018533569_H
#ifndef EXTENSIONSTOGGLEGROUP_T1470432035_H
#define EXTENSIONSTOGGLEGROUP_T1470432035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ExtensionsToggleGroup
struct  ExtensionsToggleGroup_t1470432035  : public UIBehaviour_t3495933518
{
public:
	// System.Boolean UnityEngine.UI.ExtensionsToggleGroup::m_AllowSwitchOff
	bool ___m_AllowSwitchOff_4;
	// System.Collections.Generic.List`1<UnityEngine.UI.ExtensionsToggle> UnityEngine.UI.ExtensionsToggleGroup::m_Toggles
	List_1_t4068236478 * ___m_Toggles_5;
	// UnityEngine.UI.ExtensionsToggleGroup/ToggleGroupEvent UnityEngine.UI.ExtensionsToggleGroup::onToggleGroupChanged
	ToggleGroupEvent_t2519216546 * ___onToggleGroupChanged_6;
	// UnityEngine.UI.ExtensionsToggleGroup/ToggleGroupEvent UnityEngine.UI.ExtensionsToggleGroup::onToggleGroupToggleChanged
	ToggleGroupEvent_t2519216546 * ___onToggleGroupToggleChanged_7;
	// UnityEngine.UI.ExtensionsToggle UnityEngine.UI.ExtensionsToggleGroup::<SelectedToggle>k__BackingField
	ExtensionsToggle_t2596161736 * ___U3CSelectedToggleU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_m_AllowSwitchOff_4() { return static_cast<int32_t>(offsetof(ExtensionsToggleGroup_t1470432035, ___m_AllowSwitchOff_4)); }
	inline bool get_m_AllowSwitchOff_4() const { return ___m_AllowSwitchOff_4; }
	inline bool* get_address_of_m_AllowSwitchOff_4() { return &___m_AllowSwitchOff_4; }
	inline void set_m_AllowSwitchOff_4(bool value)
	{
		___m_AllowSwitchOff_4 = value;
	}

	inline static int32_t get_offset_of_m_Toggles_5() { return static_cast<int32_t>(offsetof(ExtensionsToggleGroup_t1470432035, ___m_Toggles_5)); }
	inline List_1_t4068236478 * get_m_Toggles_5() const { return ___m_Toggles_5; }
	inline List_1_t4068236478 ** get_address_of_m_Toggles_5() { return &___m_Toggles_5; }
	inline void set_m_Toggles_5(List_1_t4068236478 * value)
	{
		___m_Toggles_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Toggles_5), value);
	}

	inline static int32_t get_offset_of_onToggleGroupChanged_6() { return static_cast<int32_t>(offsetof(ExtensionsToggleGroup_t1470432035, ___onToggleGroupChanged_6)); }
	inline ToggleGroupEvent_t2519216546 * get_onToggleGroupChanged_6() const { return ___onToggleGroupChanged_6; }
	inline ToggleGroupEvent_t2519216546 ** get_address_of_onToggleGroupChanged_6() { return &___onToggleGroupChanged_6; }
	inline void set_onToggleGroupChanged_6(ToggleGroupEvent_t2519216546 * value)
	{
		___onToggleGroupChanged_6 = value;
		Il2CppCodeGenWriteBarrier((&___onToggleGroupChanged_6), value);
	}

	inline static int32_t get_offset_of_onToggleGroupToggleChanged_7() { return static_cast<int32_t>(offsetof(ExtensionsToggleGroup_t1470432035, ___onToggleGroupToggleChanged_7)); }
	inline ToggleGroupEvent_t2519216546 * get_onToggleGroupToggleChanged_7() const { return ___onToggleGroupToggleChanged_7; }
	inline ToggleGroupEvent_t2519216546 ** get_address_of_onToggleGroupToggleChanged_7() { return &___onToggleGroupToggleChanged_7; }
	inline void set_onToggleGroupToggleChanged_7(ToggleGroupEvent_t2519216546 * value)
	{
		___onToggleGroupToggleChanged_7 = value;
		Il2CppCodeGenWriteBarrier((&___onToggleGroupToggleChanged_7), value);
	}

	inline static int32_t get_offset_of_U3CSelectedToggleU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ExtensionsToggleGroup_t1470432035, ___U3CSelectedToggleU3Ek__BackingField_8)); }
	inline ExtensionsToggle_t2596161736 * get_U3CSelectedToggleU3Ek__BackingField_8() const { return ___U3CSelectedToggleU3Ek__BackingField_8; }
	inline ExtensionsToggle_t2596161736 ** get_address_of_U3CSelectedToggleU3Ek__BackingField_8() { return &___U3CSelectedToggleU3Ek__BackingField_8; }
	inline void set_U3CSelectedToggleU3Ek__BackingField_8(ExtensionsToggle_t2596161736 * value)
	{
		___U3CSelectedToggleU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSelectedToggleU3Ek__BackingField_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONSTOGGLEGROUP_T1470432035_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_6)); }
	inline Material_t340375123 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t340375123 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t340375123 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_7)); }
	inline Color_t2555686324  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t2555686324 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t2555686324  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_9)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_11)); }
	inline Canvas_t3310196443 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_t3310196443 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t340375123 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t340375123 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t3648964284 * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t3648964284 * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef LAYOUTGROUP_T2436138090_H
#define LAYOUTGROUP_T2436138090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.LayoutGroup
struct  LayoutGroup_t2436138090  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t1369453676 * ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t3704657025 * ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t2156229523  ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t2156229523  ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t2156229523  ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t881764471 * ___m_RectChildren_11;

public:
	inline static int32_t get_offset_of_m_Padding_4() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_Padding_4)); }
	inline RectOffset_t1369453676 * get_m_Padding_4() const { return ___m_Padding_4; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_4() { return &___m_Padding_4; }
	inline void set_m_Padding_4(RectOffset_t1369453676 * value)
	{
		___m_Padding_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_4), value);
	}

	inline static int32_t get_offset_of_m_ChildAlignment_5() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_ChildAlignment_5)); }
	inline int32_t get_m_ChildAlignment_5() const { return ___m_ChildAlignment_5; }
	inline int32_t* get_address_of_m_ChildAlignment_5() { return &___m_ChildAlignment_5; }
	inline void set_m_ChildAlignment_5(int32_t value)
	{
		___m_ChildAlignment_5 = value;
	}

	inline static int32_t get_offset_of_m_Rect_6() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_Rect_6)); }
	inline RectTransform_t3704657025 * get_m_Rect_6() const { return ___m_Rect_6; }
	inline RectTransform_t3704657025 ** get_address_of_m_Rect_6() { return &___m_Rect_6; }
	inline void set_m_Rect_6(RectTransform_t3704657025 * value)
	{
		___m_Rect_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rect_6), value);
	}

	inline static int32_t get_offset_of_m_Tracker_7() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_Tracker_7)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_7() const { return ___m_Tracker_7; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_7() { return &___m_Tracker_7; }
	inline void set_m_Tracker_7(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_7 = value;
	}

	inline static int32_t get_offset_of_m_TotalMinSize_8() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_TotalMinSize_8)); }
	inline Vector2_t2156229523  get_m_TotalMinSize_8() const { return ___m_TotalMinSize_8; }
	inline Vector2_t2156229523 * get_address_of_m_TotalMinSize_8() { return &___m_TotalMinSize_8; }
	inline void set_m_TotalMinSize_8(Vector2_t2156229523  value)
	{
		___m_TotalMinSize_8 = value;
	}

	inline static int32_t get_offset_of_m_TotalPreferredSize_9() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_TotalPreferredSize_9)); }
	inline Vector2_t2156229523  get_m_TotalPreferredSize_9() const { return ___m_TotalPreferredSize_9; }
	inline Vector2_t2156229523 * get_address_of_m_TotalPreferredSize_9() { return &___m_TotalPreferredSize_9; }
	inline void set_m_TotalPreferredSize_9(Vector2_t2156229523  value)
	{
		___m_TotalPreferredSize_9 = value;
	}

	inline static int32_t get_offset_of_m_TotalFlexibleSize_10() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_TotalFlexibleSize_10)); }
	inline Vector2_t2156229523  get_m_TotalFlexibleSize_10() const { return ___m_TotalFlexibleSize_10; }
	inline Vector2_t2156229523 * get_address_of_m_TotalFlexibleSize_10() { return &___m_TotalFlexibleSize_10; }
	inline void set_m_TotalFlexibleSize_10(Vector2_t2156229523  value)
	{
		___m_TotalFlexibleSize_10 = value;
	}

	inline static int32_t get_offset_of_m_RectChildren_11() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_RectChildren_11)); }
	inline List_1_t881764471 * get_m_RectChildren_11() const { return ___m_RectChildren_11; }
	inline List_1_t881764471 ** get_address_of_m_RectChildren_11() { return &___m_RectChildren_11; }
	inline void set_m_RectChildren_11(List_1_t881764471 * value)
	{
		___m_RectChildren_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectChildren_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTGROUP_T2436138090_H
#ifndef SCROLLRECT_T4137855814_H
#define SCROLLRECT_T4137855814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ScrollRect
struct  ScrollRect_t4137855814  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t3704657025 * ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t3704657025 * ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t1494447233 * ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t1494447233 * ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t343079324 * ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t2156229523  ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t2156229523  ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t3704657025 * ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t2266837910  ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t2266837910  ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t2156229523  ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t2156229523  ___m_PrevPosition_27;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t2266837910  ___m_PrevContentBounds_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t2266837910  ___m_PrevViewBounds_29;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_32;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_33;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_34;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t3704657025 * ___m_Rect_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t3704657025 * ___m_HorizontalScrollbarRect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t3704657025 * ___m_VerticalScrollbarRect_37;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_38;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_39;

public:
	inline static int32_t get_offset_of_m_Content_4() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Content_4)); }
	inline RectTransform_t3704657025 * get_m_Content_4() const { return ___m_Content_4; }
	inline RectTransform_t3704657025 ** get_address_of_m_Content_4() { return &___m_Content_4; }
	inline void set_m_Content_4(RectTransform_t3704657025 * value)
	{
		___m_Content_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Content_4), value);
	}

	inline static int32_t get_offset_of_m_Horizontal_5() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Horizontal_5)); }
	inline bool get_m_Horizontal_5() const { return ___m_Horizontal_5; }
	inline bool* get_address_of_m_Horizontal_5() { return &___m_Horizontal_5; }
	inline void set_m_Horizontal_5(bool value)
	{
		___m_Horizontal_5 = value;
	}

	inline static int32_t get_offset_of_m_Vertical_6() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Vertical_6)); }
	inline bool get_m_Vertical_6() const { return ___m_Vertical_6; }
	inline bool* get_address_of_m_Vertical_6() { return &___m_Vertical_6; }
	inline void set_m_Vertical_6(bool value)
	{
		___m_Vertical_6 = value;
	}

	inline static int32_t get_offset_of_m_MovementType_7() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_MovementType_7)); }
	inline int32_t get_m_MovementType_7() const { return ___m_MovementType_7; }
	inline int32_t* get_address_of_m_MovementType_7() { return &___m_MovementType_7; }
	inline void set_m_MovementType_7(int32_t value)
	{
		___m_MovementType_7 = value;
	}

	inline static int32_t get_offset_of_m_Elasticity_8() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Elasticity_8)); }
	inline float get_m_Elasticity_8() const { return ___m_Elasticity_8; }
	inline float* get_address_of_m_Elasticity_8() { return &___m_Elasticity_8; }
	inline void set_m_Elasticity_8(float value)
	{
		___m_Elasticity_8 = value;
	}

	inline static int32_t get_offset_of_m_Inertia_9() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Inertia_9)); }
	inline bool get_m_Inertia_9() const { return ___m_Inertia_9; }
	inline bool* get_address_of_m_Inertia_9() { return &___m_Inertia_9; }
	inline void set_m_Inertia_9(bool value)
	{
		___m_Inertia_9 = value;
	}

	inline static int32_t get_offset_of_m_DecelerationRate_10() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_DecelerationRate_10)); }
	inline float get_m_DecelerationRate_10() const { return ___m_DecelerationRate_10; }
	inline float* get_address_of_m_DecelerationRate_10() { return &___m_DecelerationRate_10; }
	inline void set_m_DecelerationRate_10(float value)
	{
		___m_DecelerationRate_10 = value;
	}

	inline static int32_t get_offset_of_m_ScrollSensitivity_11() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ScrollSensitivity_11)); }
	inline float get_m_ScrollSensitivity_11() const { return ___m_ScrollSensitivity_11; }
	inline float* get_address_of_m_ScrollSensitivity_11() { return &___m_ScrollSensitivity_11; }
	inline void set_m_ScrollSensitivity_11(float value)
	{
		___m_ScrollSensitivity_11 = value;
	}

	inline static int32_t get_offset_of_m_Viewport_12() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Viewport_12)); }
	inline RectTransform_t3704657025 * get_m_Viewport_12() const { return ___m_Viewport_12; }
	inline RectTransform_t3704657025 ** get_address_of_m_Viewport_12() { return &___m_Viewport_12; }
	inline void set_m_Viewport_12(RectTransform_t3704657025 * value)
	{
		___m_Viewport_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Viewport_12), value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbar_13() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HorizontalScrollbar_13)); }
	inline Scrollbar_t1494447233 * get_m_HorizontalScrollbar_13() const { return ___m_HorizontalScrollbar_13; }
	inline Scrollbar_t1494447233 ** get_address_of_m_HorizontalScrollbar_13() { return &___m_HorizontalScrollbar_13; }
	inline void set_m_HorizontalScrollbar_13(Scrollbar_t1494447233 * value)
	{
		___m_HorizontalScrollbar_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalScrollbar_13), value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbar_14() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VerticalScrollbar_14)); }
	inline Scrollbar_t1494447233 * get_m_VerticalScrollbar_14() const { return ___m_VerticalScrollbar_14; }
	inline Scrollbar_t1494447233 ** get_address_of_m_VerticalScrollbar_14() { return &___m_VerticalScrollbar_14; }
	inline void set_m_VerticalScrollbar_14(Scrollbar_t1494447233 * value)
	{
		___m_VerticalScrollbar_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalScrollbar_14), value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarVisibility_15() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HorizontalScrollbarVisibility_15)); }
	inline int32_t get_m_HorizontalScrollbarVisibility_15() const { return ___m_HorizontalScrollbarVisibility_15; }
	inline int32_t* get_address_of_m_HorizontalScrollbarVisibility_15() { return &___m_HorizontalScrollbarVisibility_15; }
	inline void set_m_HorizontalScrollbarVisibility_15(int32_t value)
	{
		___m_HorizontalScrollbarVisibility_15 = value;
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarVisibility_16() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VerticalScrollbarVisibility_16)); }
	inline int32_t get_m_VerticalScrollbarVisibility_16() const { return ___m_VerticalScrollbarVisibility_16; }
	inline int32_t* get_address_of_m_VerticalScrollbarVisibility_16() { return &___m_VerticalScrollbarVisibility_16; }
	inline void set_m_VerticalScrollbarVisibility_16(int32_t value)
	{
		___m_VerticalScrollbarVisibility_16 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarSpacing_17() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HorizontalScrollbarSpacing_17)); }
	inline float get_m_HorizontalScrollbarSpacing_17() const { return ___m_HorizontalScrollbarSpacing_17; }
	inline float* get_address_of_m_HorizontalScrollbarSpacing_17() { return &___m_HorizontalScrollbarSpacing_17; }
	inline void set_m_HorizontalScrollbarSpacing_17(float value)
	{
		___m_HorizontalScrollbarSpacing_17 = value;
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarSpacing_18() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VerticalScrollbarSpacing_18)); }
	inline float get_m_VerticalScrollbarSpacing_18() const { return ___m_VerticalScrollbarSpacing_18; }
	inline float* get_address_of_m_VerticalScrollbarSpacing_18() { return &___m_VerticalScrollbarSpacing_18; }
	inline void set_m_VerticalScrollbarSpacing_18(float value)
	{
		___m_VerticalScrollbarSpacing_18 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_19() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_OnValueChanged_19)); }
	inline ScrollRectEvent_t343079324 * get_m_OnValueChanged_19() const { return ___m_OnValueChanged_19; }
	inline ScrollRectEvent_t343079324 ** get_address_of_m_OnValueChanged_19() { return &___m_OnValueChanged_19; }
	inline void set_m_OnValueChanged_19(ScrollRectEvent_t343079324 * value)
	{
		___m_OnValueChanged_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_19), value);
	}

	inline static int32_t get_offset_of_m_PointerStartLocalCursor_20() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_PointerStartLocalCursor_20)); }
	inline Vector2_t2156229523  get_m_PointerStartLocalCursor_20() const { return ___m_PointerStartLocalCursor_20; }
	inline Vector2_t2156229523 * get_address_of_m_PointerStartLocalCursor_20() { return &___m_PointerStartLocalCursor_20; }
	inline void set_m_PointerStartLocalCursor_20(Vector2_t2156229523  value)
	{
		___m_PointerStartLocalCursor_20 = value;
	}

	inline static int32_t get_offset_of_m_ContentStartPosition_21() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ContentStartPosition_21)); }
	inline Vector2_t2156229523  get_m_ContentStartPosition_21() const { return ___m_ContentStartPosition_21; }
	inline Vector2_t2156229523 * get_address_of_m_ContentStartPosition_21() { return &___m_ContentStartPosition_21; }
	inline void set_m_ContentStartPosition_21(Vector2_t2156229523  value)
	{
		___m_ContentStartPosition_21 = value;
	}

	inline static int32_t get_offset_of_m_ViewRect_22() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ViewRect_22)); }
	inline RectTransform_t3704657025 * get_m_ViewRect_22() const { return ___m_ViewRect_22; }
	inline RectTransform_t3704657025 ** get_address_of_m_ViewRect_22() { return &___m_ViewRect_22; }
	inline void set_m_ViewRect_22(RectTransform_t3704657025 * value)
	{
		___m_ViewRect_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_ViewRect_22), value);
	}

	inline static int32_t get_offset_of_m_ContentBounds_23() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ContentBounds_23)); }
	inline Bounds_t2266837910  get_m_ContentBounds_23() const { return ___m_ContentBounds_23; }
	inline Bounds_t2266837910 * get_address_of_m_ContentBounds_23() { return &___m_ContentBounds_23; }
	inline void set_m_ContentBounds_23(Bounds_t2266837910  value)
	{
		___m_ContentBounds_23 = value;
	}

	inline static int32_t get_offset_of_m_ViewBounds_24() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ViewBounds_24)); }
	inline Bounds_t2266837910  get_m_ViewBounds_24() const { return ___m_ViewBounds_24; }
	inline Bounds_t2266837910 * get_address_of_m_ViewBounds_24() { return &___m_ViewBounds_24; }
	inline void set_m_ViewBounds_24(Bounds_t2266837910  value)
	{
		___m_ViewBounds_24 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_25() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Velocity_25)); }
	inline Vector2_t2156229523  get_m_Velocity_25() const { return ___m_Velocity_25; }
	inline Vector2_t2156229523 * get_address_of_m_Velocity_25() { return &___m_Velocity_25; }
	inline void set_m_Velocity_25(Vector2_t2156229523  value)
	{
		___m_Velocity_25 = value;
	}

	inline static int32_t get_offset_of_m_Dragging_26() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Dragging_26)); }
	inline bool get_m_Dragging_26() const { return ___m_Dragging_26; }
	inline bool* get_address_of_m_Dragging_26() { return &___m_Dragging_26; }
	inline void set_m_Dragging_26(bool value)
	{
		___m_Dragging_26 = value;
	}

	inline static int32_t get_offset_of_m_PrevPosition_27() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_PrevPosition_27)); }
	inline Vector2_t2156229523  get_m_PrevPosition_27() const { return ___m_PrevPosition_27; }
	inline Vector2_t2156229523 * get_address_of_m_PrevPosition_27() { return &___m_PrevPosition_27; }
	inline void set_m_PrevPosition_27(Vector2_t2156229523  value)
	{
		___m_PrevPosition_27 = value;
	}

	inline static int32_t get_offset_of_m_PrevContentBounds_28() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_PrevContentBounds_28)); }
	inline Bounds_t2266837910  get_m_PrevContentBounds_28() const { return ___m_PrevContentBounds_28; }
	inline Bounds_t2266837910 * get_address_of_m_PrevContentBounds_28() { return &___m_PrevContentBounds_28; }
	inline void set_m_PrevContentBounds_28(Bounds_t2266837910  value)
	{
		___m_PrevContentBounds_28 = value;
	}

	inline static int32_t get_offset_of_m_PrevViewBounds_29() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_PrevViewBounds_29)); }
	inline Bounds_t2266837910  get_m_PrevViewBounds_29() const { return ___m_PrevViewBounds_29; }
	inline Bounds_t2266837910 * get_address_of_m_PrevViewBounds_29() { return &___m_PrevViewBounds_29; }
	inline void set_m_PrevViewBounds_29(Bounds_t2266837910  value)
	{
		___m_PrevViewBounds_29 = value;
	}

	inline static int32_t get_offset_of_m_HasRebuiltLayout_30() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HasRebuiltLayout_30)); }
	inline bool get_m_HasRebuiltLayout_30() const { return ___m_HasRebuiltLayout_30; }
	inline bool* get_address_of_m_HasRebuiltLayout_30() { return &___m_HasRebuiltLayout_30; }
	inline void set_m_HasRebuiltLayout_30(bool value)
	{
		___m_HasRebuiltLayout_30 = value;
	}

	inline static int32_t get_offset_of_m_HSliderExpand_31() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HSliderExpand_31)); }
	inline bool get_m_HSliderExpand_31() const { return ___m_HSliderExpand_31; }
	inline bool* get_address_of_m_HSliderExpand_31() { return &___m_HSliderExpand_31; }
	inline void set_m_HSliderExpand_31(bool value)
	{
		___m_HSliderExpand_31 = value;
	}

	inline static int32_t get_offset_of_m_VSliderExpand_32() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VSliderExpand_32)); }
	inline bool get_m_VSliderExpand_32() const { return ___m_VSliderExpand_32; }
	inline bool* get_address_of_m_VSliderExpand_32() { return &___m_VSliderExpand_32; }
	inline void set_m_VSliderExpand_32(bool value)
	{
		___m_VSliderExpand_32 = value;
	}

	inline static int32_t get_offset_of_m_HSliderHeight_33() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HSliderHeight_33)); }
	inline float get_m_HSliderHeight_33() const { return ___m_HSliderHeight_33; }
	inline float* get_address_of_m_HSliderHeight_33() { return &___m_HSliderHeight_33; }
	inline void set_m_HSliderHeight_33(float value)
	{
		___m_HSliderHeight_33 = value;
	}

	inline static int32_t get_offset_of_m_VSliderWidth_34() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VSliderWidth_34)); }
	inline float get_m_VSliderWidth_34() const { return ___m_VSliderWidth_34; }
	inline float* get_address_of_m_VSliderWidth_34() { return &___m_VSliderWidth_34; }
	inline void set_m_VSliderWidth_34(float value)
	{
		___m_VSliderWidth_34 = value;
	}

	inline static int32_t get_offset_of_m_Rect_35() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Rect_35)); }
	inline RectTransform_t3704657025 * get_m_Rect_35() const { return ___m_Rect_35; }
	inline RectTransform_t3704657025 ** get_address_of_m_Rect_35() { return &___m_Rect_35; }
	inline void set_m_Rect_35(RectTransform_t3704657025 * value)
	{
		___m_Rect_35 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rect_35), value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarRect_36() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HorizontalScrollbarRect_36)); }
	inline RectTransform_t3704657025 * get_m_HorizontalScrollbarRect_36() const { return ___m_HorizontalScrollbarRect_36; }
	inline RectTransform_t3704657025 ** get_address_of_m_HorizontalScrollbarRect_36() { return &___m_HorizontalScrollbarRect_36; }
	inline void set_m_HorizontalScrollbarRect_36(RectTransform_t3704657025 * value)
	{
		___m_HorizontalScrollbarRect_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalScrollbarRect_36), value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarRect_37() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VerticalScrollbarRect_37)); }
	inline RectTransform_t3704657025 * get_m_VerticalScrollbarRect_37() const { return ___m_VerticalScrollbarRect_37; }
	inline RectTransform_t3704657025 ** get_address_of_m_VerticalScrollbarRect_37() { return &___m_VerticalScrollbarRect_37; }
	inline void set_m_VerticalScrollbarRect_37(RectTransform_t3704657025 * value)
	{
		___m_VerticalScrollbarRect_37 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalScrollbarRect_37), value);
	}

	inline static int32_t get_offset_of_m_Tracker_38() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Tracker_38)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_38() const { return ___m_Tracker_38; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_38() { return &___m_Tracker_38; }
	inline void set_m_Tracker_38(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_38 = value;
	}

	inline static int32_t get_offset_of_m_Corners_39() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Corners_39)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_39() const { return ___m_Corners_39; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_39() { return &___m_Corners_39; }
	inline void set_m_Corners_39(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_39 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLRECT_T4137855814_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_5;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_6;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_7;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_8;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_9;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_10;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_11;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_12;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_13;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_14;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_15;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_16;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_17;

public:
	inline static int32_t get_offset_of_m_Navigation_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_5)); }
	inline Navigation_t3049316579  get_m_Navigation_5() const { return ___m_Navigation_5; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_5() { return &___m_Navigation_5; }
	inline void set_m_Navigation_5(Navigation_t3049316579  value)
	{
		___m_Navigation_5 = value;
	}

	inline static int32_t get_offset_of_m_Transition_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_6)); }
	inline int32_t get_m_Transition_6() const { return ___m_Transition_6; }
	inline int32_t* get_address_of_m_Transition_6() { return &___m_Transition_6; }
	inline void set_m_Transition_6(int32_t value)
	{
		___m_Transition_6 = value;
	}

	inline static int32_t get_offset_of_m_Colors_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_7)); }
	inline ColorBlock_t2139031574  get_m_Colors_7() const { return ___m_Colors_7; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_7() { return &___m_Colors_7; }
	inline void set_m_Colors_7(ColorBlock_t2139031574  value)
	{
		___m_Colors_7 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_8)); }
	inline SpriteState_t1362986479  get_m_SpriteState_8() const { return ___m_SpriteState_8; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_8() { return &___m_SpriteState_8; }
	inline void set_m_SpriteState_8(SpriteState_t1362986479  value)
	{
		___m_SpriteState_8 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_9)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_9() const { return ___m_AnimationTriggers_9; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_9() { return &___m_AnimationTriggers_9; }
	inline void set_m_AnimationTriggers_9(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_9), value);
	}

	inline static int32_t get_offset_of_m_Interactable_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_10)); }
	inline bool get_m_Interactable_10() const { return ___m_Interactable_10; }
	inline bool* get_address_of_m_Interactable_10() { return &___m_Interactable_10; }
	inline void set_m_Interactable_10(bool value)
	{
		___m_Interactable_10 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_11)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_11() const { return ___m_TargetGraphic_11; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_11() { return &___m_TargetGraphic_11; }
	inline void set_m_TargetGraphic_11(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_11), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_12)); }
	inline bool get_m_GroupsAllowInteraction_12() const { return ___m_GroupsAllowInteraction_12; }
	inline bool* get_address_of_m_GroupsAllowInteraction_12() { return &___m_GroupsAllowInteraction_12; }
	inline void set_m_GroupsAllowInteraction_12(bool value)
	{
		___m_GroupsAllowInteraction_12 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_13)); }
	inline int32_t get_m_CurrentSelectionState_13() const { return ___m_CurrentSelectionState_13; }
	inline int32_t* get_address_of_m_CurrentSelectionState_13() { return &___m_CurrentSelectionState_13; }
	inline void set_m_CurrentSelectionState_13(int32_t value)
	{
		___m_CurrentSelectionState_13 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_14)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_14() const { return ___U3CisPointerInsideU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_14() { return &___U3CisPointerInsideU3Ek__BackingField_14; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_14(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_15)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_15() const { return ___U3CisPointerDownU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_15() { return &___U3CisPointerDownU3Ek__BackingField_15; }
	inline void set_U3CisPointerDownU3Ek__BackingField_15(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_16)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_16() const { return ___U3ChasSelectionU3Ek__BackingField_16; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_16() { return &___U3ChasSelectionU3Ek__BackingField_16; }
	inline void set_U3ChasSelectionU3Ek__BackingField_16(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_17() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_17)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_17() const { return ___m_CanvasGroupCache_17; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_17() { return &___m_CanvasGroupCache_17; }
	inline void set_m_CanvasGroupCache_17(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_17), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_4;

public:
	inline static int32_t get_offset_of_s_List_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_4)); }
	inline List_1_t427135887 * get_s_List_4() const { return ___s_List_4; }
	inline List_1_t427135887 ** get_address_of_s_List_4() { return &___s_List_4; }
	inline void set_s_List_4(List_1_t427135887 * value)
	{
		___s_List_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef BUTTON_T4055032469_H
#define BUTTON_T4055032469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button
struct  Button_t4055032469  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t48803504 * ___m_OnClick_18;

public:
	inline static int32_t get_offset_of_m_OnClick_18() { return static_cast<int32_t>(offsetof(Button_t4055032469, ___m_OnClick_18)); }
	inline ButtonClickedEvent_t48803504 * get_m_OnClick_18() const { return ___m_OnClick_18; }
	inline ButtonClickedEvent_t48803504 ** get_address_of_m_OnClick_18() { return &___m_OnClick_18; }
	inline void set_m_OnClick_18(ButtonClickedEvent_t48803504 * value)
	{
		___m_OnClick_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnClick_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTON_T4055032469_H
#ifndef VRINPUTMODULE_T2321821966_H
#define VRINPUTMODULE_T2321821966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.VRInputModule
struct  VRInputModule_t2321821966  : public BaseInputModule_t2019268878
{
public:
	// System.Int32 UnityEngine.UI.Extensions.VRInputModule::counter
	int32_t ___counter_12;

public:
	inline static int32_t get_offset_of_counter_12() { return static_cast<int32_t>(offsetof(VRInputModule_t2321821966, ___counter_12)); }
	inline int32_t get_counter_12() const { return ___counter_12; }
	inline int32_t* get_address_of_counter_12() { return &___counter_12; }
	inline void set_counter_12(int32_t value)
	{
		___counter_12 = value;
	}
};

struct VRInputModule_t2321821966_StaticFields
{
public:
	// UnityEngine.GameObject UnityEngine.UI.Extensions.VRInputModule::targetObject
	GameObject_t1113636619 * ___targetObject_10;
	// UnityEngine.UI.Extensions.VRInputModule UnityEngine.UI.Extensions.VRInputModule::_singleton
	VRInputModule_t2321821966 * ____singleton_11;
	// System.Boolean UnityEngine.UI.Extensions.VRInputModule::mouseClicked
	bool ___mouseClicked_13;
	// UnityEngine.Vector3 UnityEngine.UI.Extensions.VRInputModule::cursorPosition
	Vector3_t3722313464  ___cursorPosition_14;

public:
	inline static int32_t get_offset_of_targetObject_10() { return static_cast<int32_t>(offsetof(VRInputModule_t2321821966_StaticFields, ___targetObject_10)); }
	inline GameObject_t1113636619 * get_targetObject_10() const { return ___targetObject_10; }
	inline GameObject_t1113636619 ** get_address_of_targetObject_10() { return &___targetObject_10; }
	inline void set_targetObject_10(GameObject_t1113636619 * value)
	{
		___targetObject_10 = value;
		Il2CppCodeGenWriteBarrier((&___targetObject_10), value);
	}

	inline static int32_t get_offset_of__singleton_11() { return static_cast<int32_t>(offsetof(VRInputModule_t2321821966_StaticFields, ____singleton_11)); }
	inline VRInputModule_t2321821966 * get__singleton_11() const { return ____singleton_11; }
	inline VRInputModule_t2321821966 ** get_address_of__singleton_11() { return &____singleton_11; }
	inline void set__singleton_11(VRInputModule_t2321821966 * value)
	{
		____singleton_11 = value;
		Il2CppCodeGenWriteBarrier((&____singleton_11), value);
	}

	inline static int32_t get_offset_of_mouseClicked_13() { return static_cast<int32_t>(offsetof(VRInputModule_t2321821966_StaticFields, ___mouseClicked_13)); }
	inline bool get_mouseClicked_13() const { return ___mouseClicked_13; }
	inline bool* get_address_of_mouseClicked_13() { return &___mouseClicked_13; }
	inline void set_mouseClicked_13(bool value)
	{
		___mouseClicked_13 = value;
	}

	inline static int32_t get_offset_of_cursorPosition_14() { return static_cast<int32_t>(offsetof(VRInputModule_t2321821966_StaticFields, ___cursorPosition_14)); }
	inline Vector3_t3722313464  get_cursorPosition_14() const { return ___cursorPosition_14; }
	inline Vector3_t3722313464 * get_address_of_cursorPosition_14() { return &___cursorPosition_14; }
	inline void set_cursorPosition_14(Vector3_t3722313464  value)
	{
		___cursorPosition_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VRINPUTMODULE_T2321821966_H
#ifndef EXTENSIONSTOGGLE_T2596161736_H
#define EXTENSIONSTOGGLE_T2596161736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ExtensionsToggle
struct  ExtensionsToggle_t2596161736  : public Selectable_t3250028441
{
public:
	// System.String UnityEngine.UI.ExtensionsToggle::UniqueID
	String_t* ___UniqueID_18;
	// UnityEngine.UI.ExtensionsToggle/ToggleTransition UnityEngine.UI.ExtensionsToggle::toggleTransition
	int32_t ___toggleTransition_19;
	// UnityEngine.UI.Graphic UnityEngine.UI.ExtensionsToggle::graphic
	Graphic_t1660335611 * ___graphic_20;
	// UnityEngine.UI.ExtensionsToggleGroup UnityEngine.UI.ExtensionsToggle::m_Group
	ExtensionsToggleGroup_t1470432035 * ___m_Group_21;
	// UnityEngine.UI.ExtensionsToggle/ToggleEvent UnityEngine.UI.ExtensionsToggle::onValueChanged
	ToggleEvent_t1375193345 * ___onValueChanged_22;
	// UnityEngine.UI.ExtensionsToggle/ToggleEventObject UnityEngine.UI.ExtensionsToggle::onToggleChanged
	ToggleEventObject_t1392807266 * ___onToggleChanged_23;
	// System.Boolean UnityEngine.UI.ExtensionsToggle::m_IsOn
	bool ___m_IsOn_24;

public:
	inline static int32_t get_offset_of_UniqueID_18() { return static_cast<int32_t>(offsetof(ExtensionsToggle_t2596161736, ___UniqueID_18)); }
	inline String_t* get_UniqueID_18() const { return ___UniqueID_18; }
	inline String_t** get_address_of_UniqueID_18() { return &___UniqueID_18; }
	inline void set_UniqueID_18(String_t* value)
	{
		___UniqueID_18 = value;
		Il2CppCodeGenWriteBarrier((&___UniqueID_18), value);
	}

	inline static int32_t get_offset_of_toggleTransition_19() { return static_cast<int32_t>(offsetof(ExtensionsToggle_t2596161736, ___toggleTransition_19)); }
	inline int32_t get_toggleTransition_19() const { return ___toggleTransition_19; }
	inline int32_t* get_address_of_toggleTransition_19() { return &___toggleTransition_19; }
	inline void set_toggleTransition_19(int32_t value)
	{
		___toggleTransition_19 = value;
	}

	inline static int32_t get_offset_of_graphic_20() { return static_cast<int32_t>(offsetof(ExtensionsToggle_t2596161736, ___graphic_20)); }
	inline Graphic_t1660335611 * get_graphic_20() const { return ___graphic_20; }
	inline Graphic_t1660335611 ** get_address_of_graphic_20() { return &___graphic_20; }
	inline void set_graphic_20(Graphic_t1660335611 * value)
	{
		___graphic_20 = value;
		Il2CppCodeGenWriteBarrier((&___graphic_20), value);
	}

	inline static int32_t get_offset_of_m_Group_21() { return static_cast<int32_t>(offsetof(ExtensionsToggle_t2596161736, ___m_Group_21)); }
	inline ExtensionsToggleGroup_t1470432035 * get_m_Group_21() const { return ___m_Group_21; }
	inline ExtensionsToggleGroup_t1470432035 ** get_address_of_m_Group_21() { return &___m_Group_21; }
	inline void set_m_Group_21(ExtensionsToggleGroup_t1470432035 * value)
	{
		___m_Group_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_Group_21), value);
	}

	inline static int32_t get_offset_of_onValueChanged_22() { return static_cast<int32_t>(offsetof(ExtensionsToggle_t2596161736, ___onValueChanged_22)); }
	inline ToggleEvent_t1375193345 * get_onValueChanged_22() const { return ___onValueChanged_22; }
	inline ToggleEvent_t1375193345 ** get_address_of_onValueChanged_22() { return &___onValueChanged_22; }
	inline void set_onValueChanged_22(ToggleEvent_t1375193345 * value)
	{
		___onValueChanged_22 = value;
		Il2CppCodeGenWriteBarrier((&___onValueChanged_22), value);
	}

	inline static int32_t get_offset_of_onToggleChanged_23() { return static_cast<int32_t>(offsetof(ExtensionsToggle_t2596161736, ___onToggleChanged_23)); }
	inline ToggleEventObject_t1392807266 * get_onToggleChanged_23() const { return ___onToggleChanged_23; }
	inline ToggleEventObject_t1392807266 ** get_address_of_onToggleChanged_23() { return &___onToggleChanged_23; }
	inline void set_onToggleChanged_23(ToggleEventObject_t1392807266 * value)
	{
		___onToggleChanged_23 = value;
		Il2CppCodeGenWriteBarrier((&___onToggleChanged_23), value);
	}

	inline static int32_t get_offset_of_m_IsOn_24() { return static_cast<int32_t>(offsetof(ExtensionsToggle_t2596161736, ___m_IsOn_24)); }
	inline bool get_m_IsOn_24() const { return ___m_IsOn_24; }
	inline bool* get_address_of_m_IsOn_24() { return &___m_IsOn_24; }
	inline void set_m_IsOn_24(bool value)
	{
		___m_IsOn_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONSTOGGLE_T2596161736_H
#ifndef GRIDLAYOUTGROUP_T3046220461_H
#define GRIDLAYOUTGROUP_T3046220461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.GridLayoutGroup
struct  GridLayoutGroup_t3046220461  : public LayoutGroup_t2436138090
{
public:
	// UnityEngine.UI.GridLayoutGroup/Corner UnityEngine.UI.GridLayoutGroup::m_StartCorner
	int32_t ___m_StartCorner_12;
	// UnityEngine.UI.GridLayoutGroup/Axis UnityEngine.UI.GridLayoutGroup::m_StartAxis
	int32_t ___m_StartAxis_13;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_CellSize
	Vector2_t2156229523  ___m_CellSize_14;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_Spacing
	Vector2_t2156229523  ___m_Spacing_15;
	// UnityEngine.UI.GridLayoutGroup/Constraint UnityEngine.UI.GridLayoutGroup::m_Constraint
	int32_t ___m_Constraint_16;
	// System.Int32 UnityEngine.UI.GridLayoutGroup::m_ConstraintCount
	int32_t ___m_ConstraintCount_17;

public:
	inline static int32_t get_offset_of_m_StartCorner_12() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t3046220461, ___m_StartCorner_12)); }
	inline int32_t get_m_StartCorner_12() const { return ___m_StartCorner_12; }
	inline int32_t* get_address_of_m_StartCorner_12() { return &___m_StartCorner_12; }
	inline void set_m_StartCorner_12(int32_t value)
	{
		___m_StartCorner_12 = value;
	}

	inline static int32_t get_offset_of_m_StartAxis_13() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t3046220461, ___m_StartAxis_13)); }
	inline int32_t get_m_StartAxis_13() const { return ___m_StartAxis_13; }
	inline int32_t* get_address_of_m_StartAxis_13() { return &___m_StartAxis_13; }
	inline void set_m_StartAxis_13(int32_t value)
	{
		___m_StartAxis_13 = value;
	}

	inline static int32_t get_offset_of_m_CellSize_14() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t3046220461, ___m_CellSize_14)); }
	inline Vector2_t2156229523  get_m_CellSize_14() const { return ___m_CellSize_14; }
	inline Vector2_t2156229523 * get_address_of_m_CellSize_14() { return &___m_CellSize_14; }
	inline void set_m_CellSize_14(Vector2_t2156229523  value)
	{
		___m_CellSize_14 = value;
	}

	inline static int32_t get_offset_of_m_Spacing_15() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t3046220461, ___m_Spacing_15)); }
	inline Vector2_t2156229523  get_m_Spacing_15() const { return ___m_Spacing_15; }
	inline Vector2_t2156229523 * get_address_of_m_Spacing_15() { return &___m_Spacing_15; }
	inline void set_m_Spacing_15(Vector2_t2156229523  value)
	{
		___m_Spacing_15 = value;
	}

	inline static int32_t get_offset_of_m_Constraint_16() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t3046220461, ___m_Constraint_16)); }
	inline int32_t get_m_Constraint_16() const { return ___m_Constraint_16; }
	inline int32_t* get_address_of_m_Constraint_16() { return &___m_Constraint_16; }
	inline void set_m_Constraint_16(int32_t value)
	{
		___m_Constraint_16 = value;
	}

	inline static int32_t get_offset_of_m_ConstraintCount_17() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t3046220461, ___m_ConstraintCount_17)); }
	inline int32_t get_m_ConstraintCount_17() const { return ___m_ConstraintCount_17; }
	inline int32_t* get_address_of_m_ConstraintCount_17() { return &___m_ConstraintCount_17; }
	inline void set_m_ConstraintCount_17(int32_t value)
	{
		___m_ConstraintCount_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRIDLAYOUTGROUP_T3046220461_H
#ifndef HORIZONTALORVERTICALLAYOUTGROUP_T729725570_H
#define HORIZONTALORVERTICALLAYOUTGROUP_T729725570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct  HorizontalOrVerticalLayoutGroup_t729725570  : public LayoutGroup_t2436138090
{
public:
	// System.Single UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_Spacing
	float ___m_Spacing_12;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandWidth
	bool ___m_ChildForceExpandWidth_13;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandHeight
	bool ___m_ChildForceExpandHeight_14;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlWidth
	bool ___m_ChildControlWidth_15;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlHeight
	bool ___m_ChildControlHeight_16;

public:
	inline static int32_t get_offset_of_m_Spacing_12() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t729725570, ___m_Spacing_12)); }
	inline float get_m_Spacing_12() const { return ___m_Spacing_12; }
	inline float* get_address_of_m_Spacing_12() { return &___m_Spacing_12; }
	inline void set_m_Spacing_12(float value)
	{
		___m_Spacing_12 = value;
	}

	inline static int32_t get_offset_of_m_ChildForceExpandWidth_13() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t729725570, ___m_ChildForceExpandWidth_13)); }
	inline bool get_m_ChildForceExpandWidth_13() const { return ___m_ChildForceExpandWidth_13; }
	inline bool* get_address_of_m_ChildForceExpandWidth_13() { return &___m_ChildForceExpandWidth_13; }
	inline void set_m_ChildForceExpandWidth_13(bool value)
	{
		___m_ChildForceExpandWidth_13 = value;
	}

	inline static int32_t get_offset_of_m_ChildForceExpandHeight_14() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t729725570, ___m_ChildForceExpandHeight_14)); }
	inline bool get_m_ChildForceExpandHeight_14() const { return ___m_ChildForceExpandHeight_14; }
	inline bool* get_address_of_m_ChildForceExpandHeight_14() { return &___m_ChildForceExpandHeight_14; }
	inline void set_m_ChildForceExpandHeight_14(bool value)
	{
		___m_ChildForceExpandHeight_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildControlWidth_15() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t729725570, ___m_ChildControlWidth_15)); }
	inline bool get_m_ChildControlWidth_15() const { return ___m_ChildControlWidth_15; }
	inline bool* get_address_of_m_ChildControlWidth_15() { return &___m_ChildControlWidth_15; }
	inline void set_m_ChildControlWidth_15(bool value)
	{
		___m_ChildControlWidth_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildControlHeight_16() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t729725570, ___m_ChildControlHeight_16)); }
	inline bool get_m_ChildControlHeight_16() const { return ___m_ChildControlHeight_16; }
	inline bool* get_address_of_m_ChildControlHeight_16() { return &___m_ChildControlHeight_16; }
	inline void set_m_ChildControlHeight_16(bool value)
	{
		___m_ChildControlHeight_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIZONTALORVERTICALLAYOUTGROUP_T729725570_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_22)); }
	inline Material_t340375123 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_t340375123 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_23)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_29)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef HORIZONTALLAYOUTGROUP_T2586782146_H
#define HORIZONTALLAYOUTGROUP_T2586782146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.HorizontalLayoutGroup
struct  HorizontalLayoutGroup_t2586782146  : public HorizontalOrVerticalLayoutGroup_t729725570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIZONTALLAYOUTGROUP_T2586782146_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_30)); }
	inline FontData_t746620069 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t746620069 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t746620069 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_32)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_34)); }
	inline Material_t340375123 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_t340375123 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
#ifndef VERTICALLAYOUTGROUP_T923838031_H
#define VERTICALLAYOUTGROUP_T923838031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.VerticalLayoutGroup
struct  VerticalLayoutGroup_t923838031  : public HorizontalOrVerticalLayoutGroup_t729725570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTICALLAYOUTGROUP_T923838031_H
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1068524471  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_t4206410242  m_Items[1];

public:
	inline Keyframe_t4206410242  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_t4206410242 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_t4206410242  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_t4206410242  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_t4206410242 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_t4206410242  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Unoper.Unity.Utils.IPosition[]
struct IPositionU5BU5D_t982770509  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Events.UnityEvent[]
struct UnityEventU5BU5D_t4042265822  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UnityEvent_t2581268647 * m_Items[1];

public:
	inline UnityEvent_t2581268647 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnityEvent_t2581268647 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnityEvent_t2581268647 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline UnityEvent_t2581268647 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnityEvent_t2581268647 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnityEvent_t2581268647 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.PointerEventData/InputButton>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m1044068497_gshared (UnityEvent_1_t290703556 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.PointerEventData/InputButton>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m1380996682_gshared (UnityEvent_1_t290703556 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m3604335408_gshared (UnityEvent_1_t3832605257 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m1513755678_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_m3491943679_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m2239151228_gshared (UnityAction_1_t2741065664 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m1581989708_gshared (UnityEvent_1_t3037889027 * __this, UnityAction_1_t2741065664 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m1328026504_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m3400677460_gshared (UnityEvent_1_t2278926278 * __this, float p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR bool ExecuteEvents_Execute_TisRuntimeObject_m1952955951_gshared (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, BaseEventData_t3903027533 * p1, EventFunction_1_t1764640198 * p2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m933614109_gshared (UnityEvent_1_t978947469 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m2734859485_gshared (UnityEvent_1_t3961765668 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m3777630589_gshared (UnityEvent_1_t978947469 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m1789019280_gshared (UnityEvent_1_t3961765668 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_m784383322_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Remove_m2390619627_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m3007623985_gshared (UnityAction_1_t682124106 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m1238899611_gshared (UnityEvent_1_t978947469 * __this, UnityAction_1_t682124106 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m2847988282_gshared (UnityEvent_1_t978947469 * __this, UnityAction_1_t682124106 * p0, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_m327447107_gshared (Predicate_1_t3905400288 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<!0>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_Find_m2048854920_gshared (List_1_t257213610 * __this, Predicate_1_t3905400288 * p0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_m135484220_gshared (Func_2_t3759279471 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m3454096398_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3759279471 * p1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_m1950624581_gshared (Func_2_t3660230206 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Single,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisSingle_t1397266774_TisSingle_t1397266774_m618648055_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3660230206 * p1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Single>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR SingleU5BU5D_t1444911251* Enumerable_ToArray_TisSingle_t1397266774_m536015028_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.ScrollRect>()
inline ScrollRect_t4137855814 * Component_GetComponent_TisScrollRect_t4137855814_m3636214290 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  ScrollRect_t4137855814 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t3704657025 * Component_GetComponent_TisRectTransform_t3704657025_m3396022872 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t3704657025 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Extensions.UIScrollToSelectionXY::ScrollRectToLevelSelection()
extern "C" IL2CPP_METHOD_ATTR void UIScrollToSelectionXY_ScrollRectToLevelSelection_m975918840 (UIScrollToSelectionXY_t1454929589 * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
extern "C" IL2CPP_METHOD_ATTR EventSystem_t1003666588 * EventSystem_get_current_m1416377559 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * EventSystem_get_currentSelectedGameObject_m2939274948 (EventSystem_t1003666588 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t3704657025 * GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t3704657025 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.ScrollRect::get_vertical()
extern "C" IL2CPP_METHOD_ATTR bool ScrollRect_get_vertical_m3678635065 (ScrollRect_t4137855814 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  RectTransform_get_anchoredPosition_m1813443094 (RectTransform_t3704657025 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.ScrollRect::get_verticalNormalizedPosition()
extern "C" IL2CPP_METHOD_ATTR float ScrollRect_get_verticalNormalizedPosition_m3693218937 (ScrollRect_t4137855814 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  RectTransform_get_sizeDelta_m2183112744 (RectTransform_t3704657025 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ScrollRect_set_verticalNormalizedPosition_m1452826170 (ScrollRect_t4137855814 * __this, float p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.ScrollRect::get_horizontal()
extern "C" IL2CPP_METHOD_ATTR bool ScrollRect_get_horizontal_m4171218020 (ScrollRect_t4137855814 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.ScrollRect::get_horizontalNormalizedPosition()
extern "C" IL2CPP_METHOD_ATTR float ScrollRect_get_horizontalNormalizedPosition_m2904015963 (ScrollRect_t4137855814 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ScrollRect::set_horizontalNormalizedPosition(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ScrollRect_set_horizontalNormalizedPosition_m1066708424 (ScrollRect_t4137855814 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::get_button()
extern "C" IL2CPP_METHOD_ATTR int32_t PointerEventData_get_button_m359423249 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.PointerEventData/InputButton>::Invoke(!0)
inline void UnityEvent_1_Invoke_m1044068497 (UnityEvent_1_t290703556 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t290703556 *, int32_t, const RuntimeMethod*))UnityEvent_1_Invoke_m1044068497_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.PointerEventData/InputButton>::.ctor()
inline void UnityEvent_1__ctor_m1380996682 (UnityEvent_1_t290703556 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t290703556 *, const RuntimeMethod*))UnityEvent_1__ctor_m1380996682_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Extensions.UISoftAdditiveEffect::SetMaterial()
extern "C" IL2CPP_METHOD_ATTR void UISoftAdditiveEffect_SetMaterial_m1527550642 (UISoftAdditiveEffect_t1842650896 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.MaskableGraphic>()
inline MaskableGraphic_t3839221559 * Component_GetComponent_TisMaskableGraphic_t3839221559_m1169390343 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  MaskableGraphic_t3839221559 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR Shader_t4151988712 * Shader_Find_m2092206247 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m1662457592 (Material_t340375123 * __this, Shader_t4151988712 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
extern "C" IL2CPP_METHOD_ATTR RectTransform_t3704657025 * ScrollRect_get_content_m2477524320 (ScrollRect_t4137855814 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
extern "C" IL2CPP_METHOD_ATTR Rect_t2360479859  RectTransform_get_rect_m574169965 (RectTransform_t3704657025 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_height_m1358425599 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m4126691837 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller::AddListener(UnityEngine.GameObject,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UIVerticalScroller_AddListener_m822110344 (UIVerticalScroller_t3292120078 * __this, GameObject_t1113636619 * ___button0, int32_t ___index1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t4055032469 * GameObject_GetComponent_TisButton_t4055032469_m1515138076 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Button_t4055032469 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" IL2CPP_METHOD_ATTR ButtonClickedEvent_t48803504 * Button_get_onClick_m2332132945 (Button_t4055032469 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction__ctor_m772160306 (UnityAction_t3245792599 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m2276267359 (UnityEvent_t2581268647 * __this, UnityAction_t3245792599 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller::SnapToElement(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UIVerticalScroller_SnapToElement_m3251754663 (UIVerticalScroller_t3292120078 * __this, int32_t ___element0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller/<>c__DisplayClass17_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m2202613438 (U3CU3Ec__DisplayClass17_0_t1582113759 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(!0)
inline void UnityEvent_1_Invoke_m3604335408 (UnityEvent_1_t3832605257 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3832605257 *, int32_t, const RuntimeMethod*))UnityEvent_1_Invoke_m3604335408_gshared)(__this, p0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Max_m3146388979 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single[])
extern "C" IL2CPP_METHOD_ATTR float Mathf_Min_m209631461 (RuntimeObject * __this /* static, unused */, SingleU5BU5D_t1444911251* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t4083511760 * GameObject_GetComponent_TisCanvasGroup_t4083511760_m378106990 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t4083511760 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Void UnityEngine.CanvasGroup::set_interactable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CanvasGroup_set_interactable_m1698617177 (CanvasGroup_t4083511760 * __this, bool p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_t1901882714 * GameObject_GetComponentInChildren_TisText_t1901882714_m3637202860 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Text_t1901882714 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_m1513755678_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller::ScrollingElements(System.Single)
extern "C" IL2CPP_METHOD_ATTR void UIVerticalScroller_ScrollingElements_m701951019 (UIVerticalScroller_t3292120078 * __this, float ___position0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Lerp_m1004423579 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_Lerp_m854472224 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller::ScrollUp()
extern "C" IL2CPP_METHOD_ATTR void UIVerticalScroller_ScrollUp_m1381309139 (UIVerticalScroller_t3292120078 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller::ScrollDown()
extern "C" IL2CPP_METHOD_ATTR void UIVerticalScroller_ScrollDown_m3744983971 (UIVerticalScroller_t3292120078 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller::DoSomething(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UIVerticalScroller_DoSomething_m2639774279 (UIVerticalScroller_t3292120078 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t3310196443 * Component_GetComponentInParent_TisCanvas_t3310196443_m1339529724 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_t3310196443 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m3491943679_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Extensions.UIWindowBase::resetCoordinatePosition()
extern "C" IL2CPP_METHOD_ATTR void UIWindowBase_resetCoordinatePosition_m2901949189 (UIWindowBase_t1803419093 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  PointerEventData_get_position_m437660275 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.UI.Extensions.UIWindowBase::ScreenToCanvas(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  UIWindowBase_ScreenToCanvas_m2805835704 (UIWindowBase_t1803419093 * __this, Vector3_t3722313464  ___screenPosition0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  PointerEventData_get_delta_m1062010255 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Subtraction_m73004381 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localPosition_m4234289348 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
extern "C" IL2CPP_METHOD_ATTR RaycastResult_t3360306849  PointerEventData_get_pointerCurrentRaycast_m2627585223 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * RaycastResult_get_gameObject_m2570051527 (RaycastResult_t3360306849 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_m841659411 (Canvas_t3310196443 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * Canvas_get_worldCamera_m3516267897 (Canvas_t3310196443 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_get_zero_m540426400 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Ray_t3785851493  Camera_ScreenPointToRay_m3764635188 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_forward_m747522392 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Plane__ctor_m2890438515 (Plane_t1000493321 * __this, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
extern "C" IL2CPP_METHOD_ATTR bool Plane_Raycast_m62370169 (Plane_t1000493321 * __this, Ray_t3785851493  p0, float* p1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Ray_get_origin_m2819290985 (Ray_t3785851493 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Ray_get_direction_m761601601 (Ray_t3785851493 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_InverseTransformPoint_m1343916000 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  RectTransform_get_pivot_m3425744470 (RectTransform_t3704657025 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_Scale_m165605769 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_UnaryNegation_m2172448356 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_get_one_m738793577 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp_m3350697880 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.UI_InfiniteScroll::Init()
extern "C" IL2CPP_METHOD_ATTR void UI_InfiniteScroll_Init_m1065705655 (UI_InfiniteScroll_t3303149176 * __this, const RuntimeMethod* method);
// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::get_onValueChanged()
extern "C" IL2CPP_METHOD_ATTR ScrollRectEvent_t343079324 * ScrollRect_get_onValueChanged_m1819941361 (ScrollRect_t4137855814 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m2239151228 (UnityAction_1_t2741065664 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t2741065664 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m2239151228_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_m1581989708 (UnityEvent_1_t3037889027 * __this, UnityAction_1_t2741065664 * p0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3037889027 *, UnityAction_1_t2741065664 *, const RuntimeMethod*))UnityEvent_1_AddListener_m1581989708_gshared)(__this, p0, method);
}
// System.Void UnityEngine.UI.ScrollRect::set_movementType(UnityEngine.UI.ScrollRect/MovementType)
extern "C" IL2CPP_METHOD_ATTR void ScrollRect_set_movementType_m566824818 (ScrollRect_t4137855814 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Add(!0)
inline void List_1_Add_m1464644364 (List_1_t881764471 * __this, RectTransform_t3704657025 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t881764471 *, RectTransform_t3704657025 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.VerticalLayoutGroup>()
inline VerticalLayoutGroup_t923838031 * Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  VerticalLayoutGroup_t923838031 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.HorizontalLayoutGroup>()
inline HorizontalLayoutGroup_t2586782146 * Component_GetComponent_TisHorizontalLayoutGroup_t2586782146_m1824140114 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  HorizontalLayoutGroup_t2586782146 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.GridLayoutGroup>()
inline GridLayoutGroup_t3046220461 * Component_GetComponent_TisGridLayoutGroup_t3046220461_m2458911910 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  GridLayoutGroup_t3046220461 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.ContentSizeFitter>()
inline ContentSizeFitter_t3850442145 * Component_GetComponent_TisContentSizeFitter_t3850442145_m1301783278 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  ContentSizeFitter_t3850442145 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Item(System.Int32)
inline RectTransform_t3704657025 * List_1_get_Item_m1718277669 (List_1_t881764471 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  RectTransform_t3704657025 * (*) (List_1_t881764471 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.UI_InfiniteScroll::DisableGridComponents()
extern "C" IL2CPP_METHOD_ATTR void UI_InfiniteScroll_DisableGridComponents_m2970094095 (UI_InfiniteScroll_t3303149176 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern "C" IL2CPP_METHOD_ATTR void Transform_SetAsFirstSibling_m253439912 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetAsLastSibling()
extern "C" IL2CPP_METHOD_ATTR void Transform_SetAsLastSibling_m3949169710 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Count()
inline int32_t List_1_get_Count_m1749180329 (List_1_t881764471 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t881764471 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor()
inline void List_1__ctor_m3408116030 (List_1_t881764471 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t881764471 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Extensions.UI_Knob::SetInitPointerData(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void UI_Knob_SetInitPointerData_m2203880447 (UI_Knob_t1735628298 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_AngleAxis_m1767165696 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Quaternion_get_eulerAngles_m3425202016 (Quaternion_t2301928331 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::set_eulerAngles(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Quaternion_set_eulerAngles_m793195291 (Quaternion_t2301928331 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_op_Multiply_m1294064023 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.UI_Knob::SnapToPosition(System.Single&)
extern "C" IL2CPP_METHOD_ATTR void UI_Knob_SnapToPosition_m3789174925 (UI_Knob_t1735628298 * __this, float* ___knobValue0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m4202601546 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.UI_Knob::InvokeEvents(System.Single)
extern "C" IL2CPP_METHOD_ATTR void UI_Knob_InvokeEvents_m2920931428 (UI_Knob_t1735628298 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(!0)
inline void UnityEvent_1_Invoke_m3400677460 (UnityEvent_1_t2278926278 * __this, float p0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2278926278 *, float, const RuntimeMethod*))UnityEvent_1_Invoke_m3400677460_gshared)(__this, p0, method);
}
// System.Void UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::Init()
extern "C" IL2CPP_METHOD_ATTR void UI_ScrollRectOcclusion_Init_m3669417748 (UI_ScrollRectOcclusion_t2700427833 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_width_m3421484486 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::DisableGridComponents()
extern "C" IL2CPP_METHOD_ATTR void UI_ScrollRectOcclusion_DisableGridComponents_m1933239258 (UI_ScrollRectOcclusion_t2700427833 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_t3600365921 * Component_GetComponent_TisTransform_t3600365921_m1200784320 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Transform_t3600365921 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.UI_TweenScale::Play()
extern "C" IL2CPP_METHOD_ATTR void UI_TweenScale_Play_m2475340060 (UI_TweenScale_t1206981451 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m2618285814 (MonoBehaviour_t3962482529 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.UI_TweenScale/<Tween>d__11::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CTweenU3Ed__11__ctor_m2164385517 (U3CTweenU3Ed__11_t869818022 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m1962070247 (MonoBehaviour_t3962482529 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_one_m1629952498 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
extern "C" IL2CPP_METHOD_ATTR KeyframeU5BU5D_t1068524471* AnimationCurve_get_keys_m1672862131 (AnimationCurve_t3046754366 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::get_length()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_m1548433259 (AnimationCurve_t3046754366 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_time()
extern "C" IL2CPP_METHOD_ATTR float Keyframe_get_time_m803196188 (Keyframe_t4206410242 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C" IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m2125563588 (AnimationCurve_t3046754366 * __this, float p0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Input_get_mousePosition_m1616496925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m2081676745 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.VRInputModule::PointerSubmit(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void VRInputModule_PointerSubmit_m276617441 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.VRInputModule::PointerEnter(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void VRInputModule_PointerEnter_m4958081 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.VRInputModule::PointerExit(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void VRInputModule_PointerExit_m3267747566 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___obj0, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::get_eventSystem()
extern "C" IL2CPP_METHOD_ATTR EventSystem_t1003666588 * BaseInputModule_get_eventSystem_m1212899053 (BaseInputModule_t2019268878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" IL2CPP_METHOD_ATTR void BaseEventData__ctor_m1299776920 (BaseEventData_t3903027533 * __this, EventSystem_t1003666588 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.BaseEventData::set_selectedObject(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void BaseEventData_set_selectedObject_m1456148497 (BaseEventData_t3903027533 * __this, GameObject_t1113636619 * p0, const RuntimeMethod* method);
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::get_submitHandler()
extern "C" IL2CPP_METHOD_ATTR EventFunction_1_t1475332338 * ExecuteEvents_get_submitHandler_m94189868 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.ISubmitHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline bool ExecuteEvents_Execute_TisISubmitHandler_t2790798304_m3136014644 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, BaseEventData_t3903027533 * p1, EventFunction_1_t1475332338 * p2, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, BaseEventData_t3903027533 *, EventFunction_1_t1475332338 *, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_m1952955951_gshared)(__this /* static, unused */, p0, p1, p2, method);
}
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_print_m330341231 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" IL2CPP_METHOD_ATTR void PointerEventData__ctor_m2263609344 (PointerEventData_t3807901092 * __this, EventSystem_t1003666588 * p0, const RuntimeMethod* method);
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerExitHandler()
extern "C" IL2CPP_METHOD_ATTR EventFunction_1_t2867327688 * ExecuteEvents_get_pointerExitHandler_m659239743 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerExitHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline bool ExecuteEvents_Execute_TisIPointerExitHandler_t4182793654_m767184367 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, BaseEventData_t3903027533 * p1, EventFunction_1_t2867327688 * p2, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, BaseEventData_t3903027533 *, EventFunction_1_t2867327688 *, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_m1952955951_gshared)(__this /* static, unused */, p0, p1, p2, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::get_deselectHandler()
extern "C" IL2CPP_METHOD_ATTR EventFunction_1_t3373214253 * ExecuteEvents_get_deselectHandler_m343617552 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IDeselectHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline bool ExecuteEvents_Execute_TisIDeselectHandler_t393712923_m2480832291 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, BaseEventData_t3903027533 * p1, EventFunction_1_t3373214253 * p2, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, BaseEventData_t3903027533 *, EventFunction_1_t3373214253 *, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_m1952955951_gshared)(__this /* static, unused */, p0, p1, p2, method);
}
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerEnter(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void PointerEventData_set_pointerEnter_m3256217464 (PointerEventData_t3807901092 * __this, GameObject_t1113636619 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerCurrentRaycast(UnityEngine.EventSystems.RaycastResult)
extern "C" IL2CPP_METHOD_ATTR void PointerEventData_set_pointerCurrentRaycast_m3745471622 (PointerEventData_t3807901092 * __this, RaycastResult_t3360306849  p0, const RuntimeMethod* method);
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerEnterHandler()
extern "C" IL2CPP_METHOD_ATTR EventFunction_1_t3995630009 * ExecuteEvents_get_pointerEnterHandler_m1185301724 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerEnterHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline bool ExecuteEvents_Execute_TisIPointerEnterHandler_t1016128679_m878985392 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, BaseEventData_t3903027533 * p1, EventFunction_1_t3995630009 * p2, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, BaseEventData_t3903027533 *, EventFunction_1_t3995630009 *, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_m1952955951_gshared)(__this /* static, unused */, p0, p1, p2, method);
}
// System.Void UnityEngine.EventSystems.BaseInputModule::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseInputModule__ctor_m545527485 (BaseInputModule_t2019268878 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.UI.Extensions.Vector3_Array2D::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_Array2D_get_Item_m390488908 (Vector3_Array2D_t2295860118 * __this, int32_t ____idx0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.Vector3_Array2D::set_Item(System.Int32,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Vector3_Array2D_set_Item_m950392222 (Vector3_Array2D_t2295860118 * __this, int32_t ____idx0, Vector3_t3722313464  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::UpdateLayout()
extern "C" IL2CPP_METHOD_ATTR void VerticalScrollSnap_UpdateLayout_m832716593 (VerticalScrollSnap_t3018533569 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_velocity()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  ScrollRect_get_velocity_m513672031 (ScrollRect_t4137855814 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m2303255133 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.Extensions.ScrollSnapBase::IsRectSettledOnaPage(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool ScrollSnapBase_IsRectSettledOnaPage_m1334830036 (ScrollSnapBase_t2887778829 * __this, Vector3_t3722313464  ___pos0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::ScrollToClosestElement()
extern "C" IL2CPP_METHOD_ATTR void ScrollSnapBase_ScrollToClosestElement_m1001515940 (ScrollSnapBase_t2887778829 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_Lerp_m407887542 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Distance_m886789632 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::EndScreenChange()
extern "C" IL2CPP_METHOD_ATTR void ScrollSnapBase_EndScreenChange_m3590439676 (ScrollSnapBase_t2887778829 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UI.Extensions.ScrollSnapBase::GetPageforPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR int32_t ScrollSnapBase_GetPageforPosition_m3863005976 (ScrollSnapBase_t2887778829 * __this, Vector3_t3722313464  ___pos0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::set_CurrentPage(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ScrollSnapBase_set_CurrentPage_m2832416549 (ScrollSnapBase_t2887778829 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.Extensions.VerticalScrollSnap::IsRectMovingSlowerThanThreshold(System.Single)
extern "C" IL2CPP_METHOD_ATTR bool VerticalScrollSnap_IsRectMovingSlowerThanThreshold_m716767468 (VerticalScrollSnap_t3018533569 * __this, float ___startingSpeed0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m3462269772 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m909387058 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m2998668828 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m4230103102 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_offsetMax(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void RectTransform_set_offsetMax_m2526664592 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::AddChild(UnityEngine.GameObject,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VerticalScrollSnap_AddChild_m3633366043 (VerticalScrollSnap_t3018533569 * __this, GameObject_t1113636619 * ___GO0, bool ___WorldPositionStays1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Transform_SetParent_m273471670 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, bool p1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::InitialiseChildObjectsFromScene()
extern "C" IL2CPP_METHOD_ATTR void ScrollSnapBase_InitialiseChildObjectsFromScene_m1734487769 (ScrollSnapBase_t2887778829 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::DistributePages()
extern "C" IL2CPP_METHOD_ATTR void VerticalScrollSnap_DistributePages_m3256480868 (VerticalScrollSnap_t3018533569 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::UpdateVisible()
extern "C" IL2CPP_METHOD_ATTR void ScrollSnapBase_UpdateVisible_m3765638251 (ScrollSnapBase_t2887778829 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::SetScrollContainerPosition()
extern "C" IL2CPP_METHOD_ATTR void VerticalScrollSnap_SetScrollContainerPosition_m1971113978 (VerticalScrollSnap_t3018533569 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::RemoveChild(System.Int32,System.Boolean,UnityEngine.GameObject&)
extern "C" IL2CPP_METHOD_ATTR void VerticalScrollSnap_RemoveChild_m3946971085 (VerticalScrollSnap_t3018533569 * __this, int32_t ___index0, bool ___WorldPositionStays1, GameObject_t1113636619 ** ___ChildRemoved2, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::RemoveAllChildren(System.Boolean,UnityEngine.GameObject[]&)
extern "C" IL2CPP_METHOD_ATTR void VerticalScrollSnap_RemoveAllChildren_m3982600434 (VerticalScrollSnap_t3018533569 * __this, bool ___WorldPositionStays0, GameObjectU5BU5D_t3328599146** ___ChildrenRemoved1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::OnCurrentScreenChange(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ScrollSnapBase_OnCurrentScreenChange_m511538427 (ScrollSnapBase_t2887778829 * __this, int32_t ___currentScreen0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_m3858779880 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::GoToScreen(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ScrollSnapBase_GoToScreen_m672334424 (ScrollSnapBase_t2887778829 * __this, int32_t ___screenIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ScrollRect::set_velocity(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void ScrollRect_set_velocity_m2217198666 (ScrollRect_t4137855814 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::NextScreen()
extern "C" IL2CPP_METHOD_ATTR void ScrollSnapBase_NextScreen_m3303034062 (ScrollSnapBase_t2887778829 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::PreviousScreen()
extern "C" IL2CPP_METHOD_ATTR void ScrollSnapBase_PreviousScreen_m1913953057 (ScrollSnapBase_t2887778829 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScrollSnapBase__ctor_m1768920712 (ScrollSnapBase_t2887778829 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ExtensionsToggle::SetToggleGroup(UnityEngine.UI.ExtensionsToggleGroup,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_SetToggleGroup_m1928026226 (ExtensionsToggle_t2596161736 * __this, ExtensionsToggleGroup_t1470432035 * ___newGroup0, bool ___setMemberValue1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ExtensionsToggle::PlayEffect(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_PlayEffect_m859397774 (ExtensionsToggle_t2596161736 * __this, bool ___instant0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ExtensionsToggle/ToggleEvent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ToggleEvent__ctor_m4228789907 (ToggleEvent_t1375193345 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ExtensionsToggle/ToggleEventObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ToggleEventObject__ctor_m1904034588 (ToggleEventObject_t1392807266 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Selectable__ctor_m58942866 (Selectable_t3250028441 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void Selectable_OnEnable_m3110490294 (Selectable_t3250028441 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void Selectable_OnDisable_m3225138518 (Selectable_t3250028441 * __this, const RuntimeMethod* method);
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
extern "C" IL2CPP_METHOD_ATTR CanvasRenderer_t2598313366 * Graphic_get_canvasRenderer_m315509948 (Graphic_t1660335611 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  CanvasRenderer_GetColor_m2699192164 (CanvasRenderer_t2598313366 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Mathf_Approximately_m245805902 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ExtensionsToggle::Set(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_Set_m3196572754 (ExtensionsToggle_t2596161736 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::OnDidApplyAnimationProperties()
extern "C" IL2CPP_METHOD_ATTR void Selectable_OnDidApplyAnimationProperties_m1530194632 (Selectable_t3250028441 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ExtensionsToggleGroup::UnregisterToggle(UnityEngine.UI.ExtensionsToggle)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggleGroup_UnregisterToggle_m3687746851 (ExtensionsToggleGroup_t1470432035 * __this, ExtensionsToggle_t2596161736 * ___toggle0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ExtensionsToggleGroup::RegisterToggle(UnityEngine.UI.ExtensionsToggle)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggleGroup_RegisterToggle_m1743226738 (ExtensionsToggleGroup_t1470432035 * __this, ExtensionsToggle_t2596161736 * ___toggle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.ExtensionsToggle::get_IsOn()
extern "C" IL2CPP_METHOD_ATTR bool ExtensionsToggle_get_IsOn_m1223912286 (ExtensionsToggle_t2596161736 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ExtensionsToggleGroup::NotifyToggleOn(UnityEngine.UI.ExtensionsToggle)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggleGroup_NotifyToggleOn_m2414242010 (ExtensionsToggleGroup_t1470432035 * __this, ExtensionsToggle_t2596161736 * ___toggle0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ExtensionsToggle::Set(System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_Set_m3452279008 (ExtensionsToggle_t2596161736 * __this, bool ___value0, bool ___sendCallback1, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.ExtensionsToggleGroup::AnyTogglesOn()
extern "C" IL2CPP_METHOD_ATTR bool ExtensionsToggleGroup_AnyTogglesOn_m1412797946 (ExtensionsToggleGroup_t1470432035 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.ExtensionsToggleGroup::get_AllowSwitchOff()
extern "C" IL2CPP_METHOD_ATTR bool ExtensionsToggleGroup_get_AllowSwitchOff_m2557215788 (ExtensionsToggleGroup_t1470432035 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(!0)
inline void UnityEvent_1_Invoke_m933614109 (UnityEvent_1_t978947469 * __this, bool p0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t978947469 *, bool, const RuntimeMethod*))UnityEvent_1_Invoke_m933614109_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.UI.ExtensionsToggle>::Invoke(!0)
inline void UnityEvent_1_Invoke_m234972032 (UnityEvent_1_t3477821240 * __this, ExtensionsToggle_t2596161736 * p0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3477821240 *, ExtensionsToggle_t2596161736 *, const RuntimeMethod*))UnityEvent_1_Invoke_m2734859485_gshared)(__this, p0, method);
}
// System.Void UnityEngine.UI.ExtensionsToggle::set_IsOn(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_set_IsOn_m2732506648 (ExtensionsToggle_t2596161736 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ExtensionsToggle::InternalToggle()
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_InternalToggle_m2736440274 (ExtensionsToggle_t2596161736 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
inline void UnityEvent_1__ctor_m3777630589 (UnityEvent_1_t978947469 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t978947469 *, const RuntimeMethod*))UnityEvent_1__ctor_m3777630589_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.UI.ExtensionsToggle>::.ctor()
inline void UnityEvent_1__ctor_m3322849880 (UnityEvent_1_t3477821240 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3477821240 *, const RuntimeMethod*))UnityEvent_1__ctor_m1789019280_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ExtensionsToggle>::.ctor()
inline void List_1__ctor_m3922113147 (List_1_t4068236478 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4068236478 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void UnityEngine.UI.ExtensionsToggleGroup/ToggleGroupEvent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ToggleGroupEvent__ctor_m3122901364 (ToggleGroupEvent_t2519216546 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.UIBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UIBehaviour__ctor_m4230637738 (UIBehaviour_t3495933518 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ExtensionsToggle>::Contains(!0)
inline bool List_1_Contains_m1961169762 (List_1_t4068236478 * __this, ExtensionsToggle_t2596161736 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t4068236478 *, ExtensionsToggle_t2596161736 *, const RuntimeMethod*))List_1_Contains_m784383322_gshared)(__this, p0, method);
}
// System.String System.String::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ExtensionsToggleGroup::ValidateToggleIsInGroup(UnityEngine.UI.ExtensionsToggle)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggleGroup_ValidateToggleIsInGroup_m109885595 (ExtensionsToggleGroup_t1470432035 * __this, ExtensionsToggle_t2596161736 * ___toggle0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.UI.ExtensionsToggle>::get_Item(System.Int32)
inline ExtensionsToggle_t2596161736 * List_1_get_Item_m1632548537 (List_1_t4068236478 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  ExtensionsToggle_t2596161736 * (*) (List_1_t4068236478 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Void UnityEngine.UI.ExtensionsToggleGroup::set_SelectedToggle(UnityEngine.UI.ExtensionsToggle)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggleGroup_set_SelectedToggle_m1092346406 (ExtensionsToggleGroup_t1470432035 * __this, ExtensionsToggle_t2596161736 * ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ExtensionsToggle>::get_Count()
inline int32_t List_1_get_Count_m2396720711 (List_1_t4068236478 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4068236478 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ExtensionsToggle>::Remove(!0)
inline bool List_1_Remove_m2913572375 (List_1_t4068236478 * __this, ExtensionsToggle_t2596161736 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t4068236478 *, ExtensionsToggle_t2596161736 *, const RuntimeMethod*))List_1_Remove_m2390619627_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m3007623985 (UnityAction_1_t682124106 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t682124106 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m3007623985_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_m1238899611 (UnityEvent_1_t978947469 * __this, UnityAction_1_t682124106 * p0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t978947469 *, UnityAction_1_t682124106 *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m1238899611_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ExtensionsToggle>::Add(!0)
inline void List_1_Add_m2091984383 (List_1_t4068236478 * __this, ExtensionsToggle_t2596161736 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4068236478 *, ExtensionsToggle_t2596161736 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_m2847988282 (UnityEvent_1_t978947469 * __this, UnityAction_1_t682124106 * p0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t978947469 *, UnityAction_1_t682124106 *, const RuntimeMethod*))UnityEvent_1_AddListener_m2847988282_gshared)(__this, p0, method);
}
// System.Void System.Predicate`1<UnityEngine.UI.ExtensionsToggle>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m4046004448 (Predicate_1_t3421455860 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t3421455860 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m327447107_gshared)(__this, p0, p1, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.UI.ExtensionsToggle>::Find(System.Predicate`1<!0>)
inline ExtensionsToggle_t2596161736 * List_1_Find_m1863931225 (List_1_t4068236478 * __this, Predicate_1_t3421455860 * p0, const RuntimeMethod* method)
{
	return ((  ExtensionsToggle_t2596161736 * (*) (List_1_t4068236478 *, Predicate_1_t3421455860 *, const RuntimeMethod*))List_1_Find_m2048854920_gshared)(__this, p0, method);
}
// System.Void System.Func`2<UnityEngine.UI.ExtensionsToggle,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4008246522 (Func_2_t4105555595 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t4105555595 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m135484220_gshared)(__this, p0, p1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<UnityEngine.UI.ExtensionsToggle>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisExtensionsToggle_t2596161736_m2906480068 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t4105555595 * p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t4105555595 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m3454096398_gshared)(__this /* static, unused */, p0, p1, method);
}
// System.String System.Boolean::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m2664721875 (bool* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ExtensionsToggleGroup/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1952556406 (U3CU3Ec_t1762776327 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4227543964 (MonoBehaviour_t3962482529 * __this, String_t* p0, float p1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1950624581 (Func_2_t3660230206 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3660230206 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m1950624581_gshared)(__this, p0, p1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Single,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisSingle_t1397266774_TisSingle_t1397266774_m618648055 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3660230206 * p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3660230206 *, const RuntimeMethod*))Enumerable_Select_TisSingle_t1397266774_TisSingle_t1397266774_m618648055_gshared)(__this /* static, unused */, p0, p1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.Single>(System.Collections.Generic.IEnumerable`1<!!0>)
inline SingleU5BU5D_t1444911251* Enumerable_ToArray_TisSingle_t1397266774_m536015028 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t1444911251* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisSingle_t1397266774_m536015028_gshared)(__this /* static, unused */, p0, method);
}
// System.Single System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Single>)
extern "C" IL2CPP_METHOD_ATTR float Enumerable_Sum_m4067260984 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Unoper.Unity.Utils.LerpPosition/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1517696372 (U3CU3Ec_t909697984 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Random_Range_m2202990745 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void Unoper.Unity.Utils.Sequencer::ExecuteSequence()
extern "C" IL2CPP_METHOD_ATTR void Sequencer_ExecuteSequence_m3136185572 (Sequencer_t2140344483 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_Invoke_m3065672636 (UnityEvent_t2581268647 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Random_get_insideUnitSphere_m3252929179 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.IEnumerator Unoper.Unity.Utils.Timer::Countdown()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Timer_Countdown_m3824537230 (Timer_t3412046349 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Unoper.Unity.Utils.Timer/<Countdown>d__6::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CCountdownU3Ed__6__ctor_m898628999 (U3CCountdownU3Ed__6_t2310584700 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m3074252807 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C" IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
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
// System.Void UnityEngine.UI.Extensions.UIScrollToSelectionXY::Start()
extern "C" IL2CPP_METHOD_ATTR void UIScrollToSelectionXY_Start_m4014267542 (UIScrollToSelectionXY_t1454929589 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIScrollToSelectionXY_Start_m4014267542_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// targetScrollRect = GetComponent<ScrollRect>();
		ScrollRect_t4137855814 * L_0 = Component_GetComponent_TisScrollRect_t4137855814_m3636214290(__this, /*hidden argument*/Component_GetComponent_TisScrollRect_t4137855814_m3636214290_RuntimeMethod_var);
		__this->set_targetScrollRect_10(L_0);
		// scrollWindow = targetScrollRect.GetComponent<RectTransform>();
		ScrollRect_t4137855814 * L_1 = __this->get_targetScrollRect_10();
		NullCheck(L_1);
		RectTransform_t3704657025 * L_2 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(L_1, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		__this->set_scrollWindow_8(L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UIScrollToSelectionXY::Update()
extern "C" IL2CPP_METHOD_ATTR void UIScrollToSelectionXY_Update_m653109276 (UIScrollToSelectionXY_t1454929589 * __this, const RuntimeMethod* method)
{
	{
		// ScrollRectToLevelSelection();
		UIScrollToSelectionXY_ScrollRectToLevelSelection_m975918840(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UIScrollToSelectionXY::ScrollRectToLevelSelection()
extern "C" IL2CPP_METHOD_ATTR void UIScrollToSelectionXY_ScrollRectToLevelSelection_m975918840 (UIScrollToSelectionXY_t1454929589 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIScrollToSelectionXY_ScrollRectToLevelSelection_m975918840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventSystem_t1003666588 * V_0 = NULL;
	RectTransform_t3704657025 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	int32_t G_B4_0 = 0;
	RectTransform_t3704657025 * G_B9_0 = NULL;
	int32_t G_B14_0 = 0;
	{
		// var events = EventSystem.current;
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t1003666588_il2cpp_TypeInfo_var);
		EventSystem_t1003666588 * L_0 = EventSystem_get_current_m1416377559(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		// bool referencesAreIncorrect =
		//     (targetScrollRect == null || layoutListGroup == null || scrollWindow == null);
		ScrollRect_t4137855814 * L_1 = __this->get_targetScrollRect_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		RectTransform_t3704657025 * L_3 = __this->get_layoutListGroup_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		RectTransform_t3704657025 * L_5 = __this->get_scrollWindow_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_6));
		goto IL_0031;
	}

IL_0030:
	{
		G_B4_0 = 1;
	}

IL_0031:
	{
		// if (referencesAreIncorrect == true)
		if (!G_B4_0)
		{
			goto IL_0034;
		}
	}
	{
		// return;
		return;
	}

IL_0034:
	{
		// RectTransform selection = events.currentSelectedGameObject != null ?
		//     events.currentSelectedGameObject.GetComponent<RectTransform>() :
		//     null;
		EventSystem_t1003666588 * L_7 = V_0;
		NullCheck(L_7);
		GameObject_t1113636619 * L_8 = EventSystem_get_currentSelectedGameObject_m2939274948(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0045;
		}
	}
	{
		G_B9_0 = ((RectTransform_t3704657025 *)(NULL));
		goto IL_0050;
	}

IL_0045:
	{
		EventSystem_t1003666588 * L_10 = V_0;
		NullCheck(L_10);
		GameObject_t1113636619 * L_11 = EventSystem_get_currentSelectedGameObject_m2939274948(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		RectTransform_t3704657025 * L_12 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_11, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		G_B9_0 = L_12;
	}

IL_0050:
	{
		V_1 = G_B9_0;
		// if (selection != targetScrollObject)
		RectTransform_t3704657025 * L_13 = V_1;
		RectTransform_t3704657025 * L_14 = __this->get_targetScrollObject_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		// scrollToSelection = true;
		__this->set_scrollToSelection_7((bool)1);
	}

IL_0066:
	{
		// bool isScrollDirectionUnknown = (selection == null || scrollToSelection == false);
		RectTransform_t3704657025 * L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_16, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_007a;
		}
	}
	{
		bool L_18 = __this->get_scrollToSelection_7();
		G_B14_0 = ((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		goto IL_007b;
	}

IL_007a:
	{
		G_B14_0 = 1;
	}

IL_007b:
	{
		// if (isScrollDirectionUnknown == true || selection.transform.parent != layoutListGroup.transform)
		if (G_B14_0)
		{
			goto IL_009a;
		}
	}
	{
		RectTransform_t3704657025 * L_19 = V_1;
		NullCheck(L_19);
		Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_t3600365921 * L_21 = Transform_get_parent_m835071599(L_20, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_22 = __this->get_layoutListGroup_5();
		NullCheck(L_22);
		Transform_t3600365921 * L_23 = Component_get_transform_m3162698980(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_24 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_21, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_009b;
		}
	}

IL_009a:
	{
		// return;
		return;
	}

IL_009b:
	{
		// bool finishedX = false, finishedY = false;
		V_2 = (bool)0;
		// bool finishedX = false, finishedY = false;
		V_3 = (bool)0;
		// if (targetScrollRect.vertical)
		ScrollRect_t4137855814 * L_25 = __this->get_targetScrollRect_10();
		NullCheck(L_25);
		bool L_26 = ScrollRect_get_vertical_m3678635065(L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0117;
		}
	}
	{
		// float selectionPos = -selection.anchoredPosition.y;
		RectTransform_t3704657025 * L_27 = V_1;
		NullCheck(L_27);
		Vector2_t2156229523  L_28 = RectTransform_get_anchoredPosition_m1813443094(L_27, /*hidden argument*/NULL);
		float L_29 = L_28.get_y_1();
		V_4 = ((-L_29));
		// float listPixelAnchor = layoutListGroup.anchoredPosition.y;
		RectTransform_t3704657025 * L_30 = __this->get_layoutListGroup_5();
		NullCheck(L_30);
		Vector2_t2156229523  L_31 = RectTransform_get_anchoredPosition_m1813443094(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_y_1();
		// float offlimitsValue = 0;
		V_5 = (0.0f);
		// offlimitsValue = listPixelAnchor - selectionPos;
		float L_33 = V_4;
		V_5 = ((float)il2cpp_codegen_subtract((float)L_32, (float)L_33));
		// targetScrollRect.verticalNormalizedPosition += (offlimitsValue / layoutListGroup.sizeDelta.y) * Time.deltaTime * scrollSpeed;
		ScrollRect_t4137855814 * L_34 = __this->get_targetScrollRect_10();
		ScrollRect_t4137855814 * L_35 = L_34;
		NullCheck(L_35);
		float L_36 = ScrollRect_get_verticalNormalizedPosition_m3693218937(L_35, /*hidden argument*/NULL);
		float L_37 = V_5;
		RectTransform_t3704657025 * L_38 = __this->get_layoutListGroup_5();
		NullCheck(L_38);
		Vector2_t2156229523  L_39 = RectTransform_get_sizeDelta_m2183112744(L_38, /*hidden argument*/NULL);
		float L_40 = L_39.get_y_1();
		float L_41 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_42 = __this->get_scrollSpeed_4();
		NullCheck(L_35);
		ScrollRect_set_verticalNormalizedPosition_m1452826170(L_35, ((float)il2cpp_codegen_add((float)L_36, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_37/(float)L_40)), (float)L_41)), (float)L_42)))), /*hidden argument*/NULL);
		// finishedY = Mathf.Abs(offlimitsValue) < 2f;
		float L_43 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_44 = fabsf(L_43);
		V_3 = (bool)((((float)L_44) < ((float)(2.0f)))? 1 : 0);
	}

IL_0117:
	{
		// if (targetScrollRect.horizontal)
		ScrollRect_t4137855814 * L_45 = __this->get_targetScrollRect_10();
		NullCheck(L_45);
		bool L_46 = ScrollRect_get_horizontal_m4171218020(L_45, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_018f;
		}
	}
	{
		// float selectionPos = -selection.anchoredPosition.x;
		RectTransform_t3704657025 * L_47 = V_1;
		NullCheck(L_47);
		Vector2_t2156229523  L_48 = RectTransform_get_anchoredPosition_m1813443094(L_47, /*hidden argument*/NULL);
		float L_49 = L_48.get_x_0();
		V_6 = ((-L_49));
		// float listPixelAnchor = layoutListGroup.anchoredPosition.x;
		RectTransform_t3704657025 * L_50 = __this->get_layoutListGroup_5();
		NullCheck(L_50);
		Vector2_t2156229523  L_51 = RectTransform_get_anchoredPosition_m1813443094(L_50, /*hidden argument*/NULL);
		float L_52 = L_51.get_x_0();
		// float offlimitsValue = 0;
		V_7 = (0.0f);
		// offlimitsValue = listPixelAnchor - selectionPos;
		float L_53 = V_6;
		V_7 = ((float)il2cpp_codegen_subtract((float)L_52, (float)L_53));
		// targetScrollRect.horizontalNormalizedPosition += (offlimitsValue / layoutListGroup.sizeDelta.x) * Time.deltaTime * scrollSpeed;
		ScrollRect_t4137855814 * L_54 = __this->get_targetScrollRect_10();
		ScrollRect_t4137855814 * L_55 = L_54;
		NullCheck(L_55);
		float L_56 = ScrollRect_get_horizontalNormalizedPosition_m2904015963(L_55, /*hidden argument*/NULL);
		float L_57 = V_7;
		RectTransform_t3704657025 * L_58 = __this->get_layoutListGroup_5();
		NullCheck(L_58);
		Vector2_t2156229523  L_59 = RectTransform_get_sizeDelta_m2183112744(L_58, /*hidden argument*/NULL);
		float L_60 = L_59.get_x_0();
		float L_61 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_62 = __this->get_scrollSpeed_4();
		NullCheck(L_55);
		ScrollRect_set_horizontalNormalizedPosition_m1066708424(L_55, ((float)il2cpp_codegen_add((float)L_56, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_57/(float)L_60)), (float)L_61)), (float)L_62)))), /*hidden argument*/NULL);
		// finishedX = Mathf.Abs(offlimitsValue) < 2f;
		float L_63 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_64 = fabsf(L_63);
		V_2 = (bool)((((float)L_64) < ((float)(2.0f)))? 1 : 0);
	}

IL_018f:
	{
		// if (finishedX && finishedY) {
		bool L_65 = V_2;
		bool L_66 = V_3;
		if (!((int32_t)((int32_t)L_65&(int32_t)L_66)))
		{
			goto IL_019b;
		}
	}
	{
		// scrollToSelection = false;
		__this->set_scrollToSelection_7((bool)0);
	}

IL_019b:
	{
		// targetScrollObject = selection;
		RectTransform_t3704657025 * L_67 = V_1;
		__this->set_targetScrollObject_6(L_67);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UIScrollToSelectionXY::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UIScrollToSelectionXY__ctor_m3848361054 (UIScrollToSelectionXY_t1454929589 * __this, const RuntimeMethod* method)
{
	{
		// public float scrollSpeed = 10f;
		__this->set_scrollSpeed_4((10.0f));
		// private bool scrollToSelection = true;
		__this->set_scrollToSelection_7((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.Extensions.UISelectableExtension::UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void UISelectableExtension_UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown_m2281235530 (UISelectableExtension_t989851811 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UISelectableExtension_UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown_m2281235530_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnButtonPress != null)
		UIButtonEvent_t4276706895 * L_0 = __this->get_OnButtonPress_4();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// OnButtonPress.Invoke(eventData.button);
		UIButtonEvent_t4276706895 * L_1 = __this->get_OnButtonPress_4();
		PointerEventData_t3807901092 * L_2 = ___eventData0;
		NullCheck(L_2);
		int32_t L_3 = PointerEventData_get_button_m359423249(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_1_Invoke_m1044068497(L_1, L_3, /*hidden argument*/UnityEvent_1_Invoke_m1044068497_RuntimeMethod_var);
	}

IL_0019:
	{
		// _pressed = true;
		__this->set__pressed_7((bool)1);
		// _heldEventData = eventData;
		PointerEventData_t3807901092 * L_4 = ___eventData0;
		__this->set__heldEventData_8(L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UISelectableExtension::UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void UISelectableExtension_UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp_m266565460 (UISelectableExtension_t989851811 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UISelectableExtension_UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp_m266565460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnButtonRelease != null)
		UIButtonEvent_t4276706895 * L_0 = __this->get_OnButtonRelease_5();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// OnButtonRelease.Invoke(eventData.button);
		UIButtonEvent_t4276706895 * L_1 = __this->get_OnButtonRelease_5();
		PointerEventData_t3807901092 * L_2 = ___eventData0;
		NullCheck(L_2);
		int32_t L_3 = PointerEventData_get_button_m359423249(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_1_Invoke_m1044068497(L_1, L_3, /*hidden argument*/UnityEvent_1_Invoke_m1044068497_RuntimeMethod_var);
	}

IL_0019:
	{
		// _pressed = false;
		__this->set__pressed_7((bool)0);
		// _heldEventData = null;
		__this->set__heldEventData_8((PointerEventData_t3807901092 *)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UISelectableExtension::Update()
extern "C" IL2CPP_METHOD_ATTR void UISelectableExtension_Update_m2916837538 (UISelectableExtension_t989851811 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UISelectableExtension_Update_m2916837538_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_pressed)
		bool L_0 = __this->get__pressed_7();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (OnButtonHeld != null)
		UIButtonEvent_t4276706895 * L_1 = __this->get_OnButtonHeld_6();
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// OnButtonHeld.Invoke(_heldEventData.button);
		UIButtonEvent_t4276706895 * L_2 = __this->get_OnButtonHeld_6();
		PointerEventData_t3807901092 * L_3 = __this->get__heldEventData_8();
		NullCheck(L_3);
		int32_t L_4 = PointerEventData_get_button_m359423249(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityEvent_1_Invoke_m1044068497(L_2, L_4, /*hidden argument*/UnityEvent_1_Invoke_m1044068497_RuntimeMethod_var);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UISelectableExtension::TestClicked()
extern "C" IL2CPP_METHOD_ATTR void UISelectableExtension_TestClicked_m269284101 (UISelectableExtension_t989851811 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UISelectableExtension::TestPressed()
extern "C" IL2CPP_METHOD_ATTR void UISelectableExtension_TestPressed_m2931350771 (UISelectableExtension_t989851811 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UISelectableExtension::TestReleased()
extern "C" IL2CPP_METHOD_ATTR void UISelectableExtension_TestReleased_m3289312718 (UISelectableExtension_t989851811 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UISelectableExtension::TestHold()
extern "C" IL2CPP_METHOD_ATTR void UISelectableExtension_TestHold_m719380688 (UISelectableExtension_t989851811 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UISelectableExtension::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void UISelectableExtension_OnDisable_m3326345915 (UISelectableExtension_t989851811 * __this, const RuntimeMethod* method)
{
	{
		// _pressed = false;
		__this->set__pressed_7((bool)0);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UISelectableExtension::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UISelectableExtension__ctor_m2381228775 (UISelectableExtension_t989851811 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.Extensions.UISelectableExtension/UIButtonEvent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UIButtonEvent__ctor_m2764734376 (UIButtonEvent_t4276706895 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIButtonEvent__ctor_m2764734376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m1380996682(__this, /*hidden argument*/UnityEvent_1__ctor_m1380996682_RuntimeMethod_var);
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
// System.Void UnityEngine.UI.Extensions.UISoftAdditiveEffect::Start()
extern "C" IL2CPP_METHOD_ATTR void UISoftAdditiveEffect_Start_m2713505575 (UISoftAdditiveEffect_t1842650896 * __this, const RuntimeMethod* method)
{
	{
		// SetMaterial();
		UISoftAdditiveEffect_SetMaterial_m1527550642(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UISoftAdditiveEffect::SetMaterial()
extern "C" IL2CPP_METHOD_ATTR void UISoftAdditiveEffect_SetMaterial_m1527550642 (UISoftAdditiveEffect_t1842650896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UISoftAdditiveEffect_SetMaterial_m1527550642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mGraphic = this.GetComponent<MaskableGraphic>();
		MaskableGraphic_t3839221559 * L_0 = Component_GetComponent_TisMaskableGraphic_t3839221559_m1169390343(__this, /*hidden argument*/Component_GetComponent_TisMaskableGraphic_t3839221559_m1169390343_RuntimeMethod_var);
		__this->set_mGraphic_4(L_0);
		// if (mGraphic != null)
		MaskableGraphic_t3839221559 * L_1 = __this->get_mGraphic_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0064;
		}
	}
	{
		// if (mGraphic.material == null || mGraphic.material.name == "Default UI Material")
		MaskableGraphic_t3839221559 * L_3 = __this->get_mGraphic_4();
		NullCheck(L_3);
		Material_t340375123 * L_4 = VirtFuncInvoker0< Material_t340375123 * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0049;
		}
	}
	{
		MaskableGraphic_t3839221559 * L_6 = __this->get_mGraphic_4();
		NullCheck(L_6);
		Material_t340375123 * L_7 = VirtFuncInvoker0< Material_t340375123 * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_6);
		NullCheck(L_7);
		String_t* L_8 = Object_get_name_m4211327027(L_7, /*hidden argument*/NULL);
		bool L_9 = String_op_Equality_m920492651(NULL /*static, unused*/, L_8, _stringLiteral3444685408, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_006e;
		}
	}

IL_0049:
	{
		// mGraphic.material = new Material(Shader.Find("UI Extensions/UISoftAdditive"));
		MaskableGraphic_t3839221559 * L_10 = __this->get_mGraphic_4();
		Shader_t4151988712 * L_11 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral4251913489, /*hidden argument*/NULL);
		Material_t340375123 * L_12 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m1662457592(L_12, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< Material_t340375123 * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_10, L_12);
		// }
		return;
	}

IL_0064:
	{
		// Debug.LogError("Please attach component to a Graphical UI component");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral2883495320, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UISoftAdditiveEffect::OnValidate()
extern "C" IL2CPP_METHOD_ATTR void UISoftAdditiveEffect_OnValidate_m1342521468 (UISoftAdditiveEffect_t1842650896 * __this, const RuntimeMethod* method)
{
	{
		// SetMaterial();
		UISoftAdditiveEffect_SetMaterial_m1527550642(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UISoftAdditiveEffect::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UISoftAdditiveEffect__ctor_m900324085 (UISoftAdditiveEffect_t1842650896 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UIVerticalScroller__ctor_m2188287452 (UIVerticalScroller_t3292120078 * __this, const RuntimeMethod* method)
{
	{
		// public int StartingIndex = -1;
		__this->set_StartingIndex_7((-1));
		// public UIVerticalScroller() { }
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		// public UIVerticalScroller() { }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller::.ctor(UnityEngine.RectTransform,UnityEngine.GameObject[],UnityEngine.RectTransform)
extern "C" IL2CPP_METHOD_ATTR void UIVerticalScroller__ctor_m1766670070 (UIVerticalScroller_t3292120078 * __this, RectTransform_t3704657025 * ___scrollingPanel0, GameObjectU5BU5D_t3328599146* ___arrayOfElements1, RectTransform_t3704657025 * ___center2, const RuntimeMethod* method)
{
	{
		// public int StartingIndex = -1;
		__this->set_StartingIndex_7((-1));
		// public UIVerticalScroller(RectTransform scrollingPanel, GameObject[] arrayOfElements, RectTransform center)
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		// _scrollingPanel = scrollingPanel;
		RectTransform_t3704657025 * L_0 = ___scrollingPanel0;
		__this->set__scrollingPanel_4(L_0);
		// _arrayOfElements = arrayOfElements;
		GameObjectU5BU5D_t3328599146* L_1 = ___arrayOfElements1;
		__this->set__arrayOfElements_5(L_1);
		// _center = center;
		RectTransform_t3704657025 * L_2 = ___center2;
		__this->set__center_6(L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller::Awake()
extern "C" IL2CPP_METHOD_ATTR void UIVerticalScroller_Awake_m2944379975 (UIVerticalScroller_t3292120078 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIVerticalScroller_Awake_m2944379975_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ScrollRect_t4137855814 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// var scrollRect = GetComponent<ScrollRect>();
		ScrollRect_t4137855814 * L_0 = Component_GetComponent_TisScrollRect_t4137855814_m3636214290(__this, /*hidden argument*/Component_GetComponent_TisScrollRect_t4137855814_m3636214290_RuntimeMethod_var);
		V_0 = L_0;
		// if (!_scrollingPanel)
		RectTransform_t3704657025 * L_1 = __this->get__scrollingPanel_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		// _scrollingPanel = scrollRect.content;
		ScrollRect_t4137855814 * L_3 = V_0;
		NullCheck(L_3);
		RectTransform_t3704657025 * L_4 = ScrollRect_get_content_m2477524320(L_3, /*hidden argument*/NULL);
		__this->set__scrollingPanel_4(L_4);
	}

IL_0020:
	{
		// if (!_center)
		RectTransform_t3704657025 * L_5 = __this->get__center_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0037;
		}
	}
	{
		// Debug.LogError("Please define the RectTransform for the Center viewport of the scrollable area");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1090892683, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// if (_arrayOfElements == null || _arrayOfElements.Length == 0)
		GameObjectU5BU5D_t3328599146* L_7 = __this->get__arrayOfElements_5();
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		GameObjectU5BU5D_t3328599146* L_8 = __this->get__arrayOfElements_5();
		NullCheck(L_8);
		if ((((RuntimeArray *)L_8)->max_length))
		{
			goto IL_0089;
		}
	}

IL_0048:
	{
		// var childCount = scrollRect.content.childCount;
		ScrollRect_t4137855814 * L_9 = V_0;
		NullCheck(L_9);
		RectTransform_t3704657025 * L_10 = ScrollRect_get_content_m2477524320(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = Transform_get_childCount_m3145433196(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// if (childCount > 0)
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		// _arrayOfElements = new GameObject[childCount];
		int32_t L_13 = V_1;
		GameObjectU5BU5D_t3328599146* L_14 = (GameObjectU5BU5D_t3328599146*)SZArrayNew(GameObjectU5BU5D_t3328599146_il2cpp_TypeInfo_var, (uint32_t)L_13);
		__this->set__arrayOfElements_5(L_14);
		// for (int i = 0; i < childCount; i++)
		V_2 = 0;
		goto IL_0085;
	}

IL_0068:
	{
		// _arrayOfElements[i] = scrollRect.content.GetChild(i).gameObject;
		GameObjectU5BU5D_t3328599146* L_15 = __this->get__arrayOfElements_5();
		int32_t L_16 = V_2;
		ScrollRect_t4137855814 * L_17 = V_0;
		NullCheck(L_17);
		RectTransform_t3704657025 * L_18 = ScrollRect_get_content_m2477524320(L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Transform_t3600365921 * L_20 = Transform_GetChild_m1092972975(L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		GameObject_t1113636619 * L_21 = Component_get_gameObject_m442555142(L_20, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_21);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (GameObject_t1113636619 *)L_21);
		// for (int i = 0; i < childCount; i++)
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0085:
	{
		// for (int i = 0; i < childCount; i++)
		int32_t L_23 = V_2;
		int32_t L_24 = V_1;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0068;
		}
	}

IL_0089:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller::Start()
extern "C" IL2CPP_METHOD_ATTR void UIVerticalScroller_Start_m3813810380 (UIVerticalScroller_t3292120078 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIVerticalScroller_Start_m3813810380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	UIVerticalScroller_t3292120078 * G_B12_0 = NULL;
	UIVerticalScroller_t3292120078 * G_B11_0 = NULL;
	int32_t G_B13_0 = 0;
	UIVerticalScroller_t3292120078 * G_B13_1 = NULL;
	{
		// if (_arrayOfElements.Length < 1)
		GameObjectU5BU5D_t3328599146* L_0 = __this->get__arrayOfElements_5();
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) >= ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		// Debug.Log("No child content found, exiting..");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3399935163, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0016:
	{
		// elementLength = _arrayOfElements.Length;
		GameObjectU5BU5D_t3328599146* L_1 = __this->get__arrayOfElements_5();
		NullCheck(L_1);
		__this->set_elementLength_14((((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))));
		// distance = new float[elementLength];
		int32_t L_2 = __this->get_elementLength_14();
		SingleU5BU5D_t1444911251* L_3 = (SingleU5BU5D_t1444911251*)SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->set_distance_12(L_3);
		// distReposition = new float[elementLength];
		int32_t L_4 = __this->get_elementLength_14();
		SingleU5BU5D_t1444911251* L_5 = (SingleU5BU5D_t1444911251*)SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->set_distReposition_11(L_5);
		// deltaY = _arrayOfElements[0].GetComponent<RectTransform>().rect.height * elementLength / 3 * 2;
		GameObjectU5BU5D_t3328599146* L_6 = __this->get__arrayOfElements_5();
		NullCheck(L_6);
		int32_t L_7 = 0;
		GameObject_t1113636619 * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		RectTransform_t3704657025 * L_9 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_8, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		NullCheck(L_9);
		Rect_t2360479859  L_10 = RectTransform_get_rect_m574169965(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_12 = __this->get_elementLength_14();
		__this->set_deltaY_15(((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_11, (float)(((float)((float)L_12)))))/(float)(3.0f))), (float)(2.0f))));
		// Vector2 startPosition = new Vector2(_scrollingPanel.anchoredPosition.x, -deltaY);
		RectTransform_t3704657025 * L_13 = __this->get__scrollingPanel_4();
		NullCheck(L_13);
		Vector2_t2156229523  L_14 = RectTransform_get_anchoredPosition_m1813443094(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_x_0();
		float L_16 = __this->get_deltaY_15();
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_0), L_15, ((-L_16)), /*hidden argument*/NULL);
		// _scrollingPanel.anchoredPosition = startPosition;
		RectTransform_t3704657025 * L_17 = __this->get__scrollingPanel_4();
		Vector2_t2156229523  L_18 = V_0;
		NullCheck(L_17);
		RectTransform_set_anchoredPosition_m4126691837(L_17, L_18, /*hidden argument*/NULL);
		// for (var i = 0; i < _arrayOfElements.Length; i++)
		V_2 = 0;
		goto IL_00bb;
	}

IL_00a8:
	{
		// AddListener(_arrayOfElements[i], i);
		GameObjectU5BU5D_t3328599146* L_19 = __this->get__arrayOfElements_5();
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		GameObject_t1113636619 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = V_2;
		UIVerticalScroller_AddListener_m822110344(__this, L_22, L_23, /*hidden argument*/NULL);
		// for (var i = 0; i < _arrayOfElements.Length; i++)
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00bb:
	{
		// for (var i = 0; i < _arrayOfElements.Length; i++)
		int32_t L_25 = V_2;
		GameObjectU5BU5D_t3328599146* L_26 = __this->get__arrayOfElements_5();
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))))))
		{
			goto IL_00a8;
		}
	}
	{
		// if (ScrollUpButton)
		GameObject_t1113636619 * L_27 = __this->get_ScrollUpButton_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_28 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00f4;
		}
	}
	{
		// ScrollUpButton.GetComponent<Button>().onClick.AddListener(() => { ScrollUp(); });
		GameObject_t1113636619 * L_29 = __this->get_ScrollUpButton_8();
		NullCheck(L_29);
		Button_t4055032469 * L_30 = GameObject_GetComponent_TisButton_t4055032469_m1515138076(L_29, /*hidden argument*/GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var);
		NullCheck(L_30);
		ButtonClickedEvent_t48803504 * L_31 = Button_get_onClick_m2332132945(L_30, /*hidden argument*/NULL);
		intptr_t L_32 = (intptr_t)UIVerticalScroller_U3CStartU3Eb__16_0_m3376465101_RuntimeMethod_var;
		UnityAction_t3245792599 * L_33 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_33, __this, L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		UnityEvent_AddListener_m2276267359(L_31, L_33, /*hidden argument*/NULL);
	}

IL_00f4:
	{
		// if (ScrollDownButton)
		GameObject_t1113636619 * L_34 = __this->get_ScrollDownButton_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_35 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0122;
		}
	}
	{
		// ScrollDownButton.GetComponent<Button>().onClick.AddListener(() => { ScrollDown(); });
		GameObject_t1113636619 * L_36 = __this->get_ScrollDownButton_9();
		NullCheck(L_36);
		Button_t4055032469 * L_37 = GameObject_GetComponent_TisButton_t4055032469_m1515138076(L_36, /*hidden argument*/GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var);
		NullCheck(L_37);
		ButtonClickedEvent_t48803504 * L_38 = Button_get_onClick_m2332132945(L_37, /*hidden argument*/NULL);
		intptr_t L_39 = (intptr_t)UIVerticalScroller_U3CStartU3Eb__16_1_m1037812941_RuntimeMethod_var;
		UnityAction_t3245792599 * L_40 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_40, __this, L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		UnityEvent_AddListener_m2276267359(L_38, L_40, /*hidden argument*/NULL);
	}

IL_0122:
	{
		// if (StartingIndex > -1)
		int32_t L_41 = __this->get_StartingIndex_7();
		if ((((int32_t)L_41) <= ((int32_t)(-1))))
		{
			goto IL_015f;
		}
	}
	{
		// StartingIndex = StartingIndex > _arrayOfElements.Length ? _arrayOfElements.Length - 1 : StartingIndex;
		int32_t L_42 = __this->get_StartingIndex_7();
		GameObjectU5BU5D_t3328599146* L_43 = __this->get__arrayOfElements_5();
		NullCheck(L_43);
		G_B11_0 = __this;
		if ((((int32_t)L_42) > ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_43)->max_length)))))))
		{
			G_B12_0 = __this;
			goto IL_0144;
		}
	}
	{
		int32_t L_44 = __this->get_StartingIndex_7();
		G_B13_0 = L_44;
		G_B13_1 = G_B11_0;
		goto IL_014e;
	}

IL_0144:
	{
		GameObjectU5BU5D_t3328599146* L_45 = __this->get__arrayOfElements_5();
		NullCheck(L_45);
		G_B13_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_45)->max_length)))), (int32_t)1));
		G_B13_1 = G_B12_0;
	}

IL_014e:
	{
		NullCheck(G_B13_1);
		G_B13_1->set_StartingIndex_7(G_B13_0);
		// SnapToElement(StartingIndex);
		int32_t L_46 = __this->get_StartingIndex_7();
		UIVerticalScroller_SnapToElement_m3251754663(__this, L_46, /*hidden argument*/NULL);
	}

IL_015f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller::AddListener(UnityEngine.GameObject,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UIVerticalScroller_AddListener_m822110344 (UIVerticalScroller_t3292120078 * __this, GameObject_t1113636619 * ___button0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIVerticalScroller_AddListener_m822110344_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass17_0_t1582113759 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_t1582113759 * L_0 = (U3CU3Ec__DisplayClass17_0_t1582113759 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass17_0_t1582113759_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass17_0__ctor_m2202613438(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass17_0_t1582113759 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass17_0_t1582113759 * L_2 = V_0;
		int32_t L_3 = ___index1;
		NullCheck(L_2);
		L_2->set_index_1(L_3);
		// button.GetComponent<Button>().onClick.AddListener(() => DoSomething(index));
		GameObject_t1113636619 * L_4 = ___button0;
		NullCheck(L_4);
		Button_t4055032469 * L_5 = GameObject_GetComponent_TisButton_t4055032469_m1515138076(L_4, /*hidden argument*/GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var);
		NullCheck(L_5);
		ButtonClickedEvent_t48803504 * L_6 = Button_get_onClick_m2332132945(L_5, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass17_0_t1582113759 * L_7 = V_0;
		intptr_t L_8 = (intptr_t)U3CU3Ec__DisplayClass17_0_U3CAddListenerU3Eb__0_m945469347_RuntimeMethod_var;
		UnityAction_t3245792599 * L_9 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_9, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityEvent_AddListener_m2276267359(L_6, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller::DoSomething(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UIVerticalScroller_DoSomething_m2639774279 (UIVerticalScroller_t3292120078 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIVerticalScroller_DoSomething_m2639774279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ButtonClicked != null)
		UnityEvent_1_t3832605257 * L_0 = __this->get_ButtonClicked_10();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// ButtonClicked.Invoke(index);
		UnityEvent_1_t3832605257 * L_1 = __this->get_ButtonClicked_10();
		int32_t L_2 = ___index0;
		NullCheck(L_1);
		UnityEvent_1_Invoke_m3604335408(L_1, L_2, /*hidden argument*/UnityEvent_1_Invoke_m3604335408_RuntimeMethod_var);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller::Update()
extern "C" IL2CPP_METHOD_ATTR void UIVerticalScroller_Update_m3840691586 (UIVerticalScroller_t3292120078 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIVerticalScroller_Update_m3840691586_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		// if (_arrayOfElements.Length < 1)
		GameObjectU5BU5D_t3328599146* L_0 = __this->get__arrayOfElements_5();
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		// return;
		return;
	}

IL_000c:
	{
		// for (var i = 0; i < elementLength; i++)
		V_1 = 0;
		goto IL_00a9;
	}

IL_0013:
	{
		// distReposition[i] = _center.GetComponent<RectTransform>().position.y - _arrayOfElements[i].GetComponent<RectTransform>().position.y;
		SingleU5BU5D_t1444911251* L_1 = __this->get_distReposition_11();
		int32_t L_2 = V_1;
		RectTransform_t3704657025 * L_3 = __this->get__center_6();
		NullCheck(L_3);
		RectTransform_t3704657025 * L_4 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(L_3, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		GameObjectU5BU5D_t3328599146* L_7 = __this->get__arrayOfElements_5();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GameObject_t1113636619 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		RectTransform_t3704657025 * L_11 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_10, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = Transform_get_position_m36019626(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_3();
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (float)((float)il2cpp_codegen_subtract((float)L_6, (float)L_13)));
		// distance[i] = Mathf.Abs(distReposition[i]);
		SingleU5BU5D_t1444911251* L_14 = __this->get_distance_12();
		int32_t L_15 = V_1;
		SingleU5BU5D_t1444911251* L_16 = __this->get_distReposition_11();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		float L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_20 = fabsf(L_19);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (float)L_20);
		// float scale = Mathf.Max(0.7f, 1 / (1 + distance[i] / 200));
		SingleU5BU5D_t1444911251* L_21 = __this->get_distance_12();
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		float L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		float L_25 = Mathf_Max_m3146388979(NULL /*static, unused*/, (0.7f), ((float)((float)(1.0f)/(float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)((float)L_24/(float)(200.0f))))))), /*hidden argument*/NULL);
		V_2 = L_25;
		// _arrayOfElements[i].GetComponent<RectTransform>().transform.localScale = new Vector3(scale, scale, 1f);
		GameObjectU5BU5D_t3328599146* L_26 = __this->get__arrayOfElements_5();
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		GameObject_t1113636619 * L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		RectTransform_t3704657025 * L_30 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_29, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		NullCheck(L_30);
		Transform_t3600365921 * L_31 = Component_get_transform_m3162698980(L_30, /*hidden argument*/NULL);
		float L_32 = V_2;
		float L_33 = V_2;
		Vector3_t3722313464  L_34;
		memset(&L_34, 0, sizeof(L_34));
		Vector3__ctor_m3353183577((&L_34), L_32, L_33, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_localScale_m3053443106(L_31, L_34, /*hidden argument*/NULL);
		// for (var i = 0; i < elementLength; i++)
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00a9:
	{
		// for (var i = 0; i < elementLength; i++)
		int32_t L_36 = V_1;
		int32_t L_37 = __this->get_elementLength_14();
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0013;
		}
	}
	{
		// float minDistance = Mathf.Min(distance);
		SingleU5BU5D_t1444911251* L_38 = __this->get_distance_12();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_39 = Mathf_Min_m209631461(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		V_0 = L_39;
		// for (var i = 0; i < elementLength; i++)
		V_3 = 0;
		goto IL_0119;
	}

IL_00c5:
	{
		// _arrayOfElements[i].GetComponent<CanvasGroup>().interactable = false;
		GameObjectU5BU5D_t3328599146* L_40 = __this->get__arrayOfElements_5();
		int32_t L_41 = V_3;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		GameObject_t1113636619 * L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_43);
		CanvasGroup_t4083511760 * L_44 = GameObject_GetComponent_TisCanvasGroup_t4083511760_m378106990(L_43, /*hidden argument*/GameObject_GetComponent_TisCanvasGroup_t4083511760_m378106990_RuntimeMethod_var);
		NullCheck(L_44);
		CanvasGroup_set_interactable_m1698617177(L_44, (bool)0, /*hidden argument*/NULL);
		// if (minDistance == distance[i])
		float L_45 = V_0;
		SingleU5BU5D_t1444911251* L_46 = __this->get_distance_12();
		int32_t L_47 = V_3;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		float L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		if ((!(((float)L_45) == ((float)L_49))))
		{
			goto IL_0115;
		}
	}
	{
		// minElementsNum = i;
		int32_t L_50 = V_3;
		__this->set_minElementsNum_13(L_50);
		// _arrayOfElements[i].GetComponent<CanvasGroup>().interactable = true;
		GameObjectU5BU5D_t3328599146* L_51 = __this->get__arrayOfElements_5();
		int32_t L_52 = V_3;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		GameObject_t1113636619 * L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_54);
		CanvasGroup_t4083511760 * L_55 = GameObject_GetComponent_TisCanvasGroup_t4083511760_m378106990(L_54, /*hidden argument*/GameObject_GetComponent_TisCanvasGroup_t4083511760_m378106990_RuntimeMethod_var);
		NullCheck(L_55);
		CanvasGroup_set_interactable_m1698617177(L_55, (bool)1, /*hidden argument*/NULL);
		// result = _arrayOfElements[i].GetComponentInChildren<Text>().text;
		GameObjectU5BU5D_t3328599146* L_56 = __this->get__arrayOfElements_5();
		int32_t L_57 = V_3;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		GameObject_t1113636619 * L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_59);
		Text_t1901882714 * L_60 = GameObject_GetComponentInChildren_TisText_t1901882714_m3637202860(L_59, /*hidden argument*/GameObject_GetComponentInChildren_TisText_t1901882714_m3637202860_RuntimeMethod_var);
		NullCheck(L_60);
		String_t* L_61 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_60);
		__this->set_result_16(L_61);
	}

IL_0115:
	{
		// for (var i = 0; i < elementLength; i++)
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
	}

IL_0119:
	{
		// for (var i = 0; i < elementLength; i++)
		int32_t L_63 = V_3;
		int32_t L_64 = __this->get_elementLength_14();
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_00c5;
		}
	}
	{
		// ScrollingElements(-_arrayOfElements[minElementsNum].GetComponent<RectTransform>().anchoredPosition.y);
		GameObjectU5BU5D_t3328599146* L_65 = __this->get__arrayOfElements_5();
		int32_t L_66 = __this->get_minElementsNum_13();
		NullCheck(L_65);
		int32_t L_67 = L_66;
		GameObject_t1113636619 * L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_68);
		RectTransform_t3704657025 * L_69 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_68, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		NullCheck(L_69);
		Vector2_t2156229523  L_70 = RectTransform_get_anchoredPosition_m1813443094(L_69, /*hidden argument*/NULL);
		float L_71 = L_70.get_y_1();
		UIVerticalScroller_ScrollingElements_m701951019(__this, ((-L_71)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller::ScrollingElements(System.Single)
extern "C" IL2CPP_METHOD_ATTR void UIVerticalScroller_ScrollingElements_m701951019 (UIVerticalScroller_t3292120078 * __this, float ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIVerticalScroller_ScrollingElements_m701951019_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// float newY = Mathf.Lerp(_scrollingPanel.anchoredPosition.y, position, Time.deltaTime * 1f);
		RectTransform_t3704657025 * L_0 = __this->get__scrollingPanel_4();
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = RectTransform_get_anchoredPosition_m1813443094(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_1();
		float L_3 = ___position0;
		float L_4 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_5 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_2, L_3, ((float)il2cpp_codegen_multiply((float)L_4, (float)(1.0f))), /*hidden argument*/NULL);
		V_0 = L_5;
		// Vector2 newPosition = new Vector2(_scrollingPanel.anchoredPosition.x, newY);
		RectTransform_t3704657025 * L_6 = __this->get__scrollingPanel_4();
		NullCheck(L_6);
		Vector2_t2156229523  L_7 = RectTransform_get_anchoredPosition_m1813443094(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_0();
		float L_9 = V_0;
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_1), L_8, L_9, /*hidden argument*/NULL);
		// _scrollingPanel.anchoredPosition = newPosition;
		RectTransform_t3704657025 * L_10 = __this->get__scrollingPanel_4();
		Vector2_t2156229523  L_11 = V_1;
		NullCheck(L_10);
		RectTransform_set_anchoredPosition_m4126691837(L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String UnityEngine.UI.Extensions.UIVerticalScroller::GetResults()
extern "C" IL2CPP_METHOD_ATTR String_t* UIVerticalScroller_GetResults_m2550944345 (UIVerticalScroller_t3292120078 * __this, const RuntimeMethod* method)
{
	{
		// return result;
		String_t* L_0 = __this->get_result_16();
		return L_0;
	}
}
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller::SnapToElement(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UIVerticalScroller_SnapToElement_m3251754663 (UIVerticalScroller_t3292120078 * __this, int32_t ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIVerticalScroller_SnapToElement_m3251754663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		// float deltaElementPositionY = _arrayOfElements[0].GetComponent<RectTransform>().rect.height * element;
		GameObjectU5BU5D_t3328599146* L_0 = __this->get__arrayOfElements_5();
		NullCheck(L_0);
		int32_t L_1 = 0;
		GameObject_t1113636619 * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		RectTransform_t3704657025 * L_3 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_2, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		NullCheck(L_3);
		Rect_t2360479859  L_4 = RectTransform_get_rect_m574169965(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&V_2), /*hidden argument*/NULL);
		int32_t L_6 = ___element0;
		V_0 = ((float)il2cpp_codegen_multiply((float)L_5, (float)(((float)((float)L_6)))));
		// Vector2 newPosition = new Vector2(_scrollingPanel.anchoredPosition.x, -deltaElementPositionY);
		RectTransform_t3704657025 * L_7 = __this->get__scrollingPanel_4();
		NullCheck(L_7);
		Vector2_t2156229523  L_8 = RectTransform_get_anchoredPosition_m1813443094(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_0();
		float L_10 = V_0;
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_1), L_9, ((-L_10)), /*hidden argument*/NULL);
		// _scrollingPanel.anchoredPosition = newPosition;
		RectTransform_t3704657025 * L_11 = __this->get__scrollingPanel_4();
		Vector2_t2156229523  L_12 = V_1;
		NullCheck(L_11);
		RectTransform_set_anchoredPosition_m4126691837(L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller::ScrollUp()
extern "C" IL2CPP_METHOD_ATTR void UIVerticalScroller_ScrollUp_m1381309139 (UIVerticalScroller_t3292120078 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIVerticalScroller_ScrollUp_m1381309139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		// float deltaUp = _arrayOfElements[0].GetComponent<RectTransform>().rect.height / 1.2f;
		GameObjectU5BU5D_t3328599146* L_0 = __this->get__arrayOfElements_5();
		NullCheck(L_0);
		int32_t L_1 = 0;
		GameObject_t1113636619 * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		RectTransform_t3704657025 * L_3 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_2, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		NullCheck(L_3);
		Rect_t2360479859  L_4 = RectTransform_get_rect_m574169965(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&V_2), /*hidden argument*/NULL);
		V_0 = ((float)((float)L_5/(float)(1.2f)));
		// Vector2 newPositionUp = new Vector2(_scrollingPanel.anchoredPosition.x, _scrollingPanel.anchoredPosition.y - deltaUp);
		RectTransform_t3704657025 * L_6 = __this->get__scrollingPanel_4();
		NullCheck(L_6);
		Vector2_t2156229523  L_7 = RectTransform_get_anchoredPosition_m1813443094(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_0();
		RectTransform_t3704657025 * L_9 = __this->get__scrollingPanel_4();
		NullCheck(L_9);
		Vector2_t2156229523  L_10 = RectTransform_get_anchoredPosition_m1813443094(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_1();
		float L_12 = V_0;
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_1), L_8, ((float)il2cpp_codegen_subtract((float)L_11, (float)L_12)), /*hidden argument*/NULL);
		// _scrollingPanel.anchoredPosition = Vector2.Lerp(_scrollingPanel.anchoredPosition, newPositionUp, 1);
		RectTransform_t3704657025 * L_13 = __this->get__scrollingPanel_4();
		RectTransform_t3704657025 * L_14 = __this->get__scrollingPanel_4();
		NullCheck(L_14);
		Vector2_t2156229523  L_15 = RectTransform_get_anchoredPosition_m1813443094(L_14, /*hidden argument*/NULL);
		Vector2_t2156229523  L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_17 = Vector2_Lerp_m854472224(NULL /*static, unused*/, L_15, L_16, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		RectTransform_set_anchoredPosition_m4126691837(L_13, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller::ScrollDown()
extern "C" IL2CPP_METHOD_ATTR void UIVerticalScroller_ScrollDown_m3744983971 (UIVerticalScroller_t3292120078 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIVerticalScroller_ScrollDown_m3744983971_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		// float deltaDown = _arrayOfElements[0].GetComponent<RectTransform>().rect.height / 1.2f;
		GameObjectU5BU5D_t3328599146* L_0 = __this->get__arrayOfElements_5();
		NullCheck(L_0);
		int32_t L_1 = 0;
		GameObject_t1113636619 * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		RectTransform_t3704657025 * L_3 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_2, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		NullCheck(L_3);
		Rect_t2360479859  L_4 = RectTransform_get_rect_m574169965(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&V_2), /*hidden argument*/NULL);
		V_0 = ((float)((float)L_5/(float)(1.2f)));
		// Vector2 newPositionDown = new Vector2(_scrollingPanel.anchoredPosition.x, _scrollingPanel.anchoredPosition.y + deltaDown);
		RectTransform_t3704657025 * L_6 = __this->get__scrollingPanel_4();
		NullCheck(L_6);
		Vector2_t2156229523  L_7 = RectTransform_get_anchoredPosition_m1813443094(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_0();
		RectTransform_t3704657025 * L_9 = __this->get__scrollingPanel_4();
		NullCheck(L_9);
		Vector2_t2156229523  L_10 = RectTransform_get_anchoredPosition_m1813443094(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_1();
		float L_12 = V_0;
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_1), L_8, ((float)il2cpp_codegen_add((float)L_11, (float)L_12)), /*hidden argument*/NULL);
		// _scrollingPanel.anchoredPosition = newPositionDown;
		RectTransform_t3704657025 * L_13 = __this->get__scrollingPanel_4();
		Vector2_t2156229523  L_14 = V_1;
		NullCheck(L_13);
		RectTransform_set_anchoredPosition_m4126691837(L_13, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller::<Start>b__16_0()
extern "C" IL2CPP_METHOD_ATTR void UIVerticalScroller_U3CStartU3Eb__16_0_m3376465101 (UIVerticalScroller_t3292120078 * __this, const RuntimeMethod* method)
{
	{
		// ScrollUpButton.GetComponent<Button>().onClick.AddListener(() => { ScrollUp(); });
		UIVerticalScroller_ScrollUp_m1381309139(__this, /*hidden argument*/NULL);
		// ScrollUpButton.GetComponent<Button>().onClick.AddListener(() => { ScrollUp(); });
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller::<Start>b__16_1()
extern "C" IL2CPP_METHOD_ATTR void UIVerticalScroller_U3CStartU3Eb__16_1_m1037812941 (UIVerticalScroller_t3292120078 * __this, const RuntimeMethod* method)
{
	{
		// ScrollDownButton.GetComponent<Button>().onClick.AddListener(() => { ScrollDown(); });
		UIVerticalScroller_ScrollDown_m3744983971(__this, /*hidden argument*/NULL);
		// ScrollDownButton.GetComponent<Button>().onClick.AddListener(() => { ScrollDown(); });
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
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller/<>c__DisplayClass17_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m2202613438 (U3CU3Ec__DisplayClass17_0_t1582113759 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UIVerticalScroller/<>c__DisplayClass17_0::<AddListener>b__0()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3CAddListenerU3Eb__0_m945469347 (U3CU3Ec__DisplayClass17_0_t1582113759 * __this, const RuntimeMethod* method)
{
	{
		// button.GetComponent<Button>().onClick.AddListener(() => DoSomething(index));
		UIVerticalScroller_t3292120078 * L_0 = __this->get_U3CU3E4__this_0();
		int32_t L_1 = __this->get_index_1();
		NullCheck(L_0);
		UIVerticalScroller_DoSomething_m2639774279(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.Extensions.UIWindowBase::Start()
extern "C" IL2CPP_METHOD_ATTR void UIWindowBase_Start_m478307939 (UIWindowBase_t1803419093 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIWindowBase_Start_m478307939_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_transform = GetComponent<RectTransform>();
		RectTransform_t3704657025 * L_0 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		__this->set_m_transform_4(L_0);
		// m_originalCoods = m_transform.position;
		RectTransform_t3704657025 * L_1 = __this->get_m_transform_4();
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		__this->set_m_originalCoods_7(L_2);
		// m_canvas = GetComponentInParent<Canvas>();
		Canvas_t3310196443 * L_3 = Component_GetComponentInParent_TisCanvas_t3310196443_m1339529724(__this, /*hidden argument*/Component_GetComponentInParent_TisCanvas_t3310196443_m1339529724_RuntimeMethod_var);
		__this->set_m_canvas_8(L_3);
		// m_canvasRectTransform = m_canvas.GetComponent<RectTransform>();
		Canvas_t3310196443 * L_4 = __this->get_m_canvas_8();
		NullCheck(L_4);
		RectTransform_t3704657025 * L_5 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(L_4, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		__this->set_m_canvasRectTransform_9(L_5);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UIWindowBase::Update()
extern "C" IL2CPP_METHOD_ATTR void UIWindowBase_Update_m2853233331 (UIWindowBase_t1803419093 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIWindowBase_Update_m2853233331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ResetCoords)
		IL2CPP_RUNTIME_CLASS_INIT(UIWindowBase_t1803419093_il2cpp_TypeInfo_var);
		bool L_0 = ((UIWindowBase_t1803419093_StaticFields*)il2cpp_codegen_static_fields_for(UIWindowBase_t1803419093_il2cpp_TypeInfo_var))->get_ResetCoords_6();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// resetCoordinatePosition();
		UIWindowBase_resetCoordinatePosition_m2901949189(__this, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UIWindowBase::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void UIWindowBase_OnDrag_m3920327827 (UIWindowBase_t1803419093 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIWindowBase_OnDrag_m3920327827_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// if (_isDragging)
		bool L_0 = __this->get__isDragging_5();
		if (!L_0)
		{
			goto IL_0052;
		}
	}
	{
		// var delta = ScreenToCanvas(eventData.position) - ScreenToCanvas(eventData.position - eventData.delta);
		PointerEventData_t3807901092 * L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t2156229523  L_2 = PointerEventData_get_position_m437660275(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = UIWindowBase_ScreenToCanvas_m2805835704(__this, L_3, /*hidden argument*/NULL);
		PointerEventData_t3807901092 * L_5 = ___eventData0;
		NullCheck(L_5);
		Vector2_t2156229523  L_6 = PointerEventData_get_position_m437660275(L_5, /*hidden argument*/NULL);
		PointerEventData_t3807901092 * L_7 = ___eventData0;
		NullCheck(L_7);
		Vector2_t2156229523  L_8 = PointerEventData_get_delta_m1062010255(L_7, /*hidden argument*/NULL);
		Vector2_t2156229523  L_9 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = UIWindowBase_ScreenToCanvas_m2805835704(__this, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_12 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_4, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// m_transform.localPosition += delta;
		RectTransform_t3704657025 * L_13 = __this->get_m_transform_4();
		RectTransform_t3704657025 * L_14 = L_13;
		NullCheck(L_14);
		Vector3_t3722313464  L_15 = Transform_get_localPosition_m4234289348(L_14, /*hidden argument*/NULL);
		Vector3_t3722313464  L_16 = V_0;
		Vector3_t3722313464  L_17 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localPosition_m4128471975(L_14, L_17, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UIWindowBase::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void UIWindowBase_OnBeginDrag_m2504115778 (UIWindowBase_t1803419093 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIWindowBase_OnBeginDrag_m2504115778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastResult_t3360306849  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// if (eventData.pointerCurrentRaycast.gameObject == null)
		PointerEventData_t3807901092 * L_0 = ___eventData0;
		NullCheck(L_0);
		RaycastResult_t3360306849  L_1 = PointerEventData_get_pointerCurrentRaycast_m2627585223(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = RaycastResult_get_gameObject_m2570051527((RaycastResult_t3360306849 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// if (eventData.pointerCurrentRaycast.gameObject.name == name)
		PointerEventData_t3807901092 * L_4 = ___eventData0;
		NullCheck(L_4);
		RaycastResult_t3360306849  L_5 = PointerEventData_get_pointerCurrentRaycast_m2627585223(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		GameObject_t1113636619 * L_6 = RaycastResult_get_gameObject_m2570051527((RaycastResult_t3360306849 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = Object_get_name_m4211327027(L_6, /*hidden argument*/NULL);
		String_t* L_8 = Object_get_name_m4211327027(__this, /*hidden argument*/NULL);
		bool L_9 = String_op_Equality_m920492651(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// _isDragging = true;
		__this->set__isDragging_5((bool)1);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UIWindowBase::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void UIWindowBase_OnEndDrag_m3912478778 (UIWindowBase_t1803419093 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		// _isDragging = false;
		__this->set__isDragging_5((bool)0);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UIWindowBase::resetCoordinatePosition()
extern "C" IL2CPP_METHOD_ATTR void UIWindowBase_resetCoordinatePosition_m2901949189 (UIWindowBase_t1803419093 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIWindowBase_resetCoordinatePosition_m2901949189_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_transform.position = m_originalCoods;
		RectTransform_t3704657025 * L_0 = __this->get_m_transform_4();
		Vector3_t3722313464  L_1 = __this->get_m_originalCoods_7();
		NullCheck(L_0);
		Transform_set_position_m3387557959(L_0, L_1, /*hidden argument*/NULL);
		// ResetCoords = false;
		IL2CPP_RUNTIME_CLASS_INIT(UIWindowBase_t1803419093_il2cpp_TypeInfo_var);
		((UIWindowBase_t1803419093_StaticFields*)il2cpp_codegen_static_fields_for(UIWindowBase_t1803419093_il2cpp_TypeInfo_var))->set_ResetCoords_6((bool)0);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.UI.Extensions.UIWindowBase::ScreenToCanvas(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  UIWindowBase_ScreenToCanvas_m2805835704 (UIWindowBase_t1803419093 * __this, Vector3_t3722313464  ___screenPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIWindowBase_ScreenToCanvas_m2805835704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Ray_t3785851493  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Plane_t1000493321  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		// var canvasSize = m_canvasRectTransform.sizeDelta;
		RectTransform_t3704657025 * L_0 = __this->get_m_canvasRectTransform_9();
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = RectTransform_get_sizeDelta_m2183112744(L_0, /*hidden argument*/NULL);
		V_3 = L_1;
		// if (m_canvas.renderMode == RenderMode.ScreenSpaceOverlay || (m_canvas.renderMode == RenderMode.ScreenSpaceCamera && m_canvas.worldCamera == null))
		Canvas_t3310196443 * L_2 = __this->get_m_canvas_8();
		NullCheck(L_2);
		int32_t L_3 = Canvas_get_renderMode_m841659411(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		Canvas_t3310196443 * L_4 = __this->get_m_canvas_8();
		NullCheck(L_4);
		int32_t L_5 = Canvas_get_renderMode_m841659411(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0049;
		}
	}
	{
		Canvas_t3310196443 * L_6 = __this->get_m_canvas_8();
		NullCheck(L_6);
		Camera_t4157153871 * L_7 = Canvas_get_worldCamera_m3516267897(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0049;
		}
	}

IL_003a:
	{
		// localPosition = screenPosition;
		Vector3_t3722313464  L_9 = ___screenPosition0;
		V_0 = L_9;
		// min = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_10 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_10;
		// max = canvasSize;
		Vector2_t2156229523  L_11 = V_3;
		V_2 = L_11;
		// }
		goto IL_00ee;
	}

IL_0049:
	{
		// var ray = m_canvas.worldCamera.ScreenPointToRay(screenPosition);
		Canvas_t3310196443 * L_12 = __this->get_m_canvas_8();
		NullCheck(L_12);
		Camera_t4157153871 * L_13 = Canvas_get_worldCamera_m3516267897(L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = ___screenPosition0;
		NullCheck(L_13);
		Ray_t3785851493  L_15 = Camera_ScreenPointToRay_m3764635188(L_13, L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		// var plane = new Plane(m_canvasRectTransform.forward, m_canvasRectTransform.position);
		RectTransform_t3704657025 * L_16 = __this->get_m_canvasRectTransform_9();
		NullCheck(L_16);
		Vector3_t3722313464  L_17 = Transform_get_forward_m747522392(L_16, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_18 = __this->get_m_canvasRectTransform_9();
		NullCheck(L_18);
		Vector3_t3722313464  L_19 = Transform_get_position_m36019626(L_18, /*hidden argument*/NULL);
		Plane__ctor_m2890438515((Plane_t1000493321 *)(&V_5), L_17, L_19, /*hidden argument*/NULL);
		// if (plane.Raycast(ray, out distance) == false)
		Ray_t3785851493  L_20 = V_4;
		bool L_21 = Plane_Raycast_m62370169((Plane_t1000493321 *)(&V_5), L_20, (float*)(&V_6), /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0091;
		}
	}
	{
		// throw new Exception("Is it practically possible?");
		Exception_t * L_22 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_22, _stringLiteral871021102, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, NULL, UIWindowBase_ScreenToCanvas_m2805835704_RuntimeMethod_var);
	}

IL_0091:
	{
		// var worldPosition = ray.origin + ray.direction * distance;
		Vector3_t3722313464  L_23 = Ray_get_origin_m2819290985((Ray_t3785851493 *)(&V_4), /*hidden argument*/NULL);
		Vector3_t3722313464  L_24 = Ray_get_direction_m761601601((Ray_t3785851493 *)(&V_4), /*hidden argument*/NULL);
		float L_25 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_26 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		Vector3_t3722313464  L_27 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_23, L_26, /*hidden argument*/NULL);
		V_7 = L_27;
		// localPosition = m_canvasRectTransform.InverseTransformPoint(worldPosition);
		RectTransform_t3704657025 * L_28 = __this->get_m_canvasRectTransform_9();
		Vector3_t3722313464  L_29 = V_7;
		NullCheck(L_28);
		Vector3_t3722313464  L_30 = Transform_InverseTransformPoint_m1343916000(L_28, L_29, /*hidden argument*/NULL);
		V_0 = L_30;
		// min = -Vector2.Scale(canvasSize, m_canvasRectTransform.pivot);
		Vector2_t2156229523  L_31 = V_3;
		RectTransform_t3704657025 * L_32 = __this->get_m_canvasRectTransform_9();
		NullCheck(L_32);
		Vector2_t2156229523  L_33 = RectTransform_get_pivot_m3425744470(L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_34 = Vector2_Scale_m165605769(NULL /*static, unused*/, L_31, L_33, /*hidden argument*/NULL);
		Vector2_t2156229523  L_35 = Vector2_op_UnaryNegation_m2172448356(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		V_1 = L_35;
		// max = Vector2.Scale(canvasSize, Vector2.one - m_canvasRectTransform.pivot);
		Vector2_t2156229523  L_36 = V_3;
		Vector2_t2156229523  L_37 = Vector2_get_one_m738793577(NULL /*static, unused*/, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_38 = __this->get_m_canvasRectTransform_9();
		NullCheck(L_38);
		Vector2_t2156229523  L_39 = RectTransform_get_pivot_m3425744470(L_38, /*hidden argument*/NULL);
		Vector2_t2156229523  L_40 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_37, L_39, /*hidden argument*/NULL);
		Vector2_t2156229523  L_41 = Vector2_Scale_m165605769(NULL /*static, unused*/, L_36, L_40, /*hidden argument*/NULL);
		V_2 = L_41;
	}

IL_00ee:
	{
		// localPosition.x = Mathf.Clamp(localPosition.x, min.x + KeepWindowInCanvas, max.x - KeepWindowInCanvas);
		Vector3_t3722313464  L_42 = V_0;
		float L_43 = L_42.get_x_2();
		Vector2_t2156229523  L_44 = V_1;
		float L_45 = L_44.get_x_0();
		int32_t L_46 = __this->get_KeepWindowInCanvas_10();
		Vector2_t2156229523  L_47 = V_2;
		float L_48 = L_47.get_x_0();
		int32_t L_49 = __this->get_KeepWindowInCanvas_10();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_50 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_43, ((float)il2cpp_codegen_add((float)L_45, (float)(((float)((float)L_46))))), ((float)il2cpp_codegen_subtract((float)L_48, (float)(((float)((float)L_49))))), /*hidden argument*/NULL);
		(&V_0)->set_x_2(L_50);
		// localPosition.y = Mathf.Clamp(localPosition.y, min.y + KeepWindowInCanvas, max.y - KeepWindowInCanvas);
		Vector3_t3722313464  L_51 = V_0;
		float L_52 = L_51.get_y_3();
		Vector2_t2156229523  L_53 = V_1;
		float L_54 = L_53.get_y_1();
		int32_t L_55 = __this->get_KeepWindowInCanvas_10();
		Vector2_t2156229523  L_56 = V_2;
		float L_57 = L_56.get_y_1();
		int32_t L_58 = __this->get_KeepWindowInCanvas_10();
		float L_59 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_52, ((float)il2cpp_codegen_add((float)L_54, (float)(((float)((float)L_55))))), ((float)il2cpp_codegen_subtract((float)L_57, (float)(((float)((float)L_58))))), /*hidden argument*/NULL);
		(&V_0)->set_y_3(L_59);
		// return localPosition;
		Vector3_t3722313464  L_60 = V_0;
		return L_60;
	}
}
// System.Void UnityEngine.UI.Extensions.UIWindowBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UIWindowBase__ctor_m3039225257 (UIWindowBase_t1803419093 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIWindowBase__ctor_m3039225257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 m_originalCoods = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_originalCoods_7(L_0);
		// public int KeepWindowInCanvas = 5;            // # of pixels of the window that must stay inside the canvas view.
		__this->set_KeepWindowInCanvas_10(5);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UIWindowBase::.cctor()
extern "C" IL2CPP_METHOD_ATTR void UIWindowBase__cctor_m2602105174 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
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
// System.Void UnityEngine.UI.Extensions.UI_InfiniteScroll::Awake()
extern "C" IL2CPP_METHOD_ATTR void UI_InfiniteScroll_Awake_m3763905430 (UI_InfiniteScroll_t3303149176 * __this, const RuntimeMethod* method)
{
	{
		// if (!InitByUser)
		bool L_0 = __this->get_InitByUser_4();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Init();
		UI_InfiniteScroll_Init_m1065705655(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_InfiniteScroll::Init()
extern "C" IL2CPP_METHOD_ATTR void UI_InfiniteScroll_Init_m1065705655 (UI_InfiniteScroll_t3303149176 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_InfiniteScroll_Init_m1065705655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (GetComponent<ScrollRect>() != null)
		ScrollRect_t4137855814 * L_0 = Component_GetComponent_TisScrollRect_t4137855814_m3636214290(__this, /*hidden argument*/Component_GetComponent_TisScrollRect_t4137855814_m3636214290_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_018c;
		}
	}
	{
		// _scrollRect = GetComponent<ScrollRect>();
		ScrollRect_t4137855814 * L_2 = Component_GetComponent_TisScrollRect_t4137855814_m3636214290(__this, /*hidden argument*/Component_GetComponent_TisScrollRect_t4137855814_m3636214290_RuntimeMethod_var);
		__this->set__scrollRect_5(L_2);
		// _scrollRect.onValueChanged.AddListener(OnScroll);
		ScrollRect_t4137855814 * L_3 = __this->get__scrollRect_5();
		NullCheck(L_3);
		ScrollRectEvent_t343079324 * L_4 = ScrollRect_get_onValueChanged_m1819941361(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = (intptr_t)UI_InfiniteScroll_OnScroll_m574852483_RuntimeMethod_var;
		UnityAction_1_t2741065664 * L_6 = (UnityAction_1_t2741065664 *)il2cpp_codegen_object_new(UnityAction_1_t2741065664_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2239151228(L_6, __this, L_5, /*hidden argument*/UnityAction_1__ctor_m2239151228_RuntimeMethod_var);
		NullCheck(L_4);
		UnityEvent_1_AddListener_m1581989708(L_4, L_6, /*hidden argument*/UnityEvent_1_AddListener_m1581989708_RuntimeMethod_var);
		// _scrollRect.movementType = ScrollRect.MovementType.Unrestricted;
		ScrollRect_t4137855814 * L_7 = __this->get__scrollRect_5();
		NullCheck(L_7);
		ScrollRect_set_movementType_m566824818(L_7, 0, /*hidden argument*/NULL);
		// for (int i = 0; i < _scrollRect.content.childCount; i++)
		V_0 = 0;
		goto IL_006e;
	}

IL_0049:
	{
		// items.Add(_scrollRect.content.GetChild(i).GetComponent<RectTransform>());
		List_1_t881764471 * L_8 = __this->get_items_15();
		ScrollRect_t4137855814 * L_9 = __this->get__scrollRect_5();
		NullCheck(L_9);
		RectTransform_t3704657025 * L_10 = ScrollRect_get_content_m2477524320(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Transform_t3600365921 * L_12 = Transform_GetChild_m1092972975(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		RectTransform_t3704657025 * L_13 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(L_12, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		NullCheck(L_8);
		List_1_Add_m1464644364(L_8, L_13, /*hidden argument*/List_1_Add_m1464644364_RuntimeMethod_var);
		// for (int i = 0; i < _scrollRect.content.childCount; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_006e:
	{
		// for (int i = 0; i < _scrollRect.content.childCount; i++)
		int32_t L_15 = V_0;
		ScrollRect_t4137855814 * L_16 = __this->get__scrollRect_5();
		NullCheck(L_16);
		RectTransform_t3704657025 * L_17 = ScrollRect_get_content_m2477524320(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		int32_t L_18 = Transform_get_childCount_m3145433196(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_15) < ((int32_t)L_18)))
		{
			goto IL_0049;
		}
	}
	{
		// if (_scrollRect.content.GetComponent<VerticalLayoutGroup>() != null)
		ScrollRect_t4137855814 * L_19 = __this->get__scrollRect_5();
		NullCheck(L_19);
		RectTransform_t3704657025 * L_20 = ScrollRect_get_content_m2477524320(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		VerticalLayoutGroup_t923838031 * L_21 = Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795(L_20, /*hidden argument*/Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_21, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00af;
		}
	}
	{
		// _verticalLayoutGroup = _scrollRect.content.GetComponent<VerticalLayoutGroup>();
		ScrollRect_t4137855814 * L_23 = __this->get__scrollRect_5();
		NullCheck(L_23);
		RectTransform_t3704657025 * L_24 = ScrollRect_get_content_m2477524320(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		VerticalLayoutGroup_t923838031 * L_25 = Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795(L_24, /*hidden argument*/Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795_RuntimeMethod_var);
		__this->set__verticalLayoutGroup_7(L_25);
	}

IL_00af:
	{
		// if (_scrollRect.content.GetComponent<HorizontalLayoutGroup>() != null)
		ScrollRect_t4137855814 * L_26 = __this->get__scrollRect_5();
		NullCheck(L_26);
		RectTransform_t3704657025 * L_27 = ScrollRect_get_content_m2477524320(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		HorizontalLayoutGroup_t2586782146 * L_28 = Component_GetComponent_TisHorizontalLayoutGroup_t2586782146_m1824140114(L_27, /*hidden argument*/Component_GetComponent_TisHorizontalLayoutGroup_t2586782146_m1824140114_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_29 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_28, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00dd;
		}
	}
	{
		// _horizontalLayoutGroup = _scrollRect.content.GetComponent<HorizontalLayoutGroup>();
		ScrollRect_t4137855814 * L_30 = __this->get__scrollRect_5();
		NullCheck(L_30);
		RectTransform_t3704657025 * L_31 = ScrollRect_get_content_m2477524320(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		HorizontalLayoutGroup_t2586782146 * L_32 = Component_GetComponent_TisHorizontalLayoutGroup_t2586782146_m1824140114(L_31, /*hidden argument*/Component_GetComponent_TisHorizontalLayoutGroup_t2586782146_m1824140114_RuntimeMethod_var);
		__this->set__horizontalLayoutGroup_8(L_32);
	}

IL_00dd:
	{
		// if (_scrollRect.content.GetComponent<GridLayoutGroup>() != null)
		ScrollRect_t4137855814 * L_33 = __this->get__scrollRect_5();
		NullCheck(L_33);
		RectTransform_t3704657025 * L_34 = ScrollRect_get_content_m2477524320(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		GridLayoutGroup_t3046220461 * L_35 = Component_GetComponent_TisGridLayoutGroup_t3046220461_m2458911910(L_34, /*hidden argument*/Component_GetComponent_TisGridLayoutGroup_t3046220461_m2458911910_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_36 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_35, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_010b;
		}
	}
	{
		// _gridLayoutGroup = _scrollRect.content.GetComponent<GridLayoutGroup>();
		ScrollRect_t4137855814 * L_37 = __this->get__scrollRect_5();
		NullCheck(L_37);
		RectTransform_t3704657025 * L_38 = ScrollRect_get_content_m2477524320(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		GridLayoutGroup_t3046220461 * L_39 = Component_GetComponent_TisGridLayoutGroup_t3046220461_m2458911910(L_38, /*hidden argument*/Component_GetComponent_TisGridLayoutGroup_t3046220461_m2458911910_RuntimeMethod_var);
		__this->set__gridLayoutGroup_9(L_39);
	}

IL_010b:
	{
		// if (_scrollRect.content.GetComponent<ContentSizeFitter>() != null)
		ScrollRect_t4137855814 * L_40 = __this->get__scrollRect_5();
		NullCheck(L_40);
		RectTransform_t3704657025 * L_41 = ScrollRect_get_content_m2477524320(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		ContentSizeFitter_t3850442145 * L_42 = Component_GetComponent_TisContentSizeFitter_t3850442145_m1301783278(L_41, /*hidden argument*/Component_GetComponent_TisContentSizeFitter_t3850442145_m1301783278_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_43 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_42, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0139;
		}
	}
	{
		// _contentSizeFitter = _scrollRect.content.GetComponent<ContentSizeFitter>();
		ScrollRect_t4137855814 * L_44 = __this->get__scrollRect_5();
		NullCheck(L_44);
		RectTransform_t3704657025 * L_45 = ScrollRect_get_content_m2477524320(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		ContentSizeFitter_t3850442145 * L_46 = Component_GetComponent_TisContentSizeFitter_t3850442145_m1301783278(L_45, /*hidden argument*/Component_GetComponent_TisContentSizeFitter_t3850442145_m1301783278_RuntimeMethod_var);
		__this->set__contentSizeFitter_6(L_46);
	}

IL_0139:
	{
		// _isHorizontal = _scrollRect.horizontal;
		ScrollRect_t4137855814 * L_47 = __this->get__scrollRect_5();
		NullCheck(L_47);
		bool L_48 = ScrollRect_get_horizontal_m4171218020(L_47, /*hidden argument*/NULL);
		__this->set__isHorizontal_11(L_48);
		// _isVertical = _scrollRect.vertical;
		ScrollRect_t4137855814 * L_49 = __this->get__scrollRect_5();
		NullCheck(L_49);
		bool L_50 = ScrollRect_get_vertical_m3678635065(L_49, /*hidden argument*/NULL);
		__this->set__isVertical_10(L_50);
		// if (_isHorizontal && _isVertical)
		bool L_51 = __this->get__isHorizontal_11();
		if (!L_51)
		{
			goto IL_0175;
		}
	}
	{
		bool L_52 = __this->get__isVertical_10();
		if (!L_52)
		{
			goto IL_0175;
		}
	}
	{
		// Debug.LogError("UI_InfiniteScroll doesn't support scrolling in both directions, plase choose one direction (horizontal or vertical)");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1020834103, /*hidden argument*/NULL);
	}

IL_0175:
	{
		// _itemCount = _scrollRect.content.childCount;
		ScrollRect_t4137855814 * L_53 = __this->get__scrollRect_5();
		NullCheck(L_53);
		RectTransform_t3704657025 * L_54 = ScrollRect_get_content_m2477524320(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		int32_t L_55 = Transform_get_childCount_m3145433196(L_54, /*hidden argument*/NULL);
		__this->set__itemCount_18(L_55);
		// }
		return;
	}

IL_018c:
	{
		// Debug.LogError("UI_InfiniteScroll => No ScrollRect component found");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral77625732, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_InfiniteScroll::DisableGridComponents()
extern "C" IL2CPP_METHOD_ATTR void UI_InfiniteScroll_DisableGridComponents_m2970094095 (UI_InfiniteScroll_t3303149176 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_InfiniteScroll_DisableGridComponents_m2970094095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isVertical)
		bool L_0 = __this->get__isVertical_10();
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		// _recordOffsetY = items[0].GetComponent<RectTransform>().anchoredPosition.y - items[1].GetComponent<RectTransform>().anchoredPosition.y;
		List_1_t881764471 * L_1 = __this->get_items_15();
		NullCheck(L_1);
		RectTransform_t3704657025 * L_2 = List_1_get_Item_m1718277669(L_1, 0, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_2);
		RectTransform_t3704657025 * L_3 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(L_2, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		NullCheck(L_3);
		Vector2_t2156229523  L_4 = RectTransform_get_anchoredPosition_m1813443094(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_1();
		List_1_t881764471 * L_6 = __this->get_items_15();
		NullCheck(L_6);
		RectTransform_t3704657025 * L_7 = List_1_get_Item_m1718277669(L_6, 1, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_7);
		RectTransform_t3704657025 * L_8 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(L_7, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		NullCheck(L_8);
		Vector2_t2156229523  L_9 = RectTransform_get_anchoredPosition_m1813443094(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_1();
		__this->set__recordOffsetY_20(((float)il2cpp_codegen_subtract((float)L_5, (float)L_10)));
		// _disableMarginY = _recordOffsetY * _itemCount / 2;// _scrollRect.GetComponent<RectTransform>().rect.height/2 + items[0].sizeDelta.y;
		float L_11 = __this->get__recordOffsetY_20();
		int32_t L_12 = __this->get__itemCount_18();
		__this->set__disableMarginY_13(((float)((float)((float)il2cpp_codegen_multiply((float)L_11, (float)(((float)((float)L_12)))))/(float)(2.0f))));
	}

IL_005f:
	{
		// if (_isHorizontal)
		bool L_13 = __this->get__isHorizontal_11();
		if (!L_13)
		{
			goto IL_00be;
		}
	}
	{
		// _recordOffsetX = items[1].GetComponent<RectTransform>().anchoredPosition.x - items[0].GetComponent<RectTransform>().anchoredPosition.x;
		List_1_t881764471 * L_14 = __this->get_items_15();
		NullCheck(L_14);
		RectTransform_t3704657025 * L_15 = List_1_get_Item_m1718277669(L_14, 1, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_15);
		RectTransform_t3704657025 * L_16 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(L_15, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		NullCheck(L_16);
		Vector2_t2156229523  L_17 = RectTransform_get_anchoredPosition_m1813443094(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_x_0();
		List_1_t881764471 * L_19 = __this->get_items_15();
		NullCheck(L_19);
		RectTransform_t3704657025 * L_20 = List_1_get_Item_m1718277669(L_19, 0, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_20);
		RectTransform_t3704657025 * L_21 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(L_20, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		NullCheck(L_21);
		Vector2_t2156229523  L_22 = RectTransform_get_anchoredPosition_m1813443094(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_x_0();
		__this->set__recordOffsetX_19(((float)il2cpp_codegen_subtract((float)L_18, (float)L_23)));
		// _disableMarginX = _recordOffsetX * _itemCount / 2;//_scrollRect.GetComponent<RectTransform>().rect.width/2 + items[0].sizeDelta.x;
		float L_24 = __this->get__recordOffsetX_19();
		int32_t L_25 = __this->get__itemCount_18();
		__this->set__disableMarginX_12(((float)((float)((float)il2cpp_codegen_multiply((float)L_24, (float)(((float)((float)L_25)))))/(float)(2.0f))));
	}

IL_00be:
	{
		// if (_verticalLayoutGroup)
		VerticalLayoutGroup_t923838031 * L_26 = __this->get__verticalLayoutGroup_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_27 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00d7;
		}
	}
	{
		// _verticalLayoutGroup.enabled = false;
		VerticalLayoutGroup_t923838031 * L_28 = __this->get__verticalLayoutGroup_7();
		NullCheck(L_28);
		Behaviour_set_enabled_m20417929(L_28, (bool)0, /*hidden argument*/NULL);
	}

IL_00d7:
	{
		// if (_horizontalLayoutGroup)
		HorizontalLayoutGroup_t2586782146 * L_29 = __this->get__horizontalLayoutGroup_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_30 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00f0;
		}
	}
	{
		// _horizontalLayoutGroup.enabled = false;
		HorizontalLayoutGroup_t2586782146 * L_31 = __this->get__horizontalLayoutGroup_8();
		NullCheck(L_31);
		Behaviour_set_enabled_m20417929(L_31, (bool)0, /*hidden argument*/NULL);
	}

IL_00f0:
	{
		// if (_contentSizeFitter)
		ContentSizeFitter_t3850442145 * L_32 = __this->get__contentSizeFitter_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_33 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0109;
		}
	}
	{
		// _contentSizeFitter.enabled = false;
		ContentSizeFitter_t3850442145 * L_34 = __this->get__contentSizeFitter_6();
		NullCheck(L_34);
		Behaviour_set_enabled_m20417929(L_34, (bool)0, /*hidden argument*/NULL);
	}

IL_0109:
	{
		// if (_gridLayoutGroup)
		GridLayoutGroup_t3046220461 * L_35 = __this->get__gridLayoutGroup_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_36 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0122;
		}
	}
	{
		// _gridLayoutGroup.enabled = false;
		GridLayoutGroup_t3046220461 * L_37 = __this->get__gridLayoutGroup_9();
		NullCheck(L_37);
		Behaviour_set_enabled_m20417929(L_37, (bool)0, /*hidden argument*/NULL);
	}

IL_0122:
	{
		// _hasDisabledGridComponents = true;
		__this->set__hasDisabledGridComponents_14((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_InfiniteScroll::OnScroll(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void UI_InfiniteScroll_OnScroll_m574852483 (UI_InfiniteScroll_t3303149176 * __this, Vector2_t2156229523  ___pos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_InfiniteScroll_OnScroll_m574852483_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!_hasDisabledGridComponents)
		bool L_0 = __this->get__hasDisabledGridComponents_14();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// DisableGridComponents();
		UI_InfiniteScroll_DisableGridComponents_m2970094095(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// for (int i = 0; i < items.Count; i++)
		V_0 = 0;
		goto IL_02cf;
	}

IL_0015:
	{
		// if (_isHorizontal)
		bool L_1 = __this->get__isHorizontal_11();
		if (!L_1)
		{
			goto IL_0170;
		}
	}
	{
		// if (_scrollRect.transform.InverseTransformPoint(items[i].gameObject.transform.position).x > _disableMarginX + _treshold)
		ScrollRect_t4137855814 * L_2 = __this->get__scrollRect_5();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(L_2, /*hidden argument*/NULL);
		List_1_t881764471 * L_4 = __this->get_items_15();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RectTransform_t3704657025 * L_6 = List_1_get_Item_m1718277669(L_4, L_5, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_10 = Transform_InverseTransformPoint_m1343916000(L_3, L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		float L_12 = __this->get__disableMarginX_12();
		float L_13 = __this->get__treshold_17();
		if ((!(((float)L_11) > ((float)((float)il2cpp_codegen_add((float)L_12, (float)L_13))))))
		{
			goto IL_00d1;
		}
	}
	{
		// _newAnchoredPosition = items[i].anchoredPosition;
		List_1_t881764471 * L_14 = __this->get_items_15();
		int32_t L_15 = V_0;
		NullCheck(L_14);
		RectTransform_t3704657025 * L_16 = List_1_get_Item_m1718277669(L_14, L_15, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_16);
		Vector2_t2156229523  L_17 = RectTransform_get_anchoredPosition_m1813443094(L_16, /*hidden argument*/NULL);
		__this->set__newAnchoredPosition_16(L_17);
		// _newAnchoredPosition.x -= _itemCount * _recordOffsetX;
		Vector2_t2156229523 * L_18 = __this->get_address_of__newAnchoredPosition_16();
		float* L_19 = L_18->get_address_of_x_0();
		float* L_20 = L_19;
		int32_t L_21 = __this->get__itemCount_18();
		float L_22 = __this->get__recordOffsetX_19();
		*((float*)(L_20)) = (float)((float)il2cpp_codegen_subtract((float)(*((float*)L_20)), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_21))), (float)L_22))));
		// items[i].anchoredPosition = _newAnchoredPosition;
		List_1_t881764471 * L_23 = __this->get_items_15();
		int32_t L_24 = V_0;
		NullCheck(L_23);
		RectTransform_t3704657025 * L_25 = List_1_get_Item_m1718277669(L_23, L_24, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		Vector2_t2156229523  L_26 = __this->get__newAnchoredPosition_16();
		NullCheck(L_25);
		RectTransform_set_anchoredPosition_m4126691837(L_25, L_26, /*hidden argument*/NULL);
		// _scrollRect.content.GetChild(_itemCount - 1).transform.SetAsFirstSibling();
		ScrollRect_t4137855814 * L_27 = __this->get__scrollRect_5();
		NullCheck(L_27);
		RectTransform_t3704657025 * L_28 = ScrollRect_get_content_m2477524320(L_27, /*hidden argument*/NULL);
		int32_t L_29 = __this->get__itemCount_18();
		NullCheck(L_28);
		Transform_t3600365921 * L_30 = Transform_GetChild_m1092972975(L_28, ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_t3600365921 * L_31 = Component_get_transform_m3162698980(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_SetAsFirstSibling_m253439912(L_31, /*hidden argument*/NULL);
		// }
		goto IL_0170;
	}

IL_00d1:
	{
		// else if (_scrollRect.transform.InverseTransformPoint(items[i].gameObject.transform.position).x < -_disableMarginX)
		ScrollRect_t4137855814 * L_32 = __this->get__scrollRect_5();
		NullCheck(L_32);
		Transform_t3600365921 * L_33 = Component_get_transform_m3162698980(L_32, /*hidden argument*/NULL);
		List_1_t881764471 * L_34 = __this->get_items_15();
		int32_t L_35 = V_0;
		NullCheck(L_34);
		RectTransform_t3704657025 * L_36 = List_1_get_Item_m1718277669(L_34, L_35, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_36);
		GameObject_t1113636619 * L_37 = Component_get_gameObject_m442555142(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_t3600365921 * L_38 = GameObject_get_transform_m1369836730(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		Vector3_t3722313464  L_39 = Transform_get_position_m36019626(L_38, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t3722313464  L_40 = Transform_InverseTransformPoint_m1343916000(L_33, L_39, /*hidden argument*/NULL);
		float L_41 = L_40.get_x_2();
		float L_42 = __this->get__disableMarginX_12();
		if ((!(((float)L_41) < ((float)((-L_42))))))
		{
			goto IL_0170;
		}
	}
	{
		// _newAnchoredPosition = items[i].anchoredPosition;
		List_1_t881764471 * L_43 = __this->get_items_15();
		int32_t L_44 = V_0;
		NullCheck(L_43);
		RectTransform_t3704657025 * L_45 = List_1_get_Item_m1718277669(L_43, L_44, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_45);
		Vector2_t2156229523  L_46 = RectTransform_get_anchoredPosition_m1813443094(L_45, /*hidden argument*/NULL);
		__this->set__newAnchoredPosition_16(L_46);
		// _newAnchoredPosition.x += _itemCount * _recordOffsetX;
		Vector2_t2156229523 * L_47 = __this->get_address_of__newAnchoredPosition_16();
		float* L_48 = L_47->get_address_of_x_0();
		float* L_49 = L_48;
		int32_t L_50 = __this->get__itemCount_18();
		float L_51 = __this->get__recordOffsetX_19();
		*((float*)(L_49)) = (float)((float)il2cpp_codegen_add((float)(*((float*)L_49)), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_50))), (float)L_51))));
		// items[i].anchoredPosition = _newAnchoredPosition;
		List_1_t881764471 * L_52 = __this->get_items_15();
		int32_t L_53 = V_0;
		NullCheck(L_52);
		RectTransform_t3704657025 * L_54 = List_1_get_Item_m1718277669(L_52, L_53, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		Vector2_t2156229523  L_55 = __this->get__newAnchoredPosition_16();
		NullCheck(L_54);
		RectTransform_set_anchoredPosition_m4126691837(L_54, L_55, /*hidden argument*/NULL);
		// _scrollRect.content.GetChild(0).transform.SetAsLastSibling();
		ScrollRect_t4137855814 * L_56 = __this->get__scrollRect_5();
		NullCheck(L_56);
		RectTransform_t3704657025 * L_57 = ScrollRect_get_content_m2477524320(L_56, /*hidden argument*/NULL);
		NullCheck(L_57);
		Transform_t3600365921 * L_58 = Transform_GetChild_m1092972975(L_57, 0, /*hidden argument*/NULL);
		NullCheck(L_58);
		Transform_t3600365921 * L_59 = Component_get_transform_m3162698980(L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		Transform_SetAsLastSibling_m3949169710(L_59, /*hidden argument*/NULL);
	}

IL_0170:
	{
		// if (_isVertical)
		bool L_60 = __this->get__isVertical_10();
		if (!L_60)
		{
			goto IL_02cb;
		}
	}
	{
		// if (_scrollRect.transform.InverseTransformPoint(items[i].gameObject.transform.position).y > _disableMarginY + _treshold)
		ScrollRect_t4137855814 * L_61 = __this->get__scrollRect_5();
		NullCheck(L_61);
		Transform_t3600365921 * L_62 = Component_get_transform_m3162698980(L_61, /*hidden argument*/NULL);
		List_1_t881764471 * L_63 = __this->get_items_15();
		int32_t L_64 = V_0;
		NullCheck(L_63);
		RectTransform_t3704657025 * L_65 = List_1_get_Item_m1718277669(L_63, L_64, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_65);
		GameObject_t1113636619 * L_66 = Component_get_gameObject_m442555142(L_65, /*hidden argument*/NULL);
		NullCheck(L_66);
		Transform_t3600365921 * L_67 = GameObject_get_transform_m1369836730(L_66, /*hidden argument*/NULL);
		NullCheck(L_67);
		Vector3_t3722313464  L_68 = Transform_get_position_m36019626(L_67, /*hidden argument*/NULL);
		NullCheck(L_62);
		Vector3_t3722313464  L_69 = Transform_InverseTransformPoint_m1343916000(L_62, L_68, /*hidden argument*/NULL);
		float L_70 = L_69.get_y_3();
		float L_71 = __this->get__disableMarginY_13();
		float L_72 = __this->get__treshold_17();
		if ((!(((float)L_70) > ((float)((float)il2cpp_codegen_add((float)L_71, (float)L_72))))))
		{
			goto IL_022c;
		}
	}
	{
		// _newAnchoredPosition = items[i].anchoredPosition;
		List_1_t881764471 * L_73 = __this->get_items_15();
		int32_t L_74 = V_0;
		NullCheck(L_73);
		RectTransform_t3704657025 * L_75 = List_1_get_Item_m1718277669(L_73, L_74, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_75);
		Vector2_t2156229523  L_76 = RectTransform_get_anchoredPosition_m1813443094(L_75, /*hidden argument*/NULL);
		__this->set__newAnchoredPosition_16(L_76);
		// _newAnchoredPosition.y -= _itemCount * _recordOffsetY;
		Vector2_t2156229523 * L_77 = __this->get_address_of__newAnchoredPosition_16();
		float* L_78 = L_77->get_address_of_y_1();
		float* L_79 = L_78;
		int32_t L_80 = __this->get__itemCount_18();
		float L_81 = __this->get__recordOffsetY_20();
		*((float*)(L_79)) = (float)((float)il2cpp_codegen_subtract((float)(*((float*)L_79)), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_80))), (float)L_81))));
		// items[i].anchoredPosition = _newAnchoredPosition;
		List_1_t881764471 * L_82 = __this->get_items_15();
		int32_t L_83 = V_0;
		NullCheck(L_82);
		RectTransform_t3704657025 * L_84 = List_1_get_Item_m1718277669(L_82, L_83, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		Vector2_t2156229523  L_85 = __this->get__newAnchoredPosition_16();
		NullCheck(L_84);
		RectTransform_set_anchoredPosition_m4126691837(L_84, L_85, /*hidden argument*/NULL);
		// _scrollRect.content.GetChild(_itemCount - 1).transform.SetAsFirstSibling();
		ScrollRect_t4137855814 * L_86 = __this->get__scrollRect_5();
		NullCheck(L_86);
		RectTransform_t3704657025 * L_87 = ScrollRect_get_content_m2477524320(L_86, /*hidden argument*/NULL);
		int32_t L_88 = __this->get__itemCount_18();
		NullCheck(L_87);
		Transform_t3600365921 * L_89 = Transform_GetChild_m1092972975(L_87, ((int32_t)il2cpp_codegen_subtract((int32_t)L_88, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_89);
		Transform_t3600365921 * L_90 = Component_get_transform_m3162698980(L_89, /*hidden argument*/NULL);
		NullCheck(L_90);
		Transform_SetAsFirstSibling_m253439912(L_90, /*hidden argument*/NULL);
		// }
		goto IL_02cb;
	}

IL_022c:
	{
		// else if (_scrollRect.transform.InverseTransformPoint(items[i].gameObject.transform.position).y < -_disableMarginY)
		ScrollRect_t4137855814 * L_91 = __this->get__scrollRect_5();
		NullCheck(L_91);
		Transform_t3600365921 * L_92 = Component_get_transform_m3162698980(L_91, /*hidden argument*/NULL);
		List_1_t881764471 * L_93 = __this->get_items_15();
		int32_t L_94 = V_0;
		NullCheck(L_93);
		RectTransform_t3704657025 * L_95 = List_1_get_Item_m1718277669(L_93, L_94, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_95);
		GameObject_t1113636619 * L_96 = Component_get_gameObject_m442555142(L_95, /*hidden argument*/NULL);
		NullCheck(L_96);
		Transform_t3600365921 * L_97 = GameObject_get_transform_m1369836730(L_96, /*hidden argument*/NULL);
		NullCheck(L_97);
		Vector3_t3722313464  L_98 = Transform_get_position_m36019626(L_97, /*hidden argument*/NULL);
		NullCheck(L_92);
		Vector3_t3722313464  L_99 = Transform_InverseTransformPoint_m1343916000(L_92, L_98, /*hidden argument*/NULL);
		float L_100 = L_99.get_y_3();
		float L_101 = __this->get__disableMarginY_13();
		if ((!(((float)L_100) < ((float)((-L_101))))))
		{
			goto IL_02cb;
		}
	}
	{
		// _newAnchoredPosition = items[i].anchoredPosition;
		List_1_t881764471 * L_102 = __this->get_items_15();
		int32_t L_103 = V_0;
		NullCheck(L_102);
		RectTransform_t3704657025 * L_104 = List_1_get_Item_m1718277669(L_102, L_103, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_104);
		Vector2_t2156229523  L_105 = RectTransform_get_anchoredPosition_m1813443094(L_104, /*hidden argument*/NULL);
		__this->set__newAnchoredPosition_16(L_105);
		// _newAnchoredPosition.y += _itemCount * _recordOffsetY;
		Vector2_t2156229523 * L_106 = __this->get_address_of__newAnchoredPosition_16();
		float* L_107 = L_106->get_address_of_y_1();
		float* L_108 = L_107;
		int32_t L_109 = __this->get__itemCount_18();
		float L_110 = __this->get__recordOffsetY_20();
		*((float*)(L_108)) = (float)((float)il2cpp_codegen_add((float)(*((float*)L_108)), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_109))), (float)L_110))));
		// items[i].anchoredPosition = _newAnchoredPosition;
		List_1_t881764471 * L_111 = __this->get_items_15();
		int32_t L_112 = V_0;
		NullCheck(L_111);
		RectTransform_t3704657025 * L_113 = List_1_get_Item_m1718277669(L_111, L_112, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		Vector2_t2156229523  L_114 = __this->get__newAnchoredPosition_16();
		NullCheck(L_113);
		RectTransform_set_anchoredPosition_m4126691837(L_113, L_114, /*hidden argument*/NULL);
		// _scrollRect.content.GetChild(0).transform.SetAsLastSibling();
		ScrollRect_t4137855814 * L_115 = __this->get__scrollRect_5();
		NullCheck(L_115);
		RectTransform_t3704657025 * L_116 = ScrollRect_get_content_m2477524320(L_115, /*hidden argument*/NULL);
		NullCheck(L_116);
		Transform_t3600365921 * L_117 = Transform_GetChild_m1092972975(L_116, 0, /*hidden argument*/NULL);
		NullCheck(L_117);
		Transform_t3600365921 * L_118 = Component_get_transform_m3162698980(L_117, /*hidden argument*/NULL);
		NullCheck(L_118);
		Transform_SetAsLastSibling_m3949169710(L_118, /*hidden argument*/NULL);
	}

IL_02cb:
	{
		// for (int i = 0; i < items.Count; i++)
		int32_t L_119 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)1));
	}

IL_02cf:
	{
		// for (int i = 0; i < items.Count; i++)
		int32_t L_120 = V_0;
		List_1_t881764471 * L_121 = __this->get_items_15();
		NullCheck(L_121);
		int32_t L_122 = List_1_get_Count_m1749180329(L_121, /*hidden argument*/List_1_get_Count_m1749180329_RuntimeMethod_var);
		if ((((int32_t)L_120) < ((int32_t)L_122)))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_InfiniteScroll::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UI_InfiniteScroll__ctor_m745528630 (UI_InfiniteScroll_t3303149176 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_InfiniteScroll__ctor_m745528630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<RectTransform> items = new List<RectTransform>();
		List_1_t881764471 * L_0 = (List_1_t881764471 *)il2cpp_codegen_object_new(List_1_t881764471_il2cpp_TypeInfo_var);
		List_1__ctor_m3408116030(L_0, /*hidden argument*/List_1__ctor_m3408116030_RuntimeMethod_var);
		__this->set_items_15(L_0);
		// private Vector2 _newAnchoredPosition = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__newAnchoredPosition_16(L_1);
		// private float _treshold = 100f;
		__this->set__treshold_17((100.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.Extensions.UI_Knob::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void UI_Knob_OnPointerDown_m1483377384 (UI_Knob_t1735628298 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		// _canDrag = true;
		__this->set__canDrag_18((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_Knob::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void UI_Knob_OnPointerUp_m1549087795 (UI_Knob_t1735628298 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		// _canDrag = false;
		__this->set__canDrag_18((bool)0);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_Knob::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void UI_Knob_OnPointerEnter_m2097063979 (UI_Knob_t1735628298 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		// _canDrag = true;
		__this->set__canDrag_18((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_Knob::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void UI_Knob_OnPointerExit_m1753694220 (UI_Knob_t1735628298 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		// _canDrag = false;
		__this->set__canDrag_18((bool)0);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_Knob::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void UI_Knob_OnBeginDrag_m2414634663 (UI_Knob_t1735628298 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		// SetInitPointerData(eventData);
		PointerEventData_t3807901092 * L_0 = ___eventData0;
		UI_Knob_SetInitPointerData_m2203880447(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_Knob::SetInitPointerData(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void UI_Knob_SetInitPointerData_m2203880447 (UI_Knob_t1735628298 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_Knob_SetInitPointerData_m2203880447_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _initRotation = transform.rotation;
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Quaternion_t2301928331  L_1 = Transform_get_rotation_m3502953881(L_0, /*hidden argument*/NULL);
		__this->set__initRotation_17(L_1);
		// _currentVector = eventData.position - (Vector2)transform.position;
		PointerEventData_t3807901092 * L_2 = ___eventData0;
		NullCheck(L_2);
		Vector2_t2156229523  L_3 = PointerEventData_get_position_m437660275(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_6 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		Vector2_t2156229523  L_7 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
		__this->set__currentVector_16(L_7);
		// _initAngle = Mathf.Atan2(_currentVector.y, _currentVector.x) * Mathf.Rad2Deg;
		Vector2_t2156229523 * L_8 = __this->get_address_of__currentVector_16();
		float L_9 = L_8->get_y_1();
		Vector2_t2156229523 * L_10 = __this->get_address_of__currentVector_16();
		float L_11 = L_10->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_12 = atan2f(L_9, L_11);
		__this->set__initAngle_14(((float)il2cpp_codegen_multiply((float)L_12, (float)(57.29578f))));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_Knob::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void UI_Knob_OnDrag_m1989378055 (UI_Knob_t1735628298 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_Knob_OnDrag_m1989378055_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	float G_B26_0 = 0.0f;
	{
		// if (!_canDrag)
		bool L_0 = __this->get__canDrag_18();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// SetInitPointerData(eventData);
		PointerEventData_t3807901092 * L_1 = ___eventData0;
		UI_Knob_SetInitPointerData_m2203880447(__this, L_1, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0010:
	{
		// _currentVector = eventData.position - (Vector2)transform.position;
		PointerEventData_t3807901092 * L_2 = ___eventData0;
		NullCheck(L_2);
		Vector2_t2156229523  L_3 = PointerEventData_get_position_m437660275(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_6 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		Vector2_t2156229523  L_7 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
		__this->set__currentVector_16(L_7);
		// _currentAngle = Mathf.Atan2(_currentVector.y, _currentVector.x) * Mathf.Rad2Deg;
		Vector2_t2156229523 * L_8 = __this->get_address_of__currentVector_16();
		float L_9 = L_8->get_y_1();
		Vector2_t2156229523 * L_10 = __this->get_address_of__currentVector_16();
		float L_11 = L_10->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_12 = atan2f(L_9, L_11);
		__this->set__currentAngle_15(((float)il2cpp_codegen_multiply((float)L_12, (float)(57.29578f))));
		// Quaternion addRotation = Quaternion.AngleAxis(_currentAngle - _initAngle, this.transform.forward);
		float L_13 = __this->get__currentAngle_15();
		float L_14 = __this->get__initAngle_14();
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t3722313464  L_16 = Transform_get_forward_m747522392(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_17 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, ((float)il2cpp_codegen_subtract((float)L_13, (float)L_14)), L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		// addRotation.eulerAngles = new Vector3(0, 0, addRotation.eulerAngles.z);
		Vector3_t3722313464  L_18 = Quaternion_get_eulerAngles_m3425202016((Quaternion_t2301928331 *)(&V_0), /*hidden argument*/NULL);
		float L_19 = L_18.get_z_4();
		Vector3_t3722313464  L_20;
		memset(&L_20, 0, sizeof(L_20));
		Vector3__ctor_m3353183577((&L_20), (0.0f), (0.0f), L_19, /*hidden argument*/NULL);
		Quaternion_set_eulerAngles_m793195291((Quaternion_t2301928331 *)(&V_0), L_20, /*hidden argument*/NULL);
		// Quaternion finalRotation = _initRotation * addRotation;
		Quaternion_t2301928331  L_21 = __this->get__initRotation_17();
		Quaternion_t2301928331  L_22 = V_0;
		Quaternion_t2301928331  L_23 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		// if (direction == Direction.CW)
		int32_t L_24 = __this->get_direction_4();
		if (L_24)
		{
			goto IL_010c;
		}
	}
	{
		// knobValue = 1 - (finalRotation.eulerAngles.z / 360f);
		Vector3_t3722313464  L_25 = Quaternion_get_eulerAngles_m3425202016((Quaternion_t2301928331 *)(&V_1), /*hidden argument*/NULL);
		float L_26 = L_25.get_z_4();
		__this->set_knobValue_5(((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)L_26/(float)(360.0f))))));
		// if (snapToPosition)
		bool L_27 = __this->get_snapToPosition_9();
		if (!L_27)
		{
			goto IL_015a;
		}
	}
	{
		// SnapToPosition(ref knobValue);
		float* L_28 = __this->get_address_of_knobValue_5();
		UI_Knob_SnapToPosition_m3789174925(__this, (float*)L_28, /*hidden argument*/NULL);
		// finalRotation.eulerAngles = new Vector3(0, 0, 360 - 360 * knobValue);
		float L_29 = __this->get_knobValue_5();
		Vector3_t3722313464  L_30;
		memset(&L_30, 0, sizeof(L_30));
		Vector3__ctor_m3353183577((&L_30), (0.0f), (0.0f), ((float)il2cpp_codegen_subtract((float)(360.0f), (float)((float)il2cpp_codegen_multiply((float)(360.0f), (float)L_29)))), /*hidden argument*/NULL);
		Quaternion_set_eulerAngles_m793195291((Quaternion_t2301928331 *)(&V_1), L_30, /*hidden argument*/NULL);
		// }
		goto IL_015a;
	}

IL_010c:
	{
		// knobValue = (finalRotation.eulerAngles.z / 360f);
		Vector3_t3722313464  L_31 = Quaternion_get_eulerAngles_m3425202016((Quaternion_t2301928331 *)(&V_1), /*hidden argument*/NULL);
		float L_32 = L_31.get_z_4();
		__this->set_knobValue_5(((float)((float)L_32/(float)(360.0f))));
		// if (snapToPosition)
		bool L_33 = __this->get_snapToPosition_9();
		if (!L_33)
		{
			goto IL_015a;
		}
	}
	{
		// SnapToPosition(ref knobValue);
		float* L_34 = __this->get_address_of_knobValue_5();
		UI_Knob_SnapToPosition_m3789174925(__this, (float*)L_34, /*hidden argument*/NULL);
		// finalRotation.eulerAngles = new Vector3(0, 0, 360 * knobValue);
		float L_35 = __this->get_knobValue_5();
		Vector3_t3722313464  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Vector3__ctor_m3353183577((&L_36), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)(360.0f), (float)L_35)), /*hidden argument*/NULL);
		Quaternion_set_eulerAngles_m793195291((Quaternion_t2301928331 *)(&V_1), L_36, /*hidden argument*/NULL);
	}

IL_015a:
	{
		// if (Mathf.Abs(knobValue - _previousValue) > 0.5f)
		float L_37 = __this->get_knobValue_5();
		float L_38 = __this->get__previousValue_13();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_39 = fabsf(((float)il2cpp_codegen_subtract((float)L_37, (float)L_38)));
		if ((!(((float)L_39) > ((float)(0.5f)))))
		{
			goto IL_0289;
		}
	}
	{
		// if (knobValue < 0.5f && loops > 1 && _currentLoops < loops - 1)
		float L_40 = __this->get_knobValue_5();
		if ((!(((float)L_40) < ((float)(0.5f)))))
		{
			goto IL_01b4;
		}
	}
	{
		int32_t L_41 = __this->get_loops_7();
		if ((((int32_t)L_41) <= ((int32_t)1)))
		{
			goto IL_01b4;
		}
	}
	{
		float L_42 = __this->get__currentLoops_12();
		int32_t L_43 = __this->get_loops_7();
		if ((!(((float)L_42) < ((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)1)))))))))
		{
			goto IL_01b4;
		}
	}
	{
		// _currentLoops++;
		float L_44 = __this->get__currentLoops_12();
		__this->set__currentLoops_12(((float)il2cpp_codegen_add((float)L_44, (float)(1.0f))));
		// }
		goto IL_0289;
	}

IL_01b4:
	{
		// else if (knobValue > 0.5f && _currentLoops >= 1)
		float L_45 = __this->get_knobValue_5();
		if ((!(((float)L_45) > ((float)(0.5f)))))
		{
			goto IL_01e5;
		}
	}
	{
		float L_46 = __this->get__currentLoops_12();
		if ((!(((float)L_46) >= ((float)(1.0f)))))
		{
			goto IL_01e5;
		}
	}
	{
		// _currentLoops--;
		float L_47 = __this->get__currentLoops_12();
		__this->set__currentLoops_12(((float)il2cpp_codegen_subtract((float)L_47, (float)(1.0f))));
		// }
		goto IL_0289;
	}

IL_01e5:
	{
		// if (knobValue > 0.5f && _currentLoops == 0)
		float L_48 = __this->get_knobValue_5();
		if ((!(((float)L_48) > ((float)(0.5f)))))
		{
			goto IL_0235;
		}
	}
	{
		float L_49 = __this->get__currentLoops_12();
		if ((!(((float)L_49) == ((float)(0.0f)))))
		{
			goto IL_0235;
		}
	}
	{
		// knobValue = 0;
		__this->set_knobValue_5((0.0f));
		// transform.localEulerAngles = Vector3.zero;
		Transform_t3600365921 * L_50 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_51 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_50);
		Transform_set_localEulerAngles_m4202601546(L_50, L_51, /*hidden argument*/NULL);
		// SetInitPointerData(eventData);
		PointerEventData_t3807901092 * L_52 = ___eventData0;
		UI_Knob_SetInitPointerData_m2203880447(__this, L_52, /*hidden argument*/NULL);
		// InvokeEvents(knobValue + _currentLoops);
		float L_53 = __this->get_knobValue_5();
		float L_54 = __this->get__currentLoops_12();
		UI_Knob_InvokeEvents_m2920931428(__this, ((float)il2cpp_codegen_add((float)L_53, (float)L_54)), /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0235:
	{
		// else if (knobValue < 0.5f && _currentLoops == loops - 1)
		float L_55 = __this->get_knobValue_5();
		if ((!(((float)L_55) < ((float)(0.5f)))))
		{
			goto IL_0289;
		}
	}
	{
		float L_56 = __this->get__currentLoops_12();
		int32_t L_57 = __this->get_loops_7();
		if ((!(((float)L_56) == ((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)1)))))))))
		{
			goto IL_0289;
		}
	}
	{
		// knobValue = 1;
		__this->set_knobValue_5((1.0f));
		// transform.localEulerAngles = Vector3.zero;
		Transform_t3600365921 * L_58 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_59 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_58);
		Transform_set_localEulerAngles_m4202601546(L_58, L_59, /*hidden argument*/NULL);
		// SetInitPointerData(eventData);
		PointerEventData_t3807901092 * L_60 = ___eventData0;
		UI_Knob_SetInitPointerData_m2203880447(__this, L_60, /*hidden argument*/NULL);
		// InvokeEvents(knobValue + _currentLoops);
		float L_61 = __this->get_knobValue_5();
		float L_62 = __this->get__currentLoops_12();
		UI_Knob_InvokeEvents_m2920931428(__this, ((float)il2cpp_codegen_add((float)L_61, (float)L_62)), /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0289:
	{
		// if (maxValue > 0)
		float L_63 = __this->get_maxValue_6();
		if ((!(((float)L_63) > ((float)(0.0f)))))
		{
			goto IL_030f;
		}
	}
	{
		// if (knobValue + _currentLoops > maxValue)
		float L_64 = __this->get_knobValue_5();
		float L_65 = __this->get__currentLoops_12();
		float L_66 = __this->get_maxValue_6();
		if ((!(((float)((float)il2cpp_codegen_add((float)L_64, (float)L_65))) > ((float)L_66))))
		{
			goto IL_030f;
		}
	}
	{
		// knobValue = maxValue;
		float L_67 = __this->get_maxValue_6();
		__this->set_knobValue_5(L_67);
		// float maxAngle = direction == Direction.CW ? 360f - 360f * maxValue : 360f * maxValue;
		int32_t L_68 = __this->get_direction_4();
		if (!L_68)
		{
			goto IL_02cd;
		}
	}
	{
		float L_69 = __this->get_maxValue_6();
		G_B26_0 = ((float)il2cpp_codegen_multiply((float)(360.0f), (float)L_69));
		goto IL_02df;
	}

IL_02cd:
	{
		float L_70 = __this->get_maxValue_6();
		G_B26_0 = ((float)il2cpp_codegen_subtract((float)(360.0f), (float)((float)il2cpp_codegen_multiply((float)(360.0f), (float)L_70))));
	}

IL_02df:
	{
		V_2 = G_B26_0;
		// transform.localEulerAngles = new Vector3(0, 0, maxAngle);
		Transform_t3600365921 * L_71 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_72 = V_2;
		Vector3_t3722313464  L_73;
		memset(&L_73, 0, sizeof(L_73));
		Vector3__ctor_m3353183577((&L_73), (0.0f), (0.0f), L_72, /*hidden argument*/NULL);
		NullCheck(L_71);
		Transform_set_localEulerAngles_m4202601546(L_71, L_73, /*hidden argument*/NULL);
		// SetInitPointerData(eventData);
		PointerEventData_t3807901092 * L_74 = ___eventData0;
		UI_Knob_SetInitPointerData_m2203880447(__this, L_74, /*hidden argument*/NULL);
		// InvokeEvents(knobValue);
		float L_75 = __this->get_knobValue_5();
		UI_Knob_InvokeEvents_m2920931428(__this, L_75, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_030f:
	{
		// transform.rotation = finalRotation;
		Transform_t3600365921 * L_76 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_77 = V_1;
		NullCheck(L_76);
		Transform_set_rotation_m3524318132(L_76, L_77, /*hidden argument*/NULL);
		// InvokeEvents(knobValue + _currentLoops);
		float L_78 = __this->get_knobValue_5();
		float L_79 = __this->get__currentLoops_12();
		UI_Knob_InvokeEvents_m2920931428(__this, ((float)il2cpp_codegen_add((float)L_78, (float)L_79)), /*hidden argument*/NULL);
		// _previousValue = knobValue;
		float L_80 = __this->get_knobValue_5();
		__this->set__previousValue_13(L_80);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_Knob::SnapToPosition(System.Single&)
extern "C" IL2CPP_METHOD_ATTR void UI_Knob_SnapToPosition_m3789174925 (UI_Knob_t1735628298 * __this, float* ___knobValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_Knob_SnapToPosition_m3789174925_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float snapStep = 1 / (float)snapStepsPerLoop;
		int32_t L_0 = __this->get_snapStepsPerLoop_10();
		V_0 = ((float)((float)(1.0f)/(float)(((float)((float)L_0)))));
		// float newValue = Mathf.Round(knobValue / snapStep) * snapStep;
		float* L_1 = ___knobValue0;
		float L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = bankers_roundf(((float)((float)(*((float*)L_1))/(float)L_2)));
		float L_4 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4));
		// knobValue = newValue;
		float* L_5 = ___knobValue0;
		float L_6 = V_1;
		*((float*)(L_5)) = (float)L_6;
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_Knob::InvokeEvents(System.Single)
extern "C" IL2CPP_METHOD_ATTR void UI_Knob_InvokeEvents_m2920931428 (UI_Knob_t1735628298 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_Knob_InvokeEvents_m2920931428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (clampOutput01)
		bool L_0 = __this->get_clampOutput01_8();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// value /= loops;
		float L_1 = ___value0;
		int32_t L_2 = __this->get_loops_7();
		___value0 = ((float)((float)L_1/(float)(((float)((float)L_2)))));
	}

IL_0013:
	{
		// OnValueChanged.Invoke(value);
		KnobFloatValueEvent_t1285673625 * L_3 = __this->get_OnValueChanged_11();
		float L_4 = ___value0;
		NullCheck(L_3);
		UnityEvent_1_Invoke_m3400677460(L_3, L_4, /*hidden argument*/UnityEvent_1_Invoke_m3400677460_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_Knob::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UI_Knob__ctor_m3275372147 (UI_Knob_t1735628298 * __this, const RuntimeMethod* method)
{
	{
		// public int loops = 1;
		__this->set_loops_7(1);
		// public int snapStepsPerLoop = 10;
		__this->set_snapStepsPerLoop_10(((int32_t)10));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::Awake()
extern "C" IL2CPP_METHOD_ATTR void UI_ScrollRectOcclusion_Awake_m151892234 (UI_ScrollRectOcclusion_t2700427833 * __this, const RuntimeMethod* method)
{
	{
		// if (InitByUser)
		bool L_0 = __this->get_InitByUser_4();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Init();
		UI_ScrollRectOcclusion_Init_m3669417748(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::Init()
extern "C" IL2CPP_METHOD_ATTR void UI_ScrollRectOcclusion_Init_m3669417748 (UI_ScrollRectOcclusion_t2700427833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_ScrollRectOcclusion_Init_m3669417748_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (GetComponent<ScrollRect>() != null)
		ScrollRect_t4137855814 * L_0 = Component_GetComponent_TisScrollRect_t4137855814_m3636214290(__this, /*hidden argument*/Component_GetComponent_TisScrollRect_t4137855814_m3636214290_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0150;
		}
	}
	{
		// _scrollRect = GetComponent<ScrollRect>();
		ScrollRect_t4137855814 * L_2 = Component_GetComponent_TisScrollRect_t4137855814_m3636214290(__this, /*hidden argument*/Component_GetComponent_TisScrollRect_t4137855814_m3636214290_RuntimeMethod_var);
		__this->set__scrollRect_5(L_2);
		// _scrollRect.onValueChanged.AddListener(OnScroll);
		ScrollRect_t4137855814 * L_3 = __this->get__scrollRect_5();
		NullCheck(L_3);
		ScrollRectEvent_t343079324 * L_4 = ScrollRect_get_onValueChanged_m1819941361(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = (intptr_t)UI_ScrollRectOcclusion_OnScroll_m2744204337_RuntimeMethod_var;
		UnityAction_1_t2741065664 * L_6 = (UnityAction_1_t2741065664 *)il2cpp_codegen_object_new(UnityAction_1_t2741065664_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2239151228(L_6, __this, L_5, /*hidden argument*/UnityAction_1__ctor_m2239151228_RuntimeMethod_var);
		NullCheck(L_4);
		UnityEvent_1_AddListener_m1581989708(L_4, L_6, /*hidden argument*/UnityEvent_1_AddListener_m1581989708_RuntimeMethod_var);
		// _isHorizontal = _scrollRect.horizontal;
		ScrollRect_t4137855814 * L_7 = __this->get__scrollRect_5();
		NullCheck(L_7);
		bool L_8 = ScrollRect_get_horizontal_m4171218020(L_7, /*hidden argument*/NULL);
		__this->set__isHorizontal_11(L_8);
		// _isVertical = _scrollRect.vertical;
		ScrollRect_t4137855814 * L_9 = __this->get__scrollRect_5();
		NullCheck(L_9);
		bool L_10 = ScrollRect_get_vertical_m3678635065(L_9, /*hidden argument*/NULL);
		__this->set__isVertical_10(L_10);
		// for (int i = 0; i < _scrollRect.content.childCount; i++)
		V_0 = 0;
		goto IL_0084;
	}

IL_005f:
	{
		// items.Add(_scrollRect.content.GetChild(i).GetComponent<RectTransform>());
		List_1_t881764471 * L_11 = __this->get_items_15();
		ScrollRect_t4137855814 * L_12 = __this->get__scrollRect_5();
		NullCheck(L_12);
		RectTransform_t3704657025 * L_13 = ScrollRect_get_content_m2477524320(L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		Transform_t3600365921 * L_15 = Transform_GetChild_m1092972975(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		RectTransform_t3704657025 * L_16 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(L_15, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		NullCheck(L_11);
		List_1_Add_m1464644364(L_11, L_16, /*hidden argument*/List_1_Add_m1464644364_RuntimeMethod_var);
		// for (int i = 0; i < _scrollRect.content.childCount; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0084:
	{
		// for (int i = 0; i < _scrollRect.content.childCount; i++)
		int32_t L_18 = V_0;
		ScrollRect_t4137855814 * L_19 = __this->get__scrollRect_5();
		NullCheck(L_19);
		RectTransform_t3704657025 * L_20 = ScrollRect_get_content_m2477524320(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		int32_t L_21 = Transform_get_childCount_m3145433196(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_18) < ((int32_t)L_21)))
		{
			goto IL_005f;
		}
	}
	{
		// if (_scrollRect.content.GetComponent<VerticalLayoutGroup>() != null)
		ScrollRect_t4137855814 * L_22 = __this->get__scrollRect_5();
		NullCheck(L_22);
		RectTransform_t3704657025 * L_23 = ScrollRect_get_content_m2477524320(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		VerticalLayoutGroup_t923838031 * L_24 = Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795(L_23, /*hidden argument*/Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_25 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_24, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00c5;
		}
	}
	{
		// _verticalLayoutGroup = _scrollRect.content.GetComponent<VerticalLayoutGroup>();
		ScrollRect_t4137855814 * L_26 = __this->get__scrollRect_5();
		NullCheck(L_26);
		RectTransform_t3704657025 * L_27 = ScrollRect_get_content_m2477524320(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		VerticalLayoutGroup_t923838031 * L_28 = Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795(L_27, /*hidden argument*/Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795_RuntimeMethod_var);
		__this->set__verticalLayoutGroup_7(L_28);
	}

IL_00c5:
	{
		// if (_scrollRect.content.GetComponent<HorizontalLayoutGroup>() != null)
		ScrollRect_t4137855814 * L_29 = __this->get__scrollRect_5();
		NullCheck(L_29);
		RectTransform_t3704657025 * L_30 = ScrollRect_get_content_m2477524320(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		HorizontalLayoutGroup_t2586782146 * L_31 = Component_GetComponent_TisHorizontalLayoutGroup_t2586782146_m1824140114(L_30, /*hidden argument*/Component_GetComponent_TisHorizontalLayoutGroup_t2586782146_m1824140114_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_32 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_31, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00f3;
		}
	}
	{
		// _horizontalLayoutGroup = _scrollRect.content.GetComponent<HorizontalLayoutGroup>();
		ScrollRect_t4137855814 * L_33 = __this->get__scrollRect_5();
		NullCheck(L_33);
		RectTransform_t3704657025 * L_34 = ScrollRect_get_content_m2477524320(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		HorizontalLayoutGroup_t2586782146 * L_35 = Component_GetComponent_TisHorizontalLayoutGroup_t2586782146_m1824140114(L_34, /*hidden argument*/Component_GetComponent_TisHorizontalLayoutGroup_t2586782146_m1824140114_RuntimeMethod_var);
		__this->set__horizontalLayoutGroup_8(L_35);
	}

IL_00f3:
	{
		// if (_scrollRect.content.GetComponent<GridLayoutGroup>() != null)
		ScrollRect_t4137855814 * L_36 = __this->get__scrollRect_5();
		NullCheck(L_36);
		RectTransform_t3704657025 * L_37 = ScrollRect_get_content_m2477524320(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		GridLayoutGroup_t3046220461 * L_38 = Component_GetComponent_TisGridLayoutGroup_t3046220461_m2458911910(L_37, /*hidden argument*/Component_GetComponent_TisGridLayoutGroup_t3046220461_m2458911910_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_39 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_38, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0121;
		}
	}
	{
		// _gridLayoutGroup = _scrollRect.content.GetComponent<GridLayoutGroup>();
		ScrollRect_t4137855814 * L_40 = __this->get__scrollRect_5();
		NullCheck(L_40);
		RectTransform_t3704657025 * L_41 = ScrollRect_get_content_m2477524320(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		GridLayoutGroup_t3046220461 * L_42 = Component_GetComponent_TisGridLayoutGroup_t3046220461_m2458911910(L_41, /*hidden argument*/Component_GetComponent_TisGridLayoutGroup_t3046220461_m2458911910_RuntimeMethod_var);
		__this->set__gridLayoutGroup_9(L_42);
	}

IL_0121:
	{
		// if (_scrollRect.content.GetComponent<ContentSizeFitter>() != null)
		ScrollRect_t4137855814 * L_43 = __this->get__scrollRect_5();
		NullCheck(L_43);
		RectTransform_t3704657025 * L_44 = ScrollRect_get_content_m2477524320(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		ContentSizeFitter_t3850442145 * L_45 = Component_GetComponent_TisContentSizeFitter_t3850442145_m1301783278(L_44, /*hidden argument*/Component_GetComponent_TisContentSizeFitter_t3850442145_m1301783278_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_46 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_45, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_015a;
		}
	}
	{
		// _contentSizeFitter = _scrollRect.content.GetComponent<ContentSizeFitter>();
		ScrollRect_t4137855814 * L_47 = __this->get__scrollRect_5();
		NullCheck(L_47);
		RectTransform_t3704657025 * L_48 = ScrollRect_get_content_m2477524320(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		ContentSizeFitter_t3850442145 * L_49 = Component_GetComponent_TisContentSizeFitter_t3850442145_m1301783278(L_48, /*hidden argument*/Component_GetComponent_TisContentSizeFitter_t3850442145_m1301783278_RuntimeMethod_var);
		__this->set__contentSizeFitter_6(L_49);
		// }
		return;
	}

IL_0150:
	{
		// Debug.LogError("UI_ScrollRectOcclusion => No ScrollRect component found");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral4043732841, /*hidden argument*/NULL);
	}

IL_015a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::DisableGridComponents()
extern "C" IL2CPP_METHOD_ATTR void UI_ScrollRectOcclusion_DisableGridComponents_m1933239258 (UI_ScrollRectOcclusion_t2700427833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_ScrollRectOcclusion_DisableGridComponents_m1933239258_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// if (_isVertical)
		bool L_0 = __this->get__isVertical_10();
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		// _disableMarginY = _scrollRect.GetComponent<RectTransform>().rect.height / 2 + items[0].sizeDelta.y;
		ScrollRect_t4137855814 * L_1 = __this->get__scrollRect_5();
		NullCheck(L_1);
		RectTransform_t3704657025 * L_2 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(L_1, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		NullCheck(L_2);
		Rect_t2360479859  L_3 = RectTransform_get_rect_m574169965(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		List_1_t881764471 * L_5 = __this->get_items_15();
		NullCheck(L_5);
		RectTransform_t3704657025 * L_6 = List_1_get_Item_m1718277669(L_5, 0, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_6);
		Vector2_t2156229523  L_7 = RectTransform_get_sizeDelta_m2183112744(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_y_1();
		__this->set__disableMarginY_13(((float)il2cpp_codegen_add((float)((float)((float)L_4/(float)(2.0f))), (float)L_8)));
	}

IL_0043:
	{
		// if (_isHorizontal)
		bool L_9 = __this->get__isHorizontal_11();
		if (!L_9)
		{
			goto IL_0086;
		}
	}
	{
		// _disableMarginX = _scrollRect.GetComponent<RectTransform>().rect.width / 2 + items[0].sizeDelta.x;
		ScrollRect_t4137855814 * L_10 = __this->get__scrollRect_5();
		NullCheck(L_10);
		RectTransform_t3704657025 * L_11 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(L_10, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		NullCheck(L_11);
		Rect_t2360479859  L_12 = RectTransform_get_rect_m574169965(L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		float L_13 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		List_1_t881764471 * L_14 = __this->get_items_15();
		NullCheck(L_14);
		RectTransform_t3704657025 * L_15 = List_1_get_Item_m1718277669(L_14, 0, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_15);
		Vector2_t2156229523  L_16 = RectTransform_get_sizeDelta_m2183112744(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_x_0();
		__this->set__disableMarginX_12(((float)il2cpp_codegen_add((float)((float)((float)L_13/(float)(2.0f))), (float)L_17)));
	}

IL_0086:
	{
		// if (_verticalLayoutGroup)
		VerticalLayoutGroup_t923838031 * L_18 = __this->get__verticalLayoutGroup_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_009f;
		}
	}
	{
		// _verticalLayoutGroup.enabled = false;
		VerticalLayoutGroup_t923838031 * L_20 = __this->get__verticalLayoutGroup_7();
		NullCheck(L_20);
		Behaviour_set_enabled_m20417929(L_20, (bool)0, /*hidden argument*/NULL);
	}

IL_009f:
	{
		// if (_horizontalLayoutGroup)
		HorizontalLayoutGroup_t2586782146 * L_21 = __this->get__horizontalLayoutGroup_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00b8;
		}
	}
	{
		// _horizontalLayoutGroup.enabled = false;
		HorizontalLayoutGroup_t2586782146 * L_23 = __this->get__horizontalLayoutGroup_8();
		NullCheck(L_23);
		Behaviour_set_enabled_m20417929(L_23, (bool)0, /*hidden argument*/NULL);
	}

IL_00b8:
	{
		// if (_contentSizeFitter)
		ContentSizeFitter_t3850442145 * L_24 = __this->get__contentSizeFitter_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_25 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00d1;
		}
	}
	{
		// _contentSizeFitter.enabled = false;
		ContentSizeFitter_t3850442145 * L_26 = __this->get__contentSizeFitter_6();
		NullCheck(L_26);
		Behaviour_set_enabled_m20417929(L_26, (bool)0, /*hidden argument*/NULL);
	}

IL_00d1:
	{
		// if (_gridLayoutGroup)
		GridLayoutGroup_t3046220461 * L_27 = __this->get__gridLayoutGroup_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_28 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00ea;
		}
	}
	{
		// _gridLayoutGroup.enabled = false;
		GridLayoutGroup_t3046220461 * L_29 = __this->get__gridLayoutGroup_9();
		NullCheck(L_29);
		Behaviour_set_enabled_m20417929(L_29, (bool)0, /*hidden argument*/NULL);
	}

IL_00ea:
	{
		// hasDisabledGridComponents = true;
		__this->set_hasDisabledGridComponents_14((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::OnScroll(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void UI_ScrollRectOcclusion_OnScroll_m2744204337 (UI_ScrollRectOcclusion_t2700427833 * __this, Vector2_t2156229523  ___pos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_ScrollRectOcclusion_OnScroll_m2744204337_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!hasDisabledGridComponents)
		bool L_0 = __this->get_hasDisabledGridComponents_14();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// DisableGridComponents();
		UI_ScrollRectOcclusion_DisableGridComponents_m1933239258(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// for (int i = 0; i < items.Count; i++)
		V_0 = 0;
		goto IL_0254;
	}

IL_0015:
	{
		// if (_isVertical && _isHorizontal)
		bool L_1 = __this->get__isVertical_10();
		if (!L_1)
		{
			goto IL_0120;
		}
	}
	{
		bool L_2 = __this->get__isHorizontal_11();
		if (!L_2)
		{
			goto IL_0120;
		}
	}
	{
		// if (_scrollRect.transform.InverseTransformPoint(items[i].position).y < -_disableMarginY || _scrollRect.transform.InverseTransformPoint(items[i].position).y > _disableMarginY
		// || _scrollRect.transform.InverseTransformPoint(items[i].position).x < -_disableMarginX || _scrollRect.transform.InverseTransformPoint(items[i].position).x > _disableMarginX)
		ScrollRect_t4137855814 * L_3 = __this->get__scrollRect_5();
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
		List_1_t881764471 * L_5 = __this->get_items_15();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RectTransform_t3704657025 * L_7 = List_1_get_Item_m1718277669(L_5, L_6, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_9 = Transform_InverseTransformPoint_m1343916000(L_4, L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_3();
		float L_11 = __this->get__disableMarginY_13();
		if ((((float)L_10) < ((float)((-L_11)))))
		{
			goto IL_00e8;
		}
	}
	{
		ScrollRect_t4137855814 * L_12 = __this->get__scrollRect_5();
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(L_12, /*hidden argument*/NULL);
		List_1_t881764471 * L_14 = __this->get_items_15();
		int32_t L_15 = V_0;
		NullCheck(L_14);
		RectTransform_t3704657025 * L_16 = List_1_get_Item_m1718277669(L_14, L_15, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_16);
		Vector3_t3722313464  L_17 = Transform_get_position_m36019626(L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t3722313464  L_18 = Transform_InverseTransformPoint_m1343916000(L_13, L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_y_3();
		float L_20 = __this->get__disableMarginY_13();
		if ((((float)L_19) > ((float)L_20)))
		{
			goto IL_00e8;
		}
	}
	{
		ScrollRect_t4137855814 * L_21 = __this->get__scrollRect_5();
		NullCheck(L_21);
		Transform_t3600365921 * L_22 = Component_get_transform_m3162698980(L_21, /*hidden argument*/NULL);
		List_1_t881764471 * L_23 = __this->get_items_15();
		int32_t L_24 = V_0;
		NullCheck(L_23);
		RectTransform_t3704657025 * L_25 = List_1_get_Item_m1718277669(L_23, L_24, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_25);
		Vector3_t3722313464  L_26 = Transform_get_position_m36019626(L_25, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t3722313464  L_27 = Transform_InverseTransformPoint_m1343916000(L_22, L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_x_2();
		float L_29 = __this->get__disableMarginX_12();
		if ((((float)L_28) < ((float)((-L_29)))))
		{
			goto IL_00e8;
		}
	}
	{
		ScrollRect_t4137855814 * L_30 = __this->get__scrollRect_5();
		NullCheck(L_30);
		Transform_t3600365921 * L_31 = Component_get_transform_m3162698980(L_30, /*hidden argument*/NULL);
		List_1_t881764471 * L_32 = __this->get_items_15();
		int32_t L_33 = V_0;
		NullCheck(L_32);
		RectTransform_t3704657025 * L_34 = List_1_get_Item_m1718277669(L_32, L_33, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_34);
		Vector3_t3722313464  L_35 = Transform_get_position_m36019626(L_34, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t3722313464  L_36 = Transform_InverseTransformPoint_m1343916000(L_31, L_35, /*hidden argument*/NULL);
		float L_37 = L_36.get_x_2();
		float L_38 = __this->get__disableMarginX_12();
		if ((!(((float)L_37) > ((float)L_38))))
		{
			goto IL_0104;
		}
	}

IL_00e8:
	{
		// items[i].gameObject.SetActive(false);
		List_1_t881764471 * L_39 = __this->get_items_15();
		int32_t L_40 = V_0;
		NullCheck(L_39);
		RectTransform_t3704657025 * L_41 = List_1_get_Item_m1718277669(L_39, L_40, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_41);
		GameObject_t1113636619 * L_42 = Component_get_gameObject_m442555142(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		GameObject_SetActive_m796801857(L_42, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_0250;
	}

IL_0104:
	{
		// items[i].gameObject.SetActive(true);
		List_1_t881764471 * L_43 = __this->get_items_15();
		int32_t L_44 = V_0;
		NullCheck(L_43);
		RectTransform_t3704657025 * L_45 = List_1_get_Item_m1718277669(L_43, L_44, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_45);
		GameObject_t1113636619 * L_46 = Component_get_gameObject_m442555142(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		GameObject_SetActive_m796801857(L_46, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0250;
	}

IL_0120:
	{
		// if (_isVertical)
		bool L_47 = __this->get__isVertical_10();
		if (!L_47)
		{
			goto IL_01b8;
		}
	}
	{
		// if (_scrollRect.transform.InverseTransformPoint(items[i].position).y < -_disableMarginY || _scrollRect.transform.InverseTransformPoint(items[i].position).y > _disableMarginY)
		ScrollRect_t4137855814 * L_48 = __this->get__scrollRect_5();
		NullCheck(L_48);
		Transform_t3600365921 * L_49 = Component_get_transform_m3162698980(L_48, /*hidden argument*/NULL);
		List_1_t881764471 * L_50 = __this->get_items_15();
		int32_t L_51 = V_0;
		NullCheck(L_50);
		RectTransform_t3704657025 * L_52 = List_1_get_Item_m1718277669(L_50, L_51, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_52);
		Vector3_t3722313464  L_53 = Transform_get_position_m36019626(L_52, /*hidden argument*/NULL);
		NullCheck(L_49);
		Vector3_t3722313464  L_54 = Transform_InverseTransformPoint_m1343916000(L_49, L_53, /*hidden argument*/NULL);
		float L_55 = L_54.get_y_3();
		float L_56 = __this->get__disableMarginY_13();
		if ((((float)L_55) < ((float)((-L_56)))))
		{
			goto IL_0188;
		}
	}
	{
		ScrollRect_t4137855814 * L_57 = __this->get__scrollRect_5();
		NullCheck(L_57);
		Transform_t3600365921 * L_58 = Component_get_transform_m3162698980(L_57, /*hidden argument*/NULL);
		List_1_t881764471 * L_59 = __this->get_items_15();
		int32_t L_60 = V_0;
		NullCheck(L_59);
		RectTransform_t3704657025 * L_61 = List_1_get_Item_m1718277669(L_59, L_60, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_61);
		Vector3_t3722313464  L_62 = Transform_get_position_m36019626(L_61, /*hidden argument*/NULL);
		NullCheck(L_58);
		Vector3_t3722313464  L_63 = Transform_InverseTransformPoint_m1343916000(L_58, L_62, /*hidden argument*/NULL);
		float L_64 = L_63.get_y_3();
		float L_65 = __this->get__disableMarginY_13();
		if ((!(((float)L_64) > ((float)L_65))))
		{
			goto IL_01a1;
		}
	}

IL_0188:
	{
		// items[i].gameObject.SetActive(false);
		List_1_t881764471 * L_66 = __this->get_items_15();
		int32_t L_67 = V_0;
		NullCheck(L_66);
		RectTransform_t3704657025 * L_68 = List_1_get_Item_m1718277669(L_66, L_67, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_68);
		GameObject_t1113636619 * L_69 = Component_get_gameObject_m442555142(L_68, /*hidden argument*/NULL);
		NullCheck(L_69);
		GameObject_SetActive_m796801857(L_69, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_01b8;
	}

IL_01a1:
	{
		// items[i].gameObject.SetActive(true);
		List_1_t881764471 * L_70 = __this->get_items_15();
		int32_t L_71 = V_0;
		NullCheck(L_70);
		RectTransform_t3704657025 * L_72 = List_1_get_Item_m1718277669(L_70, L_71, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_72);
		GameObject_t1113636619 * L_73 = Component_get_gameObject_m442555142(L_72, /*hidden argument*/NULL);
		NullCheck(L_73);
		GameObject_SetActive_m796801857(L_73, (bool)1, /*hidden argument*/NULL);
	}

IL_01b8:
	{
		// if (_isHorizontal)
		bool L_74 = __this->get__isHorizontal_11();
		if (!L_74)
		{
			goto IL_0250;
		}
	}
	{
		// if (_scrollRect.transform.InverseTransformPoint(items[i].position).x < -_disableMarginX || _scrollRect.transform.InverseTransformPoint(items[i].position).x > _disableMarginX)
		ScrollRect_t4137855814 * L_75 = __this->get__scrollRect_5();
		NullCheck(L_75);
		Transform_t3600365921 * L_76 = Component_get_transform_m3162698980(L_75, /*hidden argument*/NULL);
		List_1_t881764471 * L_77 = __this->get_items_15();
		int32_t L_78 = V_0;
		NullCheck(L_77);
		RectTransform_t3704657025 * L_79 = List_1_get_Item_m1718277669(L_77, L_78, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_79);
		Vector3_t3722313464  L_80 = Transform_get_position_m36019626(L_79, /*hidden argument*/NULL);
		NullCheck(L_76);
		Vector3_t3722313464  L_81 = Transform_InverseTransformPoint_m1343916000(L_76, L_80, /*hidden argument*/NULL);
		float L_82 = L_81.get_x_2();
		float L_83 = __this->get__disableMarginX_12();
		if ((((float)L_82) < ((float)((-L_83)))))
		{
			goto IL_0220;
		}
	}
	{
		ScrollRect_t4137855814 * L_84 = __this->get__scrollRect_5();
		NullCheck(L_84);
		Transform_t3600365921 * L_85 = Component_get_transform_m3162698980(L_84, /*hidden argument*/NULL);
		List_1_t881764471 * L_86 = __this->get_items_15();
		int32_t L_87 = V_0;
		NullCheck(L_86);
		RectTransform_t3704657025 * L_88 = List_1_get_Item_m1718277669(L_86, L_87, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_88);
		Vector3_t3722313464  L_89 = Transform_get_position_m36019626(L_88, /*hidden argument*/NULL);
		NullCheck(L_85);
		Vector3_t3722313464  L_90 = Transform_InverseTransformPoint_m1343916000(L_85, L_89, /*hidden argument*/NULL);
		float L_91 = L_90.get_x_2();
		float L_92 = __this->get__disableMarginX_12();
		if ((!(((float)L_91) > ((float)L_92))))
		{
			goto IL_0239;
		}
	}

IL_0220:
	{
		// items[i].gameObject.SetActive(false);
		List_1_t881764471 * L_93 = __this->get_items_15();
		int32_t L_94 = V_0;
		NullCheck(L_93);
		RectTransform_t3704657025 * L_95 = List_1_get_Item_m1718277669(L_93, L_94, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_95);
		GameObject_t1113636619 * L_96 = Component_get_gameObject_m442555142(L_95, /*hidden argument*/NULL);
		NullCheck(L_96);
		GameObject_SetActive_m796801857(L_96, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_0250;
	}

IL_0239:
	{
		// items[i].gameObject.SetActive(true);
		List_1_t881764471 * L_97 = __this->get_items_15();
		int32_t L_98 = V_0;
		NullCheck(L_97);
		RectTransform_t3704657025 * L_99 = List_1_get_Item_m1718277669(L_97, L_98, /*hidden argument*/List_1_get_Item_m1718277669_RuntimeMethod_var);
		NullCheck(L_99);
		GameObject_t1113636619 * L_100 = Component_get_gameObject_m442555142(L_99, /*hidden argument*/NULL);
		NullCheck(L_100);
		GameObject_SetActive_m796801857(L_100, (bool)1, /*hidden argument*/NULL);
	}

IL_0250:
	{
		// for (int i = 0; i < items.Count; i++)
		int32_t L_101 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1));
	}

IL_0254:
	{
		// for (int i = 0; i < items.Count; i++)
		int32_t L_102 = V_0;
		List_1_t881764471 * L_103 = __this->get_items_15();
		NullCheck(L_103);
		int32_t L_104 = List_1_get_Count_m1749180329(L_103, /*hidden argument*/List_1_get_Count_m1749180329_RuntimeMethod_var);
		if ((((int32_t)L_102) < ((int32_t)L_104)))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_ScrollRectOcclusion::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UI_ScrollRectOcclusion__ctor_m582086741 (UI_ScrollRectOcclusion_t2700427833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_ScrollRectOcclusion__ctor_m582086741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<RectTransform> items = new List<RectTransform>();
		List_1_t881764471 * L_0 = (List_1_t881764471 *)il2cpp_codegen_object_new(List_1_t881764471_il2cpp_TypeInfo_var);
		List_1__ctor_m3408116030(L_0, /*hidden argument*/List_1__ctor_m3408116030_RuntimeMethod_var);
		__this->set_items_15(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.Extensions.UI_TweenScale::Awake()
extern "C" IL2CPP_METHOD_ATTR void UI_TweenScale_Awake_m3743567440 (UI_TweenScale_t1206981451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_TweenScale_Awake_m3743567440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myTransform = GetComponent<Transform>();
		Transform_t3600365921 * L_0 = Component_GetComponent_TisTransform_t3600365921_m1200784320(__this, /*hidden argument*/Component_GetComponent_TisTransform_t3600365921_m1200784320_RuntimeMethod_var);
		__this->set_myTransform_11(L_0);
		// initScale = myTransform.localScale;
		Transform_t3600365921 * L_1 = __this->get_myTransform_11();
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_localScale_m129152068(L_1, /*hidden argument*/NULL);
		__this->set_initScale_10(L_2);
		// if (playAtAwake)
		bool L_3 = __this->get_playAtAwake_7();
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// Play();
		UI_TweenScale_Play_m2475340060(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_TweenScale::Play()
extern "C" IL2CPP_METHOD_ATTR void UI_TweenScale_Play_m2475340060 (UI_TweenScale_t1206981451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_TweenScale_Play_m2475340060_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine("Tween");
		MonoBehaviour_StartCoroutine_m2618285814(__this, _stringLiteral3541663665, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.Extensions.UI_TweenScale::Tween()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UI_TweenScale_Tween_m780170309 (UI_TweenScale_t1206981451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_TweenScale_Tween_m780170309_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTweenU3Ed__11_t869818022 * L_0 = (U3CTweenU3Ed__11_t869818022 *)il2cpp_codegen_object_new(U3CTweenU3Ed__11_t869818022_il2cpp_TypeInfo_var);
		U3CTweenU3Ed__11__ctor_m2164385517(L_0, 0, /*hidden argument*/NULL);
		U3CTweenU3Ed__11_t869818022 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_TweenScale::ResetTween()
extern "C" IL2CPP_METHOD_ATTR void UI_TweenScale_ResetTween_m1087967488 (UI_TweenScale_t1206981451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_TweenScale_ResetTween_m1087967488_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopCoroutine("Tween");
		MonoBehaviour_StopCoroutine_m1962070247(__this, _stringLiteral3541663665, /*hidden argument*/NULL);
		// myTransform.localScale = initScale;
		Transform_t3600365921 * L_0 = __this->get_myTransform_11();
		Vector3_t3722313464  L_1 = __this->get_initScale_10();
		NullCheck(L_0);
		Transform_set_localScale_m3053443106(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_TweenScale::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UI_TweenScale__ctor_m3790213344 (UI_TweenScale_t1206981451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_TweenScale__ctor_m3790213344_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float speed = 1;
		__this->set_speed_5((1.0f));
		// public bool isUniform = true;
		__this->set_isUniform_8((bool)1);
		// Vector3 newScale = Vector3.one;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_newScale_12(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.Extensions.UI_TweenScale/<Tween>d__11::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CTweenU3Ed__11__ctor_m2164385517 (U3CTweenU3Ed__11_t869818022 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_TweenScale/<Tween>d__11::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CTweenU3Ed__11_System_IDisposable_Dispose_m3702828059 (U3CTweenU3Ed__11_t869818022 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.Extensions.UI_TweenScale/<Tween>d__11::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CTweenU3Ed__11_MoveNext_m934310171 (U3CTweenU3Ed__11_t869818022 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTweenU3Ed__11_MoveNext_m934310171_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UI_TweenScale_t1206981451 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UI_TweenScale_t1206981451 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0118;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// myTransform.localScale = initScale;
		UI_TweenScale_t1206981451 * L_4 = V_1;
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = L_4->get_myTransform_11();
		UI_TweenScale_t1206981451 * L_6 = V_1;
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = L_6->get_initScale_10();
		NullCheck(L_5);
		Transform_set_localScale_m3053443106(L_5, L_7, /*hidden argument*/NULL);
		// float t = 0;
		__this->set_U3CtU3E5__2_3((0.0f));
		// float maxT = animCurve.keys[animCurve.length - 1].time;
		UI_TweenScale_t1206981451 * L_8 = V_1;
		NullCheck(L_8);
		AnimationCurve_t3046754366 * L_9 = L_8->get_animCurve_4();
		NullCheck(L_9);
		KeyframeU5BU5D_t1068524471* L_10 = AnimationCurve_get_keys_m1672862131(L_9, /*hidden argument*/NULL);
		UI_TweenScale_t1206981451 * L_11 = V_1;
		NullCheck(L_11);
		AnimationCurve_t3046754366 * L_12 = L_11->get_animCurve_4();
		NullCheck(L_12);
		int32_t L_13 = AnimationCurve_get_length_m1548433259(L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		float L_14 = Keyframe_get_time_m803196188((Keyframe_t4206410242 *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1))))), /*hidden argument*/NULL);
		__this->set_U3CmaxTU3E5__3_4(L_14);
		goto IL_011f;
	}

IL_006a:
	{
		// t += speed * Time.deltaTime;
		float L_15 = __this->get_U3CtU3E5__2_3();
		UI_TweenScale_t1206981451 * L_16 = V_1;
		NullCheck(L_16);
		float L_17 = L_16->get_speed_5();
		float L_18 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CtU3E5__2_3(((float)il2cpp_codegen_add((float)L_15, (float)((float)il2cpp_codegen_multiply((float)L_17, (float)L_18)))));
		// if (!isUniform)
		UI_TweenScale_t1206981451 * L_19 = V_1;
		NullCheck(L_19);
		bool L_20 = L_19->get_isUniform_8();
		if (L_20)
		{
			goto IL_00e2;
		}
	}
	{
		// newScale.x = 1 * animCurve.Evaluate(t);
		UI_TweenScale_t1206981451 * L_21 = V_1;
		NullCheck(L_21);
		Vector3_t3722313464 * L_22 = L_21->get_address_of_newScale_12();
		UI_TweenScale_t1206981451 * L_23 = V_1;
		NullCheck(L_23);
		AnimationCurve_t3046754366 * L_24 = L_23->get_animCurve_4();
		float L_25 = __this->get_U3CtU3E5__2_3();
		NullCheck(L_24);
		float L_26 = AnimationCurve_Evaluate_m2125563588(L_24, L_25, /*hidden argument*/NULL);
		L_22->set_x_2(((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_26)));
		// newScale.y = 1 * animCurveY.Evaluate(t);
		UI_TweenScale_t1206981451 * L_27 = V_1;
		NullCheck(L_27);
		Vector3_t3722313464 * L_28 = L_27->get_address_of_newScale_12();
		UI_TweenScale_t1206981451 * L_29 = V_1;
		NullCheck(L_29);
		AnimationCurve_t3046754366 * L_30 = L_29->get_animCurveY_9();
		float L_31 = __this->get_U3CtU3E5__2_3();
		NullCheck(L_30);
		float L_32 = AnimationCurve_Evaluate_m2125563588(L_30, L_31, /*hidden argument*/NULL);
		L_28->set_y_3(((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_32)));
		// myTransform.localScale = newScale;
		UI_TweenScale_t1206981451 * L_33 = V_1;
		NullCheck(L_33);
		Transform_t3600365921 * L_34 = L_33->get_myTransform_11();
		UI_TweenScale_t1206981451 * L_35 = V_1;
		NullCheck(L_35);
		Vector3_t3722313464  L_36 = L_35->get_newScale_12();
		NullCheck(L_34);
		Transform_set_localScale_m3053443106(L_34, L_36, /*hidden argument*/NULL);
		// }
		goto IL_0108;
	}

IL_00e2:
	{
		// myTransform.localScale = Vector3.one * animCurve.Evaluate(t);
		UI_TweenScale_t1206981451 * L_37 = V_1;
		NullCheck(L_37);
		Transform_t3600365921 * L_38 = L_37->get_myTransform_11();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_39 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		UI_TweenScale_t1206981451 * L_40 = V_1;
		NullCheck(L_40);
		AnimationCurve_t3046754366 * L_41 = L_40->get_animCurve_4();
		float L_42 = __this->get_U3CtU3E5__2_3();
		NullCheck(L_41);
		float L_43 = AnimationCurve_Evaluate_m2125563588(L_41, L_42, /*hidden argument*/NULL);
		Vector3_t3722313464  L_44 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_39, L_43, /*hidden argument*/NULL);
		NullCheck(L_38);
		Transform_set_localScale_m3053443106(L_38, L_44, /*hidden argument*/NULL);
	}

IL_0108:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0118:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_011f:
	{
		// while (t < maxT || isLoop)
		float L_45 = __this->get_U3CtU3E5__2_3();
		float L_46 = __this->get_U3CmaxTU3E5__3_4();
		if ((((float)L_45) < ((float)L_46)))
		{
			goto IL_006a;
		}
	}
	{
		UI_TweenScale_t1206981451 * L_47 = V_1;
		NullCheck(L_47);
		bool L_48 = L_47->get_isLoop_6();
		if (L_48)
		{
			goto IL_006a;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.UI.Extensions.UI_TweenScale/<Tween>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CTweenU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2743176341 (U3CTweenU3Ed__11_t869818022 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.UI.Extensions.UI_TweenScale/<Tween>d__11::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CTweenU3Ed__11_System_Collections_IEnumerator_Reset_m3050605367 (U3CTweenU3Ed__11_t869818022 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTweenU3Ed__11_System_Collections_IEnumerator_Reset_m3050605367_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CTweenU3Ed__11_System_Collections_IEnumerator_Reset_m3050605367_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.UI.Extensions.UI_TweenScale/<Tween>d__11::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CTweenU3Ed__11_System_Collections_IEnumerator_get_Current_m3123039312 (U3CTweenU3Ed__11_t869818022 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void UnityEngine.UI.Extensions.VRCursor::Update()
extern "C" IL2CPP_METHOD_ATTR void VRCursor_Update_m314003991 (VRCursor_t3235369382 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VRCursor_Update_m314003991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// thisPosition.x = Input.mousePosition.x * xSens;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = L_0.get_x_2();
		float L_2 = __this->get_xSens_4();
		(&V_0)->set_x_2(((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)));
		// thisPosition.y = Input.mousePosition.y * ySens - 1;
		Vector3_t3722313464  L_3 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = L_3.get_y_3();
		float L_5 = __this->get_ySens_5();
		(&V_0)->set_y_3(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), (float)(1.0f))));
		// thisPosition.z = transform.position.z;
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_z_4();
		(&V_0)->set_z_4(L_8);
		// transform.position = thisPosition;
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = V_0;
		NullCheck(L_9);
		Transform_set_position_m3387557959(L_9, L_10, /*hidden argument*/NULL);
		// VRInputModule.cursorPosition = transform.position;
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = Transform_get_position_m36019626(L_11, /*hidden argument*/NULL);
		((VRInputModule_t2321821966_StaticFields*)il2cpp_codegen_static_fields_for(VRInputModule_t2321821966_il2cpp_TypeInfo_var))->set_cursorPosition_14(L_12);
		// if (Input.GetMouseButtonDown(0) && currentCollider)
		bool L_13 = Input_GetMouseButtonDown_m2081676745(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		Collider_t1773347010 * L_14 = __this->get_currentCollider_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_008e;
		}
	}
	{
		// VRInputModule.PointerSubmit(currentCollider.gameObject);
		Collider_t1773347010 * L_16 = __this->get_currentCollider_6();
		NullCheck(L_16);
		GameObject_t1113636619 * L_17 = Component_get_gameObject_m442555142(L_16, /*hidden argument*/NULL);
		VRInputModule_PointerSubmit_m276617441(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.VRCursor::OnTriggerEnter(UnityEngine.Collider)
extern "C" IL2CPP_METHOD_ATTR void VRCursor_OnTriggerEnter_m2940566839 (VRCursor_t3235369382 * __this, Collider_t1773347010 * ___other0, const RuntimeMethod* method)
{
	{
		// VRInputModule.PointerEnter(other.gameObject);
		Collider_t1773347010 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		VRInputModule_PointerEnter_m4958081(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// currentCollider = other;
		Collider_t1773347010 * L_2 = ___other0;
		__this->set_currentCollider_6(L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.VRCursor::OnTriggerExit(UnityEngine.Collider)
extern "C" IL2CPP_METHOD_ATTR void VRCursor_OnTriggerExit_m4235506106 (VRCursor_t3235369382 * __this, Collider_t1773347010 * ___other0, const RuntimeMethod* method)
{
	{
		// VRInputModule.PointerExit(other.gameObject);
		Collider_t1773347010 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		VRInputModule_PointerExit_m3267747566(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// currentCollider = null;
		__this->set_currentCollider_6((Collider_t1773347010 *)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.VRCursor::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VRCursor__ctor_m2451530893 (VRCursor_t3235369382 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.Extensions.VRInputModule::Awake()
extern "C" IL2CPP_METHOD_ATTR void VRInputModule_Awake_m2567655949 (VRInputModule_t2321821966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VRInputModule_Awake_m2567655949_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _singleton = this;
		((VRInputModule_t2321821966_StaticFields*)il2cpp_codegen_static_fields_for(VRInputModule_t2321821966_il2cpp_TypeInfo_var))->set__singleton_11(__this);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.VRInputModule::Process()
extern "C" IL2CPP_METHOD_ATTR void VRInputModule_Process_m3847371587 (VRInputModule_t2321821966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VRInputModule_Process_m3847371587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (targetObject == null)
		GameObject_t1113636619 * L_0 = ((VRInputModule_t2321821966_StaticFields*)il2cpp_codegen_static_fields_for(VRInputModule_t2321821966_il2cpp_TypeInfo_var))->get_targetObject_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// mouseClicked = false;
		((VRInputModule_t2321821966_StaticFields*)il2cpp_codegen_static_fields_for(VRInputModule_t2321821966_il2cpp_TypeInfo_var))->set_mouseClicked_13((bool)0);
		// return;
		return;
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.VRInputModule::PointerSubmit(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void VRInputModule_PointerSubmit_m276617441 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VRInputModule_PointerSubmit_m276617441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BaseEventData_t3903027533 * V_0 = NULL;
	{
		// targetObject = obj;
		GameObject_t1113636619 * L_0 = ___obj0;
		((VRInputModule_t2321821966_StaticFields*)il2cpp_codegen_static_fields_for(VRInputModule_t2321821966_il2cpp_TypeInfo_var))->set_targetObject_10(L_0);
		// mouseClicked = true;
		((VRInputModule_t2321821966_StaticFields*)il2cpp_codegen_static_fields_for(VRInputModule_t2321821966_il2cpp_TypeInfo_var))->set_mouseClicked_13((bool)1);
		// if (mouseClicked)
		bool L_1 = ((VRInputModule_t2321821966_StaticFields*)il2cpp_codegen_static_fields_for(VRInputModule_t2321821966_il2cpp_TypeInfo_var))->get_mouseClicked_13();
		if (!L_1)
		{
			goto IL_005e;
		}
	}
	{
		// BaseEventData data = new BaseEventData(_singleton.eventSystem);
		VRInputModule_t2321821966 * L_2 = ((VRInputModule_t2321821966_StaticFields*)il2cpp_codegen_static_fields_for(VRInputModule_t2321821966_il2cpp_TypeInfo_var))->get__singleton_11();
		NullCheck(L_2);
		EventSystem_t1003666588 * L_3 = BaseInputModule_get_eventSystem_m1212899053(L_2, /*hidden argument*/NULL);
		BaseEventData_t3903027533 * L_4 = (BaseEventData_t3903027533 *)il2cpp_codegen_object_new(BaseEventData_t3903027533_il2cpp_TypeInfo_var);
		BaseEventData__ctor_m1299776920(L_4, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// data.selectedObject = targetObject;
		BaseEventData_t3903027533 * L_5 = V_0;
		GameObject_t1113636619 * L_6 = ((VRInputModule_t2321821966_StaticFields*)il2cpp_codegen_static_fields_for(VRInputModule_t2321821966_il2cpp_TypeInfo_var))->get_targetObject_10();
		NullCheck(L_5);
		BaseEventData_set_selectedObject_m1456148497(L_5, L_6, /*hidden argument*/NULL);
		// ExecuteEvents.Execute(targetObject, data, ExecuteEvents.submitHandler);
		GameObject_t1113636619 * L_7 = ((VRInputModule_t2321821966_StaticFields*)il2cpp_codegen_static_fields_for(VRInputModule_t2321821966_il2cpp_TypeInfo_var))->get_targetObject_10();
		BaseEventData_t3903027533 * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		EventFunction_1_t1475332338 * L_9 = ExecuteEvents_get_submitHandler_m94189868(NULL /*static, unused*/, /*hidden argument*/NULL);
		ExecuteEvents_Execute_TisISubmitHandler_t2790798304_m3136014644(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/ExecuteEvents_Execute_TisISubmitHandler_t2790798304_m3136014644_RuntimeMethod_var);
		// print("clicked " + targetObject.name);
		GameObject_t1113636619 * L_10 = ((VRInputModule_t2321821966_StaticFields*)il2cpp_codegen_static_fields_for(VRInputModule_t2321821966_il2cpp_TypeInfo_var))->get_targetObject_10();
		NullCheck(L_10);
		String_t* L_11 = Object_get_name_m4211327027(L_10, /*hidden argument*/NULL);
		String_t* L_12 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3768136113, L_11, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		// mouseClicked = false;
		((VRInputModule_t2321821966_StaticFields*)il2cpp_codegen_static_fields_for(VRInputModule_t2321821966_il2cpp_TypeInfo_var))->set_mouseClicked_13((bool)0);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.VRInputModule::PointerExit(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void VRInputModule_PointerExit_m3267747566 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VRInputModule_PointerExit_m3267747566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t3807901092 * V_0 = NULL;
	{
		// print("PointerExit " + obj.name);
		GameObject_t1113636619 * L_0 = ___obj0;
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_m4211327027(L_0, /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1137710801, L_1, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		// PointerEventData pEvent = new PointerEventData(_singleton.eventSystem);
		VRInputModule_t2321821966 * L_3 = ((VRInputModule_t2321821966_StaticFields*)il2cpp_codegen_static_fields_for(VRInputModule_t2321821966_il2cpp_TypeInfo_var))->get__singleton_11();
		NullCheck(L_3);
		EventSystem_t1003666588 * L_4 = BaseInputModule_get_eventSystem_m1212899053(L_3, /*hidden argument*/NULL);
		PointerEventData_t3807901092 * L_5 = (PointerEventData_t3807901092 *)il2cpp_codegen_object_new(PointerEventData_t3807901092_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m2263609344(L_5, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// ExecuteEvents.Execute(obj, pEvent, ExecuteEvents.pointerExitHandler);
		GameObject_t1113636619 * L_6 = ___obj0;
		PointerEventData_t3807901092 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		EventFunction_1_t2867327688 * L_8 = ExecuteEvents_get_pointerExitHandler_m659239743(NULL /*static, unused*/, /*hidden argument*/NULL);
		ExecuteEvents_Execute_TisIPointerExitHandler_t4182793654_m767184367(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/ExecuteEvents_Execute_TisIPointerExitHandler_t4182793654_m767184367_RuntimeMethod_var);
		// ExecuteEvents.Execute(obj, pEvent, ExecuteEvents.deselectHandler); //This fixes the problem
		GameObject_t1113636619 * L_9 = ___obj0;
		PointerEventData_t3807901092 * L_10 = V_0;
		EventFunction_1_t3373214253 * L_11 = ExecuteEvents_get_deselectHandler_m343617552(NULL /*static, unused*/, /*hidden argument*/NULL);
		ExecuteEvents_Execute_TisIDeselectHandler_t393712923_m2480832291(NULL /*static, unused*/, L_9, L_10, L_11, /*hidden argument*/ExecuteEvents_Execute_TisIDeselectHandler_t393712923_m2480832291_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.VRInputModule::PointerEnter(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void VRInputModule_PointerEnter_m4958081 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VRInputModule_PointerEnter_m4958081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t3807901092 * V_0 = NULL;
	RaycastResult_t3360306849  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RaycastResult_t3360306849  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		// print("PointerEnter " + obj.name);
		GameObject_t1113636619 * L_0 = ___obj0;
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_m4211327027(L_0, /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral978535982, L_1, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		// PointerEventData pEvent = new PointerEventData(_singleton.eventSystem);
		VRInputModule_t2321821966 * L_3 = ((VRInputModule_t2321821966_StaticFields*)il2cpp_codegen_static_fields_for(VRInputModule_t2321821966_il2cpp_TypeInfo_var))->get__singleton_11();
		NullCheck(L_3);
		EventSystem_t1003666588 * L_4 = BaseInputModule_get_eventSystem_m1212899053(L_3, /*hidden argument*/NULL);
		PointerEventData_t3807901092 * L_5 = (PointerEventData_t3807901092 *)il2cpp_codegen_object_new(PointerEventData_t3807901092_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m2263609344(L_5, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// pEvent.pointerEnter = obj;
		PointerEventData_t3807901092 * L_6 = V_0;
		GameObject_t1113636619 * L_7 = ___obj0;
		NullCheck(L_6);
		PointerEventData_set_pointerEnter_m3256217464(L_6, L_7, /*hidden argument*/NULL);
		// RaycastResult rcr = new RaycastResult() { worldPosition = cursorPosition };
		il2cpp_codegen_initobj((&V_2), sizeof(RaycastResult_t3360306849 ));
		Vector3_t3722313464  L_8 = ((VRInputModule_t2321821966_StaticFields*)il2cpp_codegen_static_fields_for(VRInputModule_t2321821966_il2cpp_TypeInfo_var))->get_cursorPosition_14();
		(&V_2)->set_worldPosition_7(L_8);
		RaycastResult_t3360306849  L_9 = V_2;
		V_1 = L_9;
		// pEvent.pointerCurrentRaycast = rcr;
		PointerEventData_t3807901092 * L_10 = V_0;
		RaycastResult_t3360306849  L_11 = V_1;
		NullCheck(L_10);
		PointerEventData_set_pointerCurrentRaycast_m3745471622(L_10, L_11, /*hidden argument*/NULL);
		// ExecuteEvents.Execute(obj, pEvent, ExecuteEvents.pointerEnterHandler);
		GameObject_t1113636619 * L_12 = ___obj0;
		PointerEventData_t3807901092 * L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		EventFunction_1_t3995630009 * L_14 = ExecuteEvents_get_pointerEnterHandler_m1185301724(NULL /*static, unused*/, /*hidden argument*/NULL);
		ExecuteEvents_Execute_TisIPointerEnterHandler_t1016128679_m878985392(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/ExecuteEvents_Execute_TisIPointerEnterHandler_t1016128679_m878985392_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.VRInputModule::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VRInputModule__ctor_m1942024621 (VRInputModule_t2321821966 * __this, const RuntimeMethod* method)
{
	{
		BaseInputModule__ctor_m545527485(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.UI.Extensions.Vector3_Array2D
extern "C" void Vector3_Array2D_t2295860118_marshal_pinvoke(const Vector3_Array2D_t2295860118& unmarshaled, Vector3_Array2D_t2295860118_marshaled_pinvoke& marshaled)
{
	Exception_t* ___array_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'array' of type 'Vector3_Array2D'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___array_0Exception, NULL, NULL);
}
extern "C" void Vector3_Array2D_t2295860118_marshal_pinvoke_back(const Vector3_Array2D_t2295860118_marshaled_pinvoke& marshaled, Vector3_Array2D_t2295860118& unmarshaled)
{
	Exception_t* ___array_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'array' of type 'Vector3_Array2D'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___array_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UI.Extensions.Vector3_Array2D
extern "C" void Vector3_Array2D_t2295860118_marshal_pinvoke_cleanup(Vector3_Array2D_t2295860118_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UI.Extensions.Vector3_Array2D
extern "C" void Vector3_Array2D_t2295860118_marshal_com(const Vector3_Array2D_t2295860118& unmarshaled, Vector3_Array2D_t2295860118_marshaled_com& marshaled)
{
	Exception_t* ___array_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'array' of type 'Vector3_Array2D'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___array_0Exception, NULL, NULL);
}
extern "C" void Vector3_Array2D_t2295860118_marshal_com_back(const Vector3_Array2D_t2295860118_marshaled_com& marshaled, Vector3_Array2D_t2295860118& unmarshaled)
{
	Exception_t* ___array_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'array' of type 'Vector3_Array2D'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___array_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UI.Extensions.Vector3_Array2D
extern "C" void Vector3_Array2D_t2295860118_marshal_com_cleanup(Vector3_Array2D_t2295860118_marshaled_com& marshaled)
{
}
// UnityEngine.Vector3 UnityEngine.UI.Extensions.Vector3_Array2D::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_Array2D_get_Item_m390488908 (Vector3_Array2D_t2295860118 * __this, int32_t ____idx0, const RuntimeMethod* method)
{
	{
		// return array[_idx];
		Vector3U5BU5D_t1718750761* L_0 = __this->get_array_0();
		int32_t L_1 = ____idx0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Vector3_t3722313464  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
extern "C"  Vector3_t3722313464  Vector3_Array2D_get_Item_m390488908_AdjustorThunk (RuntimeObject * __this, int32_t ____idx0, const RuntimeMethod* method)
{
	Vector3_Array2D_t2295860118 * _thisAdjusted = reinterpret_cast<Vector3_Array2D_t2295860118 *>(__this + 1);
	return Vector3_Array2D_get_Item_m390488908(_thisAdjusted, ____idx0, method);
}
// System.Void UnityEngine.UI.Extensions.Vector3_Array2D::set_Item(System.Int32,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Vector3_Array2D_set_Item_m950392222 (Vector3_Array2D_t2295860118 * __this, int32_t ____idx0, Vector3_t3722313464  ___value1, const RuntimeMethod* method)
{
	{
		// array[_idx] = value;
		Vector3U5BU5D_t1718750761* L_0 = __this->get_array_0();
		int32_t L_1 = ____idx0;
		Vector3_t3722313464  L_2 = ___value1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (Vector3_t3722313464 )L_2);
		// }
		return;
	}
}
extern "C"  void Vector3_Array2D_set_Item_m950392222_AdjustorThunk (RuntimeObject * __this, int32_t ____idx0, Vector3_t3722313464  ___value1, const RuntimeMethod* method)
{
	Vector3_Array2D_t2295860118 * _thisAdjusted = reinterpret_cast<Vector3_Array2D_t2295860118 *>(__this + 1);
	Vector3_Array2D_set_Item_m950392222(_thisAdjusted, ____idx0, ___value1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::Start()
extern "C" IL2CPP_METHOD_ATTR void VerticalScrollSnap_Start_m32339692 (VerticalScrollSnap_t3018533569 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VerticalScrollSnap_Start_m32339692_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _isVertical = true;
		((ScrollSnapBase_t2887778829 *)__this)->set__isVertical_6((bool)1);
		// _childAnchorPoint = new Vector2(0.5f,0);
		Vector2_t2156229523  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3970636864((&L_0), (0.5f), (0.0f), /*hidden argument*/NULL);
		((ScrollSnapBase_t2887778829 *)__this)->set__childAnchorPoint_12(L_0);
		// _currentPage = StartingScreen;
		int32_t L_1 = ((ScrollSnapBase_t2887778829 *)__this)->get_StartingScreen_25();
		((ScrollSnapBase_t2887778829 *)__this)->set__currentPage_19(L_1);
		// panelDimensions = gameObject.GetComponent<RectTransform>().rect;
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectTransform_t3704657025 * L_3 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_2, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		NullCheck(L_3);
		Rect_t2360479859  L_4 = RectTransform_get_rect_m574169965(L_3, /*hidden argument*/NULL);
		((ScrollSnapBase_t2887778829 *)__this)->set_panelDimensions_4(L_4);
		// UpdateLayout();
		VerticalScrollSnap_UpdateLayout_m832716593(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::Update()
extern "C" IL2CPP_METHOD_ATTR void VerticalScrollSnap_Update_m3348101550 (VerticalScrollSnap_t3018533569 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VerticalScrollSnap_Update_m3348101550_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_lerp && _scroll_rect.velocity == Vector2.zero)
		bool L_0 = ((ScrollSnapBase_t2887778829 *)__this)->get__lerp_15();
		if (L_0)
		{
			goto IL_0049;
		}
	}
	{
		ScrollRect_t4137855814 * L_1 = ((ScrollSnapBase_t2887778829 *)__this)->get__scroll_rect_13();
		NullCheck(L_1);
		Vector2_t2156229523  L_2 = ScrollRect_get_velocity_m513672031(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = Vector2_op_Equality_m2303255133(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		// if (!_settled && !_pointerDown)
		bool L_5 = ((ScrollSnapBase_t2887778829 *)__this)->get__settled_17();
		if (L_5)
		{
			goto IL_0048;
		}
	}
	{
		bool L_6 = ((ScrollSnapBase_t2887778829 *)__this)->get__pointerDown_16();
		if (L_6)
		{
			goto IL_0048;
		}
	}
	{
		// if (!IsRectSettledOnaPage(_screensContainer.localPosition))
		RectTransform_t3704657025 * L_7 = ((ScrollSnapBase_t2887778829 *)__this)->get__screensContainer_5();
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_localPosition_m4234289348(L_7, /*hidden argument*/NULL);
		bool L_9 = ScrollSnapBase_IsRectSettledOnaPage_m1334830036(__this, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0048;
		}
	}
	{
		// ScrollToClosestElement();
		ScrollSnapBase_ScrollToClosestElement_m1001515940(__this, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// return;
		return;
	}

IL_0049:
	{
		// else if (_lerp)
		bool L_10 = ((ScrollSnapBase_t2887778829 *)__this)->get__lerp_15();
		if (!L_10)
		{
			goto IL_00b9;
		}
	}
	{
		// _screensContainer.localPosition = Vector3.Lerp(_screensContainer.localPosition, _lerp_target, transitionSpeed * Time.deltaTime);
		RectTransform_t3704657025 * L_11 = ((ScrollSnapBase_t2887778829 *)__this)->get__screensContainer_5();
		RectTransform_t3704657025 * L_12 = ((ScrollSnapBase_t2887778829 *)__this)->get__screensContainer_5();
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_localPosition_m4234289348(L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = ((ScrollSnapBase_t2887778829 *)__this)->get__lerp_target_14();
		float L_15 = ((ScrollSnapBase_t2887778829 *)__this)->get_transitionSpeed_30();
		float L_16 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_17 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_13, L_14, ((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localPosition_m4128471975(L_11, L_17, /*hidden argument*/NULL);
		// if (Vector3.Distance(_screensContainer.localPosition, _lerp_target) < 0.1f)
		RectTransform_t3704657025 * L_18 = ((ScrollSnapBase_t2887778829 *)__this)->get__screensContainer_5();
		NullCheck(L_18);
		Vector3_t3722313464  L_19 = Transform_get_localPosition_m4234289348(L_18, /*hidden argument*/NULL);
		Vector3_t3722313464  L_20 = ((ScrollSnapBase_t2887778829 *)__this)->get__lerp_target_14();
		float L_21 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		if ((!(((float)L_21) < ((float)(0.1f)))))
		{
			goto IL_00b9;
		}
	}
	{
		// _screensContainer.localPosition = _lerp_target;
		RectTransform_t3704657025 * L_22 = ((ScrollSnapBase_t2887778829 *)__this)->get__screensContainer_5();
		Vector3_t3722313464  L_23 = ((ScrollSnapBase_t2887778829 *)__this)->get__lerp_target_14();
		NullCheck(L_22);
		Transform_set_localPosition_m4128471975(L_22, L_23, /*hidden argument*/NULL);
		// _lerp = false;
		((ScrollSnapBase_t2887778829 *)__this)->set__lerp_15((bool)0);
		// EndScreenChange();
		ScrollSnapBase_EndScreenChange_m3590439676(__this, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		// CurrentPage = GetPageforPosition(_screensContainer.localPosition);
		RectTransform_t3704657025 * L_24 = ((ScrollSnapBase_t2887778829 *)__this)->get__screensContainer_5();
		NullCheck(L_24);
		Vector3_t3722313464  L_25 = Transform_get_localPosition_m4234289348(L_24, /*hidden argument*/NULL);
		int32_t L_26 = ScrollSnapBase_GetPageforPosition_m3863005976(__this, L_25, /*hidden argument*/NULL);
		ScrollSnapBase_set_CurrentPage_m2832416549(__this, L_26, /*hidden argument*/NULL);
		// if (!_pointerDown)
		bool L_27 = ((ScrollSnapBase_t2887778829 *)__this)->get__pointerDown_16();
		if (L_27)
		{
			goto IL_0123;
		}
	}
	{
		// if (_scroll_rect.velocity.y > 0.01 || _scroll_rect.velocity.y < -0.01)
		ScrollRect_t4137855814 * L_28 = ((ScrollSnapBase_t2887778829 *)__this)->get__scroll_rect_13();
		NullCheck(L_28);
		Vector2_t2156229523  L_29 = ScrollRect_get_velocity_m513672031(L_28, /*hidden argument*/NULL);
		float L_30 = L_29.get_y_1();
		if ((((double)(((double)((double)L_30)))) > ((double)(0.01))))
		{
			goto IL_0110;
		}
	}
	{
		ScrollRect_t4137855814 * L_31 = ((ScrollSnapBase_t2887778829 *)__this)->get__scroll_rect_13();
		NullCheck(L_31);
		Vector2_t2156229523  L_32 = ScrollRect_get_velocity_m513672031(L_31, /*hidden argument*/NULL);
		float L_33 = L_32.get_y_1();
		if ((!(((double)(((double)((double)L_33)))) < ((double)(-0.01)))))
		{
			goto IL_0123;
		}
	}

IL_0110:
	{
		// if (IsRectMovingSlowerThanThreshold(0))
		bool L_34 = VerticalScrollSnap_IsRectMovingSlowerThanThreshold_m716767468(__this, (0.0f), /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0123;
		}
	}
	{
		// ScrollToClosestElement();
		ScrollSnapBase_ScrollToClosestElement_m1001515940(__this, /*hidden argument*/NULL);
	}

IL_0123:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.UI.Extensions.VerticalScrollSnap::IsRectMovingSlowerThanThreshold(System.Single)
extern "C" IL2CPP_METHOD_ATTR bool VerticalScrollSnap_IsRectMovingSlowerThanThreshold_m716767468 (VerticalScrollSnap_t3018533569 * __this, float ___startingSpeed0, const RuntimeMethod* method)
{
	{
		// return (_scroll_rect.velocity.y > startingSpeed && _scroll_rect.velocity.y < SwipeVelocityThreshold) ||
		//                     (_scroll_rect.velocity.y < startingSpeed && _scroll_rect.velocity.y > -SwipeVelocityThreshold);
		ScrollRect_t4137855814 * L_0 = ((ScrollSnapBase_t2887778829 *)__this)->get__scroll_rect_13();
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = ScrollRect_get_velocity_m513672031(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_1();
		float L_3 = ___startingSpeed0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_002c;
		}
	}
	{
		ScrollRect_t4137855814 * L_4 = ((ScrollSnapBase_t2887778829 *)__this)->get__scroll_rect_13();
		NullCheck(L_4);
		Vector2_t2156229523  L_5 = ScrollRect_get_velocity_m513672031(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_1();
		int32_t L_7 = ((ScrollSnapBase_t2887778829 *)__this)->get_SwipeVelocityThreshold_33();
		if ((((float)L_6) < ((float)(((float)((float)L_7))))))
		{
			goto IL_005c;
		}
	}

IL_002c:
	{
		ScrollRect_t4137855814 * L_8 = ((ScrollSnapBase_t2887778829 *)__this)->get__scroll_rect_13();
		NullCheck(L_8);
		Vector2_t2156229523  L_9 = ScrollRect_get_velocity_m513672031(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_1();
		float L_11 = ___startingSpeed0;
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_005a;
		}
	}
	{
		ScrollRect_t4137855814 * L_12 = ((ScrollSnapBase_t2887778829 *)__this)->get__scroll_rect_13();
		NullCheck(L_12);
		Vector2_t2156229523  L_13 = ScrollRect_get_velocity_m513672031(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_1();
		int32_t L_15 = ((ScrollSnapBase_t2887778829 *)__this)->get_SwipeVelocityThreshold_33();
		return (bool)((((float)L_14) > ((float)(((float)((float)((-L_15)))))))? 1 : 0);
	}

IL_005a:
	{
		return (bool)0;
	}

IL_005c:
	{
		return (bool)1;
	}
}
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::DistributePages()
extern "C" IL2CPP_METHOD_ATTR void VerticalScrollSnap_DistributePages_m3256480868 (VerticalScrollSnap_t3018533569 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VerticalScrollSnap_DistributePages_m3256480868_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	Vector2_t2156229523  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector2_t2156229523  V_8;
	memset(&V_8, 0, sizeof(V_8));
	float G_B2_0 = 0.0f;
	VerticalScrollSnap_t3018533569 * G_B2_1 = NULL;
	float G_B1_0 = 0.0f;
	VerticalScrollSnap_t3018533569 * G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	VerticalScrollSnap_t3018533569 * G_B3_2 = NULL;
	{
		// _screens = _screensContainer.childCount;
		RectTransform_t3704657025 * L_0 = ((ScrollSnapBase_t2887778829 *)__this)->get__screensContainer_5();
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m3145433196(L_0, /*hidden argument*/NULL);
		((ScrollSnapBase_t2887778829 *)__this)->set__screens_7(L_1);
		// _scroll_rect.verticalNormalizedPosition = 0;
		ScrollRect_t4137855814 * L_2 = ((ScrollSnapBase_t2887778829 *)__this)->get__scroll_rect_13();
		NullCheck(L_2);
		ScrollRect_set_verticalNormalizedPosition_m1452826170(L_2, (0.0f), /*hidden argument*/NULL);
		// float _offset = 0;
		V_0 = (0.0f);
		// float _dimension = 0;
		V_1 = (0.0f);
		// Rect panelDimensions = gameObject.GetComponent<RectTransform>().rect;
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		RectTransform_t3704657025 * L_4 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_3, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		NullCheck(L_4);
		Rect_t2360479859  L_5 = RectTransform_get_rect_m574169965(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// float currentYPosition = 0;
		V_3 = (0.0f);
		// var pageStepValue = _childSize = (int)panelDimensions.height * ((PageStep == 0) ? 3 : PageStep);
		float L_6 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&V_2), /*hidden argument*/NULL);
		float L_7 = ((ScrollSnapBase_t2887778829 *)__this)->get_PageStep_26();
		G_B1_0 = (((float)((float)(((int32_t)((int32_t)L_6))))));
		G_B1_1 = __this;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			G_B2_0 = (((float)((float)(((int32_t)((int32_t)L_6))))));
			G_B2_1 = __this;
			goto IL_0063;
		}
	}
	{
		float L_8 = ((ScrollSnapBase_t2887778829 *)__this)->get_PageStep_26();
		G_B3_0 = L_8;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0068;
	}

IL_0063:
	{
		G_B3_0 = (3.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0068:
	{
		float L_9 = ((float)il2cpp_codegen_multiply((float)G_B3_1, (float)G_B3_0));
		V_5 = L_9;
		NullCheck(G_B3_2);
		((ScrollSnapBase_t2887778829 *)G_B3_2)->set__childSize_9(L_9);
		float L_10 = V_5;
		V_4 = L_10;
		// for (int i = 0; i < _screensContainer.transform.childCount; i++)
		V_6 = 0;
		goto IL_00f0;
	}

IL_007a:
	{
		// RectTransform child = _screensContainer.transform.GetChild(i).gameObject.GetComponent<RectTransform>();
		RectTransform_t3704657025 * L_11 = ((ScrollSnapBase_t2887778829 *)__this)->get__screensContainer_5();
		NullCheck(L_11);
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_6;
		NullCheck(L_12);
		Transform_t3600365921 * L_14 = Transform_GetChild_m1092972975(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_t1113636619 * L_15 = Component_get_gameObject_m442555142(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		RectTransform_t3704657025 * L_16 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_15, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		// currentYPosition = _offset + i * pageStepValue;
		float L_17 = V_0;
		int32_t L_18 = V_6;
		float L_19 = V_4;
		V_3 = ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_18))), (float)L_19))));
		// child.sizeDelta = new Vector2(panelDimensions.width, panelDimensions.height);
		RectTransform_t3704657025 * L_20 = L_16;
		float L_21 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&V_2), /*hidden argument*/NULL);
		float L_22 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&V_2), /*hidden argument*/NULL);
		Vector2_t2156229523  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector2__ctor_m3970636864((&L_23), L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		RectTransform_set_sizeDelta_m3462269772(L_20, L_23, /*hidden argument*/NULL);
		// child.anchoredPosition = new Vector2(0f, currentYPosition);
		RectTransform_t3704657025 * L_24 = L_20;
		float L_25 = V_3;
		Vector2_t2156229523  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Vector2__ctor_m3970636864((&L_26), (0.0f), L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		RectTransform_set_anchoredPosition_m4126691837(L_24, L_26, /*hidden argument*/NULL);
		// child.anchorMin = child.anchorMax = child.pivot = _childAnchorPoint;
		RectTransform_t3704657025 * L_27 = L_24;
		RectTransform_t3704657025 * L_28 = L_27;
		Vector2_t2156229523  L_29 = ((ScrollSnapBase_t2887778829 *)__this)->get__childAnchorPoint_12();
		Vector2_t2156229523  L_30 = L_29;
		V_8 = L_30;
		NullCheck(L_28);
		RectTransform_set_pivot_m909387058(L_28, L_30, /*hidden argument*/NULL);
		Vector2_t2156229523  L_31 = V_8;
		Vector2_t2156229523  L_32 = L_31;
		V_7 = L_32;
		NullCheck(L_28);
		RectTransform_set_anchorMax_m2998668828(L_28, L_32, /*hidden argument*/NULL);
		Vector2_t2156229523  L_33 = V_7;
		NullCheck(L_27);
		RectTransform_set_anchorMin_m4230103102(L_27, L_33, /*hidden argument*/NULL);
		// for (int i = 0; i < _screensContainer.transform.childCount; i++)
		int32_t L_34 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00f0:
	{
		// for (int i = 0; i < _screensContainer.transform.childCount; i++)
		int32_t L_35 = V_6;
		RectTransform_t3704657025 * L_36 = ((ScrollSnapBase_t2887778829 *)__this)->get__screensContainer_5();
		NullCheck(L_36);
		Transform_t3600365921 * L_37 = Component_get_transform_m3162698980(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		int32_t L_38 = Transform_get_childCount_m3145433196(L_37, /*hidden argument*/NULL);
		if ((((int32_t)L_35) < ((int32_t)L_38)))
		{
			goto IL_007a;
		}
	}
	{
		// _dimension = currentYPosition + _offset * -1;
		float L_39 = V_3;
		float L_40 = V_0;
		V_1 = ((float)il2cpp_codegen_add((float)L_39, (float)((float)il2cpp_codegen_multiply((float)L_40, (float)(-1.0f)))));
		// _screensContainer.GetComponent<RectTransform>().offsetMax = new Vector2(0f, _dimension);
		RectTransform_t3704657025 * L_41 = ((ScrollSnapBase_t2887778829 *)__this)->get__screensContainer_5();
		NullCheck(L_41);
		RectTransform_t3704657025 * L_42 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(L_41, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		float L_43 = V_1;
		Vector2_t2156229523  L_44;
		memset(&L_44, 0, sizeof(L_44));
		Vector2__ctor_m3970636864((&L_44), (0.0f), L_43, /*hidden argument*/NULL);
		NullCheck(L_42);
		RectTransform_set_offsetMax_m2526664592(L_42, L_44, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::AddChild(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void VerticalScrollSnap_AddChild_m836485639 (VerticalScrollSnap_t3018533569 * __this, GameObject_t1113636619 * ___GO0, const RuntimeMethod* method)
{
	{
		// AddChild(GO, false);
		GameObject_t1113636619 * L_0 = ___GO0;
		VerticalScrollSnap_AddChild_m3633366043(__this, L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::AddChild(UnityEngine.GameObject,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VerticalScrollSnap_AddChild_m3633366043 (VerticalScrollSnap_t3018533569 * __this, GameObject_t1113636619 * ___GO0, bool ___WorldPositionStays1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VerticalScrollSnap_AddChild_m3633366043_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _scroll_rect.verticalNormalizedPosition = 0;
		ScrollRect_t4137855814 * L_0 = ((ScrollSnapBase_t2887778829 *)__this)->get__scroll_rect_13();
		NullCheck(L_0);
		ScrollRect_set_verticalNormalizedPosition_m1452826170(L_0, (0.0f), /*hidden argument*/NULL);
		// GO.transform.SetParent(_screensContainer, WorldPositionStays);
		GameObject_t1113636619 * L_1 = ___GO0;
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = GameObject_get_transform_m1369836730(L_1, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_3 = ((ScrollSnapBase_t2887778829 *)__this)->get__screensContainer_5();
		bool L_4 = ___WorldPositionStays1;
		NullCheck(L_2);
		Transform_SetParent_m273471670(L_2, L_3, L_4, /*hidden argument*/NULL);
		// InitialiseChildObjectsFromScene();
		ScrollSnapBase_InitialiseChildObjectsFromScene_m1734487769(__this, /*hidden argument*/NULL);
		// DistributePages();
		VerticalScrollSnap_DistributePages_m3256480868(__this, /*hidden argument*/NULL);
		// if (MaskArea) UpdateVisible();
		RectTransform_t3704657025 * L_5 = ((ScrollSnapBase_t2887778829 *)__this)->get_MaskArea_34();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		// if (MaskArea) UpdateVisible();
		ScrollSnapBase_UpdateVisible_m3765638251(__this, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// SetScrollContainerPosition();
		VerticalScrollSnap_SetScrollContainerPosition_m1971113978(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::RemoveChild(System.Int32,UnityEngine.GameObject&)
extern "C" IL2CPP_METHOD_ATTR void VerticalScrollSnap_RemoveChild_m1376225678 (VerticalScrollSnap_t3018533569 * __this, int32_t ___index0, GameObject_t1113636619 ** ___ChildRemoved1, const RuntimeMethod* method)
{
	{
		// RemoveChild(index, false, out ChildRemoved);
		int32_t L_0 = ___index0;
		GameObject_t1113636619 ** L_1 = ___ChildRemoved1;
		VerticalScrollSnap_RemoveChild_m3946971085(__this, L_0, (bool)0, (GameObject_t1113636619 **)L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::RemoveChild(System.Int32,System.Boolean,UnityEngine.GameObject&)
extern "C" IL2CPP_METHOD_ATTR void VerticalScrollSnap_RemoveChild_m3946971085 (VerticalScrollSnap_t3018533569 * __this, int32_t ___index0, bool ___WorldPositionStays1, GameObject_t1113636619 ** ___ChildRemoved2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VerticalScrollSnap_RemoveChild_m3946971085_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	{
		// ChildRemoved = null;
		GameObject_t1113636619 ** L_0 = ___ChildRemoved2;
		*((RuntimeObject **)(L_0)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_0), (RuntimeObject *)NULL);
		// if (index < 0 || index > _screensContainer.childCount)
		int32_t L_1 = ___index0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = ___index0;
		RectTransform_t3704657025 * L_3 = ((ScrollSnapBase_t2887778829 *)__this)->get__screensContainer_5();
		NullCheck(L_3);
		int32_t L_4 = Transform_get_childCount_m3145433196(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)L_4)))
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// return;
		return;
	}

IL_0016:
	{
		// _scroll_rect.verticalNormalizedPosition = 0;
		ScrollRect_t4137855814 * L_5 = ((ScrollSnapBase_t2887778829 *)__this)->get__scroll_rect_13();
		NullCheck(L_5);
		ScrollRect_set_verticalNormalizedPosition_m1452826170(L_5, (0.0f), /*hidden argument*/NULL);
		// Transform child = _screensContainer.transform.GetChild(index);
		RectTransform_t3704657025 * L_6 = ((ScrollSnapBase_t2887778829 *)__this)->get__screensContainer_5();
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(L_6, /*hidden argument*/NULL);
		int32_t L_8 = ___index0;
		NullCheck(L_7);
		Transform_t3600365921 * L_9 = Transform_GetChild_m1092972975(L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// child.SetParent(null, WorldPositionStays);
		Transform_t3600365921 * L_10 = V_0;
		bool L_11 = ___WorldPositionStays1;
		NullCheck(L_10);
		Transform_SetParent_m273471670(L_10, (Transform_t3600365921 *)NULL, L_11, /*hidden argument*/NULL);
		// ChildRemoved = child.gameObject;
		GameObject_t1113636619 ** L_12 = ___ChildRemoved2;
		Transform_t3600365921 * L_13 = V_0;
		NullCheck(L_13);
		GameObject_t1113636619 * L_14 = Component_get_gameObject_m442555142(L_13, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_12)) = (RuntimeObject *)L_14;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_12), (RuntimeObject *)L_14);
		// InitialiseChildObjectsFromScene();
		ScrollSnapBase_InitialiseChildObjectsFromScene_m1734487769(__this, /*hidden argument*/NULL);
		// DistributePages();
		VerticalScrollSnap_DistributePages_m3256480868(__this, /*hidden argument*/NULL);
		// if (MaskArea) UpdateVisible();
		RectTransform_t3704657025 * L_15 = ((ScrollSnapBase_t2887778829 *)__this)->get_MaskArea_34();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0067;
		}
	}
	{
		// if (MaskArea) UpdateVisible();
		ScrollSnapBase_UpdateVisible_m3765638251(__this, /*hidden argument*/NULL);
	}

IL_0067:
	{
		// if (_currentPage > _screens - 1)
		int32_t L_17 = ((ScrollSnapBase_t2887778829 *)__this)->get__currentPage_19();
		int32_t L_18 = ((ScrollSnapBase_t2887778829 *)__this)->get__screens_7();
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1)))))
		{
			goto IL_0085;
		}
	}
	{
		// CurrentPage = _screens - 1;
		int32_t L_19 = ((ScrollSnapBase_t2887778829 *)__this)->get__screens_7();
		ScrollSnapBase_set_CurrentPage_m2832416549(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0085:
	{
		// SetScrollContainerPosition();
		VerticalScrollSnap_SetScrollContainerPosition_m1971113978(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::RemoveAllChildren(UnityEngine.GameObject[]&)
extern "C" IL2CPP_METHOD_ATTR void VerticalScrollSnap_RemoveAllChildren_m2499517265 (VerticalScrollSnap_t3018533569 * __this, GameObjectU5BU5D_t3328599146** ___ChildrenRemoved0, const RuntimeMethod* method)
{
	{
		// RemoveAllChildren(false, out ChildrenRemoved);
		GameObjectU5BU5D_t3328599146** L_0 = ___ChildrenRemoved0;
		VerticalScrollSnap_RemoveAllChildren_m3982600434(__this, (bool)0, (GameObjectU5BU5D_t3328599146**)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::RemoveAllChildren(System.Boolean,UnityEngine.GameObject[]&)
extern "C" IL2CPP_METHOD_ATTR void VerticalScrollSnap_RemoveAllChildren_m3982600434 (VerticalScrollSnap_t3018533569 * __this, bool ___WorldPositionStays0, GameObjectU5BU5D_t3328599146** ___ChildrenRemoved1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VerticalScrollSnap_RemoveAllChildren_m3982600434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var _screenCount = _screensContainer.childCount;
		RectTransform_t3704657025 * L_0 = ((ScrollSnapBase_t2887778829 *)__this)->get__screensContainer_5();
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m3145433196(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// ChildrenRemoved = new GameObject[_screenCount];
		GameObjectU5BU5D_t3328599146** L_2 = ___ChildrenRemoved1;
		int32_t L_3 = V_0;
		GameObjectU5BU5D_t3328599146* L_4 = (GameObjectU5BU5D_t3328599146*)SZArrayNew(GameObjectU5BU5D_t3328599146_il2cpp_TypeInfo_var, (uint32_t)L_3);
		*((RuntimeObject **)(L_2)) = (RuntimeObject *)L_4;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_2), (RuntimeObject *)L_4);
		// for (int i = _screenCount - 1; i >= 0; i--)
		int32_t L_5 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		goto IL_0043;
	}

IL_001a:
	{
		// ChildrenRemoved[i] = _screensContainer.GetChild(i).gameObject;
		GameObjectU5BU5D_t3328599146** L_6 = ___ChildrenRemoved1;
		GameObjectU5BU5D_t3328599146* L_7 = *((GameObjectU5BU5D_t3328599146**)L_6);
		int32_t L_8 = V_1;
		RectTransform_t3704657025 * L_9 = ((ScrollSnapBase_t2887778829 *)__this)->get__screensContainer_5();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		Transform_t3600365921 * L_11 = Transform_GetChild_m1092972975(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_t1113636619 * L_12 = Component_get_gameObject_m442555142(L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_12);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (GameObject_t1113636619 *)L_12);
		// ChildrenRemoved[i].transform.SetParent(null, WorldPositionStays);
		GameObjectU5BU5D_t3328599146** L_13 = ___ChildrenRemoved1;
		GameObjectU5BU5D_t3328599146* L_14 = *((GameObjectU5BU5D_t3328599146**)L_13);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		GameObject_t1113636619 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Transform_t3600365921 * L_18 = GameObject_get_transform_m1369836730(L_17, /*hidden argument*/NULL);
		bool L_19 = ___WorldPositionStays0;
		NullCheck(L_18);
		Transform_SetParent_m273471670(L_18, (Transform_t3600365921 *)NULL, L_19, /*hidden argument*/NULL);
		// for (int i = _screenCount - 1; i >= 0; i--)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = _screenCount - 1; i >= 0; i--)
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		// _scroll_rect.verticalNormalizedPosition = 0;
		ScrollRect_t4137855814 * L_22 = ((ScrollSnapBase_t2887778829 *)__this)->get__scroll_rect_13();
		NullCheck(L_22);
		ScrollRect_set_verticalNormalizedPosition_m1452826170(L_22, (0.0f), /*hidden argument*/NULL);
		// CurrentPage = 0;
		ScrollSnapBase_set_CurrentPage_m2832416549(__this, 0, /*hidden argument*/NULL);
		// InitialiseChildObjectsFromScene();
		ScrollSnapBase_InitialiseChildObjectsFromScene_m1734487769(__this, /*hidden argument*/NULL);
		// DistributePages();
		VerticalScrollSnap_DistributePages_m3256480868(__this, /*hidden argument*/NULL);
		// if (MaskArea) UpdateVisible();
		RectTransform_t3704657025 * L_23 = ((ScrollSnapBase_t2887778829 *)__this)->get_MaskArea_34();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_24 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_007d;
		}
	}
	{
		// if (MaskArea) UpdateVisible();
		ScrollSnapBase_UpdateVisible_m3765638251(__this, /*hidden argument*/NULL);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::SetScrollContainerPosition()
extern "C" IL2CPP_METHOD_ATTR void VerticalScrollSnap_SetScrollContainerPosition_m1971113978 (VerticalScrollSnap_t3018533569 * __this, const RuntimeMethod* method)
{
	{
		// _scrollStartPosition = _screensContainer.localPosition.y;
		RectTransform_t3704657025 * L_0 = ((ScrollSnapBase_t2887778829 *)__this)->get__screensContainer_5();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_localPosition_m4234289348(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		((ScrollSnapBase_t2887778829 *)__this)->set__scrollStartPosition_8(L_2);
		// _scroll_rect.verticalNormalizedPosition = (float)(_currentPage) / (_screens - 1);
		ScrollRect_t4137855814 * L_3 = ((ScrollSnapBase_t2887778829 *)__this)->get__scroll_rect_13();
		int32_t L_4 = ((ScrollSnapBase_t2887778829 *)__this)->get__currentPage_19();
		int32_t L_5 = ((ScrollSnapBase_t2887778829 *)__this)->get__screens_7();
		NullCheck(L_3);
		ScrollRect_set_verticalNormalizedPosition_m1452826170(L_3, ((float)((float)(((float)((float)L_4)))/(float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1))))))), /*hidden argument*/NULL);
		// OnCurrentScreenChange(_currentPage);
		int32_t L_6 = ((ScrollSnapBase_t2887778829 *)__this)->get__currentPage_19();
		ScrollSnapBase_OnCurrentScreenChange_m511538427(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::UpdateLayout()
extern "C" IL2CPP_METHOD_ATTR void VerticalScrollSnap_UpdateLayout_m832716593 (VerticalScrollSnap_t3018533569 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VerticalScrollSnap_UpdateLayout_m832716593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _lerp = false;
		((ScrollSnapBase_t2887778829 *)__this)->set__lerp_15((bool)0);
		// DistributePages();
		VerticalScrollSnap_DistributePages_m3256480868(__this, /*hidden argument*/NULL);
		// if (MaskArea) UpdateVisible();
		RectTransform_t3704657025 * L_0 = ((ScrollSnapBase_t2887778829 *)__this)->get_MaskArea_34();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// if (MaskArea) UpdateVisible();
		ScrollSnapBase_UpdateVisible_m3765638251(__this, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// SetScrollContainerPosition();
		VerticalScrollSnap_SetScrollContainerPosition_m1971113978(__this, /*hidden argument*/NULL);
		// OnCurrentScreenChange(_currentPage);
		int32_t L_2 = ((ScrollSnapBase_t2887778829 *)__this)->get__currentPage_19();
		ScrollSnapBase_OnCurrentScreenChange_m511538427(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::OnRectTransformDimensionsChange()
extern "C" IL2CPP_METHOD_ATTR void VerticalScrollSnap_OnRectTransformDimensionsChange_m2898657906 (VerticalScrollSnap_t3018533569 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VerticalScrollSnap_OnRectTransformDimensionsChange_m2898657906_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_childAnchorPoint != Vector2.zero)
		Vector2_t2156229523  L_0 = ((ScrollSnapBase_t2887778829 *)__this)->get__childAnchorPoint_12();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_2 = Vector2_op_Inequality_m3858779880(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// UpdateLayout();
		VerticalScrollSnap_UpdateLayout_m832716593(__this, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void VerticalScrollSnap_OnEnable_m3285445207 (VerticalScrollSnap_t3018533569 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VerticalScrollSnap_OnEnable_m3285445207_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InitialiseChildObjectsFromScene();
		ScrollSnapBase_InitialiseChildObjectsFromScene_m1734487769(__this, /*hidden argument*/NULL);
		// DistributePages();
		VerticalScrollSnap_DistributePages_m3256480868(__this, /*hidden argument*/NULL);
		// if (MaskArea) UpdateVisible();
		RectTransform_t3704657025 * L_0 = ((ScrollSnapBase_t2887778829 *)__this)->get_MaskArea_34();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// if (MaskArea) UpdateVisible();
		ScrollSnapBase_UpdateVisible_m3765638251(__this, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// if (JumpOnEnable  || !RestartOnEnable) SetScrollContainerPosition();
		bool L_2 = ((ScrollSnapBase_t2887778829 *)__this)->get_JumpOnEnable_36();
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		bool L_3 = ((ScrollSnapBase_t2887778829 *)__this)->get_RestartOnEnable_37();
		if (L_3)
		{
			goto IL_0035;
		}
	}

IL_002f:
	{
		// if (JumpOnEnable  || !RestartOnEnable) SetScrollContainerPosition();
		VerticalScrollSnap_SetScrollContainerPosition_m1971113978(__this, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// if(RestartOnEnable) GoToScreen(StartingScreen);
		bool L_4 = ((ScrollSnapBase_t2887778829 *)__this)->get_RestartOnEnable_37();
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		// if(RestartOnEnable) GoToScreen(StartingScreen);
		int32_t L_5 = ((ScrollSnapBase_t2887778829 *)__this)->get_StartingScreen_25();
		ScrollSnapBase_GoToScreen_m672334424(__this, L_5, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void VerticalScrollSnap_OnEndDrag_m2821904435 (VerticalScrollSnap_t3018533569 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VerticalScrollSnap_OnEndDrag_m2821904435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// _pointerDown = false;
		((ScrollSnapBase_t2887778829 *)__this)->set__pointerDown_16((bool)0);
		// if (_scroll_rect.vertical)
		ScrollRect_t4137855814 * L_0 = ((ScrollSnapBase_t2887778829 *)__this)->get__scroll_rect_13();
		NullCheck(L_0);
		bool L_1 = ScrollRect_get_vertical_m3678635065(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0099;
		}
	}
	{
		// var distance = Vector3.Distance(_startPosition, _screensContainer.localPosition);
		Vector3_t3722313464  L_2 = ((ScrollSnapBase_t2887778829 *)__this)->get__startPosition_18();
		RectTransform_t3704657025 * L_3 = ((ScrollSnapBase_t2887778829 *)__this)->get__screensContainer_5();
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_localPosition_m4234289348(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_5 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if (UseFastSwipe && distance < panelDimensions.height + FastSwipeThreshold && distance >=1f)
		bool L_6 = ((ScrollSnapBase_t2887778829 *)__this)->get_UseFastSwipe_31();
		if (!L_6)
		{
			goto IL_0099;
		}
	}
	{
		float L_7 = V_0;
		Rect_t2360479859 * L_8 = ((ScrollSnapBase_t2887778829 *)__this)->get_address_of_panelDimensions_4();
		float L_9 = Rect_get_height_m1358425599((Rect_t2360479859 *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ((ScrollSnapBase_t2887778829 *)__this)->get_FastSwipeThreshold_32();
		if ((!(((float)L_7) < ((float)((float)il2cpp_codegen_add((float)L_9, (float)(((float)((float)L_10)))))))))
		{
			goto IL_0099;
		}
	}
	{
		float L_11 = V_0;
		if ((!(((float)L_11) >= ((float)(1.0f)))))
		{
			goto IL_0099;
		}
	}
	{
		// _scroll_rect.velocity = Vector3.zero;
		ScrollRect_t4137855814 * L_12 = ((ScrollSnapBase_t2887778829 *)__this)->get__scroll_rect_13();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_13 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_14 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ScrollRect_set_velocity_m2217198666(L_12, L_14, /*hidden argument*/NULL);
		// if (_startPosition.y - _screensContainer.localPosition.y > 0)
		Vector3_t3722313464 * L_15 = ((ScrollSnapBase_t2887778829 *)__this)->get_address_of__startPosition_18();
		float L_16 = L_15->get_y_3();
		RectTransform_t3704657025 * L_17 = ((ScrollSnapBase_t2887778829 *)__this)->get__screensContainer_5();
		NullCheck(L_17);
		Vector3_t3722313464  L_18 = Transform_get_localPosition_m4234289348(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_y_3();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_16, (float)L_19))) > ((float)(0.0f)))))
		{
			goto IL_0093;
		}
	}
	{
		// NextScreen();
		ScrollSnapBase_NextScreen_m3303034062(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0093:
	{
		// PreviousScreen();
		ScrollSnapBase_PreviousScreen_m1913953057(__this, /*hidden argument*/NULL);
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VerticalScrollSnap__ctor_m450713724 (VerticalScrollSnap_t3018533569 * __this, const RuntimeMethod* method)
{
	{
		ScrollSnapBase__ctor_m1768920712(__this, /*hidden argument*/NULL);
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
// UnityEngine.UI.ExtensionsToggleGroup UnityEngine.UI.ExtensionsToggle::get_Group()
extern "C" IL2CPP_METHOD_ATTR ExtensionsToggleGroup_t1470432035 * ExtensionsToggle_get_Group_m3804327017 (ExtensionsToggle_t2596161736 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Group; }
		ExtensionsToggleGroup_t1470432035 * L_0 = __this->get_m_Group_21();
		return L_0;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggle::set_Group(UnityEngine.UI.ExtensionsToggleGroup)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_set_Group_m495718628 (ExtensionsToggle_t2596161736 * __this, ExtensionsToggleGroup_t1470432035 * ___value0, const RuntimeMethod* method)
{
	{
		// m_Group = value;
		ExtensionsToggleGroup_t1470432035 * L_0 = ___value0;
		__this->set_m_Group_21(L_0);
		// SetToggleGroup(m_Group, true);
		ExtensionsToggleGroup_t1470432035 * L_1 = __this->get_m_Group_21();
		ExtensionsToggle_SetToggleGroup_m1928026226(__this, L_1, (bool)1, /*hidden argument*/NULL);
		// PlayEffect(true);
		ExtensionsToggle_PlayEffect_m859397774(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggle::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle__ctor_m987051837 (ExtensionsToggle_t2596161736 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionsToggle__ctor_m987051837_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ToggleTransition toggleTransition = ToggleTransition.Fade;
		__this->set_toggleTransition_19(1);
		// public ToggleEvent onValueChanged = new ToggleEvent();
		ToggleEvent_t1375193345 * L_0 = (ToggleEvent_t1375193345 *)il2cpp_codegen_object_new(ToggleEvent_t1375193345_il2cpp_TypeInfo_var);
		ToggleEvent__ctor_m4228789907(L_0, /*hidden argument*/NULL);
		__this->set_onValueChanged_22(L_0);
		// public ToggleEventObject onToggleChanged = new ToggleEventObject();
		ToggleEventObject_t1392807266 * L_1 = (ToggleEventObject_t1392807266 *)il2cpp_codegen_object_new(ToggleEventObject_t1392807266_il2cpp_TypeInfo_var);
		ToggleEventObject__ctor_m1904034588(L_1, /*hidden argument*/NULL);
		__this->set_onToggleChanged_23(L_1);
		// protected ExtensionsToggle()
		IL2CPP_RUNTIME_CLASS_INIT(Selectable_t3250028441_il2cpp_TypeInfo_var);
		Selectable__ctor_m58942866(__this, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggle::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_Rebuild_m2038559547 (ExtensionsToggle_t2596161736 * __this, int32_t ___executing0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggle::LayoutComplete()
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_LayoutComplete_m2037174263 (ExtensionsToggle_t2596161736 * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggle::GraphicUpdateComplete()
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_GraphicUpdateComplete_m3603380634 (ExtensionsToggle_t2596161736 * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggle::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_OnEnable_m1267423506 (ExtensionsToggle_t2596161736 * __this, const RuntimeMethod* method)
{
	{
		// base.OnEnable();
		Selectable_OnEnable_m3110490294(__this, /*hidden argument*/NULL);
		// SetToggleGroup(m_Group, false);
		ExtensionsToggleGroup_t1470432035 * L_0 = __this->get_m_Group_21();
		ExtensionsToggle_SetToggleGroup_m1928026226(__this, L_0, (bool)0, /*hidden argument*/NULL);
		// PlayEffect(true);
		ExtensionsToggle_PlayEffect_m859397774(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggle::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_OnDisable_m54391668 (ExtensionsToggle_t2596161736 * __this, const RuntimeMethod* method)
{
	{
		// SetToggleGroup(null, false);
		ExtensionsToggle_SetToggleGroup_m1928026226(__this, (ExtensionsToggleGroup_t1470432035 *)NULL, (bool)0, /*hidden argument*/NULL);
		// base.OnDisable();
		Selectable_OnDisable_m3225138518(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggle::OnDidApplyAnimationProperties()
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_OnDidApplyAnimationProperties_m1280441327 (ExtensionsToggle_t2596161736 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionsToggle_OnDidApplyAnimationProperties_m1280441327_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (graphic != null)
		Graphic_t1660335611 * L_0 = __this->get_graphic_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		// bool oldValue = !Mathf.Approximately(graphic.canvasRenderer.GetColor().a, 0);
		Graphic_t1660335611 * L_2 = __this->get_graphic_20();
		NullCheck(L_2);
		CanvasRenderer_t2598313366 * L_3 = Graphic_get_canvasRenderer_m315509948(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Color_t2555686324  L_4 = CanvasRenderer_GetColor_m2699192164(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_a_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		bool L_6 = Mathf_Approximately_m245805902(NULL /*static, unused*/, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		// if (m_IsOn != oldValue)
		bool L_7 = __this->get_m_IsOn_24();
		bool L_8 = V_0;
		if ((((int32_t)L_7) == ((int32_t)L_8)))
		{
			goto IL_004b;
		}
	}
	{
		// m_IsOn = oldValue;
		bool L_9 = V_0;
		__this->set_m_IsOn_24(L_9);
		// Set(!oldValue);
		bool L_10 = V_0;
		ExtensionsToggle_Set_m3196572754(__this, (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_004b:
	{
		// base.OnDidApplyAnimationProperties();
		Selectable_OnDidApplyAnimationProperties_m1530194632(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggle::SetToggleGroup(UnityEngine.UI.ExtensionsToggleGroup,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_SetToggleGroup_m1928026226 (ExtensionsToggle_t2596161736 * __this, ExtensionsToggleGroup_t1470432035 * ___newGroup0, bool ___setMemberValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionsToggle_SetToggleGroup_m1928026226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ExtensionsToggleGroup_t1470432035 * V_0 = NULL;
	{
		// ExtensionsToggleGroup oldGroup = m_Group;
		ExtensionsToggleGroup_t1470432035 * L_0 = __this->get_m_Group_21();
		V_0 = L_0;
		// if (m_Group != null)
		ExtensionsToggleGroup_t1470432035 * L_1 = __this->get_m_Group_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// m_Group.UnregisterToggle(this);
		ExtensionsToggleGroup_t1470432035 * L_3 = __this->get_m_Group_21();
		NullCheck(L_3);
		ExtensionsToggleGroup_UnregisterToggle_m3687746851(L_3, __this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// if (setMemberValue)
		bool L_4 = ___setMemberValue1;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// m_Group = newGroup;
		ExtensionsToggleGroup_t1470432035 * L_5 = ___newGroup0;
		__this->set_m_Group_21(L_5);
	}

IL_002b:
	{
		// if (m_Group != null && IsActive())
		ExtensionsToggleGroup_t1470432035 * L_6 = __this->get_m_Group_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		bool L_8 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, __this);
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		// m_Group.RegisterToggle(this);
		ExtensionsToggleGroup_t1470432035 * L_9 = __this->get_m_Group_21();
		NullCheck(L_9);
		ExtensionsToggleGroup_RegisterToggle_m1743226738(L_9, __this, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// if (newGroup != null && newGroup != oldGroup && IsOn && IsActive())
		ExtensionsToggleGroup_t1470432035 * L_10 = ___newGroup0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_10, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_007b;
		}
	}
	{
		ExtensionsToggleGroup_t1470432035 * L_12 = ___newGroup0;
		ExtensionsToggleGroup_t1470432035 * L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_007b;
		}
	}
	{
		bool L_15 = ExtensionsToggle_get_IsOn_m1223912286(__this, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		bool L_16 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, __this);
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		// m_Group.NotifyToggleOn(this);
		ExtensionsToggleGroup_t1470432035 * L_17 = __this->get_m_Group_21();
		NullCheck(L_17);
		ExtensionsToggleGroup_NotifyToggleOn_m2414242010(L_17, __this, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.UI.ExtensionsToggle::get_IsOn()
extern "C" IL2CPP_METHOD_ATTR bool ExtensionsToggle_get_IsOn_m1223912286 (ExtensionsToggle_t2596161736 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->get_m_IsOn_24();
		return L_0;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggle::set_IsOn(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_set_IsOn_m2732506648 (ExtensionsToggle_t2596161736 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// Set(value);
		bool L_0 = ___value0;
		ExtensionsToggle_Set_m3196572754(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggle::Set(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_Set_m3196572754 (ExtensionsToggle_t2596161736 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// Set(value, true);
		bool L_0 = ___value0;
		ExtensionsToggle_Set_m3452279008(__this, L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggle::Set(System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_Set_m3452279008 (ExtensionsToggle_t2596161736 * __this, bool ___value0, bool ___sendCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionsToggle_Set_m3452279008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_IsOn == value)
		bool L_0 = __this->get_m_IsOn_24();
		bool L_1 = ___value0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// m_IsOn = value;
		bool L_2 = ___value0;
		__this->set_m_IsOn_24(L_2);
		// if (m_Group != null && IsActive())
		ExtensionsToggleGroup_t1470432035 * L_3 = __this->get_m_Group_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_005c;
		}
	}
	{
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, __this);
		if (!L_5)
		{
			goto IL_005c;
		}
	}
	{
		// if (m_IsOn || (!m_Group.AnyTogglesOn() && !m_Group.AllowSwitchOff))
		bool L_6 = __this->get_m_IsOn_24();
		if (L_6)
		{
			goto IL_0049;
		}
	}
	{
		ExtensionsToggleGroup_t1470432035 * L_7 = __this->get_m_Group_21();
		NullCheck(L_7);
		bool L_8 = ExtensionsToggleGroup_AnyTogglesOn_m1412797946(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_005c;
		}
	}
	{
		ExtensionsToggleGroup_t1470432035 * L_9 = __this->get_m_Group_21();
		NullCheck(L_9);
		bool L_10 = ExtensionsToggleGroup_get_AllowSwitchOff_m2557215788(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_005c;
		}
	}

IL_0049:
	{
		// m_IsOn = true;
		__this->set_m_IsOn_24((bool)1);
		// m_Group.NotifyToggleOn(this);
		ExtensionsToggleGroup_t1470432035 * L_11 = __this->get_m_Group_21();
		NullCheck(L_11);
		ExtensionsToggleGroup_NotifyToggleOn_m2414242010(L_11, __this, /*hidden argument*/NULL);
	}

IL_005c:
	{
		// PlayEffect(toggleTransition == ToggleTransition.None);
		int32_t L_12 = __this->get_toggleTransition_19();
		ExtensionsToggle_PlayEffect_m859397774(__this, (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// if (sendCallback)
		bool L_13 = ___sendCallback1;
		if (!L_13)
		{
			goto IL_008b;
		}
	}
	{
		// onValueChanged.Invoke(m_IsOn);
		ToggleEvent_t1375193345 * L_14 = __this->get_onValueChanged_22();
		bool L_15 = __this->get_m_IsOn_24();
		NullCheck(L_14);
		UnityEvent_1_Invoke_m933614109(L_14, L_15, /*hidden argument*/UnityEvent_1_Invoke_m933614109_RuntimeMethod_var);
		// onToggleChanged.Invoke(this);
		ToggleEventObject_t1392807266 * L_16 = __this->get_onToggleChanged_23();
		NullCheck(L_16);
		UnityEvent_1_Invoke_m234972032(L_16, __this, /*hidden argument*/UnityEvent_1_Invoke_m234972032_RuntimeMethod_var);
	}

IL_008b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggle::PlayEffect(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_PlayEffect_m859397774 (ExtensionsToggle_t2596161736 * __this, bool ___instant0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionsToggle_PlayEffect_m859397774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Graphic_t1660335611 * G_B4_0 = NULL;
	Graphic_t1660335611 * G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	Graphic_t1660335611 * G_B5_1 = NULL;
	float G_B7_0 = 0.0f;
	Graphic_t1660335611 * G_B7_1 = NULL;
	float G_B6_0 = 0.0f;
	Graphic_t1660335611 * G_B6_1 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	Graphic_t1660335611 * G_B8_2 = NULL;
	{
		// if (graphic == null)
		Graphic_t1660335611 * L_0 = __this->get_graphic_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// graphic.CrossFadeAlpha(m_IsOn ? 1f : 0f, instant ? 0f : 0.1f, true);
		Graphic_t1660335611 * L_2 = __this->get_graphic_20();
		bool L_3 = __this->get_m_IsOn_24();
		G_B3_0 = L_2;
		if (L_3)
		{
			G_B4_0 = L_2;
			goto IL_0024;
		}
	}
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B3_0;
		goto IL_0029;
	}

IL_0024:
	{
		G_B5_0 = (1.0f);
		G_B5_1 = G_B4_0;
	}

IL_0029:
	{
		bool L_4 = ___instant0;
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		if (L_4)
		{
			G_B7_0 = G_B5_0;
			G_B7_1 = G_B5_1;
			goto IL_0033;
		}
	}
	{
		G_B8_0 = (0.1f);
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_0038;
	}

IL_0033:
	{
		G_B8_0 = (0.0f);
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_0038:
	{
		NullCheck(G_B8_2);
		VirtActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, G_B8_2, G_B8_1, G_B8_0, (bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggle::Start()
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_Start_m969343585 (ExtensionsToggle_t2596161736 * __this, const RuntimeMethod* method)
{
	{
		// PlayEffect(true);
		ExtensionsToggle_PlayEffect_m859397774(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggle::InternalToggle()
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_InternalToggle_m2736440274 (ExtensionsToggle_t2596161736 * __this, const RuntimeMethod* method)
{
	{
		// if (!IsActive() || !IsInteractable())
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, __this);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean UnityEngine.UI.Selectable::IsInteractable() */, __this);
		if (L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// IsOn = !IsOn;
		bool L_2 = ExtensionsToggle_get_IsOn_m1223912286(__this, /*hidden argument*/NULL);
		ExtensionsToggle_set_IsOn_m2732506648(__this, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggle::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_OnPointerClick_m2382198077 (ExtensionsToggle_t2596161736 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		// if (eventData.button != PointerEventData.InputButton.Left)
		PointerEventData_t3807901092 * L_0 = ___eventData0;
		NullCheck(L_0);
		int32_t L_1 = PointerEventData_get_button_m359423249(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// InternalToggle();
		ExtensionsToggle_InternalToggle_m2736440274(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggle::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggle_OnSubmit_m993866558 (ExtensionsToggle_t2596161736 * __this, BaseEventData_t3903027533 * ___eventData0, const RuntimeMethod* method)
{
	{
		// InternalToggle();
		ExtensionsToggle_InternalToggle_m2736440274(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Transform UnityEngine.UI.ExtensionsToggle::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * ExtensionsToggle_UnityEngine_UI_ICanvasElement_get_transform_m3122000410 (ExtensionsToggle_t2596161736 * __this, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.ExtensionsToggle/ToggleEvent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ToggleEvent__ctor_m4228789907 (ToggleEvent_t1375193345 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleEvent__ctor_m4228789907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m3777630589(__this, /*hidden argument*/UnityEvent_1__ctor_m3777630589_RuntimeMethod_var);
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
// System.Void UnityEngine.UI.ExtensionsToggle/ToggleEventObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ToggleEventObject__ctor_m1904034588 (ToggleEventObject_t1392807266 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleEventObject__ctor_m1904034588_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m3322849880(__this, /*hidden argument*/UnityEvent_1__ctor_m3322849880_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.UI.ExtensionsToggleGroup::get_AllowSwitchOff()
extern "C" IL2CPP_METHOD_ATTR bool ExtensionsToggleGroup_get_AllowSwitchOff_m2557215788 (ExtensionsToggleGroup_t1470432035 * __this, const RuntimeMethod* method)
{
	{
		// public bool AllowSwitchOff { get { return m_AllowSwitchOff; } set { m_AllowSwitchOff = value; } }
		bool L_0 = __this->get_m_AllowSwitchOff_4();
		return L_0;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggleGroup::set_AllowSwitchOff(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggleGroup_set_AllowSwitchOff_m239496778 (ExtensionsToggleGroup_t1470432035 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool AllowSwitchOff { get { return m_AllowSwitchOff; } set { m_AllowSwitchOff = value; } }
		bool L_0 = ___value0;
		__this->set_m_AllowSwitchOff_4(L_0);
		// public bool AllowSwitchOff { get { return m_AllowSwitchOff; } set { m_AllowSwitchOff = value; } }
		return;
	}
}
// UnityEngine.UI.ExtensionsToggle UnityEngine.UI.ExtensionsToggleGroup::get_SelectedToggle()
extern "C" IL2CPP_METHOD_ATTR ExtensionsToggle_t2596161736 * ExtensionsToggleGroup_get_SelectedToggle_m564148476 (ExtensionsToggleGroup_t1470432035 * __this, const RuntimeMethod* method)
{
	{
		// public ExtensionsToggle SelectedToggle { get; private set; }
		ExtensionsToggle_t2596161736 * L_0 = __this->get_U3CSelectedToggleU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggleGroup::set_SelectedToggle(UnityEngine.UI.ExtensionsToggle)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggleGroup_set_SelectedToggle_m1092346406 (ExtensionsToggleGroup_t1470432035 * __this, ExtensionsToggle_t2596161736 * ___value0, const RuntimeMethod* method)
{
	{
		// public ExtensionsToggle SelectedToggle { get; private set; }
		ExtensionsToggle_t2596161736 * L_0 = ___value0;
		__this->set_U3CSelectedToggleU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggleGroup::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggleGroup__ctor_m604027088 (ExtensionsToggleGroup_t1470432035 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionsToggleGroup__ctor_m604027088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<ExtensionsToggle> m_Toggles = new List<ExtensionsToggle>();
		List_1_t4068236478 * L_0 = (List_1_t4068236478 *)il2cpp_codegen_object_new(List_1_t4068236478_il2cpp_TypeInfo_var);
		List_1__ctor_m3922113147(L_0, /*hidden argument*/List_1__ctor_m3922113147_RuntimeMethod_var);
		__this->set_m_Toggles_5(L_0);
		// public ToggleGroupEvent onToggleGroupChanged = new ToggleGroupEvent();
		ToggleGroupEvent_t2519216546 * L_1 = (ToggleGroupEvent_t2519216546 *)il2cpp_codegen_object_new(ToggleGroupEvent_t2519216546_il2cpp_TypeInfo_var);
		ToggleGroupEvent__ctor_m3122901364(L_1, /*hidden argument*/NULL);
		__this->set_onToggleGroupChanged_6(L_1);
		// public ToggleGroupEvent onToggleGroupToggleChanged = new ToggleGroupEvent();
		ToggleGroupEvent_t2519216546 * L_2 = (ToggleGroupEvent_t2519216546 *)il2cpp_codegen_object_new(ToggleGroupEvent_t2519216546_il2cpp_TypeInfo_var);
		ToggleGroupEvent__ctor_m3122901364(L_2, /*hidden argument*/NULL);
		__this->set_onToggleGroupToggleChanged_7(L_2);
		// protected ExtensionsToggleGroup()
		UIBehaviour__ctor_m4230637738(__this, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggleGroup::ValidateToggleIsInGroup(UnityEngine.UI.ExtensionsToggle)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggleGroup_ValidateToggleIsInGroup_m109885595 (ExtensionsToggleGroup_t1470432035 * __this, ExtensionsToggle_t2596161736 * ___toggle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionsToggleGroup_ValidateToggleIsInGroup_m109885595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (toggle == null || !m_Toggles.Contains(toggle))
		ExtensionsToggle_t2596161736 * L_0 = ___toggle0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		List_1_t4068236478 * L_2 = __this->get_m_Toggles_5();
		ExtensionsToggle_t2596161736 * L_3 = ___toggle0;
		NullCheck(L_2);
		bool L_4 = List_1_Contains_m1961169762(L_2, L_3, /*hidden argument*/List_1_Contains_m1961169762_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0035;
		}
	}

IL_0017:
	{
		// throw new ArgumentException(string.Format("Toggle {0} is not part of ToggleGroup {1}", new object[] { toggle, this }));
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		ExtensionsToggle_t2596161736 * L_7 = ___toggle0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, __this);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)__this);
		String_t* L_9 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral503068089, L_8, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_10 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, ExtensionsToggleGroup_ValidateToggleIsInGroup_m109885595_RuntimeMethod_var);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggleGroup::NotifyToggleOn(UnityEngine.UI.ExtensionsToggle)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggleGroup_NotifyToggleOn_m2414242010 (ExtensionsToggleGroup_t1470432035 * __this, ExtensionsToggle_t2596161736 * ___toggle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionsToggleGroup_NotifyToggleOn_m2414242010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// ValidateToggleIsInGroup(toggle);
		ExtensionsToggle_t2596161736 * L_0 = ___toggle0;
		ExtensionsToggleGroup_ValidateToggleIsInGroup_m109885595(__this, L_0, /*hidden argument*/NULL);
		// for (var i = 0; i < m_Toggles.Count; i++)
		V_0 = 0;
		goto IL_003e;
	}

IL_000b:
	{
		// if (m_Toggles[i] == toggle)
		List_1_t4068236478 * L_1 = __this->get_m_Toggles_5();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		ExtensionsToggle_t2596161736 * L_3 = List_1_get_Item_m1632548537(L_1, L_2, /*hidden argument*/List_1_get_Item_m1632548537_RuntimeMethod_var);
		ExtensionsToggle_t2596161736 * L_4 = ___toggle0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// SelectedToggle = toggle;
		ExtensionsToggle_t2596161736 * L_6 = ___toggle0;
		ExtensionsToggleGroup_set_SelectedToggle_m1092346406(__this, L_6, /*hidden argument*/NULL);
		// continue;
		goto IL_003a;
	}

IL_0028:
	{
		// m_Toggles[i].IsOn = false;
		List_1_t4068236478 * L_7 = __this->get_m_Toggles_5();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		ExtensionsToggle_t2596161736 * L_9 = List_1_get_Item_m1632548537(L_7, L_8, /*hidden argument*/List_1_get_Item_m1632548537_RuntimeMethod_var);
		NullCheck(L_9);
		ExtensionsToggle_set_IsOn_m2732506648(L_9, (bool)0, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// for (var i = 0; i < m_Toggles.Count; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_003e:
	{
		// for (var i = 0; i < m_Toggles.Count; i++)
		int32_t L_11 = V_0;
		List_1_t4068236478 * L_12 = __this->get_m_Toggles_5();
		NullCheck(L_12);
		int32_t L_13 = List_1_get_Count_m2396720711(L_12, /*hidden argument*/List_1_get_Count_m2396720711_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_000b;
		}
	}
	{
		// onToggleGroupChanged.Invoke(AnyTogglesOn());
		ToggleGroupEvent_t2519216546 * L_14 = __this->get_onToggleGroupChanged_6();
		bool L_15 = ExtensionsToggleGroup_AnyTogglesOn_m1412797946(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		UnityEvent_1_Invoke_m933614109(L_14, L_15, /*hidden argument*/UnityEvent_1_Invoke_m933614109_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggleGroup::UnregisterToggle(UnityEngine.UI.ExtensionsToggle)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggleGroup_UnregisterToggle_m3687746851 (ExtensionsToggleGroup_t1470432035 * __this, ExtensionsToggle_t2596161736 * ___toggle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionsToggleGroup_UnregisterToggle_m3687746851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Toggles.Contains(toggle))
		List_1_t4068236478 * L_0 = __this->get_m_Toggles_5();
		ExtensionsToggle_t2596161736 * L_1 = ___toggle0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_m1961169762(L_0, L_1, /*hidden argument*/List_1_Contains_m1961169762_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// m_Toggles.Remove(toggle);
		List_1_t4068236478 * L_3 = __this->get_m_Toggles_5();
		ExtensionsToggle_t2596161736 * L_4 = ___toggle0;
		NullCheck(L_3);
		List_1_Remove_m2913572375(L_3, L_4, /*hidden argument*/List_1_Remove_m2913572375_RuntimeMethod_var);
		// toggle.onValueChanged.RemoveListener(NotifyToggleChanged);
		ExtensionsToggle_t2596161736 * L_5 = ___toggle0;
		NullCheck(L_5);
		ToggleEvent_t1375193345 * L_6 = L_5->get_onValueChanged_22();
		intptr_t L_7 = (intptr_t)ExtensionsToggleGroup_NotifyToggleChanged_m2968039673_RuntimeMethod_var;
		UnityAction_1_t682124106 * L_8 = (UnityAction_1_t682124106 *)il2cpp_codegen_object_new(UnityAction_1_t682124106_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m3007623985(L_8, __this, L_7, /*hidden argument*/UnityAction_1__ctor_m3007623985_RuntimeMethod_var);
		NullCheck(L_6);
		UnityEvent_1_RemoveListener_m1238899611(L_6, L_8, /*hidden argument*/UnityEvent_1_RemoveListener_m1238899611_RuntimeMethod_var);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggleGroup::NotifyToggleChanged(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggleGroup_NotifyToggleChanged_m2968039673 (ExtensionsToggleGroup_t1470432035 * __this, bool ___isOn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionsToggleGroup_NotifyToggleChanged_m2968039673_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onToggleGroupToggleChanged.Invoke(isOn);
		ToggleGroupEvent_t2519216546 * L_0 = __this->get_onToggleGroupToggleChanged_7();
		bool L_1 = ___isOn0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_m933614109(L_0, L_1, /*hidden argument*/UnityEvent_1_Invoke_m933614109_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggleGroup::RegisterToggle(UnityEngine.UI.ExtensionsToggle)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggleGroup_RegisterToggle_m1743226738 (ExtensionsToggleGroup_t1470432035 * __this, ExtensionsToggle_t2596161736 * ___toggle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionsToggleGroup_RegisterToggle_m1743226738_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_Toggles.Contains(toggle))
		List_1_t4068236478 * L_0 = __this->get_m_Toggles_5();
		ExtensionsToggle_t2596161736 * L_1 = ___toggle0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_m1961169762(L_0, L_1, /*hidden argument*/List_1_Contains_m1961169762_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		// m_Toggles.Add(toggle);
		List_1_t4068236478 * L_3 = __this->get_m_Toggles_5();
		ExtensionsToggle_t2596161736 * L_4 = ___toggle0;
		NullCheck(L_3);
		List_1_Add_m2091984383(L_3, L_4, /*hidden argument*/List_1_Add_m2091984383_RuntimeMethod_var);
		// toggle.onValueChanged.AddListener(NotifyToggleChanged);
		ExtensionsToggle_t2596161736 * L_5 = ___toggle0;
		NullCheck(L_5);
		ToggleEvent_t1375193345 * L_6 = L_5->get_onValueChanged_22();
		intptr_t L_7 = (intptr_t)ExtensionsToggleGroup_NotifyToggleChanged_m2968039673_RuntimeMethod_var;
		UnityAction_1_t682124106 * L_8 = (UnityAction_1_t682124106 *)il2cpp_codegen_object_new(UnityAction_1_t682124106_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m3007623985(L_8, __this, L_7, /*hidden argument*/UnityAction_1__ctor_m3007623985_RuntimeMethod_var);
		NullCheck(L_6);
		UnityEvent_1_AddListener_m2847988282(L_6, L_8, /*hidden argument*/UnityEvent_1_AddListener_m2847988282_RuntimeMethod_var);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.UI.ExtensionsToggleGroup::AnyTogglesOn()
extern "C" IL2CPP_METHOD_ATTR bool ExtensionsToggleGroup_AnyTogglesOn_m1412797946 (ExtensionsToggleGroup_t1470432035 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionsToggleGroup_AnyTogglesOn_m1412797946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Predicate_1_t3421455860 * G_B2_0 = NULL;
	List_1_t4068236478 * G_B2_1 = NULL;
	Predicate_1_t3421455860 * G_B1_0 = NULL;
	List_1_t4068236478 * G_B1_1 = NULL;
	{
		// return m_Toggles.Find(x => x.IsOn) != null;
		List_1_t4068236478 * L_0 = __this->get_m_Toggles_5();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t1762776327_il2cpp_TypeInfo_var);
		Predicate_1_t3421455860 * L_1 = ((U3CU3Ec_t1762776327_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1762776327_il2cpp_TypeInfo_var))->get_U3CU3E9__18_0_1();
		Predicate_1_t3421455860 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t1762776327_il2cpp_TypeInfo_var);
		U3CU3Ec_t1762776327 * L_3 = ((U3CU3Ec_t1762776327_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1762776327_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_4 = (intptr_t)U3CU3Ec_U3CAnyTogglesOnU3Eb__18_0_m1309946229_RuntimeMethod_var;
		Predicate_1_t3421455860 * L_5 = (Predicate_1_t3421455860 *)il2cpp_codegen_object_new(Predicate_1_t3421455860_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m4046004448(L_5, L_3, L_4, /*hidden argument*/Predicate_1__ctor_m4046004448_RuntimeMethod_var);
		Predicate_1_t3421455860 * L_6 = L_5;
		((U3CU3Ec_t1762776327_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1762776327_il2cpp_TypeInfo_var))->set_U3CU3E9__18_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		NullCheck(G_B2_1);
		ExtensionsToggle_t2596161736 * L_7 = List_1_Find_m1863931225(G_B2_1, G_B2_0, /*hidden argument*/List_1_Find_m1863931225_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ExtensionsToggle> UnityEngine.UI.ExtensionsToggleGroup::ActiveToggles()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ExtensionsToggleGroup_ActiveToggles_m3969557810 (ExtensionsToggleGroup_t1470432035 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionsToggleGroup_ActiveToggles_m3969557810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t4105555595 * G_B2_0 = NULL;
	List_1_t4068236478 * G_B2_1 = NULL;
	Func_2_t4105555595 * G_B1_0 = NULL;
	List_1_t4068236478 * G_B1_1 = NULL;
	{
		// return m_Toggles.Where(x => x.IsOn);
		List_1_t4068236478 * L_0 = __this->get_m_Toggles_5();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t1762776327_il2cpp_TypeInfo_var);
		Func_2_t4105555595 * L_1 = ((U3CU3Ec_t1762776327_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1762776327_il2cpp_TypeInfo_var))->get_U3CU3E9__19_0_2();
		Func_2_t4105555595 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t1762776327_il2cpp_TypeInfo_var);
		U3CU3Ec_t1762776327 * L_3 = ((U3CU3Ec_t1762776327_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1762776327_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_4 = (intptr_t)U3CU3Ec_U3CActiveTogglesU3Eb__19_0_m2656202366_RuntimeMethod_var;
		Func_2_t4105555595 * L_5 = (Func_2_t4105555595 *)il2cpp_codegen_object_new(Func_2_t4105555595_il2cpp_TypeInfo_var);
		Func_2__ctor_m4008246522(L_5, L_3, L_4, /*hidden argument*/Func_2__ctor_m4008246522_RuntimeMethod_var);
		Func_2_t4105555595 * L_6 = L_5;
		((U3CU3Ec_t1762776327_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1762776327_il2cpp_TypeInfo_var))->set_U3CU3E9__19_0_2(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_7 = Enumerable_Where_TisExtensionsToggle_t2596161736_m2906480068(NULL /*static, unused*/, G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Where_TisExtensionsToggle_t2596161736_m2906480068_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggleGroup::SetAllTogglesOff()
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggleGroup_SetAllTogglesOff_m3584637526 (ExtensionsToggleGroup_t1470432035 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionsToggleGroup_SetAllTogglesOff_m3584637526_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// bool oldAllowSwitchOff = m_AllowSwitchOff;
		bool L_0 = __this->get_m_AllowSwitchOff_4();
		V_0 = L_0;
		// m_AllowSwitchOff = true;
		__this->set_m_AllowSwitchOff_4((bool)1);
		// for (var i = 0; i < m_Toggles.Count; i++)
		V_1 = 0;
		goto IL_0028;
	}

IL_0012:
	{
		// m_Toggles[i].IsOn = false;
		List_1_t4068236478 * L_1 = __this->get_m_Toggles_5();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		ExtensionsToggle_t2596161736 * L_3 = List_1_get_Item_m1632548537(L_1, L_2, /*hidden argument*/List_1_get_Item_m1632548537_RuntimeMethod_var);
		NullCheck(L_3);
		ExtensionsToggle_set_IsOn_m2732506648(L_3, (bool)0, /*hidden argument*/NULL);
		// for (var i = 0; i < m_Toggles.Count; i++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0028:
	{
		// for (var i = 0; i < m_Toggles.Count; i++)
		int32_t L_5 = V_1;
		List_1_t4068236478 * L_6 = __this->get_m_Toggles_5();
		NullCheck(L_6);
		int32_t L_7 = List_1_get_Count_m2396720711(L_6, /*hidden argument*/List_1_get_Count_m2396720711_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0012;
		}
	}
	{
		// m_AllowSwitchOff = oldAllowSwitchOff;
		bool L_8 = V_0;
		__this->set_m_AllowSwitchOff_4(L_8);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggleGroup::HasTheGroupToggle(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggleGroup_HasTheGroupToggle_m3536484585 (ExtensionsToggleGroup_t1470432035 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionsToggleGroup_HasTheGroupToggle_m3536484585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Testing, the group has toggled [" + value + "]");
		String_t* L_0 = Boolean_ToString_m2664721875((bool*)(&___value0), /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3288259443, L_0, _stringLiteral3452614643, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggleGroup::HasAToggleFlipped(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ExtensionsToggleGroup_HasAToggleFlipped_m1398989923 (ExtensionsToggleGroup_t1470432035 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionsToggleGroup_HasAToggleFlipped_m1398989923_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Testing, a toggle has toggled [" + value + "]");
		String_t* L_0 = Boolean_ToString_m2664721875((bool*)(&___value0), /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral869358600, L_0, _stringLiteral3452614643, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// }
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
// System.Void UnityEngine.UI.ExtensionsToggleGroup/<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1215978411 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m1215978411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1762776327 * L_0 = (U3CU3Ec_t1762776327 *)il2cpp_codegen_object_new(U3CU3Ec_t1762776327_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1952556406(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1762776327_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1762776327_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.ExtensionsToggleGroup/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1952556406 (U3CU3Ec_t1762776327 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UI.ExtensionsToggleGroup/<>c::<AnyTogglesOn>b__18_0(UnityEngine.UI.ExtensionsToggle)
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CAnyTogglesOnU3Eb__18_0_m1309946229 (U3CU3Ec_t1762776327 * __this, ExtensionsToggle_t2596161736 * ___x0, const RuntimeMethod* method)
{
	{
		// return m_Toggles.Find(x => x.IsOn) != null;
		ExtensionsToggle_t2596161736 * L_0 = ___x0;
		NullCheck(L_0);
		bool L_1 = ExtensionsToggle_get_IsOn_m1223912286(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.UI.ExtensionsToggleGroup/<>c::<ActiveToggles>b__19_0(UnityEngine.UI.ExtensionsToggle)
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CActiveTogglesU3Eb__19_0_m2656202366 (U3CU3Ec_t1762776327 * __this, ExtensionsToggle_t2596161736 * ___x0, const RuntimeMethod* method)
{
	{
		// return m_Toggles.Where(x => x.IsOn);
		ExtensionsToggle_t2596161736 * L_0 = ___x0;
		NullCheck(L_0);
		bool L_1 = ExtensionsToggle_get_IsOn_m1223912286(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void UnityEngine.UI.ExtensionsToggleGroup/ToggleGroupEvent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ToggleGroupEvent__ctor_m3122901364 (ToggleGroupEvent_t2519216546 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleGroupEvent__ctor_m3122901364_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m3777630589(__this, /*hidden argument*/UnityEvent_1__ctor_m3777630589_RuntimeMethod_var);
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
// System.Void UnityEngine.UI.ReturnKeyTriggersButton::Start()
extern "C" IL2CPP_METHOD_ATTR void ReturnKeyTriggersButton_Start_m4233398959 (ReturnKeyTriggersButton_t3211538107 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReturnKeyTriggersButton_Start_m4233398959_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _system = EventSystem.current;
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t1003666588_il2cpp_TypeInfo_var);
		EventSystem_t1003666588 * L_0 = EventSystem_get_current_m1416377559(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__system_4(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ReturnKeyTriggersButton::RemoveHighlight()
extern "C" IL2CPP_METHOD_ATTR void ReturnKeyTriggersButton_RemoveHighlight_m3430807560 (ReturnKeyTriggersButton_t3211538107 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReturnKeyTriggersButton_RemoveHighlight_m3430807560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// button.OnPointerExit(new PointerEventData(_system));
		Button_t4055032469 * L_0 = __this->get_button_5();
		EventSystem_t1003666588 * L_1 = __this->get__system_4();
		PointerEventData_t3807901092 * L_2 = (PointerEventData_t3807901092 *)il2cpp_codegen_object_new(PointerEventData_t3807901092_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m2263609344(L_2, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< PointerEventData_t3807901092 * >::Invoke(35 /* System.Void UnityEngine.UI.Selectable::OnPointerExit(UnityEngine.EventSystems.PointerEventData) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ReturnKeyTriggersButton::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" IL2CPP_METHOD_ATTR void ReturnKeyTriggersButton_OnSubmit_m3896732961 (ReturnKeyTriggersButton_t3211538107 * __this, BaseEventData_t3903027533 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReturnKeyTriggersButton_OnSubmit_m3896732961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (highlight) button.OnPointerEnter(new PointerEventData(_system));
		bool L_0 = __this->get_highlight_6();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// if (highlight) button.OnPointerEnter(new PointerEventData(_system));
		Button_t4055032469 * L_1 = __this->get_button_5();
		EventSystem_t1003666588 * L_2 = __this->get__system_4();
		PointerEventData_t3807901092 * L_3 = (PointerEventData_t3807901092 *)il2cpp_codegen_object_new(PointerEventData_t3807901092_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m2263609344(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< PointerEventData_t3807901092 * >::Invoke(34 /* System.Void UnityEngine.UI.Selectable::OnPointerEnter(UnityEngine.EventSystems.PointerEventData) */, L_1, L_3);
	}

IL_001e:
	{
		// button.OnPointerClick(new PointerEventData(_system));
		Button_t4055032469 * L_4 = __this->get_button_5();
		EventSystem_t1003666588 * L_5 = __this->get__system_4();
		PointerEventData_t3807901092 * L_6 = (PointerEventData_t3807901092 *)il2cpp_codegen_object_new(PointerEventData_t3807901092_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m2263609344(L_6, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< PointerEventData_t3807901092 * >::Invoke(41 /* System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData) */, L_4, L_6);
		// if (highlight) Invoke("RemoveHighlight", highlightDuration);
		bool L_7 = __this->get_highlight_6();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		// if (highlight) Invoke("RemoveHighlight", highlightDuration);
		float L_8 = __this->get_highlightDuration_7();
		MonoBehaviour_Invoke_m4227543964(__this, _stringLiteral2174982236, L_8, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ReturnKeyTriggersButton::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ReturnKeyTriggersButton__ctor_m1034921087 (ReturnKeyTriggersButton_t3211538107 * __this, const RuntimeMethod* method)
{
	{
		// private bool highlight = true;
		__this->set_highlight_6((bool)1);
		// public float highlightDuration = 0.2f;
		__this->set_highlightDuration_7((0.2f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector3 Unoper.Unity.Utils.LerpPosition::GetPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  LerpPosition_GetPosition_m1124823380 (LerpPosition_t3084015375 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LerpPosition_GetPosition_m1124823380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t1444911251* V_0 = NULL;
	float V_1 = 0.0f;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	Func_2_t3660230206 * G_B2_0 = NULL;
	SingleU5BU5D_t1444911251* G_B2_1 = NULL;
	Func_2_t3660230206 * G_B1_0 = NULL;
	SingleU5BU5D_t1444911251* G_B1_1 = NULL;
	{
		// float[] rands = new float[ipositions.Length].Select(x => Random.Range(0, 1f)).ToArray();
		IPositionU5BU5D_t982770509* L_0 = __this->get_ipositions_4();
		NullCheck(L_0);
		SingleU5BU5D_t1444911251* L_1 = (SingleU5BU5D_t1444911251*)SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))));
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t909697984_il2cpp_TypeInfo_var);
		Func_2_t3660230206 * L_2 = ((U3CU3Ec_t909697984_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t909697984_il2cpp_TypeInfo_var))->get_U3CU3E9__1_0_1();
		Func_2_t3660230206 * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t909697984_il2cpp_TypeInfo_var);
		U3CU3Ec_t909697984 * L_4 = ((U3CU3Ec_t909697984_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t909697984_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_5 = (intptr_t)U3CU3Ec_U3CGetPositionU3Eb__1_0_m1750348014_RuntimeMethod_var;
		Func_2_t3660230206 * L_6 = (Func_2_t3660230206 *)il2cpp_codegen_object_new(Func_2_t3660230206_il2cpp_TypeInfo_var);
		Func_2__ctor_m1950624581(L_6, L_4, L_5, /*hidden argument*/Func_2__ctor_m1950624581_RuntimeMethod_var);
		Func_2_t3660230206 * L_7 = L_6;
		((U3CU3Ec_t909697984_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t909697984_il2cpp_TypeInfo_var))->set_U3CU3E9__1_0_1(L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002c:
	{
		RuntimeObject* L_8 = Enumerable_Select_TisSingle_t1397266774_TisSingle_t1397266774_m618648055(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisSingle_t1397266774_TisSingle_t1397266774_m618648055_RuntimeMethod_var);
		SingleU5BU5D_t1444911251* L_9 = Enumerable_ToArray_TisSingle_t1397266774_m536015028(NULL /*static, unused*/, L_8, /*hidden argument*/Enumerable_ToArray_TisSingle_t1397266774_m536015028_RuntimeMethod_var);
		V_0 = L_9;
		// float sum = rands.Sum();
		SingleU5BU5D_t1444911251* L_10 = V_0;
		float L_11 = Enumerable_Sum_m4067260984(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// var position = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_12 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_12;
		// for (int i = 0; i < ipositions.Length; i++)
		V_3 = 0;
		goto IL_006a;
	}

IL_0048:
	{
		// position += ipositions[i].GetPosition() * (rands[i] / sum);
		Vector3_t3722313464  L_13 = V_2;
		IPositionU5BU5D_t982770509* L_14 = __this->get_ipositions_4();
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Vector3_t3722313464  L_18 = InterfaceFuncInvoker0< Vector3_t3722313464  >::Invoke(0 /* UnityEngine.Vector3 Unoper.Unity.Utils.IPosition::GetPosition() */, IPosition_t2226019748_il2cpp_TypeInfo_var, L_17);
		SingleU5BU5D_t1444911251* L_19 = V_0;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		float L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		float L_23 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_24 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_18, ((float)((float)L_22/(float)L_23)), /*hidden argument*/NULL);
		Vector3_t3722313464  L_25 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_13, L_24, /*hidden argument*/NULL);
		V_2 = L_25;
		// for (int i = 0; i < ipositions.Length; i++)
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_006a:
	{
		// for (int i = 0; i < ipositions.Length; i++)
		int32_t L_27 = V_3;
		IPositionU5BU5D_t982770509* L_28 = __this->get_ipositions_4();
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))))))
		{
			goto IL_0048;
		}
	}
	{
		// return position;
		Vector3_t3722313464  L_29 = V_2;
		return L_29;
	}
}
// System.Void Unoper.Unity.Utils.LerpPosition::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LerpPosition__ctor_m363717494 (LerpPosition_t3084015375 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void Unoper.Unity.Utils.LerpPosition/<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3513572747 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m3513572747_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t909697984 * L_0 = (U3CU3Ec_t909697984 *)il2cpp_codegen_object_new(U3CU3Ec_t909697984_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1517696372(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t909697984_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t909697984_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unoper.Unity.Utils.LerpPosition/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1517696372 (U3CU3Ec_t909697984 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Unoper.Unity.Utils.LerpPosition/<>c::<GetPosition>b__1_0(System.Single)
extern "C" IL2CPP_METHOD_ATTR float U3CU3Ec_U3CGetPositionU3Eb__1_0_m1750348014 (U3CU3Ec_t909697984 * __this, float ___x0, const RuntimeMethod* method)
{
	{
		// float[] rands = new float[ipositions.Length].Select(x => Random.Range(0, 1f)).ToArray();
		float L_0 = Random_Range_m2202990745(NULL /*static, unused*/, (0.0f), (1.0f), /*hidden argument*/NULL);
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
// UnityEngine.Vector3 Unoper.Unity.Utils.RelativePosition::GetPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RelativePosition_GetPosition_m1089523561 (RelativePosition_t539149730 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RelativePosition_GetPosition_m1089523561_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Base.position + Offset;
		Transform_t3600365921 * L_0 = __this->get_Base_4();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = __this->get_Offset_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Unoper.Unity.Utils.RelativePosition::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RelativePosition__ctor_m840789943 (RelativePosition_t539149730 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void Unoper.Unity.Utils.Remover::Remove()
extern "C" IL2CPP_METHOD_ATTR void Remover_Remove_m3730739065 (Remover_t313276069 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Remover_Remove_m3730739065_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_t3328599146* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var gameObject in gameObjects)
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_gameObjects_4();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0017;
	}

IL_000b:
	{
		// foreach (var gameObject in gameObjects)
		GameObjectU5BU5D_t3328599146* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t1113636619 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// Destroy(gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0017:
	{
		// foreach (var gameObject in gameObjects)
		int32_t L_6 = V_1;
		GameObjectU5BU5D_t3328599146* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unoper.Unity.Utils.Remover::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Remover__ctor_m4168719273 (Remover_t313276069 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void Unoper.Unity.Utils.Sequencer::Start()
extern "C" IL2CPP_METHOD_ATTR void Sequencer_Start_m318104862 (Sequencer_t2140344483 * __this, const RuntimeMethod* method)
{
	{
		// if(executeOnStart)
		bool L_0 = __this->get_executeOnStart_4();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// ExecuteSequence();
		Sequencer_ExecuteSequence_m3136185572(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Unoper.Unity.Utils.Sequencer::ExecuteSequence()
extern "C" IL2CPP_METHOD_ATTR void Sequencer_ExecuteSequence_m3136185572 (Sequencer_t2140344483 * __this, const RuntimeMethod* method)
{
	UnityEventU5BU5D_t4042265822* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var unityEvent in UnityEventSequence)
		UnityEventU5BU5D_t4042265822* L_0 = __this->get_UnityEventSequence_5();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0017;
	}

IL_000b:
	{
		// foreach (var unityEvent in UnityEventSequence)
		UnityEventU5BU5D_t4042265822* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		UnityEvent_t2581268647 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// unityEvent.Invoke();
		NullCheck(L_4);
		UnityEvent_Invoke_m3065672636(L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0017:
	{
		// foreach (var unityEvent in UnityEventSequence)
		int32_t L_6 = V_1;
		UnityEventU5BU5D_t4042265822* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unoper.Unity.Utils.Sequencer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Sequencer__ctor_m3656886044 (Sequencer_t2140344483 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector3 Unoper.Unity.Utils.SpherePosition::GetPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  SpherePosition_GetPosition_m3002760028 (SpherePosition_t3726833336 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpherePosition_GetPosition_m3002760028_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Random.insideUnitSphere * radius;
		Vector3_t3722313464  L_0 = Random_get_insideUnitSphere_m3252929179(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = __this->get_radius_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Unoper.Unity.Utils.SpherePosition::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SpherePosition__ctor_m3667918159 (SpherePosition_t3726833336 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector3 Unoper.Unity.Utils.SumPosition::GetPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  SumPosition_GetPosition_m3878572370 (SumPosition_t3390953611 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SumPosition_GetPosition_m3878572370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	IPositionU5BU5D_t982770509* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		// var sum = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		// foreach (var iposition in ipositions)
		IPositionU5BU5D_t982770509* L_1 = __this->get_ipositions_4();
		V_1 = L_1;
		V_2 = 0;
		goto IL_0026;
	}

IL_0011:
	{
		// foreach (var iposition in ipositions)
		IPositionU5BU5D_t982770509* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// sum += iposition.GetPosition();
		Vector3_t3722313464  L_6 = V_0;
		RuntimeObject* L_7 = V_3;
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = InterfaceFuncInvoker0< Vector3_t3722313464  >::Invoke(0 /* UnityEngine.Vector3 Unoper.Unity.Utils.IPosition::GetPosition() */, IPosition_t2226019748_il2cpp_TypeInfo_var, L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_9 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0026:
	{
		// foreach (var iposition in ipositions)
		int32_t L_11 = V_2;
		IPositionU5BU5D_t982770509* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_0011;
		}
	}
	{
		// return sum;
		Vector3_t3722313464  L_13 = V_0;
		return L_13;
	}
}
// System.Void Unoper.Unity.Utils.SumPosition::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SumPosition__ctor_m701677566 (SumPosition_t3390953611 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void Unoper.Unity.Utils.Timer::Begin()
extern "C" IL2CPP_METHOD_ATTR void Timer_Begin_m3627132958 (Timer_t3412046349 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(Countdown());
		RuntimeObject* L_0 = Timer_Countdown_m3824537230(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Unoper.Unity.Utils.Timer::Countdown()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Timer_Countdown_m3824537230 (Timer_t3412046349 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Timer_Countdown_m3824537230_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCountdownU3Ed__6_t2310584700 * L_0 = (U3CCountdownU3Ed__6_t2310584700 *)il2cpp_codegen_object_new(U3CCountdownU3Ed__6_t2310584700_il2cpp_TypeInfo_var);
		U3CCountdownU3Ed__6__ctor_m898628999(L_0, 0, /*hidden argument*/NULL);
		U3CCountdownU3Ed__6_t2310584700 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Unoper.Unity.Utils.Timer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Timer__ctor_m1258652907 (Timer_t3412046349 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void Unoper.Unity.Utils.Timer/<Countdown>d__6::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CCountdownU3Ed__6__ctor_m898628999 (U3CCountdownU3Ed__6_t2310584700 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Unoper.Unity.Utils.Timer/<Countdown>d__6::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CCountdownU3Ed__6_System_IDisposable_Dispose_m578832306 (U3CCountdownU3Ed__6_t2310584700 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Unoper.Unity.Utils.Timer/<Countdown>d__6::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CCountdownU3Ed__6_MoveNext_m1381097623 (U3CCountdownU3Ed__6_t2310584700 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCountdownU3Ed__6_MoveNext_m1381097623_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Timer_t3412046349 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Timer_t3412046349 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0077;
			}
			case 2:
			{
				goto IL_00c4;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// OnBegin.Invoke();
		Timer_t3412046349 * L_3 = V_1;
		NullCheck(L_3);
		UnityEvent_t2581268647 * L_4 = L_3->get_OnBegin_6();
		NullCheck(L_4);
		UnityEvent_Invoke_m3065672636(L_4, /*hidden argument*/NULL);
		// if(IntervalTime > 0) {
		Timer_t3412046349 * L_5 = V_1;
		NullCheck(L_5);
		float L_6 = L_5->get_IntervalTime_5();
		if ((!(((float)L_6) > ((float)(0.0f)))))
		{
			goto IL_00aa;
		}
	}
	{
		// var intervals = CountdownTime / IntervalTime;
		Timer_t3412046349 * L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->get_CountdownTime_4();
		Timer_t3412046349 * L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->get_IntervalTime_5();
		__this->set_U3CintervalsU3E5__2_3(((float)((float)L_8/(float)L_10)));
		// for(int i = 0; i < intervals; i++)
		__this->set_U3CiU3E5__3_4(0);
		goto IL_0099;
	}

IL_005d:
	{
		// yield return new WaitForSeconds(IntervalTime);
		Timer_t3412046349 * L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->get_IntervalTime_5();
		WaitForSeconds_t1699091251 * L_13 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_13, L_12, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_13);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0077:
	{
		__this->set_U3CU3E1__state_0((-1));
		// OnInterval.Invoke();
		Timer_t3412046349 * L_14 = V_1;
		NullCheck(L_14);
		UnityEvent_t2581268647 * L_15 = L_14->get_OnInterval_7();
		NullCheck(L_15);
		UnityEvent_Invoke_m3065672636(L_15, /*hidden argument*/NULL);
		// for(int i = 0; i < intervals; i++)
		int32_t L_16 = __this->get_U3CiU3E5__3_4();
		V_2 = L_16;
		int32_t L_17 = V_2;
		__this->set_U3CiU3E5__3_4(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
	}

IL_0099:
	{
		// for(int i = 0; i < intervals; i++)
		int32_t L_18 = __this->get_U3CiU3E5__3_4();
		float L_19 = __this->get_U3CintervalsU3E5__2_3();
		if ((((float)(((float)((float)L_18)))) < ((float)L_19)))
		{
			goto IL_005d;
		}
	}
	{
		// }
		goto IL_00cb;
	}

IL_00aa:
	{
		// yield return new WaitForSeconds(CountdownTime);
		Timer_t3412046349 * L_20 = V_1;
		NullCheck(L_20);
		float L_21 = L_20->get_CountdownTime_4();
		WaitForSeconds_t1699091251 * L_22 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_22, L_21, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_22);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00c4:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00cb:
	{
		// OnComplete.Invoke();
		Timer_t3412046349 * L_23 = V_1;
		NullCheck(L_23);
		UnityEvent_t2581268647 * L_24 = L_23->get_OnComplete_8();
		NullCheck(L_24);
		UnityEvent_Invoke_m3065672636(L_24, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Unoper.Unity.Utils.Timer/<Countdown>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CCountdownU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1849073943 (U3CCountdownU3Ed__6_t2310584700 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unoper.Unity.Utils.Timer/<Countdown>d__6::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CCountdownU3Ed__6_System_Collections_IEnumerator_Reset_m2057072719 (U3CCountdownU3Ed__6_t2310584700 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCountdownU3Ed__6_System_Collections_IEnumerator_Reset_m2057072719_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CCountdownU3Ed__6_System_Collections_IEnumerator_Reset_m2057072719_RuntimeMethod_var);
	}
}
// System.Object Unoper.Unity.Utils.Timer/<Countdown>d__6::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CCountdownU3Ed__6_System_Collections_IEnumerator_get_Current_m1513355811 (U3CCountdownU3Ed__6_t2310584700 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void pressToStart::Start()
extern "C" IL2CPP_METHOD_ATTR void pressToStart_Start_m336030520 (pressToStart_t369169045 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void pressToStart::Update()
extern "C" IL2CPP_METHOD_ATTR void pressToStart_Update_m360635304 (pressToStart_t369169045 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pressToStart_Update_m360635304_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetButtonDown ("Fire1")) {
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetButtonDown_m3074252807(NULL /*static, unused*/, _stringLiteral3228161487, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// SceneManager.LoadScene ("playGame");
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral2230982815, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void pressToStart::.ctor()
extern "C" IL2CPP_METHOD_ATTR void pressToStart__ctor_m757183062 (pressToStart_t369169045 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

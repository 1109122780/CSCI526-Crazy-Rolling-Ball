#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Func`2<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,System.Boolean>
struct Func_2_t5532E35A1F0199C1375B3FA146E9A4CF52A2D208;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_tC0A12A847AF97F369A5CE9A0CCE71CE18EE1440E;
// System.Collections.Generic.IComparer`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>
struct IComparer_1_t7BC566769D5950EA62E7DC05B140162A2BEE3C5C;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>
struct IEnumerable_1_tB801A1874F0601B5E15FA9E65E973D081C827DC3;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>
struct IEnumerable_1_t11F89F538D47F0DF2C1F3B1FADA72F1FACD462B3;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.Polygon>
struct IEnumerable_1_t177BF65845A7F7597314BC71B4D19E80E2F38B96;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>
struct IEnumerable_1_t5CB73B844D94679509FEEC2FF36953920C0CFEAF;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>
struct IEnumerable_1_t769EA328967DA42E6FD2DDCEA9A820E0E4FD4265;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t48F4900A82CAF9059C2FEB04454888B64E155362;
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>
struct IList_1_t1FBA59568EF0CDA813A0B4C8446BB1AD933F0C76;
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.Polygon>
struct IList_1_tA287CC06A05E88B27EBD74BEBAC705066C9E5FFA;
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>
struct IList_1_tB16CBE5912F80AEAB4931A9FAD61FE71902171E8;
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>
struct IList_1_tAAF50CF2D4B1A9F767041F8A3D47C16B0462788C;
// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>
struct List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2;
// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>
struct List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon>
struct List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC;
// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>
struct List_1_t9DC390849BA500451557578B04CA56F022B76A2B;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint[]
struct DTSweepConstraintU5BU5D_tEEF613C569DB616BFE826BFDFB5EC88486CD485B;
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle[]
struct DelaunayTriangleU5BU5D_t98DEAEBFBC40D05BDF906D2984C680654D26B3C6;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.ProBuilder.Poly2Tri.Polygon[]
struct PolygonU5BU5D_tB0E9E6BF8845878CDF38D77F86548096E5C2CB92;
// UnityEngine.ProBuilder.Poly2Tri.PolygonPoint[]
struct PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint[]
struct TriangulationPointU5BU5D_t315340BBCDAAB90979DCA535BA880700857F0901;
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFront
struct AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561;
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode
struct AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// UnityEngine.ProBuilder.Poly2Tri.ConstrainedPointSet
struct ConstrainedPointSet_tF7EC96684E0FFB09F8C8AA5A7EC3309E55313E70;
// UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin
struct DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3;
// UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint
struct DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A;
// UnityEngine.ProBuilder.Poly2Tri.DTSweepContext
struct DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145;
// UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext
struct DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36;
// UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent
struct DTSweepEdgeEvent_tADA248BEB364180EA7262E5AFDDB730021B50F8D;
// UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator
struct DTSweepPointComparator_tCB29B65B97483C6D6990D13DB2DD47BA9C439F5A;
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle
struct DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.ProBuilder.Poly2Tri.PointGenerator
struct PointGenerator_t6FDB0C44B9B42A5674AD9F2A037D3CF88F3A603E;
// UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException
struct PointOnEdgeException_tC525B89F81C014138323BBD40782538269F85A40;
// UnityEngine.ProBuilder.Poly2Tri.PointSet
struct PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22;
// UnityEngine.ProBuilder.Poly2Tri.Polygon
struct Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50;
// UnityEngine.ProBuilder.Poly2Tri.PolygonGenerator
struct PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2;
// UnityEngine.ProBuilder.Poly2Tri.PolygonPoint
struct PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332;
// UnityEngine.ProBuilder.Poly2Tri.PolygonSet
struct PolygonSet_t5F5953714FCF415C18CBD74B9B10425832578526;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.ProBuilder.Poly2Tri.Triangulatable
struct Triangulatable_t347F179819E93AF575313D9980AEDDB38FC3EC95;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint
struct TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
struct TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext
struct TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint
struct TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil
struct TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.ProBuilder.Poly2Tri.DTSweep/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_tC3ED14289D5AC5991F62DC526A965F269717A4DA;
// UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10
struct U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408;

IL2CPP_EXTERN_C RuntimeClass* AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepEdgeEvent_tADA248BEB364180EA7262E5AFDDB730021B50F8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepPointComparator_tCB29B65B97483C6D6990D13DB2DD47BA9C439F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5532E35A1F0199C1375B3FA146E9A4CF52A2D208_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t8BA3CFA7E95BDF2EE15CE68B4A14DF167E12E6C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tAF941A9A3F2E40EF3A535959EF6980574778991F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tCA280C2D07C066AD184D8048DA66AF7B8B4C47AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t11F89F538D47F0DF2C1F3B1FADA72F1FACD462B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t177BF65845A7F7597314BC71B4D19E80E2F38B96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t5CB73B844D94679509FEEC2FF36953920C0CFEAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t0B4DABB143D481285E16AFA741CF5AB4FF8E92BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t9B09864C45D9137FA0B60B1034CB6F76A9D011C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tF12EE1C3183070131DCAC0836041F412AC06C0A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tAAF50CF2D4B1A9F767041F8A3D47C16B0462788C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tB16CBE5912F80AEAB4931A9FAD61FE71902171E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9DC390849BA500451557578B04CA56F022B76A2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P2T_t36F667563D2982A5318CDA96F7AF23A05F3A94F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointGenerator_t6FDB0C44B9B42A5674AD9F2A037D3CF88F3A603E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointOnEdgeException_tC525B89F81C014138323BBD40782538269F85A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Triangulatable_t347F179819E93AF575313D9980AEDDB38FC3EC95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_tC3ED14289D5AC5991F62DC526A965F269717A4DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07AC1B1D6E5B09CAD55868C0EBA7C2B6EB0B16DF;
IL2CPP_EXTERN_C String_t* _stringLiteral0A6129D3AF4D923F94C2DF172F5DA64D92B3C03C;
IL2CPP_EXTERN_C String_t* _stringLiteral114E73D2A801F90DEB8FCCBE8B4B66E2C796CDD2;
IL2CPP_EXTERN_C String_t* _stringLiteral17A7BA088490CA1D9307C4F7F07BDC92703EDF51;
IL2CPP_EXTERN_C String_t* _stringLiteral22ED5FCE4A7B9417FAA18E0C31983A86F0BDAD99;
IL2CPP_EXTERN_C String_t* _stringLiteral237443D40E51BEB792E3255884B17F5F2A070555;
IL2CPP_EXTERN_C String_t* _stringLiteral3860603B88C3C33FCEFF25F72FA3E650D2B25876;
IL2CPP_EXTERN_C String_t* _stringLiteral392DE7CC08F7029BEEE5B258FBEF7D0CD00FE66B;
IL2CPP_EXTERN_C String_t* _stringLiteral56FEC330311BE1770446499D7CC29C5DBA8485E8;
IL2CPP_EXTERN_C String_t* _stringLiteral61B8D324687C24872968A15276C954F913457113;
IL2CPP_EXTERN_C String_t* _stringLiteral656D304F364B477202FBF443F2948662EBAB895C;
IL2CPP_EXTERN_C String_t* _stringLiteral88EB854C80D13C1F40F616EE53A1381BFF41639B;
IL2CPP_EXTERN_C String_t* _stringLiteral9B56FA96FE55F4A5B70E48AF16D59739F6389D3C;
IL2CPP_EXTERN_C String_t* _stringLiteralA29C437354A4DAC3895D74F1428508364E47293F;
IL2CPP_EXTERN_C String_t* _stringLiteralB4B67A1E3362EA84160157011F823BD6607D1E57;
IL2CPP_EXTERN_C String_t* _stringLiteralB80316C404349B7962BAC3B6CE7C7E7107C36CA1;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0C9DBCA15AA768A26AA34FE93E331BE119D035;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC2C785F436B8C0C146A0CADB55F5E0E73F71B11D;
IL2CPP_EXTERN_C String_t* _stringLiteralC5029680EA7BBB6D128B64AE7F27E5CEC471A381;
IL2CPP_EXTERN_C String_t* _stringLiteralC5389BB78303E5DA7DBFA5E26F2ACCD912979149;
IL2CPP_EXTERN_C String_t* _stringLiteralD62066A98DDBC2159E65CC5B7BAC045F46AC043E;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralF4ED7D3F8F9EE650CA476597BCB717839ACBA38B;
IL2CPP_EXTERN_C const RuntimeMethod* AdvancingFront_LocatePoint_mE93A89803FD25A03FEA391ECE4352BB65E43BC11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DTSweep_EdgeEvent_mDA49BE47F7E44342D9ED144BBA90B21A96258E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DTSweep_FlipEdgeEvent_mD067C84E606F463B80F85354DA2EB616466D3F86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DTSweep_FlipScanEdgeEvent_m5E38B28C6E6E31B0FA12BC9DCAA7A9368336C7FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DTSweep_NextFlipPoint_m504D009A39451CC8233A0C871CE821BC01B4DC75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelaunayTriangle_IndexOf_mF7BE86FF7FEB50E93FABD238FE772A3747F4406C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelaunayTriangle_MarkNeighbor_m47AFBF2FA451F82308C1B7C6979C3693120DDD87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelaunayTriangle_MarkNeighbor_mD09CE872870726D08F3CC0CC2B31DD9159739C8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Cast_TisTriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC_mF91B2FD4E52B544E80CC7A8EB683552A5F8421F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisDTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A_m0B625C2F7B32E6DFE8CC23CFA3463DF620682573_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisPolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332_mB7FB96381E0755F424FD375E8F15B9015A90B810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m239438C4F01036BA327EF76E553656CDABB26FEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3C091B4E6B43653887B0DD7C3C22B2554E6FA478_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m630BCF784307BDF7899BFC9F73637DFFCE2164CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7669CFE774DBDC0DD15762CF2760D013CC2C6D50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m091600B516F621AC899197B46F7B384307C8AA4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1B78DF19315BAA84C606B4EADB45429B8CD37F82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m922E30B72FFD2FDD9998F2534602CE7AD4267536_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBF9EB979C8D6872FDA132075D15763C3E9E30E97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1B4AF3A4E37596A8488D7DDFA0AE5C7C6C01B156_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4D03B64D67B025F6BD36433DDD46CC2CED2FA582_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4DBABAE9A4E23B407332B1EFC28CA3AC02CD12A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m769B89F09A12194BF74EE2C94FCF1CD1AF5A9C2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_Clear_m94A77D3BB3854C622D804A69775D8FAC43C2EC7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_Contains_mFCB5DCCBE5C3236C89804B41C26A90F25601281B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_IndexOf_mC54748218FF05CFF98D51DD98B2F9EB69BF9F25A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_set_Item_m9A2D4AC048342E80ABBAA7D620107032A0DFD0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_set_Item_mBF187A1F037A7C530FC1A0876CF9E8FF48E2E7ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m346A80ECA3AF0181845D900A962D78284782D100_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m7D686EC0D5426F552181A85DA34B53C18063393E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2F339626C6CB6D2881F4FE1FEA34F7D36F35733E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m54D819D8FE66ECD9F2A235A929C1D70CAA688E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB5B313A9978CA3D215E1868B5D9A92A1F2F2E8F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE9F03103B8FC2E56F54D8D5FCA5F2F466AE622C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4BD21D8641DD87A7F789778611CBF94ECE0478E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mB45D901DD07F14436350B8FC0DE5C73B9AFE8A30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m57EF0C2ADCCC9C56A05A5E484C4D431E30D71D10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mBC41876ED3759C8586790F408F5524E0A904B920_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF55A66F0BA68CC72A4B04699FAE6834EB80728E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF68743403A38CEBE1090A33372A91B2EB3A2C91B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_mBA1102BE5652DF9598511483BE0AF2653B62A212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m0B8C4BC7E850B722674630178D55A28B460AEEE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m0B442C2A5A505181553E9FB3372193F0FD8680D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mBC18B43C59562F8EFBDA885EEC41DE20027BA12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_mF78AE693434875ABEC79AF11996997D2E28F0CBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m086885D0F137C5309C0133DD99ADCE77D2AC5C44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2AEC4968937AD256B86AA9FF4F84745AEFBBBE59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7FE690CC3514D8246B03B1E7815960030669018B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB6CFA6AA5DED1145A9094DF5D552D9B588FF2684_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEBE46FB3137F198A07FCDCD86E9192F0BDCF0435_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF5D0A29AF338C34408DD7D1ABE7311CF318D436C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE7BB1BFFCE6CA954C471967917396D5565DBD642_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Polygon_InsertPointAfter_m9D209D637F3A6EDB368440926E50558C0FE16BAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Polygon__ctor_m94A0B1D34C4084C9867266D8C786C6321D26599F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnumerateU3Ed__10_System_Collections_IEnumerator_Reset_m69B89B35DE2194C69FF985E4FE54C807B66732F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CSplitEdgeU3Eb__0_m39E95088EC3975461B78F89A602049A166DCAA45_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t767B4608B05CF0F6171032B2663F6764D07481E5 
{
};

// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>
struct List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DTSweepConstraintU5BU5D_tEEF613C569DB616BFE826BFDFB5EC88486CD485B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DTSweepConstraintU5BU5D_tEEF613C569DB616BFE826BFDFB5EC88486CD485B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>
struct List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DelaunayTriangleU5BU5D_t98DEAEBFBC40D05BDF906D2984C680654D26B3C6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DelaunayTriangleU5BU5D_t98DEAEBFBC40D05BDF906D2984C680654D26B3C6* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon>
struct List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PolygonU5BU5D_tB0E9E6BF8845878CDF38D77F86548096E5C2CB92* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PolygonU5BU5D_tB0E9E6BF8845878CDF38D77F86548096E5C2CB92* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>
struct List_1_t9DC390849BA500451557578B04CA56F022B76A2B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TriangulationPointU5BU5D_t315340BBCDAAB90979DCA535BA880700857F0901* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9DC390849BA500451557578B04CA56F022B76A2B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TriangulationPointU5BU5D_t315340BBCDAAB90979DCA535BA880700857F0901* ___s_emptyArray_5;
};

// UnityEngine.ProBuilder.Poly2Tri.AdvancingFront
struct AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561  : public RuntimeObject
{
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::Head
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___Head_0;
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::Tail
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___Tail_1;
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::Search
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___Search_2;
};

// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode
struct AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555  : public RuntimeObject
{
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::Next
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___Next_0;
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::Prev
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___Prev_1;
	// System.Double UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::Value
	double ___Value_2;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::Point
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___Point_3;
	// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::Triangle
	DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___Triangle_4;
};
struct Il2CppArrayBounds;

// UnityEngine.ProBuilder.Poly2Tri.DTSweep
struct DTSweep_tD39B85376CB0597658105512B43B952EC28B2A3E  : public RuntimeObject
{
};

// UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin
struct DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3  : public RuntimeObject
{
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin::leftNode
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___leftNode_0;
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin::bottomNode
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___bottomNode_1;
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin::rightNode
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___rightNode_2;
	// System.Double UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin::width
	double ___width_3;
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin::leftHighest
	bool ___leftHighest_4;
};

// UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent
struct DTSweepEdgeEvent_tADA248BEB364180EA7262E5AFDDB730021B50F8D  : public RuntimeObject
{
	// UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent::ConstrainedEdge
	DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___ConstrainedEdge_0;
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent::Right
	bool ___Right_1;
};

// UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator
struct DTSweepPointComparator_tCB29B65B97483C6D6990D13DB2DD47BA9C439F5A  : public RuntimeObject
{
};

// UnityEngine.ProBuilder.Poly2Tri.P2T
struct P2T_t36F667563D2982A5318CDA96F7AF23A05F3A94F1  : public RuntimeObject
{
};

struct P2T_t36F667563D2982A5318CDA96F7AF23A05F3A94F1_StaticFields
{
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationAlgorithm UnityEngine.ProBuilder.Poly2Tri.P2T::_defaultAlgorithm
	int32_t ____defaultAlgorithm_0;
};

// UnityEngine.ProBuilder.Poly2Tri.PointGenerator
struct PointGenerator_t6FDB0C44B9B42A5674AD9F2A037D3CF88F3A603E  : public RuntimeObject
{
};

struct PointGenerator_t6FDB0C44B9B42A5674AD9F2A037D3CF88F3A603E_StaticFields
{
	// System.Random UnityEngine.ProBuilder.Poly2Tri.PointGenerator::RNG
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___RNG_0;
};

// UnityEngine.ProBuilder.Poly2Tri.PointSet
struct PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> UnityEngine.ProBuilder.Poly2Tri.PointSet::<Points>k__BackingField
	RuntimeObject* ___U3CPointsU3Ek__BackingField_0;
	// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> UnityEngine.ProBuilder.Poly2Tri.PointSet::<Triangles>k__BackingField
	RuntimeObject* ___U3CTrianglesU3Ek__BackingField_1;
};

// UnityEngine.ProBuilder.Poly2Tri.Polygon
struct Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> UnityEngine.ProBuilder.Poly2Tri.Polygon::_points
	List_1_t9DC390849BA500451557578B04CA56F022B76A2B* ____points_0;
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> UnityEngine.ProBuilder.Poly2Tri.Polygon::_steinerPoints
	List_1_t9DC390849BA500451557578B04CA56F022B76A2B* ____steinerPoints_1;
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon> UnityEngine.ProBuilder.Poly2Tri.Polygon::_holes
	List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC* ____holes_2;
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> UnityEngine.ProBuilder.Poly2Tri.Polygon::_triangles
	List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* ____triangles_3;
	// UnityEngine.ProBuilder.Poly2Tri.PolygonPoint UnityEngine.ProBuilder.Poly2Tri.Polygon::_last
	PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* ____last_4;
};

// UnityEngine.ProBuilder.Poly2Tri.PolygonGenerator
struct PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2  : public RuntimeObject
{
};

struct PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_StaticFields
{
	// System.Random UnityEngine.ProBuilder.Poly2Tri.PolygonGenerator::RNG
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___RNG_0;
	// System.Double UnityEngine.ProBuilder.Poly2Tri.PolygonGenerator::PI_2
	double ___PI_2_1;
};

// UnityEngine.ProBuilder.Poly2Tri.PolygonSet
struct PolygonSet_t5F5953714FCF415C18CBD74B9B10425832578526  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon> UnityEngine.ProBuilder.Poly2Tri.PolygonSet::_polygons
	List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC* ____polygons_0;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint
struct TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27  : public RuntimeObject
{
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint::P
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___P_0;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint::Q
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___Q_1;
};

// UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
struct TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843  : public RuntimeObject
{
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::<DebugContext>k__BackingField
	TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF* ___U3CDebugContextU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Triangles
	List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* ___Triangles_1;
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Points
	List_1_t9DC390849BA500451557578B04CA56F022B76A2B* ___Points_2;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationMode UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::<TriangulationMode>k__BackingField
	int32_t ___U3CTriangulationModeU3Ek__BackingField_3;
	// UnityEngine.ProBuilder.Poly2Tri.Triangulatable UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::<Triangulatable>k__BackingField
	RuntimeObject* ___U3CTriangulatableU3Ek__BackingField_4;
	// System.Int32 UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::<StepCount>k__BackingField
	int32_t ___U3CStepCountU3Ek__BackingField_5;
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::<IsDebugEnabled>k__BackingField
	bool ___U3CIsDebugEnabledU3Ek__BackingField_6;
};

// UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext
struct TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF  : public RuntimeObject
{
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationContext UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext::_tcx
	TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* ____tcx_0;
};

// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint
struct TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint> UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::<Edges>k__BackingField
	List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2* ___U3CEdgesU3Ek__BackingField_2;
	// System.Double UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::X
	double ___X_3;
	// System.Double UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::Y
	double ___Y_4;
	// System.Int32 UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::Index
	int32_t ___Index_5;
};

// UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil
struct TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183  : public RuntimeObject
{
};

struct TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_StaticFields
{
	// System.Double UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::EPSILON
	double ___EPSILON_0;
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

// UnityEngine.ProBuilder.Poly2Tri.DTSweep/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_tC3ED14289D5AC5991F62DC526A965F269717A4DA  : public RuntimeObject
{
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweep/<>c__DisplayClass21_0::ep
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___ep_0;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>
struct Enumerator_t00B91280F91EADE4E8986CDDA34A453F1266D2C1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>
struct Enumerator_tABE7B5B7F53B356A45A78ED49E0534BCAEFD018D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ____current_3;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.Polygon>
struct Enumerator_t5CE23F25F522496110B65579892DD5BD5A7317A8 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>
struct Enumerator_t02719F8EE5ACF9CE468E9E2BC08776E0A90C3D11 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t9DC390849BA500451557578B04CA56F022B76A2B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ____current_3;
};

// UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>
struct FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B 
{
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_0
	DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ____0_0;
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_1
	DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ____1_1;
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_2
	DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ____2_2;
};

// UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<System.Object>
struct FixedArray3_1_t2E182D447189121C5A163AF682138574CB93A6F4 
{
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_0
	RuntimeObject* ____0_0;
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_1
	RuntimeObject* ____1_1;
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_2
	RuntimeObject* ____2_2;
};

// UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>
struct FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6 
{
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_0
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ____0_0;
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_1
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ____1_1;
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_2
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ____2_2;
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

// UnityEngine.ProBuilder.Poly2Tri.ConstrainedPointSet
struct ConstrainedPointSet_tF7EC96684E0FFB09F8C8AA5A7EC3309E55313E70  : public PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22
{
	// System.Int32[] UnityEngine.ProBuilder.Poly2Tri.ConstrainedPointSet::<EdgeIndex>k__BackingField
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CEdgeIndexU3Ek__BackingField_2;
};

// UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint
struct DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A  : public TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27
{
};

// UnityEngine.ProBuilder.Poly2Tri.DTSweepContext
struct DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145  : public TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843
{
	// System.Single UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::ALPHA
	float ___ALPHA_7;
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFront UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::Front
	AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* ___Front_8;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::<Head>k__BackingField
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___U3CHeadU3Ek__BackingField_9;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::<Tail>k__BackingField
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___U3CTailU3Ek__BackingField_10;
	// UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::Basin
	DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* ___Basin_11;
	// UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::EdgeEvent
	DTSweepEdgeEvent_tADA248BEB364180EA7262E5AFDDB730021B50F8D* ___EdgeEvent_12;
	// UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::_comparator
	DTSweepPointComparator_tCB29B65B97483C6D6990D13DB2DD47BA9C439F5A* ____comparator_13;
};

// UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext
struct DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36  : public TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF
{
	// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::_primaryTriangle
	DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ____primaryTriangle_1;
	// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::_secondaryTriangle
	DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ____secondaryTriangle_2;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::_activePoint
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ____activePoint_3;
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::_activeNode
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ____activeNode_4;
	// UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::_activeConstraint
	DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ____activeConstraint_5;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
struct FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E 
{
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::_0
	bool ____0_0;
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::_1
	bool ____1_1;
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::_2
	bool ____2_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
struct FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E_marshaled_pinvoke
{
	int32_t ____0_0;
	int32_t ____1_1;
	int32_t ____2_2;
};
// Native definition for COM marshalling of UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
struct FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E_marshaled_com
{
	int32_t ____0_0;
	int32_t ____1_1;
	int32_t ____2_2;
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

// UnityEngine.ProBuilder.Poly2Tri.PolygonPoint
struct PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332  : public TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC
{
	// UnityEngine.ProBuilder.Poly2Tri.PolygonPoint UnityEngine.ProBuilder.Poly2Tri.PolygonPoint::<Next>k__BackingField
	PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* ___U3CNextU3Ek__BackingField_6;
	// UnityEngine.ProBuilder.Poly2Tri.PolygonPoint UnityEngine.ProBuilder.Poly2Tri.PolygonPoint::<Previous>k__BackingField
	PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* ___U3CPreviousU3Ek__BackingField_7;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle
struct DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582  : public RuntimeObject
{
	// UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::Points
	FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6 ___Points_0;
	// UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::Neighbors
	FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B ___Neighbors_1;
	// UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::EdgeIsConstrained
	FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E ___EdgeIsConstrained_2;
	// UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::EdgeIsDelaunay
	FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E ___EdgeIsDelaunay_3;
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::<IsInterior>k__BackingField
	bool ___U3CIsInteriorU3Ek__BackingField_4;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10
struct U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408  : public RuntimeObject
{
	// System.Int32 UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::<>2__current
	bool ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::<>4__this
	FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E ___U3CU3E4__this_3;
	// UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::<>3__<>4__this
	FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E ___U3CU3E3__U3CU3E4__this_4;
	// System.Int32 UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::<i>5__2
	int32_t ___U3CiU3E5__2_5;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Func`2<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,System.Boolean>
struct Func_2_t5532E35A1F0199C1375B3FA146E9A4CF52A2D208  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException
struct PointOnEdgeException_tC525B89F81C014138323BBD40782538269F85A40  : public NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8
{
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException::A
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___A_18;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException::B
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___B_19;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException::C
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___C_20;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.ProBuilder.Poly2Tri.PolygonPoint[]
struct PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC  : public RuntimeArray
{
	ALIGN_FIELD (8) PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* m_Items[1];

	inline PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* value)
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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedArray3_1_set_Item_mB08E97A81F6DA3F39B4F4D393446663EA394CCDE_gshared (FixedArray3_1_t2E182D447189121C5A163AF682138574CB93A6F4* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FixedArray3_1_IndexOf_m1B06C24E667AB6A85D8E9EAD018E5607120E16BE_gshared (FixedArray3_1_t2E182D447189121C5A163AF682138574CB93A6F4* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FixedArray3_1_Contains_m2D439377B2D3CFFFE7CABCE165D813A9A7A2EC06_gshared (FixedArray3_1_t2E182D447189121C5A163AF682138574CB93A6F4* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedArray3_1_get_Item_m90772819C459FD3CBA8E65DFF3F05661735F3CF8_gshared (FixedArray3_1_t2E182D447189121C5A163AF682138574CB93A6F4* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mC6FA107934316BE28EA02DDB9EADA7AE8DD1916B_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedArray3_1_Clear_mE12D2B6AF6D0527A3DDF96D2F62F421659EDF8B1_gshared (FixedArray3_1_t2E182D447189121C5A163AF682138574CB93A6F4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m4204C143D97E871DF2553329CFB0FBE3CD1A01F2_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;

// UnityEngine.ProBuilder.Poly2Tri.TriangulationContext UnityEngine.ProBuilder.Poly2Tri.P2T::CreateContext(UnityEngine.ProBuilder.Poly2Tri.TriangulationAlgorithm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* P2T_CreateContext_mC11B818ED4CAA47D0D084F0AAC43E48F6FC104C9 (int32_t ___algorithm0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.Polygon> UnityEngine.ProBuilder.Poly2Tri.PolygonSet::get_Polygons()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PolygonSet_get_Polygons_m5D4E7E58CD64A56270CF83C0E8544F924A7AD097_inline (PolygonSet_t5F5953714FCF415C18CBD74B9B10425832578526* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.P2T::Triangulate(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2T_Triangulate_m311CBB7B21BF48A57D64A69B2DD0185583FC3164 (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* ___tcx0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.P2T::Triangulate(UnityEngine.ProBuilder.Poly2Tri.TriangulationAlgorithm,UnityEngine.ProBuilder.Poly2Tri.Triangulatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2T_Triangulate_mD97B5B39D0C57A052C930F4F1F2895A8D1A36EF6 (int32_t ___algorithm0, RuntimeObject* ___t1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext__ctor_mB676BEA85EBE599FCED0BF9BFF53D9F53235A728 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::Triangulate(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Triangulate_mEE5DB994001D8113705B06E1B6AFAC37EDC6C926 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::.ctor()
inline void List_1__ctor_m7FE690CC3514D8246B03B1E7815960030669018B (List_1_t9DC390849BA500451557578B04CA56F022B76A2B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DC390849BA500451557578B04CA56F022B76A2B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisTriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC_mF91B2FD4E52B544E80CC7A8EB683552A5F8421F5 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m346A80ECA3AF0181845D900A962D78284782D100 (List_1_t9DC390849BA500451557578B04CA56F022B76A2B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DC390849BA500451557578B04CA56F022B76A2B*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// TSource[] System.Linq.Enumerable::ToArray<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>(System.Collections.Generic.IEnumerable`1<TSource>)
inline PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC* Enumerable_ToArray_TisPolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332_mB7FB96381E0755F424FD375E8F15B9015A90B810 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::.ctor(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon__ctor_m94A0B1D34C4084C9867266D8C786C6321D26599F (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* __this, RuntimeObject* ___points0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::Add(T)
inline void List_1_Add_mE9F03103B8FC2E56F54D8D5FCA5F2F466AE622C4_inline (List_1_t9DC390849BA500451557578B04CA56F022B76A2B* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DC390849BA500451557578B04CA56F022B76A2B*, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::Clear()
inline void List_1_Clear_m4BD21D8641DD87A7F789778611CBF94ECE0478E7_inline (List_1_t9DC390849BA500451557578B04CA56F022B76A2B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DC390849BA500451557578B04CA56F022B76A2B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon>::.ctor()
inline void List_1__ctor_m2AEC4968937AD256B86AA9FF4F84745AEFBBBE59 (List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon>::Add(T)
inline void List_1_Add_mB5B313A9978CA3D215E1868B5D9A92A1F2F2E8F2_inline (List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC* __this, Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC*, Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::IndexOf(T)
inline int32_t List_1_IndexOf_mBA1102BE5652DF9598511483BE0AF2653B62A212 (List_1_t9DC390849BA500451557578B04CA56F022B76A2B* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9DC390849BA500451557578B04CA56F022B76A2B*, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// UnityEngine.ProBuilder.Poly2Tri.PolygonPoint UnityEngine.ProBuilder.Poly2Tri.PolygonPoint::get_Next()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* PolygonPoint_get_Next_m2F3BF4CDBBAC577A25F45BA429A5024CF71EDC01_inline (PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.PolygonPoint::set_Next(UnityEngine.ProBuilder.Poly2Tri.PolygonPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PolygonPoint_set_Next_mBE4F9B811E2D887E87082ACE0D1D28A0623915A4_inline (PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* __this, PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.PolygonPoint::set_Previous(UnityEngine.ProBuilder.Poly2Tri.PolygonPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PolygonPoint_set_Previous_m7F6ACCA339AE8CCDEC6E468A49CD056EEF2A6FAF_inline (PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* __this, PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::Insert(System.Int32,T)
inline void List_1_Insert_m0B8C4BC7E850B722674630178D55A28B460AEEE4 (List_1_t9DC390849BA500451557578B04CA56F022B76A2B* __this, int32_t ___index0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DC390849BA500451557578B04CA56F022B76A2B*, int32_t, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___index0, ___item1, method);
}
// T System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::get_Item(System.Int32)
inline TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5 (List_1_t9DC390849BA500451557578B04CA56F022B76A2B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* (*) (List_1_t9DC390849BA500451557578B04CA56F022B76A2B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.ProBuilder.Poly2Tri.PolygonPoint UnityEngine.ProBuilder.Poly2Tri.PolygonPoint::get_Previous()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* PolygonPoint_get_Previous_m13E87872F1A6A9C1F61CB2799095DBCE6CE79F96_inline (PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::Remove(T)
inline bool List_1_Remove_m0B442C2A5A505181553E9FB3372193F0FD8680D1 (List_1_t9DC390849BA500451557578B04CA56F022B76A2B* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t9DC390849BA500451557578B04CA56F022B76A2B*, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::Add(T)
inline void List_1_Add_m2F339626C6CB6D2881F4FE1FEA34F7D36F35733E_inline (List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* __this, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8*, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m7D686EC0D5426F552181A85DA34B53C18063393E (List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::Clear()
inline void List_1_Clear_mB45D901DD07F14436350B8FC0DE5C73B9AFE8A30_inline (List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::get_Count()
inline int32_t List_1_get_Count_mE7BB1BFFCE6CA954C471967917396D5565DBD642_inline (List_1_t9DC390849BA500451557578B04CA56F022B76A2B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9DC390849BA500451557578B04CA56F022B76A2B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::.ctor(System.Int32)
inline void List_1__ctor_mF5D0A29AF338C34408DD7D1ABE7311CF318D436C (List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon>::GetEnumerator()
inline Enumerator_t5CE23F25F522496110B65579892DD5BD5A7317A8 List_1_GetEnumerator_mBC41876ED3759C8586790F408F5524E0A904B920 (List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5CE23F25F522496110B65579892DD5BD5A7317A8 (*) (List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.Polygon>::Dispose()
inline void Enumerator_Dispose_m239438C4F01036BA327EF76E553656CDABB26FEE (Enumerator_t5CE23F25F522496110B65579892DD5BD5A7317A8* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5CE23F25F522496110B65579892DD5BD5A7317A8*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.Polygon>::get_Current()
inline Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* Enumerator_get_Current_m4D03B64D67B025F6BD36433DDD46CC2CED2FA582_inline (Enumerator_t5CE23F25F522496110B65579892DD5BD5A7317A8* __this, const RuntimeMethod* method)
{
	return ((  Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* (*) (Enumerator_t5CE23F25F522496110B65579892DD5BD5A7317A8*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.Polygon>::MoveNext()
inline bool Enumerator_MoveNext_m091600B516F621AC899197B46F7B384307C8AA4A (Enumerator_t5CE23F25F522496110B65579892DD5BD5A7317A8* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5CE23F25F522496110B65579892DD5BD5A7317A8*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::.ctor(System.Double,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint__ctor_m597CD937EAE5EEFB7F00F2480610423B84E89D15 (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* __this, double ___x0, double ___y1, int32_t ___index2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::set_Item(System.Int32,T)
inline void FixedArray3_1_set_Item_mBF187A1F037A7C530FC1A0876CF9E8FF48E2E7ED (FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* __this, int32_t ___index0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___value1, const RuntimeMethod* method)
{
	((  void (*) (FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6*, int32_t, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*, const RuntimeMethod*))FixedArray3_1_set_Item_mB08E97A81F6DA3F39B4F4D393446663EA394CCDE_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::IndexOf(T)
inline int32_t FixedArray3_1_IndexOf_mC54748218FF05CFF98D51DD98B2F9EB69BF9F25A (FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6*, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*, const RuntimeMethod*))FixedArray3_1_IndexOf_m1B06C24E667AB6A85D8E9EAD018E5607120E16BE_gshared)(__this, ___value0, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::IndexOf(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_IndexOf_mF7BE86FF7FEB50E93FABD238FE772A3747F4406C (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::Contains(T)
inline bool FixedArray3_1_Contains_mFCB5DCCBE5C3236C89804B41C26A90F25601281B (FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6*, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*, const RuntimeMethod*))FixedArray3_1_Contains_m2D439377B2D3CFFFE7CABCE165D813A9A7A2EC06_gshared)(__this, ___value0, method);
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::EdgeIndex(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_EdgeIndex_m91816E3D9EFACAF481AD414B4683AB1A4A4D5863 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p10, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p21, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::set_Item(System.Int32,T)
inline void FixedArray3_1_set_Item_m9A2D4AC048342E80ABBAA7D620107032A0DFD0B7 (FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B* __this, int32_t ___index0, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___value1, const RuntimeMethod* method)
{
	((  void (*) (FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B*, int32_t, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582*, const RuntimeMethod*))FixedArray3_1_set_Item_mB08E97A81F6DA3F39B4F4D393446663EA394CCDE_gshared)(__this, ___index0, ___value1, method);
}
// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::get_Item(System.Int32)
inline TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B (FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* (*) (FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6*, int32_t, const RuntimeMethod*))FixedArray3_1_get_Item_m90772819C459FD3CBA8E65DFF3F05661735F3CF8_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::Contains(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_Contains_mCBAC8F1AE9D125D38E5DDC5FC31CB6A87874E70C (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkNeighbor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkNeighbor_mD09CE872870726D08F3CC0CC2B31DD9159739C8E (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p10, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p21, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___t2, const RuntimeMethod* method) ;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::PointCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* DelaunayTriangle_PointCWFrom_m83A992C1B4D0F5DC005AA65E31225CAB0A610A23 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point0, const RuntimeMethod* method) ;
// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::get_Item(System.Int32)
inline DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4 (FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* (*) (FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B*, int32_t, const RuntimeMethod*))FixedArray3_1_get_Item_m90772819C459FD3CBA8E65DFF3F05661735F3CF8_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::RotateCW()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_RotateCW_m985DCC65DA60614892C049FA28CB27CAD95A120D (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::IndexCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_IndexCCWFrom_m8023A1C470E58EA0999C5F34078F26EFFD78256A (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4 (FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkConstrainedEdge(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkConstrainedEdge_mADA98D76C669806AE11B23E40E5E2C35EF38884E (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___q1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::GetEnumerator()
inline Enumerator_tABE7B5B7F53B356A45A78ED49E0534BCAEFD018D List_1_GetEnumerator_m57EF0C2ADCCC9C56A05A5E484C4D431E30D71D10 (List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tABE7B5B7F53B356A45A78ED49E0534BCAEFD018D (*) (List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::Dispose()
inline void Enumerator_Dispose_m3C091B4E6B43653887B0DD7C3C22B2554E6FA478 (Enumerator_tABE7B5B7F53B356A45A78ED49E0534BCAEFD018D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tABE7B5B7F53B356A45A78ED49E0534BCAEFD018D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::get_Current()
inline DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* Enumerator_get_Current_m1B4AF3A4E37596A8488D7DDFA0AE5C7C6C01B156_inline (Enumerator_tABE7B5B7F53B356A45A78ED49E0534BCAEFD018D* __this, const RuntimeMethod* method)
{
	return ((  DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* (*) (Enumerator_tABE7B5B7F53B356A45A78ED49E0534BCAEFD018D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::MoveNext()
inline bool Enumerator_MoveNext_mBF9EB979C8D6872FDA132075D15763C3E9E30E97 (Enumerator_tABE7B5B7F53B356A45A78ED49E0534BCAEFD018D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tABE7B5B7F53B356A45A78ED49E0534BCAEFD018D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::set_Item(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3 (FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* __this, int32_t ___index0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::AddNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront_AddNode_m2866FB06EC63AA74FA0ED38E52254E4649826706 (AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* __this, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m078D9861582DCD6037F533DF9C2FFEF0A54269E0 (StringBuilder_t* __this, double ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::LocateNode(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* AdvancingFront_LocateNode_m18E277800CA9CBFF0574EA3D9AC114CDF02B46A3 (AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* __this, double ___x0, const RuntimeMethod* method) ;
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::FindSearchNode(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* AdvancingFront_FindSearchNode_m55D2612ABFD4E9ECCF4A1D2A1B2FF6B378C789B6_inline (AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* __this, double ___x0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::CreateAdvancingFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_CreateAdvancingFront_m3B116BB121D9C450C9D318BD5014FEAE218EE1CC (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::Sweep(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Sweep_m3376C77183E81953537326F7FC3DBB97BCA1E50A (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, const RuntimeMethod* method) ;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationMode UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_TriangulationMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_TriangulationMode_mC9F2694F48A7760DCE953389DC8C86614FCCA6A9_inline (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FinalizationPolygon(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FinalizationPolygon_mBF733075F3336BC578AFD3F0E9FA9C5CB96F419A (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FinalizationConvexHull(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FinalizationConvexHull_m322CD95AC1AB2B95EABB7CCA3A1ED1270085F331 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Done()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Done_mA5FFC0AB433C505BEEE9ACC366DB93BE81E5961C (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) ;
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweep::PointEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* DTSweep_PointEvent_mDB2645D49A120C36330D54AA3650DBDAA2C43925 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::get_HasEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationPoint_get_HasEdges_m416A9901C620DE3F2F7D5EAC3355FD3F084B7027 (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint> UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::get_Edges()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2* TriangulationPoint_get_Edges_m727DF4F3A45513F80246773E13FA8B8909E864BD_inline (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>::GetEnumerator()
inline Enumerator_t00B91280F91EADE4E8986CDDA34A453F1266D2C1 List_1_GetEnumerator_mF55A66F0BA68CC72A4B04699FAE6834EB80728E1 (List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t00B91280F91EADE4E8986CDDA34A453F1266D2C1 (*) (List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>::Dispose()
inline void Enumerator_Dispose_m630BCF784307BDF7899BFC9F73637DFFCE2164CF (Enumerator_t00B91280F91EADE4E8986CDDA34A453F1266D2C1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t00B91280F91EADE4E8986CDDA34A453F1266D2C1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>::get_Current()
inline DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* Enumerator_get_Current_m769B89F09A12194BF74EE2C94FCF1CD1AF5A9C2C_inline (Enumerator_t00B91280F91EADE4E8986CDDA34A453F1266D2C1* __this, const RuntimeMethod* method)
{
	return ((  DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* (*) (Enumerator_t00B91280F91EADE4E8986CDDA34A453F1266D2C1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_DTDebugContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* TriangulationContext_get_DTDebugContext_mA17E0C26062DC7E004F53FC5726639F1BFA45CFE (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_ActiveConstraint(UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActiveConstraint_m91E586325A3476F2F58F65DEB5016DEEF2F5756A (DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* __this, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::EdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_EdgeEvent_mC291442F73B6F36BB727D1F8C3C256BA4F742F02 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___edge1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>::MoveNext()
inline bool Enumerator_MoveNext_m1B78DF19315BAA84C606B4EADB45429B8CD37F82 (Enumerator_t00B91280F91EADE4E8986CDDA34A453F1266D2C1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t00B91280F91EADE4E8986CDDA34A453F1266D2C1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Update(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Update_m93593C37DCE2DCE7A6FB6308E88F1C008C92C901 (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::TurnAdvancingFrontConvex(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_TurnAdvancingFrontConvex_m13183180376DF73BD52F6283800EF036C1B85F23 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___b1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___c2, const RuntimeMethod* method) ;
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::NeighborAcrossFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* DelaunayTriangle_NeighborAcrossFrom_m0962D27A38C136BEA2862A75654C4EF009C7F84A (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point0, const RuntimeMethod* method) ;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::OppositePoint(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* DelaunayTriangle_OppositePoint_mDC118BD8FC2EFDAA35290CDC91EB08FA53A327BE (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___t0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::RotateTrianglePair(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_RotateTrianglePair_m6D216A93A53C558797A26128451B34FECD6E1385 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___t0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p1, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___ot2, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___op3, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::MapTriangleToNodes(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MapTriangleToNodes_m6B48C2720D77CF48E6AE7328614F55D2A6F4565B (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___t0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::RemoveFromList(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_RemoveFromList_m8D852A85D084F3AC3C9ADBD930B17FA1E27C8435 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___triangle0, const RuntimeMethod* method) ;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::PointCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* DelaunayTriangle_PointCCWFrom_mF3F5570F090A4EC60F28F72FB6B93E6D09CBF562 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point0, const RuntimeMethod* method) ;
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::NeighborCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* DelaunayTriangle_NeighborCCWFrom_m0774E83223AF7F053D275E486AFD39D111D86CBE (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point0, const RuntimeMethod* method) ;
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::NeighborCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* DelaunayTriangle_NeighborCWFrom_mC74C858ED8A719AE16889DE31B5896988386FFE8 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::FinalizeTriangulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_FinalizeTriangulation_mB9D744619005EF2380AEDE0BB18A1C605D9D0ABE (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_ActiveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActiveNode_mDCE7A20AD32017FF9CC942B918CDD3727115C88B (DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* __this, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___value0, const RuntimeMethod* method) ;
// UnityEngine.ProBuilder.Poly2Tri.Orientation UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::Orient2d(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pa0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pb1, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pc2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::Fill(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Fill_m7F1FFCAF4BA437AD0DF18745F829499FD6E699ED (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetConstrainedEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetConstrainedEdgeCW_mD39CAB2A63B58D2F7C1EA222A273B16EADEDF3F5 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::MeshClean(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MeshClean_mF382723AD09798F6DE99FF52A31499F755FF4C74 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___triangle0, const RuntimeMethod* method) ;
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::LocateNode(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* DTSweepContext_LocateNode_m1398C130FC376009498BD0089B5D6E744D62E0D4 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point0, const RuntimeMethod* method) ;
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweep::NewFrontTriangle(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* DTSweep_NewFrontTriangle_m3281DD640B88DB1374AAA541FDD7A40018C0ABE9 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::AddNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_AddNode_m61AC65BF973265261991CD9F6ADA794C06722556 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillAdvancingFront(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillAdvancingFront_m30270FB3D1FE8B0D6E84264D83F100C358B379F0 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___n1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::.ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle__ctor_mD61268CE26513CDB23A354E3FF2C43B2BA806285 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p10, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p21, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p32, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkNeighbor(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkNeighbor_m47AFBF2FA451F82308C1B7C6979C3693120DDD87 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___t0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::.ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFrontNode__ctor_mAF86518A23A5A801885959F84A6E39CF84C237EE (AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweep::Legalize(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_Legalize_m32721A3E6484C056A7EA31365F8B21639BF2CB52 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___t1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_PrimaryTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_PrimaryTriangle_m63C361FFB102F8A98C2D383309A80EBA88D57882 (DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* __this, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweep::IsEdgeSideOfTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_IsEdgeSideOfTriangle_m2239DB5EBC2F046A5D216F0E034074576708F39D (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___triangle0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___ep1, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___eq2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillEdgeEvent_m7A25C20F0AB412F6D5148FF1A5AFC4CEC1CB00FC (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___edge1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::EdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_EdgeEvent_mDA49BE47F7E44342D9ED144BBA90B21A96258E40 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___ep1, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___eq2, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___triangle3, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point4, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightAboveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightAboveEdgeEvent_m11DEC709024930CD60A96E083BC94A3631F5D089 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___edge1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftAboveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftAboveEdgeEvent_m55099F1B7A1E16E6C33318E5B2511884AB711262 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___edge1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightConcaveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightConcaveEdgeEvent_mDA4F0FD8B741AC8D9214A236FB073559479AE323 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___edge1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightConvexEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightConvexEdgeEvent_mDD052FB8E8404332EC8000C0CCBC1519A301A6A2 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___edge1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightBelowEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightBelowEdgeEvent_mFED759B930BB7635CA755D7459BF261350E5E5FF (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___edge1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftConcaveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftConcaveEdgeEvent_m21CD090CB3389848C0D37E70326097396BA64318 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___edge1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftConvexEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftConvexEdgeEvent_m0C9E70659D1A87C162A749016AB657F7BF3B9F98 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___edge1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftBelowEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftBelowEdgeEvent_m5201E69E51826C28E73626026D836B9604FAA7AE (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___edge1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkConstrainedEdge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkConstrainedEdge_mC6EA309D6CD5DE1219A52701CCF39777FC89ED16 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException::.ctor(System.String,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointOnEdgeException__ctor_mCF2DDB9301C4890B5C5C360B926ED12808405D24 (PointOnEdgeException_tC525B89F81C014138323BBD40782538269F85A40* __this, String_t* ___message0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___a1, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___b2, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___c3, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FlipEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FlipEdgeEvent_mD067C84E606F463B80F85354DA2EB616466D3F86 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___ep1, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___eq2, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___t3, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p4, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m969A992BAA0E836F0FB083259ABA64F8361C0F46 (U3CU3Ec__DisplayClass21_0_tC3ED14289D5AC5991F62DC526A965F269717A4DA* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m917CFD0AF583CEF10A9C7750490A1BC567EBDF6F (Func_2_t5532E35A1F0199C1375B3FA146E9A4CF52A2D208* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5532E35A1F0199C1375B3FA146E9A4CF52A2D208*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::First<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* Enumerable_First_TisDTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A_m0B625C2F7B32E6DFE8CC23CFA3463DF620682573 (RuntimeObject* ___source0, Func_2_t5532E35A1F0199C1375B3FA146E9A4CF52A2D208* ___predicate1, const RuntimeMethod* method)
{
	return ((  DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* (*) (RuntimeObject*, Func_2_t5532E35A1F0199C1375B3FA146E9A4CF52A2D208*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mC6FA107934316BE28EA02DDB9EADA7AE8DD1916B_gshared)(___source0, ___predicate1, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint::.ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepConstraint__ctor_m8288F9EFFFB04AEDE40C94B25CD1C911EC19B401 (DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p10, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p21, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_SecondaryTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_SecondaryTriangle_m419A62A2C2D2EFDAA842CBEAF7F2B897C841A699 (DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* __this, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::InScanArea(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationUtil_InScanArea_mCFD6C361EDDDF32F4B8515E5ABB534063CB6BFA3 (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pa0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pb1, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pc2, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pd3, const RuntimeMethod* method) ;
// System.Void System.Console::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA (String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DTSweep::NextFlipTriangle(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.Orientation,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* DTSweep_NextFlipTriangle_mF90678C35297D80BC0EF11D63E6BA60A2216CA5F (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, int32_t ___o1, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___t2, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___ot3, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p4, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___op5, const RuntimeMethod* method) ;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweep::NextFlipPoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* DTSweep_NextFlipPoint_m504D009A39451CC8233A0C871CE821BC01B4DC75 (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___ep0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___eq1, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___ot2, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___op3, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FlipScanEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FlipScanEdgeEvent_m5E38B28C6E6E31B0FA12BC9DCAA7A9368336C7FA (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___ep1, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___eq2, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___flipTriangle3, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___t4, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p5, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedBitArray3_Clear_mF3519208B98A783170334C2431FFCBD3BDA726E5 (FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* __this, const RuntimeMethod* method) ;
// System.Double UnityEngine.ProBuilder.Poly2Tri.DTSweep::HoleAngle(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DTSweep_HoleAngle_m4BD239E050E8067BECD476C4AE2261D093CF0436 (AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::get_HasNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvancingFrontNode_get_HasNext_m5066118DEABA99D05C49A792E9DBC8CFB53908C6 (AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::get_HasPrev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvancingFrontNode_get_HasPrev_m7466C19AAE5B054A0BC9FF4875C5EC95BB3AC042 (AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* __this, const RuntimeMethod* method) ;
// System.Double UnityEngine.ProBuilder.Poly2Tri.DTSweep::BasinAngle(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DTSweep_BasinAngle_mB5851B9B4EA6E60854C9281606DC1EFAEFDD8DB9 (AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillBasin(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillBasin_mFE9B32FFDA8AE974203F016BE235DEA36D20AB85 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillBasinReq(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillBasinReq_m5E03AC6874D924BBDAB564A420489347330DD1E4 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweep::IsShallow(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_IsShallow_m787D2A974961D4972E03D156BCA655BBF6DC21D8 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::RemoveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_RemoveNode_mCB81440ACE1EC616A49C964EC145405847E747F9 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::SmartIncircle(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationUtil_SmartIncircle_m86295D46F926C6A802DE6363D586FDCDE2947C28 (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pa0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pb1, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pc2, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pd3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetConstrainedEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetConstrainedEdgeCCW_m0A1E2BA7AA74E765F00E216298D5F54FA3BD0C4B (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetDelaunayEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetDelaunayEdgeCCW_mB846490A27F395EE1DB6B6EFD9D4A404CC383C19 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetDelaunayEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetDelaunayEdgeCW_m094DA13142D433044E4A55DF01977A347BEE1CCF (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::Legalize(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_Legalize_mB6559CCEE3C8F3737FEA4F08B760ACEBC2B5B8D7 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___oPoint0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___nPoint1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetDelaunayEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetDelaunayEdgeCCW_m9EFA8D292347379E594DAEA4146E4783886D2266 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, bool ___ce1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetDelaunayEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetDelaunayEdgeCW_m79BD18E41A66EA857742458C3739165EED6520A4 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, bool ___ce1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetConstrainedEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetConstrainedEdgeCCW_m37951D91C92A7E729EE193E13342557F93246E8B (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, bool ___ce1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetConstrainedEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetConstrainedEdgeCW_m542FCC02B9A744E60CD4D9CFC2350B6A03EF2CAF (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, bool ___ce1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::Clear()
inline void FixedArray3_1_Clear_m94A77D3BB3854C622D804A69775D8FAC43C2EC7A (FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B* __this, const RuntimeMethod* method)
{
	((  void (*) (FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B*, const RuntimeMethod*))FixedArray3_1_Clear_mE12D2B6AF6D0527A3DDF96D2F62F421659EDF8B1_gshared)(__this, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationConstraint__ctor_m20B549D737327C3F3F41956937D851E465FDDB33 (TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::AddEdge(UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint_AddEdge_m7A02756B3EC9F87E6DDD555D319C59900641507A (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* __this, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___e0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepBasin__ctor_m0D81526EA51F48B367AB120D3FD28E21077A8451 (DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepEdgeEvent__ctor_mC91F183A48FD697ED6F9B89D75B033E6CE534EAC (DTSweepEdgeEvent_tADA248BEB364180EA7262E5AFDDB730021B50F8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepPointComparator__ctor_mBCC429E4E2F6BF2BBEED49CE558D92261BFE911C (DTSweepPointComparator_tCB29B65B97483C6D6990D13DB2DD47BA9C439F5A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext__ctor_mD7C328562CD049D1AD791D51FFD41808353B029D (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TriangulationContext_get_IsDebugEnabled_mF059C9C7BECA9A7EE5E1AB0B5F074A029BFAFC4B_inline (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) ;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_DebugContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF* TriangulationContext_get_DebugContext_m23CB67610F79453B5BF342ED323324FDF67F9F96_inline (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::.ctor(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext__ctor_mCC44A58DB7F7110EA3A64C426B789EB9D9260830 (DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* __this, DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_DebugContext(UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_DebugContext_mBD19D3C963F0E9ED60E979F0098F93618313DF53_inline (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_IsDebugEnabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_IsDebugEnabled_m3C1053D78B1D1919249AE1012433E889BEA02DAC_inline (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::Remove(T)
inline bool List_1_Remove_mBC18B43C59562F8EFBDA885EEC41DE20027BA12D (List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* __this, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8*, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::MeshCleanReq(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MeshCleanReq_m7ACADB5AF9248DF94DE953CDEDFF77A3172FCB0C (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___triangle0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::get_IsInterior()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DelaunayTriangle_get_IsInterior_m42EE54145AAF8F8137DAE428DF9B34544EDEF3F2_inline (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::set_IsInterior(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DelaunayTriangle_set_IsInterior_m940C4269B9329980002506B2326BBACEFAFCEAFB_inline (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.ProBuilder.Poly2Tri.Triangulatable UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_Triangulatable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TriangulationContext_get_Triangulatable_mDC9FC5DDE6D25F81887B82987810B6CF77C10762_inline (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Clear_m8A4E4D7BCC2B26821FD80D4BB6FE6FC613F60AB1 (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::RemoveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront_RemoveNode_m6759E452BAE2B7093CA4454EE2B43A2C675369FA (AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* __this, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node0, const RuntimeMethod* method) ;
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::LocateNode(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* AdvancingFront_LocateNode_m4D3FA6E023FCF7410368C289C2B7D84D8B17C040 (AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point0, const RuntimeMethod* method) ;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::get_Tail()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* DTSweepContext_get_Tail_m9B1B4495CE20D44FB0F16FCB631CA68FB03544A0_inline (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, const RuntimeMethod* method) ;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::get_Head()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* DTSweepContext_get_Head_m219A91F763AB1514F9ACB07F87D67076D2EC6493_inline (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::.ctor(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront__ctor_m93CE3A9A9784022B54560322A34DE46BF8253B49 (AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* __this, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___head0, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___tail1, const RuntimeMethod* method) ;
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::LocatePoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* AdvancingFront_LocatePoint_mE93A89803FD25A03FEA391ECE4352BB65E43BC11 (AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::PrepareTriangulation(UnityEngine.ProBuilder.Poly2Tri.Triangulatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_PrepareTriangulation_m074D5117AB8B53FCD479A1D75A8D34B51DC45DCA (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, RuntimeObject* ___t0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::GetEnumerator()
inline Enumerator_t02719F8EE5ACF9CE468E9E2BC08776E0A90C3D11 List_1_GetEnumerator_mF68743403A38CEBE1090A33372A91B2EB3A2C91B (List_1_t9DC390849BA500451557578B04CA56F022B76A2B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t02719F8EE5ACF9CE468E9E2BC08776E0A90C3D11 (*) (List_1_t9DC390849BA500451557578B04CA56F022B76A2B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::Dispose()
inline void Enumerator_Dispose_m7669CFE774DBDC0DD15762CF2760D013CC2C6D50 (Enumerator_t02719F8EE5ACF9CE468E9E2BC08776E0A90C3D11* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t02719F8EE5ACF9CE468E9E2BC08776E0A90C3D11*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::get_Current()
inline TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* Enumerator_get_Current_m4DBABAE9A4E23B407332B1EFC28CA3AC02CD12A7_inline (Enumerator_t02719F8EE5ACF9CE468E9E2BC08776E0A90C3D11* __this, const RuntimeMethod* method)
{
	return ((  TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* (*) (Enumerator_t02719F8EE5ACF9CE468E9E2BC08776E0A90C3D11*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::MoveNext()
inline bool Enumerator_MoveNext_m922E30B72FFD2FDD9998F2534602CE7AD4267536 (Enumerator_t02719F8EE5ACF9CE468E9E2BC08776E0A90C3D11* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t02719F8EE5ACF9CE468E9E2BC08776E0A90C3D11*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::set_Head(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DTSweepContext_set_Head_m66CD236E964FEBDDC2234B28E93F3E3B375E256F_inline (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::set_Tail(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DTSweepContext_set_Tail_mBE3CCA1D3DEC584E874A9A83E47A6EA72B0DA288_inline (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::Sort(System.Collections.Generic.IComparer`1<T>)
inline void List_1_Sort_mF78AE693434875ABEC79AF11996997D2E28F0CBB (List_1_t9DC390849BA500451557578B04CA56F022B76A2B* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DC390849BA500451557578B04CA56F022B76A2B*, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m4204C143D97E871DF2553329CFB0FBE3CD1A01F2_gshared)(__this, ___comparer0, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext::.ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationDebugContext__ctor_m8F35A8940859AC28DC4D462BB314F61567204EDA (TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF* __this, TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* ___tcx0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_ActivePoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActivePoint_mF5455A8DEA0B50E16FBA83C88EDDFDE0408B50AE (DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointSet::.ctor(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSet__ctor_m5C5662D98D905C47CF1AB9062B760E51C0798143 (PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* __this, List_1_t9DC390849BA500451557578B04CA56F022B76A2B* ___points0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.ConstrainedPointSet::set_EdgeIndex(System.Int32[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstrainedPointSet_set_EdgeIndex_m4C2E9F38C89CF940E370C54D8716AA90928C2A8E_inline (ConstrainedPointSet_tF7EC96684E0FFB09F8C8AA5A7EC3309E55313E70* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointSet::Prepare(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSet_Prepare_mC39ADEAA5228B7054DD534FA65E38A4DC372B24C (PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* __this, TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* ___tcx0, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> UnityEngine.ProBuilder.Poly2Tri.PointSet::get_Points()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PointSet_get_Points_m0F297DF803621D09BA621B512C807A6FEA4DFBEE_inline (PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* __this, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.ProBuilder.Poly2Tri.ConstrainedPointSet::get_EdgeIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ConstrainedPointSet_get_EdgeIndex_mC44B0220E20BBC36F29AAABC8BAB366888021D91_inline (ConstrainedPointSet_tF7EC96684E0FFB09F8C8AA5A7EC3309E55313E70* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m086885D0F137C5309C0133DD99ADCE77D2AC5C44 (List_1_t9DC390849BA500451557578B04CA56F022B76A2B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DC390849BA500451557578B04CA56F022B76A2B*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointSet::set_Points(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointSet_set_Points_m416AFA305B03A95AEAA7F65B839240E095CEE4B2_inline (PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> UnityEngine.ProBuilder.Poly2Tri.PointSet::get_Triangles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PointSet_get_Triangles_m9D21B762D23B2BE9E324EEB326EC1E042811F338_inline (PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointSet::set_Triangles(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointSet_set_Triangles_m9F16DDC6C1B9BC407CFBD3C98C90660DEA467366_inline (PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_StepCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_StepCount_mBCE2A72A243B279CC12D8E31BC296681440B3FA1_inline (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_StepCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_StepCount_m01197774AF89D76DE680E429ADB0F50BA77CEF46_inline (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_Triangulatable(UnityEngine.ProBuilder.Poly2Tri.Triangulatable)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_Triangulatable_mE747794031053D5739164E85F751E84FAA393ED7_inline (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_TriangulationMode(UnityEngine.ProBuilder.Poly2Tri.TriangulationMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_TriangulationMode_m7EF0A1774FEF974C65A78C97C4F118BADAB7F5B7_inline (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::.ctor()
inline void List_1__ctor_mEBE46FB3137F198A07FCDCD86E9192F0BDCF0435 (List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>::.ctor()
inline void List_1__ctor_mB6CFA6AA5DED1145A9094DF5D552D9B588FF2684 (List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::set_Edges(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationPoint_set_Edges_m9C2561A4DA140E813FA71BF1EFEAAA9924DA9F02_inline (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* __this, List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>::Add(T)
inline void List_1_Add_m54D819D8FE66ECD9F2A235A929C1D70CAA688E83_inline (List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2* __this, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2*, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.PolygonPoint::.ctor(System.Double,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolygonPoint__ctor_m9EC32A7B351C4F32B021948CCB19A357030040C2 (PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* __this, double ___x0, double ___y1, int32_t ___index2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::.ctor(UnityEngine.ProBuilder.Poly2Tri.PolygonPoint[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon__ctor_mB15F1908A1148E484BACDCDF7A8B8354EE0591A5 (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* __this, PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC* ___points0, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::Contains(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FixedBitArray3_Contains_m422E29E9B878D3ABC3684F48E4D4A7C5CAE2D0BA (FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::IndexOf(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FixedBitArray3_IndexOf_m175C83B15360BDFD5FB13D20BA69271D66C1F49A (FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::Clear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedBitArray3_Clear_m0ED1BAF55E774590CFFA89081C07CE4A80913FCB (FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__10__ctor_mC29A4BB3265EB1547A06ADDDBA3D1DD17B2CF0CA (U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Boolean> UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::Enumerate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_Enumerate_mFCC94DB3557FE0EE1E36AF63450D30F9D69C292B (FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Boolean> UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_GetEnumerator_m3E4F30DF7D75884E5B8EC7A17CC6EAD0549F1E91 (FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_System_Collections_IEnumerable_GetEnumerator_mD407A0EAABF2A9F73A8BF1261EE27A638CCE6747 (FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Boolean> UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::System.Collections.Generic.IEnumerable<System.Boolean>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__10_System_Collections_Generic_IEnumerableU3CSystem_BooleanU3E_GetEnumerator_mAB1FC4D08E4B8F3AAA4F8209DC7D082E330049FD (U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.P2T::Triangulate(UnityEngine.ProBuilder.Poly2Tri.PolygonSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2T_Triangulate_mE3B235A7139085FF9F38EC62F0CB4DF2B76BB6C4 (PolygonSet_t5F5953714FCF415C18CBD74B9B10425832578526* ___ps0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t177BF65845A7F7597314BC71B4D19E80E2F38B96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF12EE1C3183070131DCAC0836041F412AC06C0A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P2T_t36F667563D2982A5318CDA96F7AF23A05F3A94F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* V_2 = NULL;
	{
		// TriangulationContext tcx = CreateContext(_defaultAlgorithm);
		int32_t L_0 = ((P2T_t36F667563D2982A5318CDA96F7AF23A05F3A94F1_StaticFields*)il2cpp_codegen_static_fields_for(P2T_t36F667563D2982A5318CDA96F7AF23A05F3A94F1_il2cpp_TypeInfo_var))->____defaultAlgorithm_0;
		TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_1;
		L_1 = P2T_CreateContext_mC11B818ED4CAA47D0D084F0AAC43E48F6FC104C9(L_0, NULL);
		V_0 = L_1;
		// foreach (Polygon p in ps.Polygons) {
		PolygonSet_t5F5953714FCF415C18CBD74B9B10425832578526* L_2 = ___ps0;
		RuntimeObject* L_3;
		L_3 = PolygonSet_get_Polygons_m5D4E7E58CD64A56270CF83C0E8544F924A7AD097_inline(L_2, NULL);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.Polygon>::GetEnumerator() */, IEnumerable_1_t177BF65845A7F7597314BC71B4D19E80E2F38B96_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_0046;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0046:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0033_1;
			}

IL_0019_1:
			{
				// foreach (Polygon p in ps.Polygons) {
				RuntimeObject* L_7 = V_1;
				Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* L_8;
				L_8 = InterfaceFuncInvoker0< Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.ProBuilder.Poly2Tri.Polygon>::get_Current() */, IEnumerator_1_tF12EE1C3183070131DCAC0836041F412AC06C0A2_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				// tcx.PrepareTriangulation(p);
				TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_9 = V_0;
				Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* L_10 = V_2;
				VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::PrepareTriangulation(UnityEngine.ProBuilder.Poly2Tri.Triangulatable) */, L_9, L_10);
				// Triangulate(tcx);
				TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_11 = V_0;
				P2T_Triangulate_m311CBB7B21BF48A57D64A69B2DD0185583FC3164(L_11, NULL);
				// tcx.Clear();
				TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_12 = V_0;
				VirtualActionInvoker0::Invoke(7 /* System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Clear() */, L_12);
			}

IL_0033_1:
			{
				// foreach (Polygon p in ps.Polygons) {
				RuntimeObject* L_13 = V_1;
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_0047;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.P2T::Triangulate(UnityEngine.ProBuilder.Poly2Tri.Polygon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2T_Triangulate_m7A447F350C42EB97D0519187446967728901F377 (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P2T_t36F667563D2982A5318CDA96F7AF23A05F3A94F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Triangulate(_defaultAlgorithm, p);
		int32_t L_0 = ((P2T_t36F667563D2982A5318CDA96F7AF23A05F3A94F1_StaticFields*)il2cpp_codegen_static_fields_for(P2T_t36F667563D2982A5318CDA96F7AF23A05F3A94F1_il2cpp_TypeInfo_var))->____defaultAlgorithm_0;
		Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* L_1 = ___p0;
		P2T_Triangulate_mD97B5B39D0C57A052C930F4F1F2895A8D1A36EF6(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.P2T::Triangulate(UnityEngine.ProBuilder.Poly2Tri.ConstrainedPointSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2T_Triangulate_mA502E8C17FB528D613F5EFF560CD92EF555E764D (ConstrainedPointSet_tF7EC96684E0FFB09F8C8AA5A7EC3309E55313E70* ___cps0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P2T_t36F667563D2982A5318CDA96F7AF23A05F3A94F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Triangulate(_defaultAlgorithm, cps);
		int32_t L_0 = ((P2T_t36F667563D2982A5318CDA96F7AF23A05F3A94F1_StaticFields*)il2cpp_codegen_static_fields_for(P2T_t36F667563D2982A5318CDA96F7AF23A05F3A94F1_il2cpp_TypeInfo_var))->____defaultAlgorithm_0;
		ConstrainedPointSet_tF7EC96684E0FFB09F8C8AA5A7EC3309E55313E70* L_1 = ___cps0;
		P2T_Triangulate_mD97B5B39D0C57A052C930F4F1F2895A8D1A36EF6(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.P2T::Triangulate(UnityEngine.ProBuilder.Poly2Tri.PointSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2T_Triangulate_mC7B84498001377D2C7DC84A6F23DE85777D5DC60 (PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* ___ps0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P2T_t36F667563D2982A5318CDA96F7AF23A05F3A94F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Triangulate(_defaultAlgorithm, ps);
		int32_t L_0 = ((P2T_t36F667563D2982A5318CDA96F7AF23A05F3A94F1_StaticFields*)il2cpp_codegen_static_fields_for(P2T_t36F667563D2982A5318CDA96F7AF23A05F3A94F1_il2cpp_TypeInfo_var))->____defaultAlgorithm_0;
		PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* L_1 = ___ps0;
		P2T_Triangulate_mD97B5B39D0C57A052C930F4F1F2895A8D1A36EF6(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationContext UnityEngine.ProBuilder.Poly2Tri.P2T::CreateContext(UnityEngine.ProBuilder.Poly2Tri.TriangulationAlgorithm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* P2T_CreateContext_mC11B818ED4CAA47D0D084F0AAC43E48F6FC104C9 (int32_t ___algorithm0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___algorithm0;
		// return new DTSweepContext();
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_1 = (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145*)il2cpp_codegen_object_new(DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145_il2cpp_TypeInfo_var);
		DTSweepContext__ctor_mB676BEA85EBE599FCED0BF9BFF53D9F53235A728(L_1, NULL);
		return L_1;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.P2T::Triangulate(UnityEngine.ProBuilder.Poly2Tri.TriangulationAlgorithm,UnityEngine.ProBuilder.Poly2Tri.Triangulatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2T_Triangulate_mD97B5B39D0C57A052C930F4F1F2895A8D1A36EF6 (int32_t ___algorithm0, RuntimeObject* ___t1, const RuntimeMethod* method) 
{
	{
		// tcx = CreateContext(algorithm);
		int32_t L_0 = ___algorithm0;
		TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_1;
		L_1 = P2T_CreateContext_mC11B818ED4CAA47D0D084F0AAC43E48F6FC104C9(L_0, NULL);
		// tcx.PrepareTriangulation(t);
		TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_2 = L_1;
		RuntimeObject* L_3 = ___t1;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::PrepareTriangulation(UnityEngine.ProBuilder.Poly2Tri.Triangulatable) */, L_2, L_3);
		// Triangulate(tcx);
		P2T_Triangulate_m311CBB7B21BF48A57D64A69B2DD0185583FC3164(L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.P2T::Triangulate(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2T_Triangulate_m311CBB7B21BF48A57D64A69B2DD0185583FC3164 (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* ___tcx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch (tcx.Algorithm) {
		TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_0 = ___tcx0;
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* UnityEngine.ProBuilder.Poly2Tri.TriangulationAlgorithm UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_Algorithm() */, L_0);
		// DTSweep.Triangulate((DTSweepContext)tcx);
		TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_2 = ___tcx0;
		DTSweep_Triangulate_mEE5DB994001D8113705B06E1B6AFAC37EDC6C926(((DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145*)CastclassClass((RuntimeObject*)L_2, DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145_il2cpp_TypeInfo_var)), NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.P2T::Warmup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2T_Warmup_m10CF727B5B7A8A4592B3C0E8DB1E738ED66D9E62 (const RuntimeMethod* method) 
{
	{
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::.ctor(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon__ctor_m94A0B1D34C4084C9867266D8C786C6321D26599F (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* __this, RuntimeObject* ___points0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Cast_TisTriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC_mF91B2FD4E52B544E80CC7A8EB683552A5F8421F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tAF941A9A3F2E40EF3A535959EF6980574778991F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tB16CBE5912F80AEAB4931A9FAD61FE71902171E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m346A80ECA3AF0181845D900A962D78284782D100_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7FE690CC3514D8246B03B1E7815960030669018B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9DC390849BA500451557578B04CA56F022B76A2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected List<TriangulationPoint> _points = new List<TriangulationPoint>();
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_0 = (List_1_t9DC390849BA500451557578B04CA56F022B76A2B*)il2cpp_codegen_object_new(List_1_t9DC390849BA500451557578B04CA56F022B76A2B_il2cpp_TypeInfo_var);
		List_1__ctor_m7FE690CC3514D8246B03B1E7815960030669018B(L_0, List_1__ctor_m7FE690CC3514D8246B03B1E7815960030669018B_RuntimeMethod_var);
		__this->____points_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____points_0), (void*)L_0);
		// public Polygon( IList<PolygonPoint> points ) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (points.Count < 3) throw new ArgumentException("List has fewer than 3 points", "points");
		RuntimeObject* L_1 = ___points0;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>::get_Count() */, ICollection_1_tAF941A9A3F2E40EF3A535959EF6980574778991F_il2cpp_TypeInfo_var, L_1);
		if ((((int32_t)L_2) >= ((int32_t)3)))
		{
			goto IL_002a;
		}
	}
	{
		// if (points.Count < 3) throw new ArgumentException("List has fewer than 3 points", "points");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5389BB78303E5DA7DBFA5E26F2ACCD912979149)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17A7BA088490CA1D9307C4F7F07BDC92703EDF51)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Polygon__ctor_m94A0B1D34C4084C9867266D8C786C6321D26599F_RuntimeMethod_var)));
	}

IL_002a:
	{
		// if (points[0].Equals(points[points.Count - 1])) points.RemoveAt(points.Count - 1);
		RuntimeObject* L_4 = ___points0;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_5;
		L_5 = InterfaceFuncInvoker1< PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>::get_Item(System.Int32) */, IList_1_tB16CBE5912F80AEAB4931A9FAD61FE71902171E8_il2cpp_TypeInfo_var, L_4, 0);
		RuntimeObject* L_6 = ___points0;
		RuntimeObject* L_7 = ___points0;
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>::get_Count() */, ICollection_1_tAF941A9A3F2E40EF3A535959EF6980574778991F_il2cpp_TypeInfo_var, L_7);
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_9;
		L_9 = InterfaceFuncInvoker1< PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>::get_Item(System.Int32) */, IList_1_tB16CBE5912F80AEAB4931A9FAD61FE71902171E8_il2cpp_TypeInfo_var, L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)));
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_9);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		// if (points[0].Equals(points[points.Count - 1])) points.RemoveAt(points.Count - 1);
		RuntimeObject* L_11 = ___points0;
		RuntimeObject* L_12 = ___points0;
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>::get_Count() */, ICollection_1_tAF941A9A3F2E40EF3A535959EF6980574778991F_il2cpp_TypeInfo_var, L_12);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>::RemoveAt(System.Int32) */, IList_1_tB16CBE5912F80AEAB4931A9FAD61FE71902171E8_il2cpp_TypeInfo_var, L_11, ((int32_t)il2cpp_codegen_subtract(L_13, 1)));
	}

IL_0054:
	{
		// _points.AddRange(points.Cast<TriangulationPoint>());
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_14 = __this->____points_0;
		RuntimeObject* L_15 = ___points0;
		RuntimeObject* L_16;
		L_16 = Enumerable_Cast_TisTriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC_mF91B2FD4E52B544E80CC7A8EB683552A5F8421F5(L_15, Enumerable_Cast_TisTriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC_mF91B2FD4E52B544E80CC7A8EB683552A5F8421F5_RuntimeMethod_var);
		List_1_AddRange_m346A80ECA3AF0181845D900A962D78284782D100(L_14, L_16, List_1_AddRange_m346A80ECA3AF0181845D900A962D78284782D100_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::.ctor(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon__ctor_m1F4EF81AFA82411208A2BC6AC0BA7B4C2591D13F (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* __this, RuntimeObject* ___points0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisPolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332_mB7FB96381E0755F424FD375E8F15B9015A90B810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tB16CBE5912F80AEAB4931A9FAD61FE71902171E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* G_B1_1 = NULL;
	{
		// public Polygon( IEnumerable<PolygonPoint> points ): this( (points as IList<PolygonPoint>) ?? points.ToArray() ) {}
		RuntimeObject* L_0 = ___points0;
		RuntimeObject* L_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_1_tB16CBE5912F80AEAB4931A9FAD61FE71902171E8_il2cpp_TypeInfo_var));
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = ___points0;
		PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC* L_3;
		L_3 = Enumerable_ToArray_TisPolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332_mB7FB96381E0755F424FD375E8F15B9015A90B810(L_2, Enumerable_ToArray_TisPolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332_mB7FB96381E0755F424FD375E8F15B9015A90B810_RuntimeMethod_var);
		G_B2_0 = ((RuntimeObject*)(L_3));
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		Polygon__ctor_m94A0B1D34C4084C9867266D8C786C6321D26599F(G_B2_1, G_B2_0, NULL);
		// public Polygon( IEnumerable<PolygonPoint> points ): this( (points as IList<PolygonPoint>) ?? points.ToArray() ) {}
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::.ctor(UnityEngine.ProBuilder.Poly2Tri.PolygonPoint[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon__ctor_mB15F1908A1148E484BACDCDF7A8B8354EE0591A5 (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* __this, PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC* ___points0, const RuntimeMethod* method) 
{
	{
		// public Polygon( params PolygonPoint[] points ) : this((IList<PolygonPoint>)points) { }
		PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC* L_0 = ___points0;
		Polygon__ctor_m94A0B1D34C4084C9867266D8C786C6321D26599F(__this, (RuntimeObject*)L_0, NULL);
		// public Polygon( params PolygonPoint[] points ) : this((IList<PolygonPoint>)points) { }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationMode UnityEngine.ProBuilder.Poly2Tri.Polygon::get_TriangulationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Polygon_get_TriangulationMode_mAF40DA5BFD48977993C6A64D73F378E79A4D9EC0 (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* __this, const RuntimeMethod* method) 
{
	{
		// public TriangulationMode TriangulationMode { get { return TriangulationMode.Polygon; } }
		return (int32_t)(2);
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::AddSteinerPoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_AddSteinerPoint_m0F506B6085B5AA82A9FE8957C138C76F2CAC71DF (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE9F03103B8FC2E56F54D8D5FCA5F2F466AE622C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7FE690CC3514D8246B03B1E7815960030669018B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9DC390849BA500451557578B04CA56F022B76A2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_steinerPoints == null) _steinerPoints = new List<TriangulationPoint>();
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_0 = __this->____steinerPoints_1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_steinerPoints == null) _steinerPoints = new List<TriangulationPoint>();
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_1 = (List_1_t9DC390849BA500451557578B04CA56F022B76A2B*)il2cpp_codegen_object_new(List_1_t9DC390849BA500451557578B04CA56F022B76A2B_il2cpp_TypeInfo_var);
		List_1__ctor_m7FE690CC3514D8246B03B1E7815960030669018B(L_1, List_1__ctor_m7FE690CC3514D8246B03B1E7815960030669018B_RuntimeMethod_var);
		__this->____steinerPoints_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____steinerPoints_1), (void*)L_1);
	}

IL_0013:
	{
		// _steinerPoints.Add(point);
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_2 = __this->____steinerPoints_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_3 = ___point0;
		List_1_Add_mE9F03103B8FC2E56F54D8D5FCA5F2F466AE622C4_inline(L_2, L_3, List_1_Add_mE9F03103B8FC2E56F54D8D5FCA5F2F466AE622C4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::AddSteinerPoints(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_AddSteinerPoints_m3C647EDED43AC4E2FDFDBCD0495D8D8C19C3DFF2 (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* __this, List_1_t9DC390849BA500451557578B04CA56F022B76A2B* ___points0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m346A80ECA3AF0181845D900A962D78284782D100_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7FE690CC3514D8246B03B1E7815960030669018B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9DC390849BA500451557578B04CA56F022B76A2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_steinerPoints == null) _steinerPoints = new List<TriangulationPoint>();
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_0 = __this->____steinerPoints_1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_steinerPoints == null) _steinerPoints = new List<TriangulationPoint>();
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_1 = (List_1_t9DC390849BA500451557578B04CA56F022B76A2B*)il2cpp_codegen_object_new(List_1_t9DC390849BA500451557578B04CA56F022B76A2B_il2cpp_TypeInfo_var);
		List_1__ctor_m7FE690CC3514D8246B03B1E7815960030669018B(L_1, List_1__ctor_m7FE690CC3514D8246B03B1E7815960030669018B_RuntimeMethod_var);
		__this->____steinerPoints_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____steinerPoints_1), (void*)L_1);
	}

IL_0013:
	{
		// _steinerPoints.AddRange(points);
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_2 = __this->____steinerPoints_1;
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_3 = ___points0;
		List_1_AddRange_m346A80ECA3AF0181845D900A962D78284782D100(L_2, L_3, List_1_AddRange_m346A80ECA3AF0181845D900A962D78284782D100_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::ClearSteinerPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_ClearSteinerPoints_m9AE5E65AD54680F3F473A0425162A939378DF95F (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4BD21D8641DD87A7F789778611CBF94ECE0478E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_steinerPoints != null) _steinerPoints.Clear();
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_0 = __this->____steinerPoints_1;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_steinerPoints != null) _steinerPoints.Clear();
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_1 = __this->____steinerPoints_1;
		List_1_Clear_m4BD21D8641DD87A7F789778611CBF94ECE0478E7_inline(L_1, List_1_Clear_m4BD21D8641DD87A7F789778611CBF94ECE0478E7_RuntimeMethod_var);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::AddHole(UnityEngine.ProBuilder.Poly2Tri.Polygon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_AddHole_m3CFA9F4F060708E15D82A7CC870266DC1FD423A4 (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* __this, Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* ___poly0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5B313A9978CA3D215E1868B5D9A92A1F2F2E8F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2AEC4968937AD256B86AA9FF4F84745AEFBBBE59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_holes == null) _holes = new List<Polygon>();
		List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC* L_0 = __this->____holes_2;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_holes == null) _holes = new List<Polygon>();
		List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC* L_1 = (List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC*)il2cpp_codegen_object_new(List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC_il2cpp_TypeInfo_var);
		List_1__ctor_m2AEC4968937AD256B86AA9FF4F84745AEFBBBE59(L_1, List_1__ctor_m2AEC4968937AD256B86AA9FF4F84745AEFBBBE59_RuntimeMethod_var);
		__this->____holes_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____holes_2), (void*)L_1);
	}

IL_0013:
	{
		// _holes.Add(poly);
		List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC* L_2 = __this->____holes_2;
		Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* L_3 = ___poly0;
		List_1_Add_mB5B313A9978CA3D215E1868B5D9A92A1F2F2E8F2_inline(L_2, L_3, List_1_Add_mB5B313A9978CA3D215E1868B5D9A92A1F2F2E8F2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::InsertPointAfter(UnityEngine.ProBuilder.Poly2Tri.PolygonPoint,UnityEngine.ProBuilder.Poly2Tri.PolygonPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_InsertPointAfter_m9D209D637F3A6EDB368440926E50558C0FE16BAC (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* __this, PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* ___point0, PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* ___newPoint1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mBA1102BE5652DF9598511483BE0AF2653B62A212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m0B8C4BC7E850B722674630178D55A28B460AEEE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int index = _points.IndexOf(point);
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_0 = __this->____points_0;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_1 = ___point0;
		int32_t L_2;
		L_2 = List_1_IndexOf_mBA1102BE5652DF9598511483BE0AF2653B62A212(L_0, L_1, List_1_IndexOf_mBA1102BE5652DF9598511483BE0AF2653B62A212_RuntimeMethod_var);
		V_0 = L_2;
		// if (index == -1) throw new ArgumentException("Tried to insert a point into a Polygon after a point not belonging to the Polygon", "point");
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		// if (index == -1) throw new ArgumentException("Tried to insert a point into a Polygon after a point not belonging to the Polygon", "point");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral392DE7CC08F7029BEEE5B258FBEF7D0CD00FE66B)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral61B8D324687C24872968A15276C954F913457113)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Polygon_InsertPointAfter_m9D209D637F3A6EDB368440926E50558C0FE16BAC_RuntimeMethod_var)));
	}

IL_0021:
	{
		// newPoint.Next = point.Next;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_5 = ___newPoint1;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_6 = ___point0;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_7;
		L_7 = PolygonPoint_get_Next_m2F3BF4CDBBAC577A25F45BA429A5024CF71EDC01_inline(L_6, NULL);
		PolygonPoint_set_Next_mBE4F9B811E2D887E87082ACE0D1D28A0623915A4_inline(L_5, L_7, NULL);
		// newPoint.Previous = point;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_8 = ___newPoint1;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_9 = ___point0;
		PolygonPoint_set_Previous_m7F6ACCA339AE8CCDEC6E468A49CD056EEF2A6FAF_inline(L_8, L_9, NULL);
		// point.Next.Previous = newPoint;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_10 = ___point0;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_11;
		L_11 = PolygonPoint_get_Next_m2F3BF4CDBBAC577A25F45BA429A5024CF71EDC01_inline(L_10, NULL);
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_12 = ___newPoint1;
		PolygonPoint_set_Previous_m7F6ACCA339AE8CCDEC6E468A49CD056EEF2A6FAF_inline(L_11, L_12, NULL);
		// point.Next = newPoint;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_13 = ___point0;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_14 = ___newPoint1;
		PolygonPoint_set_Next_mBE4F9B811E2D887E87082ACE0D1D28A0623915A4_inline(L_13, L_14, NULL);
		// _points.Insert(index + 1, newPoint);
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_15 = __this->____points_0;
		int32_t L_16 = V_0;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_17 = ___newPoint1;
		List_1_Insert_m0B8C4BC7E850B722674630178D55A28B460AEEE4(L_15, ((int32_t)il2cpp_codegen_add(L_16, 1)), L_17, List_1_Insert_m0B8C4BC7E850B722674630178D55A28B460AEEE4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::AddPoints(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_AddPoints_m2D99513B423F98E4ACE55B38001EE1F28D9B3424 (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* __this, RuntimeObject* ___list0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t5CB73B844D94679509FEEC2FF36953920C0CFEAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0B4DABB143D481285E16AFA741CF5AB4FF8E92BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE9F03103B8FC2E56F54D8D5FCA5F2F466AE622C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* V_2 = NULL;
	{
		// foreach (PolygonPoint p in list) {
		RuntimeObject* L_0 = ___list0;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>::GetEnumerator() */, IEnumerable_1_t5CB73B844D94679509FEEC2FF36953920C0CFEAF_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_1;
					if (!L_2)
					{
						goto IL_0067;
					}
				}
				{
					RuntimeObject* L_3 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0067:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0054_1;
			}

IL_0009_1:
			{
				// foreach (PolygonPoint p in list) {
				RuntimeObject* L_4 = V_1;
				PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_5;
				L_5 = InterfaceFuncInvoker0< PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>::get_Current() */, IEnumerator_1_t0B4DABB143D481285E16AFA741CF5AB4FF8E92BD_il2cpp_TypeInfo_var, L_4);
				V_2 = L_5;
				// p.Previous = _last;
				PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_6 = V_2;
				PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_7 = __this->____last_4;
				PolygonPoint_set_Previous_m7F6ACCA339AE8CCDEC6E468A49CD056EEF2A6FAF_inline(L_6, L_7, NULL);
				// if (_last != null) {
				PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_8 = __this->____last_4;
				if (!L_8)
				{
					goto IL_0041_1;
				}
			}
			{
				// p.Next = _last.Next;
				PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_9 = V_2;
				PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_10 = __this->____last_4;
				PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_11;
				L_11 = PolygonPoint_get_Next_m2F3BF4CDBBAC577A25F45BA429A5024CF71EDC01_inline(L_10, NULL);
				PolygonPoint_set_Next_mBE4F9B811E2D887E87082ACE0D1D28A0623915A4_inline(L_9, L_11, NULL);
				// _last.Next = p;
				PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_12 = __this->____last_4;
				PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_13 = V_2;
				PolygonPoint_set_Next_mBE4F9B811E2D887E87082ACE0D1D28A0623915A4_inline(L_12, L_13, NULL);
			}

IL_0041_1:
			{
				// _last = p;
				PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_14 = V_2;
				__this->____last_4 = L_14;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____last_4), (void*)L_14);
				// _points.Add(p);
				List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_15 = __this->____points_0;
				PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_16 = V_2;
				List_1_Add_mE9F03103B8FC2E56F54D8D5FCA5F2F466AE622C4_inline(L_15, L_16, List_1_Add_mE9F03103B8FC2E56F54D8D5FCA5F2F466AE622C4_RuntimeMethod_var);
			}

IL_0054_1:
			{
				// foreach (PolygonPoint p in list) {
				RuntimeObject* L_17 = V_1;
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0068;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0068:
	{
		// first = (PolygonPoint)_points[0];
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_19 = __this->____points_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_20;
		L_20 = List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5(L_19, 0, List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5_RuntimeMethod_var);
		V_0 = ((PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332*)CastclassClass((RuntimeObject*)L_20, PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332_il2cpp_TypeInfo_var));
		// _last.Next = first;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_21 = __this->____last_4;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_22 = V_0;
		PolygonPoint_set_Next_mBE4F9B811E2D887E87082ACE0D1D28A0623915A4_inline(L_21, L_22, NULL);
		// first.Previous = _last;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_23 = V_0;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_24 = __this->____last_4;
		PolygonPoint_set_Previous_m7F6ACCA339AE8CCDEC6E468A49CD056EEF2A6FAF_inline(L_23, L_24, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::AddPoint(UnityEngine.ProBuilder.Poly2Tri.PolygonPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_AddPoint_m525760104AB9717DA100FA7EB1CE9305388A53E7 (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* __this, PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE9F03103B8FC2E56F54D8D5FCA5F2F466AE622C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// p.Previous = _last;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_0 = ___p0;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_1 = __this->____last_4;
		PolygonPoint_set_Previous_m7F6ACCA339AE8CCDEC6E468A49CD056EEF2A6FAF_inline(L_0, L_1, NULL);
		// p.Next = _last.Next;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_2 = ___p0;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_3 = __this->____last_4;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_4;
		L_4 = PolygonPoint_get_Next_m2F3BF4CDBBAC577A25F45BA429A5024CF71EDC01_inline(L_3, NULL);
		PolygonPoint_set_Next_mBE4F9B811E2D887E87082ACE0D1D28A0623915A4_inline(L_2, L_4, NULL);
		// _last.Next = p;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_5 = __this->____last_4;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_6 = ___p0;
		PolygonPoint_set_Next_mBE4F9B811E2D887E87082ACE0D1D28A0623915A4_inline(L_5, L_6, NULL);
		// _points.Add(p);
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_7 = __this->____points_0;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_8 = ___p0;
		List_1_Add_mE9F03103B8FC2E56F54D8D5FCA5F2F466AE622C4_inline(L_7, L_8, List_1_Add_mE9F03103B8FC2E56F54D8D5FCA5F2F466AE622C4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::RemovePoint(UnityEngine.ProBuilder.Poly2Tri.PolygonPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_RemovePoint_mD03E3C3D45CCC2057C287C0CF939E137AC7D67A2 (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* __this, PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m0B442C2A5A505181553E9FB3372193F0FD8680D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* V_0 = NULL;
	PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* V_1 = NULL;
	{
		// next = p.Next;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_0 = ___p0;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_1;
		L_1 = PolygonPoint_get_Next_m2F3BF4CDBBAC577A25F45BA429A5024CF71EDC01_inline(L_0, NULL);
		V_0 = L_1;
		// prev = p.Previous;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_2 = ___p0;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_3;
		L_3 = PolygonPoint_get_Previous_m13E87872F1A6A9C1F61CB2799095DBCE6CE79F96_inline(L_2, NULL);
		V_1 = L_3;
		// prev.Next = next;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_4 = V_1;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_5 = V_0;
		PolygonPoint_set_Next_mBE4F9B811E2D887E87082ACE0D1D28A0623915A4_inline(L_4, L_5, NULL);
		// next.Previous = prev;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_6 = V_0;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_7 = V_1;
		PolygonPoint_set_Previous_m7F6ACCA339AE8CCDEC6E468A49CD056EEF2A6FAF_inline(L_6, L_7, NULL);
		// _points.Remove(p);
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_8 = __this->____points_0;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_9 = ___p0;
		bool L_10;
		L_10 = List_1_Remove_m0B442C2A5A505181553E9FB3372193F0FD8680D1(L_8, L_9, List_1_Remove_m0B442C2A5A505181553E9FB3372193F0FD8680D1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> UnityEngine.ProBuilder.Poly2Tri.Polygon::get_Points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Polygon_get_Points_m47A692C459B6EACDA718C02EE74E9E36010D5BF8 (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* __this, const RuntimeMethod* method) 
{
	{
		// public IList<TriangulationPoint> Points { get { return _points; } }
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_0 = __this->____points_0;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> UnityEngine.ProBuilder.Poly2Tri.Polygon::get_Triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Polygon_get_Triangles_mBF6FC0716A0FF1F8E6BDD4B1EFCDB33ADD1BC0F2 (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* __this, const RuntimeMethod* method) 
{
	{
		// public IList<DelaunayTriangle> Triangles { get { return _triangles; } }
		List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* L_0 = __this->____triangles_3;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.Polygon> UnityEngine.ProBuilder.Poly2Tri.Polygon::get_Holes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Polygon_get_Holes_m7629B1BC9FF55394EBC6DED072C39FCBE2893B3A (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* __this, const RuntimeMethod* method) 
{
	{
		// public IList<Polygon> Holes { get { return _holes; }}
		List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC* L_0 = __this->____holes_2;
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::AddTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_AddTriangle_m8AB7C81EC9D71D6A2CA22B171018D233518E9120 (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* __this, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F339626C6CB6D2881F4FE1FEA34F7D36F35733E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _triangles.Add(t);
		List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* L_0 = __this->____triangles_3;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_1 = ___t0;
		List_1_Add_m2F339626C6CB6D2881F4FE1FEA34F7D36F35733E_inline(L_0, L_1, List_1_Add_m2F339626C6CB6D2881F4FE1FEA34F7D36F35733E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::AddTriangles(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_AddTriangles_m19987E31D5A1046DB0D84D6D62F9C12ED0CC95EC (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* __this, RuntimeObject* ___list0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m7D686EC0D5426F552181A85DA34B53C18063393E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _triangles.AddRange(list);
		List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* L_0 = __this->____triangles_3;
		RuntimeObject* L_1 = ___list0;
		List_1_AddRange_m7D686EC0D5426F552181A85DA34B53C18063393E(L_0, L_1, List_1_AddRange_m7D686EC0D5426F552181A85DA34B53C18063393E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::ClearTriangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_ClearTriangles_m97F4AE4F5444E7238934EFAAA73BB4DA1757FFFB (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mB45D901DD07F14436350B8FC0DE5C73B9AFE8A30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_triangles != null) _triangles.Clear();
		List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* L_0 = __this->____triangles_3;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_triangles != null) _triangles.Clear();
		List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* L_1 = __this->____triangles_3;
		List_1_Clear_mB45D901DD07F14436350B8FC0DE5C73B9AFE8A30_inline(L_1, List_1_Clear_mB45D901DD07F14436350B8FC0DE5C73B9AFE8A30_RuntimeMethod_var);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::Prepare(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_Prepare_m41C845492153C9376EC4A20F230D1E1854D562C3 (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* __this, TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* ___tcx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m239438C4F01036BA327EF76E553656CDABB26FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m091600B516F621AC899197B46F7B384307C8AA4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4D03B64D67B025F6BD36433DDD46CC2CED2FA582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m346A80ECA3AF0181845D900A962D78284782D100_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mB45D901DD07F14436350B8FC0DE5C73B9AFE8A30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBC41876ED3759C8586790F408F5524E0A904B920_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF5D0A29AF338C34408DD7D1ABE7311CF318D436C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE7BB1BFFCE6CA954C471967917396D5565DBD642_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t5CE23F25F522496110B65579892DD5BD5A7317A8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// if (_triangles == null) {
		List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* L_0 = __this->____triangles_3;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// _triangles = new List<DelaunayTriangle>(_points.Count);
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_1 = __this->____points_0;
		int32_t L_2;
		L_2 = List_1_get_Count_mE7BB1BFFCE6CA954C471967917396D5565DBD642_inline(L_1, List_1_get_Count_mE7BB1BFFCE6CA954C471967917396D5565DBD642_RuntimeMethod_var);
		List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* L_3 = (List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8*)il2cpp_codegen_object_new(List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8_il2cpp_TypeInfo_var);
		List_1__ctor_mF5D0A29AF338C34408DD7D1ABE7311CF318D436C(L_3, L_2, List_1__ctor_mF5D0A29AF338C34408DD7D1ABE7311CF318D436C_RuntimeMethod_var);
		__this->____triangles_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____triangles_3), (void*)L_3);
		goto IL_002b;
	}

IL_0020:
	{
		// _triangles.Clear();
		List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* L_4 = __this->____triangles_3;
		List_1_Clear_mB45D901DD07F14436350B8FC0DE5C73B9AFE8A30_inline(L_4, List_1_Clear_mB45D901DD07F14436350B8FC0DE5C73B9AFE8A30_RuntimeMethod_var);
	}

IL_002b:
	{
		// for (int i = 0; i < _points.Count - 1; i++) tcx.NewConstraint(_points[i], _points[i + 1]);
		V_0 = 0;
		goto IL_0054;
	}

IL_002f:
	{
		// for (int i = 0; i < _points.Count - 1; i++) tcx.NewConstraint(_points[i], _points[i + 1]);
		TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_5 = ___tcx0;
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_6 = __this->____points_0;
		int32_t L_7 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_8;
		L_8 = List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5(L_6, L_7, List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5_RuntimeMethod_var);
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_9 = __this->____points_0;
		int32_t L_10 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_11;
		L_11 = List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5(L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5_RuntimeMethod_var);
		TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27* L_12;
		L_12 = VirtualFuncInvoker2< TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* >::Invoke(6 /* UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint) */, L_5, L_8, L_11);
		// for (int i = 0; i < _points.Count - 1; i++) tcx.NewConstraint(_points[i], _points[i + 1]);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0054:
	{
		// for (int i = 0; i < _points.Count - 1; i++) tcx.NewConstraint(_points[i], _points[i + 1]);
		int32_t L_14 = V_0;
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_15 = __this->____points_0;
		int32_t L_16;
		L_16 = List_1_get_Count_mE7BB1BFFCE6CA954C471967917396D5565DBD642_inline(L_15, List_1_get_Count_mE7BB1BFFCE6CA954C471967917396D5565DBD642_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_16, 1)))))
		{
			goto IL_002f;
		}
	}
	{
		// tcx.NewConstraint(_points[0], _points[_points.Count - 1]);
		TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_17 = ___tcx0;
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_18 = __this->____points_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_19;
		L_19 = List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5(L_18, 0, List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5_RuntimeMethod_var);
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_20 = __this->____points_0;
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_21 = __this->____points_0;
		int32_t L_22;
		L_22 = List_1_get_Count_mE7BB1BFFCE6CA954C471967917396D5565DBD642_inline(L_21, List_1_get_Count_mE7BB1BFFCE6CA954C471967917396D5565DBD642_RuntimeMethod_var);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_23;
		L_23 = List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5(L_20, ((int32_t)il2cpp_codegen_subtract(L_22, 1)), List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5_RuntimeMethod_var);
		TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27* L_24;
		L_24 = VirtualFuncInvoker2< TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* >::Invoke(6 /* UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint) */, L_17, L_19, L_23);
		// tcx.Points.AddRange(_points);
		TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_25 = ___tcx0;
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_26 = L_25->___Points_2;
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_27 = __this->____points_0;
		List_1_AddRange_m346A80ECA3AF0181845D900A962D78284782D100(L_26, L_27, List_1_AddRange_m346A80ECA3AF0181845D900A962D78284782D100_RuntimeMethod_var);
		// if (_holes != null) {
		List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC* L_28 = __this->____holes_2;
		if (!L_28)
		{
			goto IL_0152;
		}
	}
	{
		// foreach (Polygon p in _holes) {
		List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC* L_29 = __this->____holes_2;
		Enumerator_t5CE23F25F522496110B65579892DD5BD5A7317A8 L_30;
		L_30 = List_1_GetEnumerator_mBC41876ED3759C8586790F408F5524E0A904B920(L_29, List_1_GetEnumerator_mBC41876ED3759C8586790F408F5524E0A904B920_RuntimeMethod_var);
		V_1 = L_30;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0144:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m239438C4F01036BA327EF76E553656CDABB26FEE((&V_1), Enumerator_Dispose_m239438C4F01036BA327EF76E553656CDABB26FEE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0136_1;
			}

IL_00b9_1:
			{
				// foreach (Polygon p in _holes) {
				Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* L_31;
				L_31 = Enumerator_get_Current_m4D03B64D67B025F6BD36433DDD46CC2CED2FA582_inline((&V_1), Enumerator_get_Current_m4D03B64D67B025F6BD36433DDD46CC2CED2FA582_RuntimeMethod_var);
				V_2 = L_31;
				// for (int i = 0; i < p._points.Count - 1; i++) tcx.NewConstraint(p._points[i], p._points[i + 1]);
				V_3 = 0;
				goto IL_00ea_1;
			}

IL_00c5_1:
			{
				// for (int i = 0; i < p._points.Count - 1; i++) tcx.NewConstraint(p._points[i], p._points[i + 1]);
				TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_32 = ___tcx0;
				Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* L_33 = V_2;
				List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_34 = L_33->____points_0;
				int32_t L_35 = V_3;
				TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_36;
				L_36 = List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5(L_34, L_35, List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5_RuntimeMethod_var);
				Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* L_37 = V_2;
				List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_38 = L_37->____points_0;
				int32_t L_39 = V_3;
				TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_40;
				L_40 = List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5(L_38, ((int32_t)il2cpp_codegen_add(L_39, 1)), List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5_RuntimeMethod_var);
				TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27* L_41;
				L_41 = VirtualFuncInvoker2< TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* >::Invoke(6 /* UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint) */, L_32, L_36, L_40);
				// for (int i = 0; i < p._points.Count - 1; i++) tcx.NewConstraint(p._points[i], p._points[i + 1]);
				int32_t L_42 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_42, 1));
			}

IL_00ea_1:
			{
				// for (int i = 0; i < p._points.Count - 1; i++) tcx.NewConstraint(p._points[i], p._points[i + 1]);
				int32_t L_43 = V_3;
				Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* L_44 = V_2;
				List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_45 = L_44->____points_0;
				int32_t L_46;
				L_46 = List_1_get_Count_mE7BB1BFFCE6CA954C471967917396D5565DBD642_inline(L_45, List_1_get_Count_mE7BB1BFFCE6CA954C471967917396D5565DBD642_RuntimeMethod_var);
				if ((((int32_t)L_43) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_46, 1)))))
				{
					goto IL_00c5_1;
				}
			}
			{
				// tcx.NewConstraint(p._points[0], p._points[p._points.Count - 1]);
				TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_47 = ___tcx0;
				Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* L_48 = V_2;
				List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_49 = L_48->____points_0;
				TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_50;
				L_50 = List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5(L_49, 0, List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5_RuntimeMethod_var);
				Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* L_51 = V_2;
				List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_52 = L_51->____points_0;
				Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* L_53 = V_2;
				List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_54 = L_53->____points_0;
				int32_t L_55;
				L_55 = List_1_get_Count_mE7BB1BFFCE6CA954C471967917396D5565DBD642_inline(L_54, List_1_get_Count_mE7BB1BFFCE6CA954C471967917396D5565DBD642_RuntimeMethod_var);
				TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_56;
				L_56 = List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5(L_52, ((int32_t)il2cpp_codegen_subtract(L_55, 1)), List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5_RuntimeMethod_var);
				TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27* L_57;
				L_57 = VirtualFuncInvoker2< TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* >::Invoke(6 /* UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint) */, L_47, L_50, L_56);
				// tcx.Points.AddRange(p._points);
				TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_58 = ___tcx0;
				List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_59 = L_58->___Points_2;
				Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* L_60 = V_2;
				List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_61 = L_60->____points_0;
				List_1_AddRange_m346A80ECA3AF0181845D900A962D78284782D100(L_59, L_61, List_1_AddRange_m346A80ECA3AF0181845D900A962D78284782D100_RuntimeMethod_var);
			}

IL_0136_1:
			{
				// foreach (Polygon p in _holes) {
				bool L_62;
				L_62 = Enumerator_MoveNext_m091600B516F621AC899197B46F7B384307C8AA4A((&V_1), Enumerator_MoveNext_m091600B516F621AC899197B46F7B384307C8AA4A_RuntimeMethod_var);
				if (L_62)
				{
					goto IL_00b9_1;
				}
			}
			{
				goto IL_0152;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		// if (_steinerPoints != null) {
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_63 = __this->____steinerPoints_1;
		if (!L_63)
		{
			goto IL_016b;
		}
	}
	{
		// tcx.Points.AddRange(_steinerPoints);
		TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_64 = ___tcx0;
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_65 = L_64->___Points_2;
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_66 = __this->____steinerPoints_1;
		List_1_AddRange_m346A80ECA3AF0181845D900A962D78284782D100(L_65, L_66, List_1_AddRange_m346A80ECA3AF0181845D900A962D78284782D100_RuntimeMethod_var);
	}

IL_016b:
	{
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.PolygonPoint::.ctor(System.Double,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolygonPoint__ctor_m9EC32A7B351C4F32B021948CCB19A357030040C2 (PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* __this, double ___x0, double ___y1, int32_t ___index2, const RuntimeMethod* method) 
{
	{
		// public PolygonPoint( double x, double y, int index = INSERTED_INDEX ) : base(x, y, index) { }
		double L_0 = ___x0;
		double L_1 = ___y1;
		int32_t L_2 = ___index2;
		TriangulationPoint__ctor_m597CD937EAE5EEFB7F00F2480610423B84E89D15(__this, L_0, L_1, L_2, NULL);
		// public PolygonPoint( double x, double y, int index = INSERTED_INDEX ) : base(x, y, index) { }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.PolygonPoint UnityEngine.ProBuilder.Poly2Tri.PolygonPoint::get_Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* PolygonPoint_get_Next_m2F3BF4CDBBAC577A25F45BA429A5024CF71EDC01 (PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* __this, const RuntimeMethod* method) 
{
	{
		// public PolygonPoint Next { get; set; }
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_0 = __this->___U3CNextU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PolygonPoint::set_Next(UnityEngine.ProBuilder.Poly2Tri.PolygonPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolygonPoint_set_Next_mBE4F9B811E2D887E87082ACE0D1D28A0623915A4 (PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* __this, PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* ___value0, const RuntimeMethod* method) 
{
	{
		// public PolygonPoint Next { get; set; }
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_0 = ___value0;
		__this->___U3CNextU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNextU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.PolygonPoint UnityEngine.ProBuilder.Poly2Tri.PolygonPoint::get_Previous()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* PolygonPoint_get_Previous_m13E87872F1A6A9C1F61CB2799095DBCE6CE79F96 (PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* __this, const RuntimeMethod* method) 
{
	{
		// public PolygonPoint Previous { get; set; }
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_0 = __this->___U3CPreviousU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PolygonPoint::set_Previous(UnityEngine.ProBuilder.Poly2Tri.PolygonPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolygonPoint_set_Previous_m7F6ACCA339AE8CCDEC6E468A49CD056EEF2A6FAF (PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* __this, PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* ___value0, const RuntimeMethod* method) 
{
	{
		// public PolygonPoint Previous { get; set; }
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_0 = ___value0;
		__this->___U3CPreviousU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPreviousU3Ek__BackingField_7), (void*)L_0);
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.PolygonSet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolygonSet__ctor_mFDF1D368410FC9C6F8BEE37E1CCFB606DC393216 (PolygonSet_t5F5953714FCF415C18CBD74B9B10425832578526* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2AEC4968937AD256B86AA9FF4F84745AEFBBBE59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected List<Polygon> _polygons = new List<Polygon>();
		List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC* L_0 = (List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC*)il2cpp_codegen_object_new(List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC_il2cpp_TypeInfo_var);
		List_1__ctor_m2AEC4968937AD256B86AA9FF4F84745AEFBBBE59(L_0, List_1__ctor_m2AEC4968937AD256B86AA9FF4F84745AEFBBBE59_RuntimeMethod_var);
		__this->____polygons_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____polygons_0), (void*)L_0);
		// public PolygonSet() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public PolygonSet() {}
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PolygonSet::.ctor(UnityEngine.ProBuilder.Poly2Tri.Polygon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolygonSet__ctor_m42A422235B907609BEC89B10D6B6EC7D770FB997 (PolygonSet_t5F5953714FCF415C18CBD74B9B10425832578526* __this, Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* ___poly0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5B313A9978CA3D215E1868B5D9A92A1F2F2E8F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2AEC4968937AD256B86AA9FF4F84745AEFBBBE59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected List<Polygon> _polygons = new List<Polygon>();
		List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC* L_0 = (List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC*)il2cpp_codegen_object_new(List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC_il2cpp_TypeInfo_var);
		List_1__ctor_m2AEC4968937AD256B86AA9FF4F84745AEFBBBE59(L_0, List_1__ctor_m2AEC4968937AD256B86AA9FF4F84745AEFBBBE59_RuntimeMethod_var);
		__this->____polygons_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____polygons_0), (void*)L_0);
		// public PolygonSet(Polygon poly) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _polygons.Add(poly);
		List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC* L_1 = __this->____polygons_0;
		Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* L_2 = ___poly0;
		List_1_Add_mB5B313A9978CA3D215E1868B5D9A92A1F2F2E8F2_inline(L_1, L_2, List_1_Add_mB5B313A9978CA3D215E1868B5D9A92A1F2F2E8F2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PolygonSet::Add(UnityEngine.ProBuilder.Poly2Tri.Polygon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolygonSet_Add_mAB7A03A70BE71276BFABFF179E61EBFB48E90D54 (PolygonSet_t5F5953714FCF415C18CBD74B9B10425832578526* __this, Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5B313A9978CA3D215E1868B5D9A92A1F2F2E8F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _polygons.Add(p);
		List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC* L_0 = __this->____polygons_0;
		Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* L_1 = ___p0;
		List_1_Add_mB5B313A9978CA3D215E1868B5D9A92A1F2F2E8F2_inline(L_0, L_1, List_1_Add_mB5B313A9978CA3D215E1868B5D9A92A1F2F2E8F2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.Polygon> UnityEngine.ProBuilder.Poly2Tri.PolygonSet::get_Polygons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PolygonSet_get_Polygons_m5D4E7E58CD64A56270CF83C0E8544F924A7AD097 (PolygonSet_t5F5953714FCF415C18CBD74B9B10425832578526* __this, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<Polygon> Polygons { get { return _polygons; } }
		List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC* L_0 = __this->____polygons_0;
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
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::get_IsInterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_get_IsInterior_m42EE54145AAF8F8137DAE428DF9B34544EDEF3F2 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsInterior { get; set; }
		bool L_0 = __this->___U3CIsInteriorU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::set_IsInterior(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_set_IsInterior_m940C4269B9329980002506B2326BBACEFAFCEAFB (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsInterior { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsInteriorU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::.ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle__ctor_mD61268CE26513CDB23A354E3FF2C43B2BA806285 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p10, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p21, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p32, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_set_Item_mBF187A1F037A7C530FC1A0876CF9E8FF48E2E7ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DelaunayTriangle(TriangulationPoint p1, TriangulationPoint p2, TriangulationPoint p3) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Points[0] = p1;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_0 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p10;
		FixedArray3_1_set_Item_mBF187A1F037A7C530FC1A0876CF9E8FF48E2E7ED(L_0, 0, L_1, FixedArray3_1_set_Item_mBF187A1F037A7C530FC1A0876CF9E8FF48E2E7ED_RuntimeMethod_var);
		// Points[1] = p2;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_2 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_3 = ___p21;
		FixedArray3_1_set_Item_mBF187A1F037A7C530FC1A0876CF9E8FF48E2E7ED(L_2, 1, L_3, FixedArray3_1_set_Item_mBF187A1F037A7C530FC1A0876CF9E8FF48E2E7ED_RuntimeMethod_var);
		// Points[2] = p3;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_4 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_5 = ___p32;
		FixedArray3_1_set_Item_mBF187A1F037A7C530FC1A0876CF9E8FF48E2E7ED(L_4, 2, L_5, FixedArray3_1_set_Item_mBF187A1F037A7C530FC1A0876CF9E8FF48E2E7ED_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::IndexOf(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_IndexOf_mF7BE86FF7FEB50E93FABD238FE772A3747F4406C (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_IndexOf_mC54748218FF05CFF98D51DD98B2F9EB69BF9F25A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		// int i = Points.IndexOf(p);
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_0 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p0;
		int32_t L_2;
		L_2 = FixedArray3_1_IndexOf_mC54748218FF05CFF98D51DD98B2F9EB69BF9F25A(L_0, L_1, FixedArray3_1_IndexOf_mC54748218FF05CFF98D51DD98B2F9EB69BF9F25A_RuntimeMethod_var);
		// if (i==-1) throw new Exception("Calling index with a point that doesn't exist in triangle");
		int32_t L_3 = L_2;
		G_B1_0 = L_3;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			G_B2_0 = L_3;
			goto IL_001b;
		}
	}
	{
		// if (i==-1) throw new Exception("Calling index with a point that doesn't exist in triangle");
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF4ED7D3F8F9EE650CA476597BCB717839ACBA38B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DelaunayTriangle_IndexOf_mF7BE86FF7FEB50E93FABD238FE772A3747F4406C_RuntimeMethod_var)));
	}

IL_001b:
	{
		// return i;
		return G_B2_0;
	}
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::IndexCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_IndexCWFrom_mDA47BE137A760C483B6025E069FDEE4E14CB5F59 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, const RuntimeMethod* method) 
{
	{
		// public int IndexCWFrom (TriangulationPoint p) { return (IndexOf(p)+2)%3; }
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = ___p0;
		int32_t L_1;
		L_1 = DelaunayTriangle_IndexOf_mF7BE86FF7FEB50E93FABD238FE772A3747F4406C(__this, L_0, NULL);
		return ((int32_t)(((int32_t)il2cpp_codegen_add(L_1, 2))%3));
	}
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::IndexCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_IndexCCWFrom_m8023A1C470E58EA0999C5F34078F26EFFD78256A (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, const RuntimeMethod* method) 
{
	{
		// public int IndexCCWFrom(TriangulationPoint p) { return (IndexOf(p)+1)%3; }
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = ___p0;
		int32_t L_1;
		L_1 = DelaunayTriangle_IndexOf_mF7BE86FF7FEB50E93FABD238FE772A3747F4406C(__this, L_0, NULL);
		return ((int32_t)(((int32_t)il2cpp_codegen_add(L_1, 1))%3));
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::Contains(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_Contains_mCBAC8F1AE9D125D38E5DDC5FC31CB6A87874E70C (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_Contains_mFCB5DCCBE5C3236C89804B41C26A90F25601281B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool Contains(TriangulationPoint p) { return Points.Contains(p); }
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_0 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p0;
		bool L_2;
		L_2 = FixedArray3_1_Contains_mFCB5DCCBE5C3236C89804B41C26A90F25601281B(L_0, L_1, FixedArray3_1_Contains_mFCB5DCCBE5C3236C89804B41C26A90F25601281B_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkNeighbor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkNeighbor_mD09CE872870726D08F3CC0CC2B31DD9159739C8E (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p10, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p21, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___t2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_set_Item_m9A2D4AC048342E80ABBAA7D620107032A0DFD0B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int i = EdgeIndex(p1,p2);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = ___p10;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p21;
		int32_t L_2;
		L_2 = DelaunayTriangle_EdgeIndex_m91816E3D9EFACAF481AD414B4683AB1A4A4D5863(__this, L_0, L_1, NULL);
		V_0 = L_2;
		// if ( i==-1 ) throw new Exception( "Error marking neighbors -- t doesn't contain edge p1-p2!" );
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0018;
		}
	}
	{
		// if ( i==-1 ) throw new Exception( "Error marking neighbors -- t doesn't contain edge p1-p2!" );
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA29C437354A4DAC3895D74F1428508364E47293F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DelaunayTriangle_MarkNeighbor_mD09CE872870726D08F3CC0CC2B31DD9159739C8E_RuntimeMethod_var)));
	}

IL_0018:
	{
		// Neighbors[i] = t;
		FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B* L_5 = (&__this->___Neighbors_1);
		int32_t L_6 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_7 = ___t2;
		FixedArray3_1_set_Item_m9A2D4AC048342E80ABBAA7D620107032A0DFD0B7(L_5, L_6, L_7, FixedArray3_1_set_Item_m9A2D4AC048342E80ABBAA7D620107032A0DFD0B7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkNeighbor(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkNeighbor_m47AFBF2FA451F82308C1B7C6979C3693120DDD87 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_set_Item_m9A2D4AC048342E80ABBAA7D620107032A0DFD0B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// bool a = t.Contains(Points[0]);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_0 = ___t0;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_1 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2;
		L_2 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_1, 0, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		bool L_3;
		L_3 = DelaunayTriangle_Contains_mCBAC8F1AE9D125D38E5DDC5FC31CB6A87874E70C(L_0, L_2, NULL);
		V_0 = L_3;
		// bool b = t.Contains(Points[1]);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_4 = ___t0;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_5 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_6;
		L_6 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_5, 1, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		bool L_7;
		L_7 = DelaunayTriangle_Contains_mCBAC8F1AE9D125D38E5DDC5FC31CB6A87874E70C(L_4, L_6, NULL);
		V_1 = L_7;
		// bool c = t.Contains(Points[2]);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_8 = ___t0;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_9 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_10;
		L_10 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_9, 2, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		bool L_11;
		L_11 = DelaunayTriangle_Contains_mCBAC8F1AE9D125D38E5DDC5FC31CB6A87874E70C(L_8, L_10, NULL);
		V_2 = L_11;
		// if      (b&&c) { Neighbors[0]=t; t.MarkNeighbor(Points[1],Points[2],this); }
		bool L_12 = V_1;
		bool L_13 = V_2;
		if (!((int32_t)((int32_t)L_12&(int32_t)L_13)))
		{
			goto IL_006b;
		}
	}
	{
		// if      (b&&c) { Neighbors[0]=t; t.MarkNeighbor(Points[1],Points[2],this); }
		FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B* L_14 = (&__this->___Neighbors_1);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_15 = ___t0;
		FixedArray3_1_set_Item_m9A2D4AC048342E80ABBAA7D620107032A0DFD0B7(L_14, 0, L_15, FixedArray3_1_set_Item_m9A2D4AC048342E80ABBAA7D620107032A0DFD0B7_RuntimeMethod_var);
		// if      (b&&c) { Neighbors[0]=t; t.MarkNeighbor(Points[1],Points[2],this); }
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_16 = ___t0;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_17 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_18;
		L_18 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_17, 1, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_19 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_20;
		L_20 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_19, 2, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		DelaunayTriangle_MarkNeighbor_mD09CE872870726D08F3CC0CC2B31DD9159739C8E(L_16, L_18, L_20, __this, NULL);
		return;
	}

IL_006b:
	{
		// else if (a&&c) { Neighbors[1]=t; t.MarkNeighbor(Points[0],Points[2],this); }
		bool L_21 = V_0;
		bool L_22 = V_2;
		if (!((int32_t)((int32_t)L_21&(int32_t)L_22)))
		{
			goto IL_009d;
		}
	}
	{
		// else if (a&&c) { Neighbors[1]=t; t.MarkNeighbor(Points[0],Points[2],this); }
		FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B* L_23 = (&__this->___Neighbors_1);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_24 = ___t0;
		FixedArray3_1_set_Item_m9A2D4AC048342E80ABBAA7D620107032A0DFD0B7(L_23, 1, L_24, FixedArray3_1_set_Item_m9A2D4AC048342E80ABBAA7D620107032A0DFD0B7_RuntimeMethod_var);
		// else if (a&&c) { Neighbors[1]=t; t.MarkNeighbor(Points[0],Points[2],this); }
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_25 = ___t0;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_26 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_27;
		L_27 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_26, 0, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_28 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_29;
		L_29 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_28, 2, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		DelaunayTriangle_MarkNeighbor_mD09CE872870726D08F3CC0CC2B31DD9159739C8E(L_25, L_27, L_29, __this, NULL);
		return;
	}

IL_009d:
	{
		// else if (a&&b) { Neighbors[2]=t; t.MarkNeighbor(Points[0],Points[1],this); }
		bool L_30 = V_0;
		bool L_31 = V_1;
		if (!((int32_t)((int32_t)L_30&(int32_t)L_31)))
		{
			goto IL_00cf;
		}
	}
	{
		// else if (a&&b) { Neighbors[2]=t; t.MarkNeighbor(Points[0],Points[1],this); }
		FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B* L_32 = (&__this->___Neighbors_1);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_33 = ___t0;
		FixedArray3_1_set_Item_m9A2D4AC048342E80ABBAA7D620107032A0DFD0B7(L_32, 2, L_33, FixedArray3_1_set_Item_m9A2D4AC048342E80ABBAA7D620107032A0DFD0B7_RuntimeMethod_var);
		// else if (a&&b) { Neighbors[2]=t; t.MarkNeighbor(Points[0],Points[1],this); }
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_34 = ___t0;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_35 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_36;
		L_36 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_35, 0, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_37 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_38;
		L_38 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_37, 1, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		DelaunayTriangle_MarkNeighbor_mD09CE872870726D08F3CC0CC2B31DD9159739C8E(L_34, L_36, L_38, __this, NULL);
		return;
	}

IL_00cf:
	{
		// else throw new Exception( "Failed to mark neighbor, doesn't share an edge!");
		Exception_t* L_39 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral656D304F364B477202FBF443F2948662EBAB895C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DelaunayTriangle_MarkNeighbor_m47AFBF2FA451F82308C1B7C6979C3693120DDD87_RuntimeMethod_var)));
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::OppositePoint(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* DelaunayTriangle_OppositePoint_mDC118BD8FC2EFDAA35290CDC91EB08FA53A327BE (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___t0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p1, const RuntimeMethod* method) 
{
	{
		// return PointCWFrom(t.PointCWFrom(p));
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_0 = ___t0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2;
		L_2 = DelaunayTriangle_PointCWFrom_m83A992C1B4D0F5DC005AA65E31225CAB0A610A23(L_0, L_1, NULL);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_3;
		L_3 = DelaunayTriangle_PointCWFrom_m83A992C1B4D0F5DC005AA65E31225CAB0A610A23(__this, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::NeighborCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* DelaunayTriangle_NeighborCWFrom_mC74C858ED8A719AE16889DE31B5896988386FFE8 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_IndexOf_mC54748218FF05CFF98D51DD98B2F9EB69BF9F25A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DelaunayTriangle NeighborCWFrom    (TriangulationPoint point) { return Neighbors[(Points.IndexOf(point)+1)%3]; }
		FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B* L_0 = (&__this->___Neighbors_1);
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_1 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2 = ___point0;
		int32_t L_3;
		L_3 = FixedArray3_1_IndexOf_mC54748218FF05CFF98D51DD98B2F9EB69BF9F25A(L_1, L_2, FixedArray3_1_IndexOf_mC54748218FF05CFF98D51DD98B2F9EB69BF9F25A_RuntimeMethod_var);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_4;
		L_4 = FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4(L_0, ((int32_t)(((int32_t)il2cpp_codegen_add(L_3, 1))%3)), FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4_RuntimeMethod_var);
		return L_4;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::NeighborCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* DelaunayTriangle_NeighborCCWFrom_m0774E83223AF7F053D275E486AFD39D111D86CBE (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_IndexOf_mC54748218FF05CFF98D51DD98B2F9EB69BF9F25A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DelaunayTriangle NeighborCCWFrom   (TriangulationPoint point) { return Neighbors[(Points.IndexOf(point)+2)%3]; }
		FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B* L_0 = (&__this->___Neighbors_1);
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_1 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2 = ___point0;
		int32_t L_3;
		L_3 = FixedArray3_1_IndexOf_mC54748218FF05CFF98D51DD98B2F9EB69BF9F25A(L_1, L_2, FixedArray3_1_IndexOf_mC54748218FF05CFF98D51DD98B2F9EB69BF9F25A_RuntimeMethod_var);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_4;
		L_4 = FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4(L_0, ((int32_t)(((int32_t)il2cpp_codegen_add(L_3, 2))%3)), FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4_RuntimeMethod_var);
		return L_4;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::NeighborAcrossFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* DelaunayTriangle_NeighborAcrossFrom_m0962D27A38C136BEA2862A75654C4EF009C7F84A (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_IndexOf_mC54748218FF05CFF98D51DD98B2F9EB69BF9F25A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DelaunayTriangle NeighborAcrossFrom(TriangulationPoint point) { return Neighbors[ Points.IndexOf(point)     ]; }
		FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B* L_0 = (&__this->___Neighbors_1);
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_1 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2 = ___point0;
		int32_t L_3;
		L_3 = FixedArray3_1_IndexOf_mC54748218FF05CFF98D51DD98B2F9EB69BF9F25A(L_1, L_2, FixedArray3_1_IndexOf_mC54748218FF05CFF98D51DD98B2F9EB69BF9F25A_RuntimeMethod_var);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_4;
		L_4 = FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4(L_0, L_3, FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4_RuntimeMethod_var);
		return L_4;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::PointCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* DelaunayTriangle_PointCCWFrom_mF3F5570F090A4EC60F28F72FB6B93E6D09CBF562 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TriangulationPoint PointCCWFrom(TriangulationPoint point) { return Points[(IndexOf(point)+1)%3]; }
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_0 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___point0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mF7BE86FF7FEB50E93FABD238FE772A3747F4406C(__this, L_1, NULL);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_3;
		L_3 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_0, ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, 1))%3)), FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		return L_3;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::PointCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* DelaunayTriangle_PointCWFrom_m83A992C1B4D0F5DC005AA65E31225CAB0A610A23 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TriangulationPoint PointCWFrom (TriangulationPoint point) { return Points[(IndexOf(point)+2)%3]; }
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_0 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___point0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mF7BE86FF7FEB50E93FABD238FE772A3747F4406C(__this, L_1, NULL);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_3;
		L_3 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_0, ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, 2))%3)), FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::RotateCW()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_RotateCW_m985DCC65DA60614892C049FA28CB27CAD95A120D (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_set_Item_mBF187A1F037A7C530FC1A0876CF9E8FF48E2E7ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* V_0 = NULL;
	{
		// var t = Points[2];
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_0 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1;
		L_1 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_0, 2, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		V_0 = L_1;
		// Points[2] = Points[1];
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_2 = (&__this->___Points_0);
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_3 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_4;
		L_4 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_3, 1, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		FixedArray3_1_set_Item_mBF187A1F037A7C530FC1A0876CF9E8FF48E2E7ED(L_2, 2, L_4, FixedArray3_1_set_Item_mBF187A1F037A7C530FC1A0876CF9E8FF48E2E7ED_RuntimeMethod_var);
		// Points[1] = Points[0];
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_5 = (&__this->___Points_0);
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_6 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_7;
		L_7 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_6, 0, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		FixedArray3_1_set_Item_mBF187A1F037A7C530FC1A0876CF9E8FF48E2E7ED(L_5, 1, L_7, FixedArray3_1_set_Item_mBF187A1F037A7C530FC1A0876CF9E8FF48E2E7ED_RuntimeMethod_var);
		// Points[0] = t;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_8 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_9 = V_0;
		FixedArray3_1_set_Item_mBF187A1F037A7C530FC1A0876CF9E8FF48E2E7ED(L_8, 0, L_9, FixedArray3_1_set_Item_mBF187A1F037A7C530FC1A0876CF9E8FF48E2E7ED_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::Legalize(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_Legalize_mB6559CCEE3C8F3737FEA4F08B760ACEBC2B5B8D7 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___oPoint0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___nPoint1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_set_Item_mBF187A1F037A7C530FC1A0876CF9E8FF48E2E7ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RotateCW();
		DelaunayTriangle_RotateCW_m985DCC65DA60614892C049FA28CB27CAD95A120D(__this, NULL);
		// Points[IndexCCWFrom(oPoint)] = nPoint;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_0 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___oPoint0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexCCWFrom_m8023A1C470E58EA0999C5F34078F26EFFD78256A(__this, L_1, NULL);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_3 = ___nPoint1;
		FixedArray3_1_set_Item_mBF187A1F037A7C530FC1A0876CF9E8FF48E2E7ED(L_0, L_2, L_3, FixedArray3_1_set_Item_mBF187A1F037A7C530FC1A0876CF9E8FF48E2E7ED_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DelaunayTriangle_ToString_m434778E75BE1AB0ABC6891B7C250A1095E54AF7A (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	{
		// public override string ToString() { return Points[0] + "," + Points[1] + "," + Points[2]; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_2 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_3;
		L_3 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_2, 0, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = 0;
		G_B1_2 = L_1;
		G_B1_3 = L_1;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = 0;
			G_B2_2 = L_1;
			G_B2_3 = L_1;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_0020;
	}

IL_001b:
	{
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}

IL_0020:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_8 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_9;
		L_9 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_8, 1, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_10 = L_9;
		G_B4_0 = L_10;
		G_B4_1 = 2;
		G_B4_2 = L_7;
		G_B4_3 = L_7;
		if (L_10)
		{
			G_B5_0 = L_10;
			G_B5_1 = 2;
			G_B5_2 = L_7;
			G_B5_3 = L_7;
			goto IL_003e;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		goto IL_0043;
	}

IL_003e:
	{
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_11;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_0043:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_14 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_15;
		L_15 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_14, 2, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_16 = L_15;
		G_B7_0 = L_16;
		G_B7_1 = 4;
		G_B7_2 = L_13;
		G_B7_3 = L_13;
		if (L_16)
		{
			G_B8_0 = L_16;
			G_B8_1 = 4;
			G_B8_2 = L_13;
			G_B8_3 = L_13;
			goto IL_0061;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		G_B9_2 = G_B7_2;
		G_B9_3 = G_B7_3;
		goto IL_0066;
	}

IL_0061:
	{
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B8_0);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
	}

IL_0066:
	{
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		(G_B9_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)G_B9_0);
		String_t* L_18;
		L_18 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(G_B9_3, NULL);
		return L_18;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkNeighborEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkNeighborEdges_m387489109787DDCD6807CB0450D67505542AD8B2 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < 3; i++) if ( EdgeIsConstrained[i] && Neighbors[i] != null ) {
		V_0 = 0;
		goto IL_0055;
	}

IL_0004:
	{
		// for (int i = 0; i < 3; i++) if ( EdgeIsConstrained[i] && Neighbors[i] != null ) {
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_0 = (&__this->___EdgeIsConstrained_2);
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B* L_3 = (&__this->___Neighbors_1);
		int32_t L_4 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_5;
		L_5 = FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4(L_3, L_4, FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		// Neighbors[i].MarkConstrainedEdge(Points[(i+1)%3], Points[(i+2)%3]);
		FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B* L_6 = (&__this->___Neighbors_1);
		int32_t L_7 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_8;
		L_8 = FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4(L_6, L_7, FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4_RuntimeMethod_var);
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_9 = (&__this->___Points_0);
		int32_t L_10 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_11;
		L_11 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_9, ((int32_t)(((int32_t)il2cpp_codegen_add(L_10, 1))%3)), FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_12 = (&__this->___Points_0);
		int32_t L_13 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_14;
		L_14 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_12, ((int32_t)(((int32_t)il2cpp_codegen_add(L_13, 2))%3)), FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		DelaunayTriangle_MarkConstrainedEdge_mADA98D76C669806AE11B23E40E5E2C35EF38884E(L_8, L_11, L_14, NULL);
	}

IL_0051:
	{
		// for (int i = 0; i < 3; i++) if ( EdgeIsConstrained[i] && Neighbors[i] != null ) {
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0055:
	{
		// for (int i = 0; i < 3; i++) if ( EdgeIsConstrained[i] && Neighbors[i] != null ) {
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkEdge(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkEdge_mE65C4E6F307926674E22B98FDC1DCB4ECFDB7D51 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___triangle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < 3; i++) if ( EdgeIsConstrained[i] ) {
		V_0 = 0;
		goto IL_003c;
	}

IL_0004:
	{
		// for (int i = 0; i < 3; i++) if ( EdgeIsConstrained[i] ) {
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_0 = (&__this->___EdgeIsConstrained_2);
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		// triangle.MarkConstrainedEdge(Points[(i+1)%3], Points[(i+2)%3]);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_3 = ___triangle0;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_4 = (&__this->___Points_0);
		int32_t L_5 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_6;
		L_6 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_4, ((int32_t)(((int32_t)il2cpp_codegen_add(L_5, 1))%3)), FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_7 = (&__this->___Points_0);
		int32_t L_8 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_9;
		L_9 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_7, ((int32_t)(((int32_t)il2cpp_codegen_add(L_8, 2))%3)), FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		DelaunayTriangle_MarkConstrainedEdge_mADA98D76C669806AE11B23E40E5E2C35EF38884E(L_3, L_6, L_9, NULL);
	}

IL_0038:
	{
		// for (int i = 0; i < 3; i++) if ( EdgeIsConstrained[i] ) {
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003c:
	{
		// for (int i = 0; i < 3; i++) if ( EdgeIsConstrained[i] ) {
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkEdge(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkEdge_m86466B319A8D6BCB1B00E9B230686F9EC91FEFB0 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* ___tList0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3C091B4E6B43653887B0DD7C3C22B2554E6FA478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBF9EB979C8D6872FDA132075D15763C3E9E30E97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1B4AF3A4E37596A8488D7DDFA0AE5C7C6C01B156_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m57EF0C2ADCCC9C56A05A5E484C4D431E30D71D10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tABE7B5B7F53B356A45A78ED49E0534BCAEFD018D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// foreach ( DelaunayTriangle t in tList )
		List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* L_0 = ___tList0;
		Enumerator_tABE7B5B7F53B356A45A78ED49E0534BCAEFD018D L_1;
		L_1 = List_1_GetEnumerator_m57EF0C2ADCCC9C56A05A5E484C4D431E30D71D10(L_0, List_1_GetEnumerator_m57EF0C2ADCCC9C56A05A5E484C4D431E30D71D10_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3C091B4E6B43653887B0DD7C3C22B2554E6FA478((&V_0), Enumerator_Dispose_m3C091B4E6B43653887B0DD7C3C22B2554E6FA478_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0051_1;
			}

IL_0009_1:
			{
				// foreach ( DelaunayTriangle t in tList )
				DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_2;
				L_2 = Enumerator_get_Current_m1B4AF3A4E37596A8488D7DDFA0AE5C7C6C01B156_inline((&V_0), Enumerator_get_Current_m1B4AF3A4E37596A8488D7DDFA0AE5C7C6C01B156_RuntimeMethod_var);
				V_1 = L_2;
				// for ( int i = 0; i < 3; i++ )
				V_2 = 0;
				goto IL_004d_1;
			}

IL_0015_1:
			{
				// if ( t.EdgeIsConstrained[i] )
				DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_3 = V_1;
				FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_4 = (&L_3->___EdgeIsConstrained_2);
				int32_t L_5 = V_2;
				bool L_6;
				L_6 = FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4(L_4, L_5, NULL);
				if (!L_6)
				{
					goto IL_0049_1;
				}
			}
			{
				// MarkConstrainedEdge( t.Points[(i+1)%3], t.Points[(i+2)%3] );
				DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_7 = V_1;
				FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_8 = (&L_7->___Points_0);
				int32_t L_9 = V_2;
				TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_10;
				L_10 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_8, ((int32_t)(((int32_t)il2cpp_codegen_add(L_9, 1))%3)), FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
				DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_11 = V_1;
				FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_12 = (&L_11->___Points_0);
				int32_t L_13 = V_2;
				TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_14;
				L_14 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_12, ((int32_t)(((int32_t)il2cpp_codegen_add(L_13, 2))%3)), FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
				DelaunayTriangle_MarkConstrainedEdge_mADA98D76C669806AE11B23E40E5E2C35EF38884E(__this, L_10, L_14, NULL);
			}

IL_0049_1:
			{
				// for ( int i = 0; i < 3; i++ )
				int32_t L_15 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_004d_1:
			{
				// for ( int i = 0; i < 3; i++ )
				int32_t L_16 = V_2;
				if ((((int32_t)L_16) < ((int32_t)3)))
				{
					goto IL_0015_1;
				}
			}

IL_0051_1:
			{
				// foreach ( DelaunayTriangle t in tList )
				bool L_17;
				L_17 = Enumerator_MoveNext_mBF9EB979C8D6872FDA132075D15763C3E9E30E97((&V_0), Enumerator_MoveNext_mBF9EB979C8D6872FDA132075D15763C3E9E30E97_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_006a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkConstrainedEdge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkConstrainedEdge_mC6EA309D6CD5DE1219A52701CCF39777FC89ED16 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// EdgeIsConstrained[index] = true;
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_0 = (&__this->___EdgeIsConstrained_2);
		int32_t L_1 = ___index0;
		FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3(L_0, L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkConstrainedEdge(UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkConstrainedEdge_m062AE9AE7E2C041B959176CD139D6613801669D1 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___edge0, const RuntimeMethod* method) 
{
	{
		// MarkConstrainedEdge(edge.P, edge.Q);
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_0 = ___edge0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_0)->___P_0;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_2 = ___edge0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_3 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_2)->___Q_1;
		DelaunayTriangle_MarkConstrainedEdge_mADA98D76C669806AE11B23E40E5E2C35EF38884E(__this, L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkConstrainedEdge(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkConstrainedEdge_mADA98D76C669806AE11B23E40E5E2C35EF38884E (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___q1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int i = EdgeIndex(p,q);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = ___p0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___q1;
		int32_t L_2;
		L_2 = DelaunayTriangle_EdgeIndex_m91816E3D9EFACAF481AD414B4683AB1A4A4D5863(__this, L_0, L_1, NULL);
		V_0 = L_2;
		// if ( i != -1 ) EdgeIsConstrained[i] = true;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_001a;
		}
	}
	{
		// if ( i != -1 ) EdgeIsConstrained[i] = true;
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_4 = (&__this->___EdgeIsConstrained_2);
		int32_t L_5 = V_0;
		FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3(L_4, L_5, (bool)1, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Double UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::Area()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DelaunayTriangle_Area_m0C893948D5648AE41FB440E4BF44A7D3A10CC590 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// double b = Points[0].X - Points[1].X;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_0 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1;
		L_1 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_0, 0, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		double L_2 = L_1->___X_3;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_3 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_4;
		L_4 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_3, 1, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		double L_5 = L_4->___X_3;
		// double h = Points[2].Y - Points[1].Y;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_6 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_7;
		L_7 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_6, 2, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		double L_8 = L_7->___Y_4;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_9 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_10;
		L_10 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_9, 1, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		double L_11 = L_10->___Y_4;
		V_0 = ((double)il2cpp_codegen_subtract(L_8, L_11));
		// return Math.Abs((b * h * 0.5f));
		double L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = fabs(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_2, L_5)), L_12)), (0.5))));
		return L_13;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::Centroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* DelaunayTriangle_Centroid_m6AFC8CD40DCECA9ED15F007EB07EBF269C3BBD1D (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// double cx = (Points[0].X + Points[1].X + Points[2].X) / 3f;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_0 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1;
		L_1 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_0, 0, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		double L_2 = L_1->___X_3;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_3 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_4;
		L_4 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_3, 1, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		double L_5 = L_4->___X_3;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_6 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_7;
		L_7 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_6, 2, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		double L_8 = L_7->___X_3;
		// double cy = (Points[0].Y + Points[1].Y + Points[2].Y) / 3f;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_9 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_10;
		L_10 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_9, 0, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		double L_11 = L_10->___Y_4;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_12 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_13;
		L_13 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_12, 1, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		double L_14 = L_13->___Y_4;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_15 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_16;
		L_16 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_15, 2, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		double L_17 = L_16->___Y_4;
		V_0 = ((double)(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(L_11, L_14)), L_17))/(3.0)));
		// return new TriangulationPoint(cx, cy);
		double L_18 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_19 = (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)il2cpp_codegen_object_new(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC_il2cpp_TypeInfo_var);
		TriangulationPoint__ctor_m597CD937EAE5EEFB7F00F2480610423B84E89D15(L_19, ((double)(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(L_2, L_5)), L_8))/(3.0))), L_18, (-1), NULL);
		return L_19;
	}
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::EdgeIndex(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_EdgeIndex_m91816E3D9EFACAF481AD414B4683AB1A4A4D5863 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p10, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_IndexOf_mC54748218FF05CFF98D51DD98B2F9EB69BF9F25A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B9_0 = 0;
	{
		// int i1 = Points.IndexOf(p1);
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_0 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p10;
		int32_t L_2;
		L_2 = FixedArray3_1_IndexOf_mC54748218FF05CFF98D51DD98B2F9EB69BF9F25A(L_0, L_1, FixedArray3_1_IndexOf_mC54748218FF05CFF98D51DD98B2F9EB69BF9F25A_RuntimeMethod_var);
		// int i2 = Points.IndexOf(p2);
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_3 = (&__this->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_4 = ___p21;
		int32_t L_5;
		L_5 = FixedArray3_1_IndexOf_mC54748218FF05CFF98D51DD98B2F9EB69BF9F25A(L_3, L_4, FixedArray3_1_IndexOf_mC54748218FF05CFF98D51DD98B2F9EB69BF9F25A_RuntimeMethod_var);
		V_0 = L_5;
		// bool a = (i1==0 || i2==0);
		int32_t L_6 = L_2;
		G_B1_0 = L_6;
		if (!L_6)
		{
			G_B2_0 = L_6;
			goto IL_0022;
		}
	}
	{
		int32_t L_7 = V_0;
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0023:
	{
		V_1 = (bool)G_B3_0;
		// bool b = (i1==1 || i2==1);
		int32_t L_8 = G_B3_1;
		G_B4_0 = L_8;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			G_B5_0 = L_8;
			goto IL_002e;
		}
	}
	{
		int32_t L_9 = V_0;
		G_B6_0 = ((((int32_t)L_9) == ((int32_t)1))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		V_2 = (bool)G_B6_0;
		// bool c = (i1==2 || i2==2);
		if ((((int32_t)G_B6_1) == ((int32_t)2)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_10 = V_0;
		G_B9_0 = ((((int32_t)L_10) == ((int32_t)2))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B9_0 = 1;
	}

IL_003a:
	{
		V_3 = (bool)G_B9_0;
		// if (b&&c) return 0;
		bool L_11 = V_2;
		bool L_12 = V_3;
		if (!((int32_t)((int32_t)L_11&(int32_t)L_12)))
		{
			goto IL_0042;
		}
	}
	{
		// if (b&&c) return 0;
		return 0;
	}

IL_0042:
	{
		// if (a&&c) return 1;
		bool L_13 = V_1;
		bool L_14 = V_3;
		if (!((int32_t)((int32_t)L_13&(int32_t)L_14)))
		{
			goto IL_0049;
		}
	}
	{
		// if (a&&c) return 1;
		return 1;
	}

IL_0049:
	{
		// if (a&&b) return 2;
		bool L_15 = V_1;
		bool L_16 = V_2;
		if (!((int32_t)((int32_t)L_15&(int32_t)L_16)))
		{
			goto IL_0050;
		}
	}
	{
		// if (a&&b) return 2;
		return 2;
	}

IL_0050:
	{
		// return -1;
		return (-1);
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetConstrainedEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetConstrainedEdgeCCW_m0A1E2BA7AA74E765F00E216298D5F54FA3BD0C4B (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, const RuntimeMethod* method) 
{
	{
		// public bool GetConstrainedEdgeCCW   ( TriangulationPoint p ) { return EdgeIsConstrained[(IndexOf(p)+2)%3]; }
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_0 = (&__this->___EdgeIsConstrained_2);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mF7BE86FF7FEB50E93FABD238FE772A3747F4406C(__this, L_1, NULL);
		bool L_3;
		L_3 = FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4(L_0, ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, 2))%3)), NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetConstrainedEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetConstrainedEdgeCW_mD39CAB2A63B58D2F7C1EA222A273B16EADEDF3F5 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, const RuntimeMethod* method) 
{
	{
		// public bool GetConstrainedEdgeCW    ( TriangulationPoint p ) { return EdgeIsConstrained[(IndexOf(p)+1)%3]; }
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_0 = (&__this->___EdgeIsConstrained_2);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mF7BE86FF7FEB50E93FABD238FE772A3747F4406C(__this, L_1, NULL);
		bool L_3;
		L_3 = FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4(L_0, ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, 1))%3)), NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetConstrainedEdgeAcross(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetConstrainedEdgeAcross_m61D4DAE3AB1C00DC1BF13EA1DD4ACE6340567521 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, const RuntimeMethod* method) 
{
	{
		// public bool GetConstrainedEdgeAcross( TriangulationPoint p ) { return EdgeIsConstrained[ IndexOf(p)     ]; }
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_0 = (&__this->___EdgeIsConstrained_2);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mF7BE86FF7FEB50E93FABD238FE772A3747F4406C(__this, L_1, NULL);
		bool L_3;
		L_3 = FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetConstrainedEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetConstrainedEdgeCCW_m37951D91C92A7E729EE193E13342557F93246E8B (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, bool ___ce1, const RuntimeMethod* method) 
{
	{
		// public void SetConstrainedEdgeCCW   ( TriangulationPoint p, bool ce ) { EdgeIsConstrained[(IndexOf(p)+2)%3] = ce; }
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_0 = (&__this->___EdgeIsConstrained_2);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mF7BE86FF7FEB50E93FABD238FE772A3747F4406C(__this, L_1, NULL);
		bool L_3 = ___ce1;
		FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3(L_0, ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, 2))%3)), L_3, NULL);
		// public void SetConstrainedEdgeCCW   ( TriangulationPoint p, bool ce ) { EdgeIsConstrained[(IndexOf(p)+2)%3] = ce; }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetConstrainedEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetConstrainedEdgeCW_m542FCC02B9A744E60CD4D9CFC2350B6A03EF2CAF (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, bool ___ce1, const RuntimeMethod* method) 
{
	{
		// public void SetConstrainedEdgeCW    ( TriangulationPoint p, bool ce ) { EdgeIsConstrained[(IndexOf(p)+1)%3] = ce; }
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_0 = (&__this->___EdgeIsConstrained_2);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mF7BE86FF7FEB50E93FABD238FE772A3747F4406C(__this, L_1, NULL);
		bool L_3 = ___ce1;
		FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3(L_0, ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, 1))%3)), L_3, NULL);
		// public void SetConstrainedEdgeCW    ( TriangulationPoint p, bool ce ) { EdgeIsConstrained[(IndexOf(p)+1)%3] = ce; }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetConstrainedEdgeAcross(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetConstrainedEdgeAcross_mEB408AFB9C08CD82E02E37ABBAD3803F21631135 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, bool ___ce1, const RuntimeMethod* method) 
{
	{
		// public void SetConstrainedEdgeAcross( TriangulationPoint p, bool ce ) { EdgeIsConstrained[ IndexOf(p)     ] = ce; }
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_0 = (&__this->___EdgeIsConstrained_2);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mF7BE86FF7FEB50E93FABD238FE772A3747F4406C(__this, L_1, NULL);
		bool L_3 = ___ce1;
		FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3(L_0, L_2, L_3, NULL);
		// public void SetConstrainedEdgeAcross( TriangulationPoint p, bool ce ) { EdgeIsConstrained[ IndexOf(p)     ] = ce; }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetDelaunayEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetDelaunayEdgeCCW_mB846490A27F395EE1DB6B6EFD9D4A404CC383C19 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, const RuntimeMethod* method) 
{
	{
		// public bool GetDelaunayEdgeCCW   ( TriangulationPoint p ) { return EdgeIsDelaunay[(IndexOf(p)+2)%3]; }
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_0 = (&__this->___EdgeIsDelaunay_3);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mF7BE86FF7FEB50E93FABD238FE772A3747F4406C(__this, L_1, NULL);
		bool L_3;
		L_3 = FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4(L_0, ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, 2))%3)), NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetDelaunayEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetDelaunayEdgeCW_m094DA13142D433044E4A55DF01977A347BEE1CCF (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, const RuntimeMethod* method) 
{
	{
		// public bool GetDelaunayEdgeCW    ( TriangulationPoint p ) { return EdgeIsDelaunay[(IndexOf(p)+1)%3]; }
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_0 = (&__this->___EdgeIsDelaunay_3);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mF7BE86FF7FEB50E93FABD238FE772A3747F4406C(__this, L_1, NULL);
		bool L_3;
		L_3 = FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4(L_0, ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, 1))%3)), NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetDelaunayEdgeAcross(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetDelaunayEdgeAcross_m7F77D3B65E00E66E42B0F37DEAC5C4BD677DFD15 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, const RuntimeMethod* method) 
{
	{
		// public bool GetDelaunayEdgeAcross( TriangulationPoint p ) { return EdgeIsDelaunay[ IndexOf(p)     ]; }
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_0 = (&__this->___EdgeIsDelaunay_3);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mF7BE86FF7FEB50E93FABD238FE772A3747F4406C(__this, L_1, NULL);
		bool L_3;
		L_3 = FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetDelaunayEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetDelaunayEdgeCCW_m9EFA8D292347379E594DAEA4146E4783886D2266 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, bool ___ce1, const RuntimeMethod* method) 
{
	{
		// public void SetDelaunayEdgeCCW   ( TriangulationPoint p, bool ce ) { EdgeIsDelaunay[(IndexOf(p)+2)%3] = ce; }
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_0 = (&__this->___EdgeIsDelaunay_3);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mF7BE86FF7FEB50E93FABD238FE772A3747F4406C(__this, L_1, NULL);
		bool L_3 = ___ce1;
		FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3(L_0, ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, 2))%3)), L_3, NULL);
		// public void SetDelaunayEdgeCCW   ( TriangulationPoint p, bool ce ) { EdgeIsDelaunay[(IndexOf(p)+2)%3] = ce; }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetDelaunayEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetDelaunayEdgeCW_m79BD18E41A66EA857742458C3739165EED6520A4 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, bool ___ce1, const RuntimeMethod* method) 
{
	{
		// public void SetDelaunayEdgeCW    ( TriangulationPoint p, bool ce ) { EdgeIsDelaunay[(IndexOf(p)+1)%3] = ce; }
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_0 = (&__this->___EdgeIsDelaunay_3);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mF7BE86FF7FEB50E93FABD238FE772A3747F4406C(__this, L_1, NULL);
		bool L_3 = ___ce1;
		FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3(L_0, ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, 1))%3)), L_3, NULL);
		// public void SetDelaunayEdgeCW    ( TriangulationPoint p, bool ce ) { EdgeIsDelaunay[(IndexOf(p)+1)%3] = ce; }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetDelaunayEdgeAcross(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetDelaunayEdgeAcross_mD86FEDFDC460FDC9265B881FFAEB45BA7D70413B (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p0, bool ___ce1, const RuntimeMethod* method) 
{
	{
		// public void SetDelaunayEdgeAcross( TriangulationPoint p, bool ce ) { EdgeIsDelaunay[ IndexOf(p)     ] = ce; }
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_0 = (&__this->___EdgeIsDelaunay_3);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mF7BE86FF7FEB50E93FABD238FE772A3747F4406C(__this, L_1, NULL);
		bool L_3 = ___ce1;
		FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3(L_0, L_2, L_3, NULL);
		// public void SetDelaunayEdgeAcross( TriangulationPoint p, bool ce ) { EdgeIsDelaunay[ IndexOf(p)     ] = ce; }
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::.ctor(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront__ctor_m93CE3A9A9784022B54560322A34DE46BF8253B49 (AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* __this, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___head0, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___tail1, const RuntimeMethod* method) 
{
	{
		// public AdvancingFront( AdvancingFrontNode head, AdvancingFrontNode tail ) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.Head = head;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_0 = ___head0;
		__this->___Head_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Head_0), (void*)L_0);
		// this.Tail = tail;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_1 = ___tail1;
		__this->___Tail_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Tail_1), (void*)L_1);
		// this.Search = head;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_2 = ___head0;
		__this->___Search_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Search_2), (void*)L_2);
		// AddNode(head);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_3 = ___head0;
		AdvancingFront_AddNode_m2866FB06EC63AA74FA0ED38E52254E4649826706(__this, L_3, NULL);
		// AddNode(tail);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_4 = ___tail1;
		AdvancingFront_AddNode_m2866FB06EC63AA74FA0ED38E52254E4649826706(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::AddNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront_AddNode_m2866FB06EC63AA74FA0ED38E52254E4649826706 (AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* __this, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node0, const RuntimeMethod* method) 
{
	{
		// public void AddNode( AdvancingFrontNode node ) { }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::RemoveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront_RemoveNode_m6759E452BAE2B7093CA4454EE2B43A2C675369FA (AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* __this, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node0, const RuntimeMethod* method) 
{
	{
		// public void RemoveNode( AdvancingFrontNode node ) { }
		return;
	}
}
// System.String UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdvancingFront_ToString_m6DB1AB8E37A796BE16314618838443B16CE54BF5 (AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3860603B88C3C33FCEFF25F72FA3E650D2B25876);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* V_1 = NULL;
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// AdvancingFrontNode node = Head;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_1 = __this->___Head_0;
		V_1 = L_1;
		goto IL_0032;
	}

IL_000f:
	{
		// sb.Append(node.Point.X).Append("->");
		StringBuilder_t* L_2 = V_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_3 = V_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_4 = L_3->___Point_3;
		double L_5 = L_4->___X_3;
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m078D9861582DCD6037F533DF9C2FFEF0A54269E0(L_2, L_5, NULL);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteral3860603B88C3C33FCEFF25F72FA3E650D2B25876, NULL);
		// node = node.Next;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_8 = V_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_9 = L_8->___Next_0;
		V_1 = L_9;
	}

IL_0032:
	{
		// while (node != Tail) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_10 = V_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_11 = __this->___Tail_1;
		if ((!(((RuntimeObject*)(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)L_10) == ((RuntimeObject*)(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)L_11))))
		{
			goto IL_000f;
		}
	}
	{
		// sb.Append(Tail.Point.X);
		StringBuilder_t* L_12 = V_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_13 = __this->___Tail_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_14 = L_13->___Point_3;
		double L_15 = L_14->___X_3;
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m078D9861582DCD6037F533DF9C2FFEF0A54269E0(L_12, L_15, NULL);
		// return sb.ToString();
		StringBuilder_t* L_17 = V_0;
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		return L_18;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::FindSearchNode(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* AdvancingFront_FindSearchNode_m55D2612ABFD4E9ECCF4A1D2A1B2FF6B378C789B6 (AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* __this, double ___x0, const RuntimeMethod* method) 
{
	{
		// return Search;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_0 = __this->___Search_2;
		return L_0;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::LocateNode(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* AdvancingFront_LocateNode_m4D3FA6E023FCF7410368C289C2B7D84D8B17C040 (AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point0, const RuntimeMethod* method) 
{
	{
		// return LocateNode(point.X);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = ___point0;
		double L_1 = L_0->___X_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_2;
		L_2 = AdvancingFront_LocateNode_m18E277800CA9CBFF0574EA3D9AC114CDF02B46A3(__this, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::LocateNode(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* AdvancingFront_LocateNode_m18E277800CA9CBFF0574EA3D9AC114CDF02B46A3 (AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* __this, double ___x0, const RuntimeMethod* method) 
{
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* V_0 = NULL;
	{
		// AdvancingFrontNode node = FindSearchNode(x);
		double L_0 = ___x0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_1;
		L_1 = AdvancingFront_FindSearchNode_m55D2612ABFD4E9ECCF4A1D2A1B2FF6B378C789B6_inline(__this, L_0, NULL);
		V_0 = L_1;
		// if (x < node.Value) {
		double L_2 = ___x0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_3 = V_0;
		double L_4 = L_3->___Value_2;
		if ((!(((double)L_2) < ((double)L_4))))
		{
			goto IL_004d;
		}
	}
	{
		goto IL_0025;
	}

IL_0013:
	{
		// if (x >= node.Value) {
		double L_5 = ___x0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_6 = V_0;
		double L_7 = L_6->___Value_2;
		if ((!(((double)L_5) >= ((double)L_7))))
		{
			goto IL_0025;
		}
	}
	{
		// Search = node;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_8 = V_0;
		__this->___Search_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Search_2), (void*)L_8);
		// return node;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_9 = V_0;
		return L_9;
	}

IL_0025:
	{
		// while ((node = node.Prev) != null)
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_10 = V_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_11 = L_10->___Prev_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_12 = L_11;
		V_0 = L_12;
		if (L_12)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0057;
	}

IL_0031:
	{
		// if (x < node.Value) {
		double L_13 = ___x0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_14 = V_0;
		double L_15 = L_14->___Value_2;
		if ((!(((double)L_13) < ((double)L_15))))
		{
			goto IL_004d;
		}
	}
	{
		// Search = node.Prev;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_16 = V_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_17 = L_16->___Prev_1;
		__this->___Search_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Search_2), (void*)L_17);
		// return node.Prev;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_18 = V_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_19 = L_18->___Prev_1;
		return L_19;
	}

IL_004d:
	{
		// while ((node = node.Next) != null)
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_20 = V_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_21 = L_20->___Next_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_22 = L_21;
		V_0 = L_22;
		if (L_22)
		{
			goto IL_0031;
		}
	}

IL_0057:
	{
		// return null;
		return (AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)NULL;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::LocatePoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* AdvancingFront_LocatePoint_mE93A89803FD25A03FEA391ECE4352BB65E43BC11 (AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point0, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* V_1 = NULL;
	double V_2 = 0.0;
	{
		// double px = point.X;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = ___point0;
		double L_1 = L_0->___X_3;
		V_0 = L_1;
		// AdvancingFrontNode node = FindSearchNode(px);
		double L_2 = V_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_3;
		L_3 = AdvancingFront_FindSearchNode_m55D2612ABFD4E9ECCF4A1D2A1B2FF6B378C789B6_inline(__this, L_2, NULL);
		V_1 = L_3;
		// double nx = node.Point.X;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_4 = V_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_5 = L_4->___Point_3;
		double L_6 = L_5->___X_3;
		V_2 = L_6;
		// if (px == nx) {
		double L_7 = V_0;
		double L_8 = V_2;
		if ((!(((double)L_7) == ((double)L_8))))
		{
			goto IL_0061;
		}
	}
	{
		// if (point != node.Point) {
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_9 = ___point0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_10 = V_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_11 = L_10->___Point_3;
		if ((((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_9) == ((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_11)))
		{
			goto IL_008f;
		}
	}
	{
		// if (point == node.Prev.Point) {
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_12 = ___point0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_13 = V_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_14 = L_13->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_15 = L_14->___Point_3;
		if ((!(((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_12) == ((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_15))))
		{
			goto IL_003f;
		}
	}
	{
		// node = node.Prev;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_16 = V_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_17 = L_16->___Prev_1;
		V_1 = L_17;
		goto IL_008f;
	}

IL_003f:
	{
		// } else if (point == node.Next.Point) {
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_18 = ___point0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_19 = V_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_20 = L_19->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_21 = L_20->___Point_3;
		if ((!(((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_18) == ((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_21))))
		{
			goto IL_0056;
		}
	}
	{
		// node = node.Next;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_22 = V_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_23 = L_22->___Next_0;
		V_1 = L_23;
		goto IL_008f;
	}

IL_0056:
	{
		// throw new Exception("Failed to find Node for given afront point");
		Exception_t* L_24 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A6129D3AF4D923F94C2DF172F5DA64D92B3C03C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdvancingFront_LocatePoint_mE93A89803FD25A03FEA391ECE4352BB65E43BC11_RuntimeMethod_var)));
	}

IL_0061:
	{
		// } else if (px < nx) {
		double L_25 = V_0;
		double L_26 = V_2;
		if ((!(((double)L_25) < ((double)L_26))))
		{
			goto IL_0085;
		}
	}
	{
		goto IL_0070;
	}

IL_0067:
	{
		// while ((node = node.Prev) != null) if (point == node.Point) break;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_27 = ___point0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_28 = V_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_29 = L_28->___Point_3;
		if ((((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_27) == ((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_29)))
		{
			goto IL_008f;
		}
	}

IL_0070:
	{
		// while ((node = node.Prev) != null) if (point == node.Point) break;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_30 = V_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_31 = L_30->___Prev_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_32 = L_31;
		V_1 = L_32;
		if (L_32)
		{
			goto IL_0067;
		}
	}
	{
		goto IL_008f;
	}

IL_007c:
	{
		// while ((node = node.Next) != null) if (point == node.Point) break;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_33 = ___point0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_34 = V_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_35 = L_34->___Point_3;
		if ((((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_33) == ((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_35)))
		{
			goto IL_008f;
		}
	}

IL_0085:
	{
		// while ((node = node.Next) != null) if (point == node.Point) break;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_36 = V_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_37 = L_36->___Next_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_38 = L_37;
		V_1 = L_38;
		if (L_38)
		{
			goto IL_007c;
		}
	}

IL_008f:
	{
		// Search = node;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_39 = V_1;
		__this->___Search_2 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Search_2), (void*)L_39);
		// return node;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_40 = V_1;
		return L_40;
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::.ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFrontNode__ctor_mAF86518A23A5A801885959F84A6E39CF84C237EE (AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point0, const RuntimeMethod* method) 
{
	{
		// public AdvancingFrontNode(TriangulationPoint point) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.Point = point;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = ___point0;
		__this->___Point_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Point_3), (void*)L_0);
		// Value = point.X;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___point0;
		double L_2 = L_1->___X_3;
		__this->___Value_2 = L_2;
		// }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::get_HasNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvancingFrontNode_get_HasNext_m5066118DEABA99D05C49A792E9DBC8CFB53908C6 (AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasNext { get { return Next != null; } }
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_0 = __this->___Next_0;
		return (bool)((!(((RuntimeObject*)(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::get_HasPrev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvancingFrontNode_get_HasPrev_m7466C19AAE5B054A0BC9FF4875C5EC95BB3AC042 (AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasPrev { get { return Prev != null; } }
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_0 = __this->___Prev_1;
		return (bool)((!(((RuntimeObject*)(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::Triangulate(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Triangulate_mEE5DB994001D8113705B06E1B6AFAC37EDC6C926 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, const RuntimeMethod* method) 
{
	{
		// tcx.CreateAdvancingFront();
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_0 = ___tcx0;
		DTSweepContext_CreateAdvancingFront_m3B116BB121D9C450C9D318BD5014FEAE218EE1CC(L_0, NULL);
		// Sweep(tcx);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_1 = ___tcx0;
		DTSweep_Sweep_m3376C77183E81953537326F7FC3DBB97BCA1E50A(L_1, NULL);
		// if (tcx.TriangulationMode == TriangulationMode.Polygon) {
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_2 = ___tcx0;
		int32_t L_3;
		L_3 = TriangulationContext_get_TriangulationMode_mC9F2694F48A7760DCE953389DC8C86614FCCA6A9_inline(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_001d;
		}
	}
	{
		// FinalizationPolygon(tcx);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_4 = ___tcx0;
		DTSweep_FinalizationPolygon_mBF733075F3336BC578AFD3F0E9FA9C5CB96F419A(L_4, NULL);
		goto IL_0023;
	}

IL_001d:
	{
		// FinalizationConvexHull(tcx);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_5 = ___tcx0;
		DTSweep_FinalizationConvexHull_m322CD95AC1AB2B95EABB7CCA3A1ED1270085F331(L_5, NULL);
	}

IL_0023:
	{
		// tcx.Done();
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_6 = ___tcx0;
		TriangulationContext_Done_mA5FFC0AB433C505BEEE9ACC366DB93BE81E5961C(L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::Sweep(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Sweep_m3376C77183E81953537326F7FC3DBB97BCA1E50A (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m630BCF784307BDF7899BFC9F73637DFFCE2164CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1B78DF19315BAA84C606B4EADB45429B8CD37F82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m769B89F09A12194BF74EE2C94FCF1CD1AF5A9C2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF55A66F0BA68CC72A4B04699FAE6834EB80728E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE7BB1BFFCE6CA954C471967917396D5565DBD642_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t9DC390849BA500451557578B04CA56F022B76A2B* V_0 = NULL;
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* V_1 = NULL;
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* V_2 = NULL;
	int32_t V_3 = 0;
	Enumerator_t00B91280F91EADE4E8986CDDA34A453F1266D2C1 V_4;
	memset((&V_4), 0, sizeof(V_4));
	DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* V_5 = NULL;
	{
		// var points = tcx.Points;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_0 = ___tcx0;
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_1 = ((TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843*)L_0)->___Points_2;
		V_0 = L_1;
		// for (int i = 1; i < points.Count; i++) {
		V_3 = 1;
		goto IL_007d;
	}

IL_000b:
	{
		// point = points[i];
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_2 = V_0;
		int32_t L_3 = V_3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_4;
		L_4 = List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5(L_2, L_3, List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5_RuntimeMethod_var);
		V_1 = L_4;
		// node = PointEvent(tcx, point);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_5 = ___tcx0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_6 = V_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_7;
		L_7 = DTSweep_PointEvent_mDB2645D49A120C36330D54AA3650DBDAA2C43925(L_5, L_6, NULL);
		V_2 = L_7;
		// if (point.HasEdges) foreach (DTSweepConstraint e in point.Edges) {
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_8 = V_1;
		bool L_9;
		L_9 = TriangulationPoint_get_HasEdges_m416A9901C620DE3F2F7D5EAC3355FD3F084B7027(L_8, NULL);
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		// if (point.HasEdges) foreach (DTSweepConstraint e in point.Edges) {
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_10 = V_1;
		List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2* L_11;
		L_11 = TriangulationPoint_get_Edges_m727DF4F3A45513F80246773E13FA8B8909E864BD_inline(L_10, NULL);
		Enumerator_t00B91280F91EADE4E8986CDDA34A453F1266D2C1 L_12;
		L_12 = List_1_GetEnumerator_mF55A66F0BA68CC72A4B04699FAE6834EB80728E1(L_11, List_1_GetEnumerator_mF55A66F0BA68CC72A4B04699FAE6834EB80728E1_RuntimeMethod_var);
		V_4 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m630BCF784307BDF7899BFC9F73637DFFCE2164CF((&V_4), Enumerator_Dispose_m630BCF784307BDF7899BFC9F73637DFFCE2164CF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0059_1;
			}

IL_0032_1:
			{
				// if (point.HasEdges) foreach (DTSweepConstraint e in point.Edges) {
				DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_13;
				L_13 = Enumerator_get_Current_m769B89F09A12194BF74EE2C94FCF1CD1AF5A9C2C_inline((&V_4), Enumerator_get_Current_m769B89F09A12194BF74EE2C94FCF1CD1AF5A9C2C_RuntimeMethod_var);
				V_5 = L_13;
				// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveConstraint = e;
				DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_14 = ___tcx0;
				bool L_15;
				L_15 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_14);
				if (!L_15)
				{
					goto IL_0050_1;
				}
			}
			{
				// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveConstraint = e;
				DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_16 = ___tcx0;
				DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* L_17;
				L_17 = TriangulationContext_get_DTDebugContext_mA17E0C26062DC7E004F53FC5726639F1BFA45CFE(L_16, NULL);
				DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_18 = V_5;
				DTSweepDebugContext_set_ActiveConstraint_m91E586325A3476F2F58F65DEB5016DEEF2F5756A(L_17, L_18, NULL);
			}

IL_0050_1:
			{
				// EdgeEvent(tcx, e, node);
				DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_19 = ___tcx0;
				DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_20 = V_5;
				AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_21 = V_2;
				DTSweep_EdgeEvent_mC291442F73B6F36BB727D1F8C3C256BA4F742F02(L_19, L_20, L_21, NULL);
			}

IL_0059_1:
			{
				// if (point.HasEdges) foreach (DTSweepConstraint e in point.Edges) {
				bool L_22;
				L_22 = Enumerator_MoveNext_m1B78DF19315BAA84C606B4EADB45429B8CD37F82((&V_4), Enumerator_MoveNext_m1B78DF19315BAA84C606B4EADB45429B8CD37F82_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_0032_1;
				}
			}
			{
				goto IL_0072;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0072:
	{
		// tcx.Update(null);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_23 = ___tcx0;
		TriangulationContext_Update_m93593C37DCE2DCE7A6FB6308E88F1C008C92C901(L_23, (String_t*)NULL, NULL);
		// for (int i = 1; i < points.Count; i++) {
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_007d:
	{
		// for (int i = 1; i < points.Count; i++) {
		int32_t L_25 = V_3;
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_26 = V_0;
		int32_t L_27;
		L_27 = List_1_get_Count_mE7BB1BFFCE6CA954C471967917396D5565DBD642_inline(L_26, List_1_get_Count_mE7BB1BFFCE6CA954C471967917396D5565DBD642_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FinalizationConvexHull(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FinalizationConvexHull_m322CD95AC1AB2B95EABB7CCA3A1ED1270085F331 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, const RuntimeMethod* method) 
{
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* V_0 = NULL;
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* V_1 = NULL;
	DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* V_2 = NULL;
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* V_3 = NULL;
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* V_4 = NULL;
	{
		// n1 = tcx.Front.Head.Next;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_0 = ___tcx0;
		AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* L_1 = L_0->___Front_8;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_2 = L_1->___Head_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_3 = L_2->___Next_0;
		V_0 = L_3;
		// n2 = n1.Next;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_4 = V_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_5 = L_4->___Next_0;
		V_1 = L_5;
		// first = n1.Point;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_6 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_7 = L_6->___Point_3;
		V_3 = L_7;
		// TurnAdvancingFrontConvex(tcx, n1, n2);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_8 = ___tcx0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_9 = V_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_10 = V_1;
		DTSweep_TurnAdvancingFrontConvex_m13183180376DF73BD52F6283800EF036C1B85F23(L_8, L_9, L_10, NULL);
		// n1 = tcx.Front.Tail.Prev;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_11 = ___tcx0;
		AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* L_12 = L_11->___Front_8;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_13 = L_12->___Tail_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_14 = L_13->___Prev_1;
		V_0 = L_14;
		// if (n1.Triangle.Contains(n1.Next.Point) && n1.Triangle.Contains(n1.Prev.Point)) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_15 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_16 = L_15->___Triangle_4;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_17 = V_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_18 = L_17->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_19 = L_18->___Point_3;
		bool L_20;
		L_20 = DelaunayTriangle_Contains_mCBAC8F1AE9D125D38E5DDC5FC31CB6A87874E70C(L_16, L_19, NULL);
		if (!L_20)
		{
			goto IL_00b1;
		}
	}
	{
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_21 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_22 = L_21->___Triangle_4;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_23 = V_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_24 = L_23->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_25 = L_24->___Point_3;
		bool L_26;
		L_26 = DelaunayTriangle_Contains_mCBAC8F1AE9D125D38E5DDC5FC31CB6A87874E70C(L_22, L_25, NULL);
		if (!L_26)
		{
			goto IL_00b1;
		}
	}
	{
		// t1 = n1.Triangle.NeighborAcrossFrom(n1.Point);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_27 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_28 = L_27->___Triangle_4;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_29 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_30 = L_29->___Point_3;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_31;
		L_31 = DelaunayTriangle_NeighborAcrossFrom_m0962D27A38C136BEA2862A75654C4EF009C7F84A(L_28, L_30, NULL);
		V_2 = L_31;
		// RotateTrianglePair(n1.Triangle, n1.Point, t1, t1.OppositePoint(n1.Triangle, n1.Point));
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_32 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_33 = L_32->___Triangle_4;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_34 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_35 = L_34->___Point_3;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_36 = V_2;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_37 = V_2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_38 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_39 = L_38->___Triangle_4;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_40 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_41 = L_40->___Point_3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_42;
		L_42 = DelaunayTriangle_OppositePoint_mDC118BD8FC2EFDAA35290CDC91EB08FA53A327BE(L_37, L_39, L_41, NULL);
		DTSweep_RotateTrianglePair_m6D216A93A53C558797A26128451B34FECD6E1385(L_33, L_35, L_36, L_42, NULL);
		// tcx.MapTriangleToNodes(n1.Triangle);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_43 = ___tcx0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_44 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_45 = L_44->___Triangle_4;
		DTSweepContext_MapTriangleToNodes_m6B48C2720D77CF48E6AE7328614F55D2A6F4565B(L_43, L_45, NULL);
		// tcx.MapTriangleToNodes(t1);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_46 = ___tcx0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_47 = V_2;
		DTSweepContext_MapTriangleToNodes_m6B48C2720D77CF48E6AE7328614F55D2A6F4565B(L_46, L_47, NULL);
	}

IL_00b1:
	{
		// n1 = tcx.Front.Head.Next;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_48 = ___tcx0;
		AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* L_49 = L_48->___Front_8;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_50 = L_49->___Head_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_51 = L_50->___Next_0;
		V_0 = L_51;
		// if (n1.Triangle.Contains(n1.Prev.Point) && n1.Triangle.Contains(n1.Next.Point)) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_52 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_53 = L_52->___Triangle_4;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_54 = V_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_55 = L_54->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_56 = L_55->___Point_3;
		bool L_57;
		L_57 = DelaunayTriangle_Contains_mCBAC8F1AE9D125D38E5DDC5FC31CB6A87874E70C(L_53, L_56, NULL);
		if (!L_57)
		{
			goto IL_013b;
		}
	}
	{
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_58 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_59 = L_58->___Triangle_4;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_60 = V_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_61 = L_60->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_62 = L_61->___Point_3;
		bool L_63;
		L_63 = DelaunayTriangle_Contains_mCBAC8F1AE9D125D38E5DDC5FC31CB6A87874E70C(L_59, L_62, NULL);
		if (!L_63)
		{
			goto IL_013b;
		}
	}
	{
		// t1 = n1.Triangle.NeighborAcrossFrom(n1.Point);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_64 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_65 = L_64->___Triangle_4;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_66 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_67 = L_66->___Point_3;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_68;
		L_68 = DelaunayTriangle_NeighborAcrossFrom_m0962D27A38C136BEA2862A75654C4EF009C7F84A(L_65, L_67, NULL);
		V_2 = L_68;
		// RotateTrianglePair(n1.Triangle, n1.Point, t1, t1.OppositePoint(n1.Triangle, n1.Point));
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_69 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_70 = L_69->___Triangle_4;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_71 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_72 = L_71->___Point_3;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_73 = V_2;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_74 = V_2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_75 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_76 = L_75->___Triangle_4;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_77 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_78 = L_77->___Point_3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_79;
		L_79 = DelaunayTriangle_OppositePoint_mDC118BD8FC2EFDAA35290CDC91EB08FA53A327BE(L_74, L_76, L_78, NULL);
		DTSweep_RotateTrianglePair_m6D216A93A53C558797A26128451B34FECD6E1385(L_70, L_72, L_73, L_79, NULL);
		// tcx.MapTriangleToNodes(n1.Triangle);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_80 = ___tcx0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_81 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_82 = L_81->___Triangle_4;
		DTSweepContext_MapTriangleToNodes_m6B48C2720D77CF48E6AE7328614F55D2A6F4565B(L_80, L_82, NULL);
		// tcx.MapTriangleToNodes(t1);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_83 = ___tcx0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_84 = V_2;
		DTSweepContext_MapTriangleToNodes_m6B48C2720D77CF48E6AE7328614F55D2A6F4565B(L_83, L_84, NULL);
	}

IL_013b:
	{
		// first = tcx.Front.Head.Point;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_85 = ___tcx0;
		AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* L_86 = L_85->___Front_8;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_87 = L_86->___Head_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_88 = L_87->___Point_3;
		V_3 = L_88;
		// n2 = tcx.Front.Tail.Prev;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_89 = ___tcx0;
		AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* L_90 = L_89->___Front_8;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_91 = L_90->___Tail_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_92 = L_91->___Prev_1;
		V_1 = L_92;
		// t1 = n2.Triangle;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_93 = V_1;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_94 = L_93->___Triangle_4;
		V_2 = L_94;
		// p1 = n2.Point;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_95 = V_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_96 = L_95->___Point_3;
		V_4 = L_96;
	}

IL_016c:
	{
		// tcx.RemoveFromList(t1);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_97 = ___tcx0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_98 = V_2;
		DTSweepContext_RemoveFromList_m8D852A85D084F3AC3C9ADBD930B17FA1E27C8435(L_97, L_98, NULL);
		// p1 = t1.PointCCWFrom(p1);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_99 = V_2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_100 = V_4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_101;
		L_101 = DelaunayTriangle_PointCCWFrom_mF3F5570F090A4EC60F28F72FB6B93E6D09CBF562(L_99, L_100, NULL);
		V_4 = L_101;
		// if (p1 == first) break;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_102 = V_4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_103 = V_3;
		if ((((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_102) == ((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_103)))
		{
			goto IL_018d;
		}
	}
	{
		// t1 = t1.NeighborCCWFrom(p1);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_104 = V_2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_105 = V_4;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_106;
		L_106 = DelaunayTriangle_NeighborCCWFrom_m0774E83223AF7F053D275E486AFD39D111D86CBE(L_104, L_105, NULL);
		V_2 = L_106;
		// } while (true);
		goto IL_016c;
	}

IL_018d:
	{
		// first = tcx.Front.Head.Next.Point;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_107 = ___tcx0;
		AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* L_108 = L_107->___Front_8;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_109 = L_108->___Head_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_110 = L_109->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_111 = L_110->___Point_3;
		V_3 = L_111;
		// p1 = t1.PointCWFrom(tcx.Front.Head.Point);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_112 = V_2;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_113 = ___tcx0;
		AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* L_114 = L_113->___Front_8;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_115 = L_114->___Head_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_116 = L_115->___Point_3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_117;
		L_117 = DelaunayTriangle_PointCWFrom_m83A992C1B4D0F5DC005AA65E31225CAB0A610A23(L_112, L_116, NULL);
		V_4 = L_117;
		// t1 = t1.NeighborCWFrom(tcx.Front.Head.Point);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_118 = V_2;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_119 = ___tcx0;
		AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* L_120 = L_119->___Front_8;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_121 = L_120->___Head_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_122 = L_121->___Point_3;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_123;
		L_123 = DelaunayTriangle_NeighborCWFrom_mC74C858ED8A719AE16889DE31B5896988386FFE8(L_118, L_122, NULL);
		V_2 = L_123;
	}

IL_01d2:
	{
		// tcx.RemoveFromList(t1);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_124 = ___tcx0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_125 = V_2;
		DTSweepContext_RemoveFromList_m8D852A85D084F3AC3C9ADBD930B17FA1E27C8435(L_124, L_125, NULL);
		// p1 = t1.PointCCWFrom(p1);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_126 = V_2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_127 = V_4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_128;
		L_128 = DelaunayTriangle_PointCCWFrom_mF3F5570F090A4EC60F28F72FB6B93E6D09CBF562(L_126, L_127, NULL);
		V_4 = L_128;
		// t1 = t1.NeighborCCWFrom(p1);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_129 = V_2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_130 = V_4;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_131;
		L_131 = DelaunayTriangle_NeighborCCWFrom_m0774E83223AF7F053D275E486AFD39D111D86CBE(L_129, L_130, NULL);
		V_2 = L_131;
		// } while (p1 != first);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_132 = V_4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_133 = V_3;
		if ((!(((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_132) == ((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_133))))
		{
			goto IL_01d2;
		}
	}
	{
		// tcx.FinalizeTriangulation();
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_134 = ___tcx0;
		DTSweepContext_FinalizeTriangulation_mB9D744619005EF2380AEDE0BB18A1C605D9D0ABE(L_134, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::TurnAdvancingFrontConvex(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_TurnAdvancingFrontConvex_m13183180376DF73BD52F6283800EF036C1B85F23 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___b1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___c2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* V_0 = NULL;
	{
		// AdvancingFrontNode first = b;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_0 = ___b1;
		V_0 = L_0;
		goto IL_008a;
	}

IL_0007:
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = c;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_1 = ___tcx0;
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_1);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = c;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_3 = ___tcx0;
		DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* L_4;
		L_4 = TriangulationContext_get_DTDebugContext_mA17E0C26062DC7E004F53FC5726639F1BFA45CFE(L_3, NULL);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_5 = ___c2;
		DTSweepDebugContext_set_ActiveNode_mDCE7A20AD32017FF9CC942B918CDD3727115C88B(L_4, L_5, NULL);
	}

IL_001b:
	{
		// if (TriangulationUtil.Orient2d(b.Point, c.Point, c.Next.Point) == Orientation.CCW) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_6 = ___b1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_7 = L_6->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_8 = ___c2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_9 = L_8->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_10 = ___c2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_11 = L_10->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_12 = L_11->___Point_3;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD(L_7, L_9, L_12, NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		// Fill(tcx, c);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_14 = ___tcx0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_15 = ___c2;
		DTSweep_Fill_m7F1FFCAF4BA437AD0DF18745F829499FD6E699ED(L_14, L_15, NULL);
		// c = c.Next;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_16 = ___c2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_17 = L_16->___Next_0;
		___c2 = L_17;
		goto IL_008a;
	}

IL_004b:
	{
		// if (b != first && TriangulationUtil.Orient2d(b.Prev.Point, b.Point, c.Point) == Orientation.CCW) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_18 = ___b1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_19 = V_0;
		if ((((RuntimeObject*)(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)L_18) == ((RuntimeObject*)(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)L_19)))
		{
			goto IL_007f;
		}
	}
	{
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_20 = ___b1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_21 = L_20->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_22 = L_21->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_23 = ___b1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_24 = L_23->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_25 = ___c2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_26 = L_25->___Point_3;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD(L_22, L_24, L_26, NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)1))))
		{
			goto IL_007f;
		}
	}
	{
		// Fill(tcx, b);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_28 = ___tcx0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_29 = ___b1;
		DTSweep_Fill_m7F1FFCAF4BA437AD0DF18745F829499FD6E699ED(L_28, L_29, NULL);
		// b = b.Prev;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_30 = ___b1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_31 = L_30->___Prev_1;
		___b1 = L_31;
		goto IL_008a;
	}

IL_007f:
	{
		// b = c;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_32 = ___c2;
		___b1 = L_32;
		// c = c.Next;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_33 = ___c2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_34 = L_33->___Next_0;
		___c2 = L_34;
	}

IL_008a:
	{
		// while (c != tcx.Front.Tail) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_35 = ___c2;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_36 = ___tcx0;
		AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* L_37 = L_36->___Front_8;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_38 = L_37->___Tail_1;
		if ((!(((RuntimeObject*)(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)L_35) == ((RuntimeObject*)(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)L_38))))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FinalizationPolygon(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FinalizationPolygon_mBF733075F3336BC578AFD3F0E9FA9C5CB96F419A (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, const RuntimeMethod* method) 
{
	DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* V_0 = NULL;
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* V_1 = NULL;
	{
		// DelaunayTriangle t = tcx.Front.Head.Next.Triangle;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_0 = ___tcx0;
		AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* L_1 = L_0->___Front_8;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_2 = L_1->___Head_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_3 = L_2->___Next_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_4 = L_3->___Triangle_4;
		V_0 = L_4;
		// TriangulationPoint p = tcx.Front.Head.Next.Point;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_5 = ___tcx0;
		AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* L_6 = L_5->___Front_8;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_7 = L_6->___Head_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_8 = L_7->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_9 = L_8->___Point_3;
		V_1 = L_9;
		goto IL_0036;
	}

IL_002e:
	{
		// while (!t.GetConstrainedEdgeCW(p)) t = t.NeighborCCWFrom(p);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_10 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_11 = V_1;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_12;
		L_12 = DelaunayTriangle_NeighborCCWFrom_m0774E83223AF7F053D275E486AFD39D111D86CBE(L_10, L_11, NULL);
		V_0 = L_12;
	}

IL_0036:
	{
		// while (!t.GetConstrainedEdgeCW(p)) t = t.NeighborCCWFrom(p);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_13 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_14 = V_1;
		bool L_15;
		L_15 = DelaunayTriangle_GetConstrainedEdgeCW_mD39CAB2A63B58D2F7C1EA222A273B16EADEDF3F5(L_13, L_14, NULL);
		if (!L_15)
		{
			goto IL_002e;
		}
	}
	{
		// tcx.MeshClean(t);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_16 = ___tcx0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_17 = V_0;
		DTSweepContext_MeshClean_mF382723AD09798F6DE99FF52A31499F755FF4C74(L_16, L_17, NULL);
		// }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweep::PointEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* DTSweep_PointEvent_mDB2645D49A120C36330D54AA3650DBDAA2C43925 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* V_0 = NULL;
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* V_1 = NULL;
	{
		// node = tcx.LocateNode(point);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_0 = ___tcx0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___point1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_2;
		L_2 = DTSweepContext_LocateNode_m1398C130FC376009498BD0089B5D6E744D62E0D4(L_0, L_1, NULL);
		V_0 = L_2;
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_3 = ___tcx0;
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_3);
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_5 = ___tcx0;
		DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* L_6;
		L_6 = TriangulationContext_get_DTDebugContext_mA17E0C26062DC7E004F53FC5726639F1BFA45CFE(L_5, NULL);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_7 = V_0;
		DTSweepDebugContext_set_ActiveNode_mDCE7A20AD32017FF9CC942B918CDD3727115C88B(L_6, L_7, NULL);
	}

IL_001c:
	{
		// newNode = NewFrontTriangle(tcx, point, node);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_8 = ___tcx0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_9 = ___point1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_10 = V_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_11;
		L_11 = DTSweep_NewFrontTriangle_m3281DD640B88DB1374AAA541FDD7A40018C0ABE9(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		// if (point.X <= node.Point.X + TriangulationUtil.EPSILON) Fill(tcx, node);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_12 = ___point1;
		double L_13 = L_12->___X_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_14 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_15 = L_14->___Point_3;
		double L_16 = L_15->___X_3;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		double L_17 = ((TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_StaticFields*)il2cpp_codegen_static_fields_for(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var))->___EPSILON_0;
		if ((!(((double)L_13) <= ((double)((double)il2cpp_codegen_add(L_16, L_17))))))
		{
			goto IL_0045;
		}
	}
	{
		// if (point.X <= node.Point.X + TriangulationUtil.EPSILON) Fill(tcx, node);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_18 = ___tcx0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_19 = V_0;
		DTSweep_Fill_m7F1FFCAF4BA437AD0DF18745F829499FD6E699ED(L_18, L_19, NULL);
	}

IL_0045:
	{
		// tcx.AddNode(newNode);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_20 = ___tcx0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_21 = V_1;
		DTSweepContext_AddNode_m61AC65BF973265261991CD9F6ADA794C06722556(L_20, L_21, NULL);
		// FillAdvancingFront(tcx, newNode);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_22 = ___tcx0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_23 = V_1;
		DTSweep_FillAdvancingFront_m30270FB3D1FE8B0D6E84264D83F100C358B379F0(L_22, L_23, NULL);
		// return newNode;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_24 = V_1;
		return L_24;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweep::NewFrontTriangle(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* DTSweep_NewFrontTriangle_m3281DD640B88DB1374AAA541FDD7A40018C0ABE9 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F339626C6CB6D2881F4FE1FEA34F7D36F35733E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* V_0 = NULL;
	DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* V_1 = NULL;
	{
		// triangle = new DelaunayTriangle(point, node.Point, node.Next.Point);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = ___point1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_1 = ___node2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2 = L_1->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_3 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_4 = L_3->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_5 = L_4->___Point_3;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_6 = (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582*)il2cpp_codegen_object_new(DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582_il2cpp_TypeInfo_var);
		DelaunayTriangle__ctor_mD61268CE26513CDB23A354E3FF2C43B2BA806285(L_6, L_0, L_2, L_5, NULL);
		V_1 = L_6;
		// triangle.MarkNeighbor(node.Triangle);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_7 = V_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_8 = ___node2;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_9 = L_8->___Triangle_4;
		DelaunayTriangle_MarkNeighbor_m47AFBF2FA451F82308C1B7C6979C3693120DDD87(L_7, L_9, NULL);
		// tcx.Triangles.Add(triangle);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_10 = ___tcx0;
		List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* L_11 = ((TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843*)L_10)->___Triangles_1;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_12 = V_1;
		List_1_Add_m2F339626C6CB6D2881F4FE1FEA34F7D36F35733E_inline(L_11, L_12, List_1_Add_m2F339626C6CB6D2881F4FE1FEA34F7D36F35733E_RuntimeMethod_var);
		// newNode = new AdvancingFrontNode(point);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_13 = ___point1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_14 = (AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)il2cpp_codegen_object_new(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555_il2cpp_TypeInfo_var);
		AdvancingFrontNode__ctor_mAF86518A23A5A801885959F84A6E39CF84C237EE(L_14, L_13, NULL);
		V_0 = L_14;
		// newNode.Next = node.Next;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_15 = V_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_16 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_17 = L_16->___Next_0;
		L_15->___Next_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___Next_0), (void*)L_17);
		// newNode.Prev = node;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_18 = V_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_19 = ___node2;
		L_18->___Prev_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___Prev_1), (void*)L_19);
		// node.Next.Prev = newNode;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_20 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_21 = L_20->___Next_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_22 = V_0;
		L_21->___Prev_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___Prev_1), (void*)L_22);
		// node.Next = newNode;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_23 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_24 = V_0;
		L_23->___Next_0 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->___Next_0), (void*)L_24);
		// tcx.AddNode(newNode); // XXX: BST
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_25 = ___tcx0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_26 = V_0;
		DTSweepContext_AddNode_m61AC65BF973265261991CD9F6ADA794C06722556(L_25, L_26, NULL);
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = newNode;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_27 = ___tcx0;
		bool L_28;
		L_28 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_27);
		if (!L_28)
		{
			goto IL_0078;
		}
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = newNode;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_29 = ___tcx0;
		DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* L_30;
		L_30 = TriangulationContext_get_DTDebugContext_mA17E0C26062DC7E004F53FC5726639F1BFA45CFE(L_29, NULL);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_31 = V_0;
		DTSweepDebugContext_set_ActiveNode_mDCE7A20AD32017FF9CC942B918CDD3727115C88B(L_30, L_31, NULL);
	}

IL_0078:
	{
		// if (!Legalize(tcx, triangle)) tcx.MapTriangleToNodes(triangle);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_32 = ___tcx0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_33 = V_1;
		bool L_34;
		L_34 = DTSweep_Legalize_m32721A3E6484C056A7EA31365F8B21639BF2CB52(L_32, L_33, NULL);
		if (L_34)
		{
			goto IL_0088;
		}
	}
	{
		// if (!Legalize(tcx, triangle)) tcx.MapTriangleToNodes(triangle);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_35 = ___tcx0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_36 = V_1;
		DTSweepContext_MapTriangleToNodes_m6B48C2720D77CF48E6AE7328614F55D2A6F4565B(L_35, L_36, NULL);
	}

IL_0088:
	{
		// return newNode;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_37 = V_0;
		return L_37;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::EdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_EdgeEvent_mC291442F73B6F36BB727D1F8C3C256BA4F742F02 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___edge1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// tcx.EdgeEvent.ConstrainedEdge = edge;
			DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_0 = ___tcx0;
			DTSweepEdgeEvent_tADA248BEB364180EA7262E5AFDDB730021B50F8D* L_1 = L_0->___EdgeEvent_12;
			DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_2 = ___edge1;
			L_1->___ConstrainedEdge_0 = L_2;
			Il2CppCodeGenWriteBarrier((void**)(&L_1->___ConstrainedEdge_0), (void*)L_2);
			// tcx.EdgeEvent.Right = edge.P.X > edge.Q.X;
			DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_3 = ___tcx0;
			DTSweepEdgeEvent_tADA248BEB364180EA7262E5AFDDB730021B50F8D* L_4 = L_3->___EdgeEvent_12;
			DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_5 = ___edge1;
			TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_6 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_5)->___P_0;
			double L_7 = L_6->___X_3;
			DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_8 = ___edge1;
			TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_9 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_8)->___Q_1;
			double L_10 = L_9->___X_3;
			L_4->___Right_1 = (bool)((((double)L_7) > ((double)L_10))? 1 : 0);
			// if (tcx.IsDebugEnabled) { tcx.DTDebugContext.PrimaryTriangle = node.Triangle; }
			DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_11 = ___tcx0;
			bool L_12;
			L_12 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_11);
			if (!L_12)
			{
				goto IL_0048_1;
			}
		}
		{
			// if (tcx.IsDebugEnabled) { tcx.DTDebugContext.PrimaryTriangle = node.Triangle; }
			DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_13 = ___tcx0;
			DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* L_14;
			L_14 = TriangulationContext_get_DTDebugContext_mA17E0C26062DC7E004F53FC5726639F1BFA45CFE(L_13, NULL);
			AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_15 = ___node2;
			DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_16 = L_15->___Triangle_4;
			DTSweepDebugContext_set_PrimaryTriangle_m63C361FFB102F8A98C2D383309A80EBA88D57882(L_14, L_16, NULL);
		}

IL_0048_1:
		{
			// if (IsEdgeSideOfTriangle(node.Triangle, edge.P, edge.Q))
			AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_17 = ___node2;
			DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_18 = L_17->___Triangle_4;
			DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_19 = ___edge1;
			TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_20 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_19)->___P_0;
			DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_21 = ___edge1;
			TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_22 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_21)->___Q_1;
			bool L_23;
			L_23 = DTSweep_IsEdgeSideOfTriangle_m2239DB5EBC2F046A5D216F0E034074576708F39D(L_18, L_20, L_22, NULL);
			if (!L_23)
			{
				goto IL_0063_1;
			}
		}
		{
			// return;
			goto IL_008e;
		}

IL_0063_1:
		{
			// FillEdgeEvent(tcx, edge, node);
			DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_24 = ___tcx0;
			DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_25 = ___edge1;
			AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_26 = ___node2;
			DTSweep_FillEdgeEvent_m7A25C20F0AB412F6D5148FF1A5AFC4CEC1CB00FC(L_24, L_25, L_26, NULL);
			// EdgeEvent(tcx, edge.P, edge.Q, node.Triangle, edge.Q);
			DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_27 = ___tcx0;
			DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_28 = ___edge1;
			TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_29 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_28)->___P_0;
			DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_30 = ___edge1;
			TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_31 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_30)->___Q_1;
			AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_32 = ___node2;
			DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_33 = L_32->___Triangle_4;
			DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_34 = ___edge1;
			TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_35 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_34)->___Q_1;
			DTSweep_EdgeEvent_mDA49BE47F7E44342D9ED144BBA90B21A96258E40(L_27, L_29, L_31, L_33, L_35, NULL);
			// }
			goto IL_008e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008b;
		}
		throw e;
	}

CATCH_008b:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008e;
	}// end catch (depth: 1)

IL_008e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillEdgeEvent_m7A25C20F0AB412F6D5148FF1A5AFC4CEC1CB00FC (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___edge1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) 
{
	{
		// if (tcx.EdgeEvent.Right) {
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_0 = ___tcx0;
		DTSweepEdgeEvent_tADA248BEB364180EA7262E5AFDDB730021B50F8D* L_1 = L_0->___EdgeEvent_12;
		bool L_2 = L_1->___Right_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// FillRightAboveEdgeEvent(tcx, edge, node);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_3 = ___tcx0;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_4 = ___edge1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_5 = ___node2;
		DTSweep_FillRightAboveEdgeEvent_m11DEC709024930CD60A96E083BC94A3631F5D089(L_3, L_4, L_5, NULL);
		return;
	}

IL_0016:
	{
		// FillLeftAboveEdgeEvent(tcx, edge, node);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_6 = ___tcx0;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_7 = ___edge1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_8 = ___node2;
		DTSweep_FillLeftAboveEdgeEvent_m55099F1B7A1E16E6C33318E5B2511884AB711262(L_6, L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightConcaveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightConcaveEdgeEvent_mDA4F0FD8B741AC8D9214A236FB073559479AE323 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___edge1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Fill(tcx, node.Next);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_0 = ___tcx0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_1 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_2 = L_1->___Next_0;
		DTSweep_Fill_m7F1FFCAF4BA437AD0DF18745F829499FD6E699ED(L_0, L_2, NULL);
		// if (node.Next.Point != edge.P) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_3 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_4 = L_3->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_5 = L_4->___Point_3;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_6 = ___edge1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_7 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_6)->___P_0;
		if ((((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_5) == ((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_7)))
		{
			goto IL_006f;
		}
	}
	{
		// if (TriangulationUtil.Orient2d(edge.Q, node.Next.Point, edge.P) == Orientation.CCW) {
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_8 = ___edge1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_9 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_8)->___Q_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_10 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_11 = L_10->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_12 = L_11->___Point_3;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_13 = ___edge1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_14 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_13)->___P_0;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD(L_9, L_12, L_14, NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_006f;
		}
	}
	{
		// if (TriangulationUtil.Orient2d(node.Point, node.Next.Point, node.Next.Next.Point) == Orientation.CCW) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_16 = ___node2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_17 = L_16->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_18 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_19 = L_18->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_20 = L_19->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_21 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_22 = L_21->___Next_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_23 = L_22->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_24 = L_23->___Point_3;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD(L_17, L_20, L_24, NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_006f;
		}
	}
	{
		// FillRightConcaveEdgeEvent(tcx, edge, node);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_26 = ___tcx0;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_27 = ___edge1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_28 = ___node2;
		DTSweep_FillRightConcaveEdgeEvent_mDA4F0FD8B741AC8D9214A236FB073559479AE323(L_26, L_27, L_28, NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightConvexEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightConvexEdgeEvent_mDD052FB8E8404332EC8000C0CCBC1519A301A6A2 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___edge1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TriangulationUtil.Orient2d(node.Next.Point, node.Next.Next.Point, node.Next.Next.Next.Point) == Orientation.CCW) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_0 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_1 = L_0->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2 = L_1->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_3 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_4 = L_3->___Next_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_5 = L_4->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_6 = L_5->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_7 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_8 = L_7->___Next_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_9 = L_8->___Next_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_10 = L_9->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_11 = L_10->___Point_3;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD(L_2, L_6, L_11, NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0046;
		}
	}
	{
		// FillRightConcaveEdgeEvent(tcx, edge, node.Next);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_13 = ___tcx0;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_14 = ___edge1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_15 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_16 = L_15->___Next_0;
		DTSweep_FillRightConcaveEdgeEvent_mDA4F0FD8B741AC8D9214A236FB073559479AE323(L_13, L_14, L_16, NULL);
		return;
	}

IL_0046:
	{
		// if (TriangulationUtil.Orient2d(edge.Q, node.Next.Next.Point, edge.P) == Orientation.CCW) {
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_17 = ___edge1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_18 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_17)->___Q_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_19 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_20 = L_19->___Next_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_21 = L_20->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_22 = L_21->___Point_3;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_23 = ___edge1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_24 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_23)->___P_0;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD(L_18, L_22, L_24, NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_0077;
		}
	}
	{
		// FillRightConvexEdgeEvent(tcx, edge, node.Next);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_26 = ___tcx0;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_27 = ___edge1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_28 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_29 = L_28->___Next_0;
		DTSweep_FillRightConvexEdgeEvent_mDD052FB8E8404332EC8000C0CCBC1519A301A6A2(L_26, L_27, L_29, NULL);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightBelowEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightBelowEdgeEvent_mFED759B930BB7635CA755D7459BF261350E5E5FF (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___edge1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_0 = ___tcx0;
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_2 = ___tcx0;
		DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* L_3;
		L_3 = TriangulationContext_get_DTDebugContext_mA17E0C26062DC7E004F53FC5726639F1BFA45CFE(L_2, NULL);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_4 = ___node2;
		DTSweepDebugContext_set_ActiveNode_mDCE7A20AD32017FF9CC942B918CDD3727115C88B(L_3, L_4, NULL);
	}

IL_0014:
	{
		// if (node.Point.X < edge.P.X) { // needed?
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_5 = ___node2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_6 = L_5->___Point_3;
		double L_7 = L_6->___X_3;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_8 = ___edge1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_9 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_8)->___P_0;
		double L_10 = L_9->___X_3;
		if ((!(((double)L_7) < ((double)L_10))))
		{
			goto IL_006e;
		}
	}
	{
		// if (TriangulationUtil.Orient2d(node.Point, node.Next.Point, node.Next.Next.Point) == Orientation.CCW) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_11 = ___node2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_12 = L_11->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_13 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_14 = L_13->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_15 = L_14->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_16 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_17 = L_16->___Next_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_18 = L_17->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_19 = L_18->___Point_3;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		int32_t L_20;
		L_20 = TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD(L_12, L_15, L_19, NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		// FillRightConcaveEdgeEvent(tcx, edge, node);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_21 = ___tcx0;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_22 = ___edge1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_23 = ___node2;
		DTSweep_FillRightConcaveEdgeEvent_mDA4F0FD8B741AC8D9214A236FB073559479AE323(L_21, L_22, L_23, NULL);
		return;
	}

IL_005e:
	{
		// FillRightConvexEdgeEvent(tcx, edge, node);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_24 = ___tcx0;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_25 = ___edge1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_26 = ___node2;
		DTSweep_FillRightConvexEdgeEvent_mDD052FB8E8404332EC8000C0CCBC1519A301A6A2(L_24, L_25, L_26, NULL);
		// FillRightBelowEdgeEvent(tcx, edge, node);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_27 = ___tcx0;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_28 = ___edge1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_29 = ___node2;
		DTSweep_FillRightBelowEdgeEvent_mFED759B930BB7635CA755D7459BF261350E5E5FF(L_27, L_28, L_29, NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightAboveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightAboveEdgeEvent_m11DEC709024930CD60A96E083BC94A3631F5D089 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___edge1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0047;
	}

IL_0002:
	{
		// if (tcx.IsDebugEnabled) { tcx.DTDebugContext.ActiveNode = node; }
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_0 = ___tcx0;
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_0);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if (tcx.IsDebugEnabled) { tcx.DTDebugContext.ActiveNode = node; }
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_2 = ___tcx0;
		DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* L_3;
		L_3 = TriangulationContext_get_DTDebugContext_mA17E0C26062DC7E004F53FC5726639F1BFA45CFE(L_2, NULL);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_4 = ___node2;
		DTSweepDebugContext_set_ActiveNode_mDCE7A20AD32017FF9CC942B918CDD3727115C88B(L_3, L_4, NULL);
	}

IL_0016:
	{
		// Orientation o1 = TriangulationUtil.Orient2d(edge.Q, node.Next.Point, edge.P);
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_5 = ___edge1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_6 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_5)->___Q_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_7 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_8 = L_7->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_9 = L_8->___Point_3;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_10 = ___edge1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_11 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_10)->___P_0;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD(L_6, L_9, L_11, NULL);
		// if (o1 == Orientation.CCW) {
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_003f;
		}
	}
	{
		// FillRightBelowEdgeEvent(tcx, edge, node);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_13 = ___tcx0;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_14 = ___edge1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_15 = ___node2;
		DTSweep_FillRightBelowEdgeEvent_mFED759B930BB7635CA755D7459BF261350E5E5FF(L_13, L_14, L_15, NULL);
		goto IL_0047;
	}

IL_003f:
	{
		// node = node.Next;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_16 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_17 = L_16->___Next_0;
		___node2 = L_17;
	}

IL_0047:
	{
		// while (node.Next.Point.X < edge.P.X) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_18 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_19 = L_18->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_20 = L_19->___Point_3;
		double L_21 = L_20->___X_3;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_22 = ___edge1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_23 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_22)->___P_0;
		double L_24 = L_23->___X_3;
		if ((((double)L_21) < ((double)L_24)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftConvexEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftConvexEdgeEvent_m0C9E70659D1A87C162A749016AB657F7BF3B9F98 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___edge1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TriangulationUtil.Orient2d(node.Prev.Point, node.Prev.Prev.Point, node.Prev.Prev.Prev.Point) == Orientation.CW) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_0 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_1 = L_0->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2 = L_1->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_3 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_4 = L_3->___Prev_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_5 = L_4->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_6 = L_5->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_7 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_8 = L_7->___Prev_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_9 = L_8->___Prev_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_10 = L_9->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_11 = L_10->___Point_3;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD(L_2, L_6, L_11, NULL);
		if (L_12)
		{
			goto IL_0045;
		}
	}
	{
		// FillLeftConcaveEdgeEvent(tcx, edge, node.Prev);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_13 = ___tcx0;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_14 = ___edge1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_15 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_16 = L_15->___Prev_1;
		DTSweep_FillLeftConcaveEdgeEvent_m21CD090CB3389848C0D37E70326097396BA64318(L_13, L_14, L_16, NULL);
		return;
	}

IL_0045:
	{
		// if (TriangulationUtil.Orient2d(edge.Q, node.Prev.Prev.Point, edge.P) == Orientation.CW) {
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_17 = ___edge1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_18 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_17)->___Q_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_19 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_20 = L_19->___Prev_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_21 = L_20->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_22 = L_21->___Point_3;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_23 = ___edge1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_24 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_23)->___P_0;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD(L_18, L_22, L_24, NULL);
		if (L_25)
		{
			goto IL_0075;
		}
	}
	{
		// FillLeftConvexEdgeEvent(tcx, edge, node.Prev);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_26 = ___tcx0;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_27 = ___edge1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_28 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_29 = L_28->___Prev_1;
		DTSweep_FillLeftConvexEdgeEvent_m0C9E70659D1A87C162A749016AB657F7BF3B9F98(L_26, L_27, L_29, NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftConcaveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftConcaveEdgeEvent_m21CD090CB3389848C0D37E70326097396BA64318 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___edge1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Fill(tcx, node.Prev);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_0 = ___tcx0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_1 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_2 = L_1->___Prev_1;
		DTSweep_Fill_m7F1FFCAF4BA437AD0DF18745F829499FD6E699ED(L_0, L_2, NULL);
		// if (node.Prev.Point != edge.P) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_3 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_4 = L_3->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_5 = L_4->___Point_3;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_6 = ___edge1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_7 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_6)->___P_0;
		if ((((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_5) == ((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_7)))
		{
			goto IL_006d;
		}
	}
	{
		// if (TriangulationUtil.Orient2d(edge.Q, node.Prev.Point, edge.P) == Orientation.CW) {
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_8 = ___edge1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_9 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_8)->___Q_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_10 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_11 = L_10->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_12 = L_11->___Point_3;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_13 = ___edge1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_14 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_13)->___P_0;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD(L_9, L_12, L_14, NULL);
		if (L_15)
		{
			goto IL_006d;
		}
	}
	{
		// if (TriangulationUtil.Orient2d(node.Point, node.Prev.Point, node.Prev.Prev.Point) == Orientation.CW) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_16 = ___node2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_17 = L_16->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_18 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_19 = L_18->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_20 = L_19->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_21 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_22 = L_21->___Prev_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_23 = L_22->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_24 = L_23->___Point_3;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD(L_17, L_20, L_24, NULL);
		if (L_25)
		{
			goto IL_006d;
		}
	}
	{
		// FillLeftConcaveEdgeEvent(tcx, edge, node);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_26 = ___tcx0;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_27 = ___edge1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_28 = ___node2;
		DTSweep_FillLeftConcaveEdgeEvent_m21CD090CB3389848C0D37E70326097396BA64318(L_26, L_27, L_28, NULL);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftBelowEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftBelowEdgeEvent_m5201E69E51826C28E73626026D836B9604FAA7AE (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___edge1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_0 = ___tcx0;
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_2 = ___tcx0;
		DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* L_3;
		L_3 = TriangulationContext_get_DTDebugContext_mA17E0C26062DC7E004F53FC5726639F1BFA45CFE(L_2, NULL);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_4 = ___node2;
		DTSweepDebugContext_set_ActiveNode_mDCE7A20AD32017FF9CC942B918CDD3727115C88B(L_3, L_4, NULL);
	}

IL_0014:
	{
		// if (node.Point.X > edge.P.X) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_5 = ___node2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_6 = L_5->___Point_3;
		double L_7 = L_6->___X_3;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_8 = ___edge1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_9 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_8)->___P_0;
		double L_10 = L_9->___X_3;
		if ((!(((double)L_7) > ((double)L_10))))
		{
			goto IL_006d;
		}
	}
	{
		// if (TriangulationUtil.Orient2d(node.Point, node.Prev.Point, node.Prev.Prev.Point) == Orientation.CW) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_11 = ___node2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_12 = L_11->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_13 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_14 = L_13->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_15 = L_14->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_16 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_17 = L_16->___Prev_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_18 = L_17->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_19 = L_18->___Point_3;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		int32_t L_20;
		L_20 = TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD(L_12, L_15, L_19, NULL);
		if (L_20)
		{
			goto IL_005d;
		}
	}
	{
		// FillLeftConcaveEdgeEvent(tcx, edge, node);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_21 = ___tcx0;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_22 = ___edge1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_23 = ___node2;
		DTSweep_FillLeftConcaveEdgeEvent_m21CD090CB3389848C0D37E70326097396BA64318(L_21, L_22, L_23, NULL);
		return;
	}

IL_005d:
	{
		// FillLeftConvexEdgeEvent(tcx, edge, node);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_24 = ___tcx0;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_25 = ___edge1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_26 = ___node2;
		DTSweep_FillLeftConvexEdgeEvent_m0C9E70659D1A87C162A749016AB657F7BF3B9F98(L_24, L_25, L_26, NULL);
		// FillLeftBelowEdgeEvent(tcx, edge, node);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_27 = ___tcx0;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_28 = ___edge1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_29 = ___node2;
		DTSweep_FillLeftBelowEdgeEvent_m5201E69E51826C28E73626026D836B9604FAA7AE(L_27, L_28, L_29, NULL);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftAboveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftAboveEdgeEvent_m55099F1B7A1E16E6C33318E5B2511884AB711262 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___edge1, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0046;
	}

IL_0002:
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_0 = ___tcx0;
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_0);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_2 = ___tcx0;
		DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* L_3;
		L_3 = TriangulationContext_get_DTDebugContext_mA17E0C26062DC7E004F53FC5726639F1BFA45CFE(L_2, NULL);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_4 = ___node2;
		DTSweepDebugContext_set_ActiveNode_mDCE7A20AD32017FF9CC942B918CDD3727115C88B(L_3, L_4, NULL);
	}

IL_0016:
	{
		// Orientation o1 = TriangulationUtil.Orient2d(edge.Q, node.Prev.Point, edge.P);
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_5 = ___edge1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_6 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_5)->___Q_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_7 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_8 = L_7->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_9 = L_8->___Point_3;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_10 = ___edge1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_11 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_10)->___P_0;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD(L_6, L_9, L_11, NULL);
		// if (o1 == Orientation.CW) {
		if (L_12)
		{
			goto IL_003e;
		}
	}
	{
		// FillLeftBelowEdgeEvent(tcx, edge, node);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_13 = ___tcx0;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_14 = ___edge1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_15 = ___node2;
		DTSweep_FillLeftBelowEdgeEvent_m5201E69E51826C28E73626026D836B9604FAA7AE(L_13, L_14, L_15, NULL);
		goto IL_0046;
	}

IL_003e:
	{
		// node = node.Prev;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_16 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_17 = L_16->___Prev_1;
		___node2 = L_17;
	}

IL_0046:
	{
		// while (node.Prev.Point.X > edge.P.X) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_18 = ___node2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_19 = L_18->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_20 = L_19->___Point_3;
		double L_21 = L_20->___X_3;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_22 = ___edge1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_23 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_22)->___P_0;
		double L_24 = L_23->___X_3;
		if ((((double)L_21) > ((double)L_24)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweep::IsEdgeSideOfTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_IsEdgeSideOfTriangle_m2239DB5EBC2F046A5D216F0E034074576708F39D (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___triangle0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___ep1, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___eq2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int index = triangle.EdgeIndex(ep, eq);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_0 = ___triangle0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___ep1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2 = ___eq2;
		int32_t L_3;
		L_3 = DelaunayTriangle_EdgeIndex_m91816E3D9EFACAF481AD414B4683AB1A4A4D5863(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// if ( index == -1 ) return false;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_000f;
		}
	}
	{
		// if ( index == -1 ) return false;
		return (bool)0;
	}

IL_000f:
	{
		// triangle.MarkConstrainedEdge(index);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_5 = ___triangle0;
		int32_t L_6 = V_0;
		DelaunayTriangle_MarkConstrainedEdge_mC6EA309D6CD5DE1219A52701CCF39777FC89ED16(L_5, L_6, NULL);
		// triangle = triangle.Neighbors[index];
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_7 = ___triangle0;
		FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B* L_8 = (&L_7->___Neighbors_1);
		int32_t L_9 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_10;
		L_10 = FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4(L_8, L_9, FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4_RuntimeMethod_var);
		___triangle0 = L_10;
		// if (triangle != null) triangle.MarkConstrainedEdge(ep, eq);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_11 = ___triangle0;
		if (!L_11)
		{
			goto IL_002f;
		}
	}
	{
		// if (triangle != null) triangle.MarkConstrainedEdge(ep, eq);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_12 = ___triangle0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_13 = ___ep1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_14 = ___eq2;
		DelaunayTriangle_MarkConstrainedEdge_mADA98D76C669806AE11B23E40E5E2C35EF38884E(L_12, L_13, L_14, NULL);
	}

IL_002f:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::EdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_EdgeEvent_mDA49BE47F7E44342D9ED144BBA90B21A96258E40 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___ep1, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___eq2, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___triangle3, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* V_0 = NULL;
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.PrimaryTriangle=triangle;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_0 = ___tcx0;
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.PrimaryTriangle=triangle;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_2 = ___tcx0;
		DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* L_3;
		L_3 = TriangulationContext_get_DTDebugContext_mA17E0C26062DC7E004F53FC5726639F1BFA45CFE(L_2, NULL);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_4 = ___triangle3;
		DTSweepDebugContext_set_PrimaryTriangle_m63C361FFB102F8A98C2D383309A80EBA88D57882(L_3, L_4, NULL);
	}

IL_0014:
	{
		// if (IsEdgeSideOfTriangle(triangle, ep, eq)) return;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_5 = ___triangle3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_6 = ___ep1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_7 = ___eq2;
		bool L_8;
		L_8 = DTSweep_IsEdgeSideOfTriangle_m2239DB5EBC2F046A5D216F0E034074576708F39D(L_5, L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_001f;
		}
	}
	{
		// if (IsEdgeSideOfTriangle(triangle, ep, eq)) return;
		return;
	}

IL_001f:
	{
		// p1 = triangle.PointCCWFrom(point);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_9 = ___triangle3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_10 = ___point4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_11;
		L_11 = DelaunayTriangle_PointCCWFrom_mF3F5570F090A4EC60F28F72FB6B93E6D09CBF562(L_9, L_10, NULL);
		V_0 = L_11;
		// Orientation o1 = TriangulationUtil.Orient2d(eq, p1, ep);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_12 = ___eq2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_13 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_14 = ___ep1;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD(L_12, L_13, L_14, NULL);
		V_2 = L_15;
		// if (o1 == Orientation.Collinear) {
		int32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)2))))
		{
			goto IL_0043;
		}
	}
	{
		// throw new PointOnEdgeException("EdgeEvent - Point on constrained edge not supported yet",eq,p1,ep);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_17 = ___eq2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_18 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_19 = ___ep1;
		PointOnEdgeException_tC525B89F81C014138323BBD40782538269F85A40* L_20 = (PointOnEdgeException_tC525B89F81C014138323BBD40782538269F85A40*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PointOnEdgeException_tC525B89F81C014138323BBD40782538269F85A40_il2cpp_TypeInfo_var)));
		PointOnEdgeException__ctor_mCF2DDB9301C4890B5C5C360B926ED12808405D24(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral56FEC330311BE1770446499D7CC29C5DBA8485E8)), L_17, L_18, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DTSweep_EdgeEvent_mDA49BE47F7E44342D9ED144BBA90B21A96258E40_RuntimeMethod_var)));
	}

IL_0043:
	{
		// p2 = triangle.PointCWFrom(point);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_21 = ___triangle3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_22 = ___point4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_23;
		L_23 = DelaunayTriangle_PointCWFrom_m83A992C1B4D0F5DC005AA65E31225CAB0A610A23(L_21, L_22, NULL);
		V_1 = L_23;
		// Orientation o2 = TriangulationUtil.Orient2d(eq, p2, ep);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_24 = ___eq2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_25 = V_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_26 = ___ep1;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD(L_24, L_25, L_26, NULL);
		V_3 = L_27;
		// if (o2 == Orientation.Collinear) {
		int32_t L_28 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)2))))
		{
			goto IL_0067;
		}
	}
	{
		// throw new PointOnEdgeException("EdgeEvent - Point on constrained edge not supported yet",eq,p2,ep);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_29 = ___eq2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_30 = V_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_31 = ___ep1;
		PointOnEdgeException_tC525B89F81C014138323BBD40782538269F85A40* L_32 = (PointOnEdgeException_tC525B89F81C014138323BBD40782538269F85A40*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PointOnEdgeException_tC525B89F81C014138323BBD40782538269F85A40_il2cpp_TypeInfo_var)));
		PointOnEdgeException__ctor_mCF2DDB9301C4890B5C5C360B926ED12808405D24(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral56FEC330311BE1770446499D7CC29C5DBA8485E8)), L_29, L_30, L_31, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DTSweep_EdgeEvent_mDA49BE47F7E44342D9ED144BBA90B21A96258E40_RuntimeMethod_var)));
	}

IL_0067:
	{
		// if (o1 == o2) {
		int32_t L_33 = V_2;
		int32_t L_34 = V_3;
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0090;
		}
	}
	{
		// if (o1 == Orientation.CW) {
		int32_t L_35 = V_2;
		if (L_35)
		{
			goto IL_007a;
		}
	}
	{
		// triangle = triangle.NeighborCCWFrom(point);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_36 = ___triangle3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_37 = ___point4;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_38;
		L_38 = DelaunayTriangle_NeighborCCWFrom_m0774E83223AF7F053D275E486AFD39D111D86CBE(L_36, L_37, NULL);
		___triangle3 = L_38;
		goto IL_0084;
	}

IL_007a:
	{
		// triangle = triangle.NeighborCWFrom(point);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_39 = ___triangle3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_40 = ___point4;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_41;
		L_41 = DelaunayTriangle_NeighborCWFrom_mC74C858ED8A719AE16889DE31B5896988386FFE8(L_39, L_40, NULL);
		___triangle3 = L_41;
	}

IL_0084:
	{
		// EdgeEvent(tcx, ep, eq, triangle, point);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_42 = ___tcx0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_43 = ___ep1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_44 = ___eq2;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_45 = ___triangle3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_46 = ___point4;
		DTSweep_EdgeEvent_mDA49BE47F7E44342D9ED144BBA90B21A96258E40(L_42, L_43, L_44, L_45, L_46, NULL);
		return;
	}

IL_0090:
	{
		// FlipEdgeEvent(tcx, ep, eq, triangle, point);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_47 = ___tcx0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_48 = ___ep1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_49 = ___eq2;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_50 = ___triangle3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_51 = ___point4;
		DTSweep_FlipEdgeEvent_mD067C84E606F463B80F85354DA2EB616466D3F86(L_47, L_48, L_49, L_50, L_51, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::SplitEdge(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_SplitEdge_mEAD85D6B045BD510F3F66588ACCA8020EA2CA98A (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___ep0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___eq1, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisDTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A_m0B625C2F7B32E6DFE8CC23CFA3463DF620682573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t5532E35A1F0199C1375B3FA146E9A4CF52A2D208_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CSplitEdgeU3Eb__0_m39E95088EC3975461B78F89A602049A166DCAA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_tC3ED14289D5AC5991F62DC526A965F269717A4DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass21_0_tC3ED14289D5AC5991F62DC526A965F269717A4DA* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass21_0_tC3ED14289D5AC5991F62DC526A965F269717A4DA* L_0 = (U3CU3Ec__DisplayClass21_0_tC3ED14289D5AC5991F62DC526A965F269717A4DA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_tC3ED14289D5AC5991F62DC526A965F269717A4DA_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass21_0__ctor_m969A992BAA0E836F0FB083259ABA64F8361C0F46(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass21_0_tC3ED14289D5AC5991F62DC526A965F269717A4DA* L_1 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2 = ___ep0;
		L_1->___ep_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___ep_0), (void*)L_2);
		// DTSweepConstraint edge = eq.Edges.First( e => e.Q==ep || e.P==ep );
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_3 = ___eq1;
		List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2* L_4;
		L_4 = TriangulationPoint_get_Edges_m727DF4F3A45513F80246773E13FA8B8909E864BD_inline(L_3, NULL);
		U3CU3Ec__DisplayClass21_0_tC3ED14289D5AC5991F62DC526A965F269717A4DA* L_5 = V_0;
		Func_2_t5532E35A1F0199C1375B3FA146E9A4CF52A2D208* L_6 = (Func_2_t5532E35A1F0199C1375B3FA146E9A4CF52A2D208*)il2cpp_codegen_object_new(Func_2_t5532E35A1F0199C1375B3FA146E9A4CF52A2D208_il2cpp_TypeInfo_var);
		Func_2__ctor_m917CFD0AF583CEF10A9C7750490A1BC567EBDF6F(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass21_0_U3CSplitEdgeU3Eb__0_m39E95088EC3975461B78F89A602049A166DCAA45_RuntimeMethod_var), NULL);
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_7;
		L_7 = Enumerable_First_TisDTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A_m0B625C2F7B32E6DFE8CC23CFA3463DF620682573(L_4, L_6, Enumerable_First_TisDTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A_m0B625C2F7B32E6DFE8CC23CFA3463DF620682573_RuntimeMethod_var);
		// edge.P = p;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_8 = ___p2;
		((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_7)->___P_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_7)->___P_0), (void*)L_8);
		// new DTSweepConstraint(ep, p); // Et tu, Brute? --MM
		U3CU3Ec__DisplayClass21_0_tC3ED14289D5AC5991F62DC526A965F269717A4DA* L_9 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_10 = L_9->___ep_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_11 = ___p2;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_12 = (DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A*)il2cpp_codegen_object_new(DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A_il2cpp_TypeInfo_var);
		DTSweepConstraint__ctor_m8288F9EFFFB04AEDE40C94B25CD1C911EC19B401(L_12, L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FlipEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FlipEdgeEvent_mD067C84E606F463B80F85354DA2EB616466D3F86 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___ep1, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___eq2, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___t3, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral114E73D2A801F90DEB8FCCBE8B4B66E2C796CDD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22ED5FCE4A7B9417FAA18E0C31983A86F0BDAD99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5029680EA7BBB6D128B64AE7F27E5CEC471A381);
		s_Il2CppMethodInitialized = true;
	}
	DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* V_0 = NULL;
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* V_1 = NULL;
	int32_t V_2 = 0;
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* V_3 = NULL;
	{
		// DelaunayTriangle ot = t.NeighborAcrossFrom(p);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_0 = ___t3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p4;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_2;
		L_2 = DelaunayTriangle_NeighborAcrossFrom_m0962D27A38C136BEA2862A75654C4EF009C7F84A(L_0, L_1, NULL);
		V_0 = L_2;
		// TriangulationPoint op = ot.OppositePoint(t, p);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_3 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_4 = ___t3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_5 = ___p4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_6;
		L_6 = DelaunayTriangle_OppositePoint_mDC118BD8FC2EFDAA35290CDC91EB08FA53A327BE(L_3, L_4, L_5, NULL);
		V_1 = L_6;
		// if (ot == null) {
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_7 = V_0;
		if (L_7)
		{
			goto IL_0021;
		}
	}
	{
		// throw new InvalidOperationException("[BUG:FIXME] FLIP failed due to missing triangle");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07AC1B1D6E5B09CAD55868C0EBA7C2B6EB0B16DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DTSweep_FlipEdgeEvent_mD067C84E606F463B80F85354DA2EB616466D3F86_RuntimeMethod_var)));
	}

IL_0021:
	{
		// if (tcx.IsDebugEnabled) {
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_9 = ___tcx0;
		bool L_10;
		L_10 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_9);
		if (!L_10)
		{
			goto IL_0041;
		}
	}
	{
		// tcx.DTDebugContext.PrimaryTriangle   = t;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_11 = ___tcx0;
		DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* L_12;
		L_12 = TriangulationContext_get_DTDebugContext_mA17E0C26062DC7E004F53FC5726639F1BFA45CFE(L_11, NULL);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_13 = ___t3;
		DTSweepDebugContext_set_PrimaryTriangle_m63C361FFB102F8A98C2D383309A80EBA88D57882(L_12, L_13, NULL);
		// tcx.DTDebugContext.SecondaryTriangle = ot;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_14 = ___tcx0;
		DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* L_15;
		L_15 = TriangulationContext_get_DTDebugContext_mA17E0C26062DC7E004F53FC5726639F1BFA45CFE(L_14, NULL);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_16 = V_0;
		DTSweepDebugContext_set_SecondaryTriangle_m419A62A2C2D2EFDAA842CBEAF7F2B897C841A699(L_15, L_16, NULL);
	}

IL_0041:
	{
		// bool inScanArea = TriangulationUtil.InScanArea(p, t.PointCCWFrom(p), t.PointCWFrom(p), op);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_17 = ___p4;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_18 = ___t3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_19 = ___p4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_20;
		L_20 = DelaunayTriangle_PointCCWFrom_mF3F5570F090A4EC60F28F72FB6B93E6D09CBF562(L_18, L_19, NULL);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_21 = ___t3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_22 = ___p4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_23;
		L_23 = DelaunayTriangle_PointCWFrom_m83A992C1B4D0F5DC005AA65E31225CAB0A610A23(L_21, L_22, NULL);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_24 = V_1;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = TriangulationUtil_InScanArea_mCFD6C361EDDDF32F4B8515E5ABB534063CB6BFA3(L_17, L_20, L_23, L_24, NULL);
		// if (inScanArea) {
		if (!L_25)
		{
			goto IL_0120;
		}
	}
	{
		// RotateTrianglePair(t, p, ot, op);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_26 = ___t3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_27 = ___p4;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_28 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_29 = V_1;
		DTSweep_RotateTrianglePair_m6D216A93A53C558797A26128451B34FECD6E1385(L_26, L_27, L_28, L_29, NULL);
		// tcx.MapTriangleToNodes(t);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_30 = ___tcx0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_31 = ___t3;
		DTSweepContext_MapTriangleToNodes_m6B48C2720D77CF48E6AE7328614F55D2A6F4565B(L_30, L_31, NULL);
		// tcx.MapTriangleToNodes(ot);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_32 = ___tcx0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_33 = V_0;
		DTSweepContext_MapTriangleToNodes_m6B48C2720D77CF48E6AE7328614F55D2A6F4565B(L_32, L_33, NULL);
		// if (p == eq && op == ep) {
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_34 = ___p4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_35 = ___eq2;
		if ((!(((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_34) == ((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_35))))
		{
			goto IL_00eb;
		}
	}
	{
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_36 = V_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_37 = ___ep1;
		if ((!(((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_36) == ((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_37))))
		{
			goto IL_00eb;
		}
	}
	{
		// if (eq == tcx.EdgeEvent.ConstrainedEdge.Q
		//     && ep == tcx.EdgeEvent.ConstrainedEdge.P) {
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_38 = ___eq2;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_39 = ___tcx0;
		DTSweepEdgeEvent_tADA248BEB364180EA7262E5AFDDB730021B50F8D* L_40 = L_39->___EdgeEvent_12;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_41 = L_40->___ConstrainedEdge_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_42 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_41)->___Q_1;
		if ((!(((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_38) == ((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_42))))
		{
			goto IL_00d8;
		}
	}
	{
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_43 = ___ep1;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_44 = ___tcx0;
		DTSweepEdgeEvent_tADA248BEB364180EA7262E5AFDDB730021B50F8D* L_45 = L_44->___EdgeEvent_12;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_46 = L_45->___ConstrainedEdge_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_47 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_46)->___P_0;
		if ((!(((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_43) == ((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_47))))
		{
			goto IL_00d8;
		}
	}
	{
		// if (tcx.IsDebugEnabled) Console.WriteLine("[FLIP] - constrained edge done"); // TODO: remove
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_48 = ___tcx0;
		bool L_49;
		L_49 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_48);
		if (!L_49)
		{
			goto IL_00b7;
		}
	}
	{
		// if (tcx.IsDebugEnabled) Console.WriteLine("[FLIP] - constrained edge done"); // TODO: remove
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA(_stringLiteral22ED5FCE4A7B9417FAA18E0C31983A86F0BDAD99, NULL);
	}

IL_00b7:
	{
		// t.MarkConstrainedEdge(ep, eq);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_50 = ___t3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_51 = ___ep1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_52 = ___eq2;
		DelaunayTriangle_MarkConstrainedEdge_mADA98D76C669806AE11B23E40E5E2C35EF38884E(L_50, L_51, L_52, NULL);
		// ot.MarkConstrainedEdge(ep, eq);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_53 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_54 = ___ep1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_55 = ___eq2;
		DelaunayTriangle_MarkConstrainedEdge_mADA98D76C669806AE11B23E40E5E2C35EF38884E(L_53, L_54, L_55, NULL);
		// Legalize(tcx, t);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_56 = ___tcx0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_57 = ___t3;
		bool L_58;
		L_58 = DTSweep_Legalize_m32721A3E6484C056A7EA31365F8B21639BF2CB52(L_56, L_57, NULL);
		// Legalize(tcx, ot);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_59 = ___tcx0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_60 = V_0;
		bool L_61;
		L_61 = DTSweep_Legalize_m32721A3E6484C056A7EA31365F8B21639BF2CB52(L_59, L_60, NULL);
		return;
	}

IL_00d8:
	{
		// if (tcx.IsDebugEnabled) Console.WriteLine("[FLIP] - subedge done"); // TODO: remove
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_62 = ___tcx0;
		bool L_63;
		L_63 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_62);
		if (!L_63)
		{
			goto IL_0140;
		}
	}
	{
		// if (tcx.IsDebugEnabled) Console.WriteLine("[FLIP] - subedge done"); // TODO: remove
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA(_stringLiteralC5029680EA7BBB6D128B64AE7F27E5CEC471A381, NULL);
		return;
	}

IL_00eb:
	{
		// if (tcx.IsDebugEnabled) Console.WriteLine("[FLIP] - flipping and continuing with triangle still crossing edge"); // TODO: remove
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_64 = ___tcx0;
		bool L_65;
		L_65 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_64);
		if (!L_65)
		{
			goto IL_00fd;
		}
	}
	{
		// if (tcx.IsDebugEnabled) Console.WriteLine("[FLIP] - flipping and continuing with triangle still crossing edge"); // TODO: remove
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA(_stringLiteral114E73D2A801F90DEB8FCCBE8B4B66E2C796CDD2, NULL);
	}

IL_00fd:
	{
		// Orientation o = TriangulationUtil.Orient2d(eq, op, ep);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_66 = ___eq2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_67 = V_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_68 = ___ep1;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		int32_t L_69;
		L_69 = TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD(L_66, L_67, L_68, NULL);
		V_2 = L_69;
		// t = NextFlipTriangle(tcx, o, t, ot, p, op);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_70 = ___tcx0;
		int32_t L_71 = V_2;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_72 = ___t3;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_73 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_74 = ___p4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_75 = V_1;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_76;
		L_76 = DTSweep_NextFlipTriangle_mF90678C35297D80BC0EF11D63E6BA60A2216CA5F(L_70, L_71, L_72, L_73, L_74, L_75, NULL);
		___t3 = L_76;
		// FlipEdgeEvent(tcx, ep, eq, t, p);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_77 = ___tcx0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_78 = ___ep1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_79 = ___eq2;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_80 = ___t3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_81 = ___p4;
		DTSweep_FlipEdgeEvent_mD067C84E606F463B80F85354DA2EB616466D3F86(L_77, L_78, L_79, L_80, L_81, NULL);
		return;
	}

IL_0120:
	{
		// TriangulationPoint newP = NextFlipPoint(ep, eq, ot, op);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_82 = ___ep1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_83 = ___eq2;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_84 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_85 = V_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_86;
		L_86 = DTSweep_NextFlipPoint_m504D009A39451CC8233A0C871CE821BC01B4DC75(L_82, L_83, L_84, L_85, NULL);
		V_3 = L_86;
		// FlipScanEdgeEvent(tcx, ep, eq, t, ot, newP);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_87 = ___tcx0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_88 = ___ep1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_89 = ___eq2;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_90 = ___t3;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_91 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_92 = V_3;
		DTSweep_FlipScanEdgeEvent_m5E38B28C6E6E31B0FA12BC9DCAA7A9368336C7FA(L_87, L_88, L_89, L_90, L_91, L_92, NULL);
		// EdgeEvent(tcx, ep, eq, t, p);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_93 = ___tcx0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_94 = ___ep1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_95 = ___eq2;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_96 = ___t3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_97 = ___p4;
		DTSweep_EdgeEvent_mDA49BE47F7E44342D9ED144BBA90B21A96258E40(L_93, L_94, L_95, L_96, L_97, NULL);
	}

IL_0140:
	{
		// }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweep::NextFlipPoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* DTSweep_NextFlipPoint_m504D009A39451CC8233A0C871CE821BC01B4DC75 (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___ep0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___eq1, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___ot2, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___op3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Orientation o2d = TriangulationUtil.Orient2d(eq, op, ep);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = ___eq1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___op3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2 = ___ep0;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0025;
			}
			case 2:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_003b;
	}

IL_001d:
	{
		// case Orientation.CW: return ot.PointCCWFrom(op);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_5 = ___ot2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_6 = ___op3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_7;
		L_7 = DelaunayTriangle_PointCCWFrom_mF3F5570F090A4EC60F28F72FB6B93E6D09CBF562(L_5, L_6, NULL);
		return L_7;
	}

IL_0025:
	{
		// case Orientation.CCW: return ot.PointCWFrom(op);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_8 = ___ot2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_9 = ___op3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_10;
		L_10 = DelaunayTriangle_PointCWFrom_m83A992C1B4D0F5DC005AA65E31225CAB0A610A23(L_8, L_9, NULL);
		return L_10;
	}

IL_002d:
	{
		// throw new PointOnEdgeException("Point on constrained edge not supported yet",eq,op,ep);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_11 = ___eq1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_12 = ___op3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_13 = ___ep0;
		PointOnEdgeException_tC525B89F81C014138323BBD40782538269F85A40* L_14 = (PointOnEdgeException_tC525B89F81C014138323BBD40782538269F85A40*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PointOnEdgeException_tC525B89F81C014138323BBD40782538269F85A40_il2cpp_TypeInfo_var)));
		PointOnEdgeException__ctor_mCF2DDB9301C4890B5C5C360B926ED12808405D24(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0C9DBCA15AA768A26AA34FE93E331BE119D035)), L_11, L_12, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DTSweep_NextFlipPoint_m504D009A39451CC8233A0C871CE821BC01B4DC75_RuntimeMethod_var)));
	}

IL_003b:
	{
		// throw new NotImplementedException("Orientation not handled");
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_15 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC2C785F436B8C0C146A0CADB55F5E0E73F71B11D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DTSweep_NextFlipPoint_m504D009A39451CC8233A0C871CE821BC01B4DC75_RuntimeMethod_var)));
	}
}
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DTSweep::NextFlipTriangle(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.Orientation,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* DTSweep_NextFlipTriangle_mF90678C35297D80BC0EF11D63E6BA60A2216CA5F (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, int32_t ___o1, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___t2, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___ot3, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p4, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___op5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (o == Orientation.CCW) {
		int32_t L_0 = ___o1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		// edgeIndex = ot.EdgeIndex(p, op);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_1 = ___ot3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2 = ___p4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_3 = ___op5;
		int32_t L_4;
		L_4 = DelaunayTriangle_EdgeIndex_m91816E3D9EFACAF481AD414B4683AB1A4A4D5863(L_1, L_2, L_3, NULL);
		V_0 = L_4;
		// ot.EdgeIsDelaunay[edgeIndex] = true;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_5 = ___ot3;
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_6 = (&L_5->___EdgeIsDelaunay_3);
		int32_t L_7 = V_0;
		FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3(L_6, L_7, (bool)1, NULL);
		// Legalize(tcx, ot);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_8 = ___tcx0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_9 = ___ot3;
		bool L_10;
		L_10 = DTSweep_Legalize_m32721A3E6484C056A7EA31365F8B21639BF2CB52(L_8, L_9, NULL);
		// ot.EdgeIsDelaunay.Clear();
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_11 = ___ot3;
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_12 = (&L_11->___EdgeIsDelaunay_3);
		FixedBitArray3_Clear_mF3519208B98A783170334C2431FFCBD3BDA726E5(L_12, NULL);
		// return t;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_13 = ___t2;
		return L_13;
	}

IL_0031:
	{
		// edgeIndex = t.EdgeIndex(p, op);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_14 = ___t2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_15 = ___p4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_16 = ___op5;
		int32_t L_17;
		L_17 = DelaunayTriangle_EdgeIndex_m91816E3D9EFACAF481AD414B4683AB1A4A4D5863(L_14, L_15, L_16, NULL);
		V_0 = L_17;
		// t.EdgeIsDelaunay[edgeIndex] = true;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_18 = ___t2;
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_19 = (&L_18->___EdgeIsDelaunay_3);
		int32_t L_20 = V_0;
		FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3(L_19, L_20, (bool)1, NULL);
		// Legalize(tcx, t);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_21 = ___tcx0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_22 = ___t2;
		bool L_23;
		L_23 = DTSweep_Legalize_m32721A3E6484C056A7EA31365F8B21639BF2CB52(L_21, L_22, NULL);
		// t.EdgeIsDelaunay.Clear();
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_24 = ___t2;
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_25 = (&L_24->___EdgeIsDelaunay_3);
		FixedBitArray3_Clear_mF3519208B98A783170334C2431FFCBD3BDA726E5(L_25, NULL);
		// return ot;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_26 = ___ot3;
		return L_26;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FlipScanEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FlipScanEdgeEvent_m5E38B28C6E6E31B0FA12BC9DCAA7A9368336C7FA (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___ep1, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___eq2, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___flipTriangle3, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___t4, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD62066A98DDBC2159E65CC5B7BAC045F46AC043E);
		s_Il2CppMethodInitialized = true;
	}
	DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* V_0 = NULL;
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* V_1 = NULL;
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* V_2 = NULL;
	{
		// ot = t.NeighborAcrossFrom(p);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_0 = ___t4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p5;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_2;
		L_2 = DelaunayTriangle_NeighborAcrossFrom_m0962D27A38C136BEA2862A75654C4EF009C7F84A(L_0, L_1, NULL);
		V_0 = L_2;
		// op = ot.OppositePoint(t, p);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_3 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_4 = ___t4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_5 = ___p5;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_6;
		L_6 = DelaunayTriangle_OppositePoint_mDC118BD8FC2EFDAA35290CDC91EB08FA53A327BE(L_3, L_4, L_5, NULL);
		V_1 = L_6;
		// if (ot == null) {
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_7 = V_0;
		if (L_7)
		{
			goto IL_0023;
		}
	}
	{
		// throw new Exception("[BUG:FIXME] FLIP failed due to missing triangle");
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07AC1B1D6E5B09CAD55868C0EBA7C2B6EB0B16DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DTSweep_FlipScanEdgeEvent_m5E38B28C6E6E31B0FA12BC9DCAA7A9368336C7FA_RuntimeMethod_var)));
	}

IL_0023:
	{
		// if (tcx.IsDebugEnabled) {
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_9 = ___tcx0;
		bool L_10;
		L_10 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_9);
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		// Console.WriteLine("[FLIP:SCAN] - scan next point"); // TODO: remove
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA(_stringLiteralD62066A98DDBC2159E65CC5B7BAC045F46AC043E, NULL);
		// tcx.DTDebugContext.PrimaryTriangle = t;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_11 = ___tcx0;
		DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* L_12;
		L_12 = TriangulationContext_get_DTDebugContext_mA17E0C26062DC7E004F53FC5726639F1BFA45CFE(L_11, NULL);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_13 = ___t4;
		DTSweepDebugContext_set_PrimaryTriangle_m63C361FFB102F8A98C2D383309A80EBA88D57882(L_12, L_13, NULL);
		// tcx.DTDebugContext.SecondaryTriangle = ot;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_14 = ___tcx0;
		DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* L_15;
		L_15 = TriangulationContext_get_DTDebugContext_mA17E0C26062DC7E004F53FC5726639F1BFA45CFE(L_14, NULL);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_16 = V_0;
		DTSweepDebugContext_set_SecondaryTriangle_m419A62A2C2D2EFDAA842CBEAF7F2B897C841A699(L_15, L_16, NULL);
	}

IL_004e:
	{
		// inScanArea = TriangulationUtil.InScanArea(eq, flipTriangle.PointCCWFrom(eq), flipTriangle.PointCWFrom(eq), op);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_17 = ___eq2;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_18 = ___flipTriangle3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_19 = ___eq2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_20;
		L_20 = DelaunayTriangle_PointCCWFrom_mF3F5570F090A4EC60F28F72FB6B93E6D09CBF562(L_18, L_19, NULL);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_21 = ___flipTriangle3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_22 = ___eq2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_23;
		L_23 = DelaunayTriangle_PointCWFrom_m83A992C1B4D0F5DC005AA65E31225CAB0A610A23(L_21, L_22, NULL);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_24 = V_1;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = TriangulationUtil_InScanArea_mCFD6C361EDDDF32F4B8515E5ABB534063CB6BFA3(L_17, L_20, L_23, L_24, NULL);
		// if (inScanArea) {
		if (!L_25)
		{
			goto IL_0070;
		}
	}
	{
		// FlipEdgeEvent(tcx, eq, op, ot, op);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_26 = ___tcx0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_27 = ___eq2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_28 = V_1;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_29 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_30 = V_1;
		DTSweep_FlipEdgeEvent_mD067C84E606F463B80F85354DA2EB616466D3F86(L_26, L_27, L_28, L_29, L_30, NULL);
		return;
	}

IL_0070:
	{
		// newP = NextFlipPoint(ep, eq, ot, op);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_31 = ___ep1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_32 = ___eq2;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_33 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_34 = V_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_35;
		L_35 = DTSweep_NextFlipPoint_m504D009A39451CC8233A0C871CE821BC01B4DC75(L_31, L_32, L_33, L_34, NULL);
		V_2 = L_35;
		// FlipScanEdgeEvent(tcx, ep, eq, flipTriangle, ot, newP);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_36 = ___tcx0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_37 = ___ep1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_38 = ___eq2;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_39 = ___flipTriangle3;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_40 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_41 = V_2;
		DTSweep_FlipScanEdgeEvent_m5E38B28C6E6E31B0FA12BC9DCAA7A9368336C7FA(L_36, L_37, L_38, L_39, L_40, L_41, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillAdvancingFront(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillAdvancingFront_m30270FB3D1FE8B0D6E84264D83F100C358B379F0 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___n1, const RuntimeMethod* method) 
{
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* V_0 = NULL;
	double V_1 = 0.0;
	{
		// node = n.Next;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_0 = ___n1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_1 = L_0->___Next_0;
		V_0 = L_1;
		goto IL_0036;
	}

IL_0009:
	{
		// angle = HoleAngle(node);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_2 = V_0;
		double L_3;
		L_3 = DTSweep_HoleAngle_m4BD239E050E8067BECD476C4AE2261D093CF0436(L_2, NULL);
		V_1 = L_3;
		// if (angle > PI_div2 || angle < -PI_div2) break;
		double L_4 = V_1;
		if ((((double)L_4) > ((double)(1.5707963267948966))))
		{
			goto IL_003e;
		}
	}
	{
		double L_5 = V_1;
		if ((((double)L_5) < ((double)(-1.5707963267948966))))
		{
			goto IL_003e;
		}
	}
	{
		// Fill(tcx, node);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_6 = ___tcx0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_7 = V_0;
		DTSweep_Fill_m7F1FFCAF4BA437AD0DF18745F829499FD6E699ED(L_6, L_7, NULL);
		// node = node.Next;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_8 = V_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_9 = L_8->___Next_0;
		V_0 = L_9;
	}

IL_0036:
	{
		// while (node.HasNext) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_10 = V_0;
		bool L_11;
		L_11 = AdvancingFrontNode_get_HasNext_m5066118DEABA99D05C49A792E9DBC8CFB53908C6(L_10, NULL);
		if (L_11)
		{
			goto IL_0009;
		}
	}

IL_003e:
	{
		// node = n.Prev;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_12 = ___n1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_13 = L_12->___Prev_1;
		V_0 = L_13;
		goto IL_0074;
	}

IL_0047:
	{
		// angle = HoleAngle(node);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_14 = V_0;
		double L_15;
		L_15 = DTSweep_HoleAngle_m4BD239E050E8067BECD476C4AE2261D093CF0436(L_14, NULL);
		V_1 = L_15;
		// if (angle > PI_div2 || angle < -PI_div2) break;
		double L_16 = V_1;
		if ((((double)L_16) > ((double)(1.5707963267948966))))
		{
			goto IL_007c;
		}
	}
	{
		double L_17 = V_1;
		if ((((double)L_17) < ((double)(-1.5707963267948966))))
		{
			goto IL_007c;
		}
	}
	{
		// Fill(tcx, node);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_18 = ___tcx0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_19 = V_0;
		DTSweep_Fill_m7F1FFCAF4BA437AD0DF18745F829499FD6E699ED(L_18, L_19, NULL);
		// node = node.Prev;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_20 = V_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_21 = L_20->___Prev_1;
		V_0 = L_21;
	}

IL_0074:
	{
		// while (node.HasPrev) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_22 = V_0;
		bool L_23;
		L_23 = AdvancingFrontNode_get_HasPrev_m7466C19AAE5B054A0BC9FF4875C5EC95BB3AC042(L_22, NULL);
		if (L_23)
		{
			goto IL_0047;
		}
	}

IL_007c:
	{
		// if (n.HasNext && n.Next.HasNext) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_24 = ___n1;
		bool L_25;
		L_25 = AdvancingFrontNode_get_HasNext_m5066118DEABA99D05C49A792E9DBC8CFB53908C6(L_24, NULL);
		if (!L_25)
		{
			goto IL_00ab;
		}
	}
	{
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_26 = ___n1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_27 = L_26->___Next_0;
		bool L_28;
		L_28 = AdvancingFrontNode_get_HasNext_m5066118DEABA99D05C49A792E9DBC8CFB53908C6(L_27, NULL);
		if (!L_28)
		{
			goto IL_00ab;
		}
	}
	{
		// angle = BasinAngle(n);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_29 = ___n1;
		double L_30;
		L_30 = DTSweep_BasinAngle_mB5851B9B4EA6E60854C9281606DC1EFAEFDD8DB9(L_29, NULL);
		V_1 = L_30;
		// if (angle < PI_3div4) FillBasin(tcx, n);
		double L_31 = V_1;
		if ((!(((double)L_31) < ((double)(2.3561944901923448)))))
		{
			goto IL_00ab;
		}
	}
	{
		// if (angle < PI_3div4) FillBasin(tcx, n);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_32 = ___tcx0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_33 = ___n1;
		DTSweep_FillBasin_mFE9B32FFDA8AE974203F016BE235DEA36D20AB85(L_32, L_33, NULL);
	}

IL_00ab:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillBasin(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillBasin_mFE9B32FFDA8AE974203F016BE235DEA36D20AB85 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TriangulationUtil.Orient2d(node.Point, node.Next.Point, node.Next.Next.Point) == Orientation.CCW) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_0 = ___node1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = L_0->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_2 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_3 = L_2->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_4 = L_3->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_5 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_6 = L_5->___Next_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_7 = L_6->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_8 = L_7->___Point_3;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD(L_1, L_4, L_8, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		// tcx.Basin.leftNode = node;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_10 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_11 = L_10->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_12 = ___node1;
		L_11->___leftNode_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___leftNode_0), (void*)L_12);
		goto IL_0048;
	}

IL_0037:
	{
		// tcx.Basin.leftNode = node.Next;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_13 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_14 = L_13->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_15 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_16 = L_15->___Next_0;
		L_14->___leftNode_0 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___leftNode_0), (void*)L_16);
	}

IL_0048:
	{
		// tcx.Basin.bottomNode = tcx.Basin.leftNode;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_17 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_18 = L_17->___Basin_11;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_19 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_20 = L_19->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_21 = L_20->___leftNode_0;
		L_18->___bottomNode_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___bottomNode_1), (void*)L_21);
		goto IL_007b;
	}

IL_0060:
	{
		// while (tcx.Basin.bottomNode.HasNext && tcx.Basin.bottomNode.Point.Y >= tcx.Basin.bottomNode.Next.Point.Y) tcx.Basin.bottomNode = tcx.Basin.bottomNode.Next;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_22 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_23 = L_22->___Basin_11;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_24 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_25 = L_24->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_26 = L_25->___bottomNode_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_27 = L_26->___Next_0;
		L_23->___bottomNode_1 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->___bottomNode_1), (void*)L_27);
	}

IL_007b:
	{
		// while (tcx.Basin.bottomNode.HasNext && tcx.Basin.bottomNode.Point.Y >= tcx.Basin.bottomNode.Next.Point.Y) tcx.Basin.bottomNode = tcx.Basin.bottomNode.Next;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_28 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_29 = L_28->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_30 = L_29->___bottomNode_1;
		bool L_31;
		L_31 = AdvancingFrontNode_get_HasNext_m5066118DEABA99D05C49A792E9DBC8CFB53908C6(L_30, NULL);
		if (!L_31)
		{
			goto IL_00be;
		}
	}
	{
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_32 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_33 = L_32->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_34 = L_33->___bottomNode_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_35 = L_34->___Point_3;
		double L_36 = L_35->___Y_4;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_37 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_38 = L_37->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_39 = L_38->___bottomNode_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_40 = L_39->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_41 = L_40->___Point_3;
		double L_42 = L_41->___Y_4;
		if ((((double)L_36) >= ((double)L_42)))
		{
			goto IL_0060;
		}
	}

IL_00be:
	{
		// if (tcx.Basin.bottomNode == tcx.Basin.leftNode) return; // No valid basin
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_43 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_44 = L_43->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_45 = L_44->___bottomNode_1;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_46 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_47 = L_46->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_48 = L_47->___leftNode_0;
		if ((!(((RuntimeObject*)(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)L_45) == ((RuntimeObject*)(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)L_48))))
		{
			goto IL_00d7;
		}
	}
	{
		// if (tcx.Basin.bottomNode == tcx.Basin.leftNode) return; // No valid basin
		return;
	}

IL_00d7:
	{
		// tcx.Basin.rightNode = tcx.Basin.bottomNode;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_49 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_50 = L_49->___Basin_11;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_51 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_52 = L_51->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_53 = L_52->___bottomNode_1;
		L_50->___rightNode_2 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&L_50->___rightNode_2), (void*)L_53);
		goto IL_010a;
	}

IL_00ef:
	{
		// while (tcx.Basin.rightNode.HasNext && tcx.Basin.rightNode.Point.Y < tcx.Basin.rightNode.Next.Point.Y) tcx.Basin.rightNode = tcx.Basin.rightNode.Next;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_54 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_55 = L_54->___Basin_11;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_56 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_57 = L_56->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_58 = L_57->___rightNode_2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_59 = L_58->___Next_0;
		L_55->___rightNode_2 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&L_55->___rightNode_2), (void*)L_59);
	}

IL_010a:
	{
		// while (tcx.Basin.rightNode.HasNext && tcx.Basin.rightNode.Point.Y < tcx.Basin.rightNode.Next.Point.Y) tcx.Basin.rightNode = tcx.Basin.rightNode.Next;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_60 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_61 = L_60->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_62 = L_61->___rightNode_2;
		bool L_63;
		L_63 = AdvancingFrontNode_get_HasNext_m5066118DEABA99D05C49A792E9DBC8CFB53908C6(L_62, NULL);
		if (!L_63)
		{
			goto IL_014d;
		}
	}
	{
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_64 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_65 = L_64->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_66 = L_65->___rightNode_2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_67 = L_66->___Point_3;
		double L_68 = L_67->___Y_4;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_69 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_70 = L_69->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_71 = L_70->___rightNode_2;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_72 = L_71->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_73 = L_72->___Point_3;
		double L_74 = L_73->___Y_4;
		if ((((double)L_68) < ((double)L_74)))
		{
			goto IL_00ef;
		}
	}

IL_014d:
	{
		// if (tcx.Basin.rightNode == tcx.Basin.bottomNode) return; // No valid basins
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_75 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_76 = L_75->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_77 = L_76->___rightNode_2;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_78 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_79 = L_78->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_80 = L_79->___bottomNode_1;
		if ((!(((RuntimeObject*)(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)L_77) == ((RuntimeObject*)(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)L_80))))
		{
			goto IL_0166;
		}
	}
	{
		// if (tcx.Basin.rightNode == tcx.Basin.bottomNode) return; // No valid basins
		return;
	}

IL_0166:
	{
		// tcx.Basin.width = tcx.Basin.rightNode.Point.X - tcx.Basin.leftNode.Point.X;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_81 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_82 = L_81->___Basin_11;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_83 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_84 = L_83->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_85 = L_84->___rightNode_2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_86 = L_85->___Point_3;
		double L_87 = L_86->___X_3;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_88 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_89 = L_88->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_90 = L_89->___leftNode_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_91 = L_90->___Point_3;
		double L_92 = L_91->___X_3;
		L_82->___width_3 = ((double)il2cpp_codegen_subtract(L_87, L_92));
		// tcx.Basin.leftHighest = tcx.Basin.leftNode.Point.Y > tcx.Basin.rightNode.Point.Y;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_93 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_94 = L_93->___Basin_11;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_95 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_96 = L_95->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_97 = L_96->___leftNode_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_98 = L_97->___Point_3;
		double L_99 = L_98->___Y_4;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_100 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_101 = L_100->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_102 = L_101->___rightNode_2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_103 = L_102->___Point_3;
		double L_104 = L_103->___Y_4;
		L_94->___leftHighest_4 = (bool)((((double)L_99) > ((double)L_104))? 1 : 0);
		// FillBasinReq(tcx, tcx.Basin.bottomNode);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_105 = ___tcx0;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_106 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_107 = L_106->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_108 = L_107->___bottomNode_1;
		DTSweep_FillBasinReq_m5E03AC6874D924BBDAB564A420489347330DD1E4(L_105, L_108, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillBasinReq(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillBasinReq_m5E03AC6874D924BBDAB564A420489347330DD1E4 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsShallow(tcx, node)) return; // if shallow stop filling
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_0 = ___tcx0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_1 = ___node1;
		bool L_2;
		L_2 = DTSweep_IsShallow_m787D2A974961D4972E03D156BCA655BBF6DC21D8(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000a;
		}
	}
	{
		// if (IsShallow(tcx, node)) return; // if shallow stop filling
		return;
	}

IL_000a:
	{
		// Fill(tcx, node);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_3 = ___tcx0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_4 = ___node1;
		DTSweep_Fill_m7F1FFCAF4BA437AD0DF18745F829499FD6E699ED(L_3, L_4, NULL);
		// if (node.Prev == tcx.Basin.leftNode && node.Next == tcx.Basin.rightNode) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_5 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_6 = L_5->___Prev_1;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_7 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_8 = L_7->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_9 = L_8->___leftNode_0;
		if ((!(((RuntimeObject*)(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)L_6) == ((RuntimeObject*)(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)L_9))))
		{
			goto IL_0038;
		}
	}
	{
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_10 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_11 = L_10->___Next_0;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_12 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_13 = L_12->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_14 = L_13->___rightNode_2;
		if ((!(((RuntimeObject*)(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)L_11) == ((RuntimeObject*)(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)L_14))))
		{
			goto IL_0038;
		}
	}
	{
		// return;
		return;
	}

IL_0038:
	{
		// } else if (node.Prev == tcx.Basin.leftNode) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_15 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_16 = L_15->___Prev_1;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_17 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_18 = L_17->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_19 = L_18->___leftNode_0;
		if ((!(((RuntimeObject*)(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)L_16) == ((RuntimeObject*)(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)L_19))))
		{
			goto IL_007e;
		}
	}
	{
		// Orientation o = TriangulationUtil.Orient2d(node.Point, node.Next.Point, node.Next.Next.Point);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_20 = ___node1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_21 = L_20->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_22 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_23 = L_22->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_24 = L_23->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_25 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_26 = L_25->___Next_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_27 = L_26->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_28 = L_27->___Point_3;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD(L_21, L_24, L_28, NULL);
		// if (o == Orientation.CW) return;
		if (L_29)
		{
			goto IL_0074;
		}
	}
	{
		// if (o == Orientation.CW) return;
		return;
	}

IL_0074:
	{
		// node = node.Next;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_30 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_31 = L_30->___Next_0;
		___node1 = L_31;
		goto IL_00f9;
	}

IL_007e:
	{
		// } else if (node.Next == tcx.Basin.rightNode) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_32 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_33 = L_32->___Next_0;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_34 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_35 = L_34->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_36 = L_35->___rightNode_2;
		if ((!(((RuntimeObject*)(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)L_33) == ((RuntimeObject*)(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)L_36))))
		{
			goto IL_00c5;
		}
	}
	{
		// Orientation o = TriangulationUtil.Orient2d(node.Point, node.Prev.Point, node.Prev.Prev.Point);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_37 = ___node1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_38 = L_37->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_39 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_40 = L_39->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_41 = L_40->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_42 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_43 = L_42->___Prev_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_44 = L_43->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_45 = L_44->___Point_3;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		int32_t L_46;
		L_46 = TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD(L_38, L_41, L_45, NULL);
		// if (o == Orientation.CCW) return;
		if ((!(((uint32_t)L_46) == ((uint32_t)1))))
		{
			goto IL_00bb;
		}
	}
	{
		// if (o == Orientation.CCW) return;
		return;
	}

IL_00bb:
	{
		// node = node.Prev;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_47 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_48 = L_47->___Prev_1;
		___node1 = L_48;
		goto IL_00f9;
	}

IL_00c5:
	{
		// if (node.Prev.Point.Y < node.Next.Point.Y) {
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_49 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_50 = L_49->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_51 = L_50->___Point_3;
		double L_52 = L_51->___Y_4;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_53 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_54 = L_53->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_55 = L_54->___Point_3;
		double L_56 = L_55->___Y_4;
		if ((!(((double)L_52) < ((double)L_56))))
		{
			goto IL_00f1;
		}
	}
	{
		// node = node.Prev;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_57 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_58 = L_57->___Prev_1;
		___node1 = L_58;
		goto IL_00f9;
	}

IL_00f1:
	{
		// node = node.Next;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_59 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_60 = L_59->___Next_0;
		___node1 = L_60;
	}

IL_00f9:
	{
		// FillBasinReq(tcx, node);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_61 = ___tcx0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_62 = ___node1;
		DTSweep_FillBasinReq_m5E03AC6874D924BBDAB564A420489347330DD1E4(L_61, L_62, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweep::IsShallow(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_IsShallow_m787D2A974961D4972E03D156BCA655BBF6DC21D8 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node1, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		// if (tcx.Basin.leftHighest) {
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_0 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_1 = L_0->___Basin_11;
		bool L_2 = L_1->___leftHighest_4;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// height = tcx.Basin.leftNode.Point.Y - node.Point.Y;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_3 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_4 = L_3->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_5 = L_4->___leftNode_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_6 = L_5->___Point_3;
		double L_7 = L_6->___Y_4;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_8 = ___node1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_9 = L_8->___Point_3;
		double L_10 = L_9->___Y_4;
		V_0 = ((double)il2cpp_codegen_subtract(L_7, L_10));
		goto IL_0053;
	}

IL_0031:
	{
		// height = tcx.Basin.rightNode.Point.Y - node.Point.Y;
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_11 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_12 = L_11->___Basin_11;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_13 = L_12->___rightNode_2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_14 = L_13->___Point_3;
		double L_15 = L_14->___Y_4;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_16 = ___node1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_17 = L_16->___Point_3;
		double L_18 = L_17->___Y_4;
		V_0 = ((double)il2cpp_codegen_subtract(L_15, L_18));
	}

IL_0053:
	{
		// if (tcx.Basin.width > height) {
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_19 = ___tcx0;
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_20 = L_19->___Basin_11;
		double L_21 = L_20->___width_3;
		double L_22 = V_0;
		if ((!(((double)L_21) > ((double)L_22))))
		{
			goto IL_0063;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0063:
	{
		// return false;
		return (bool)0;
	}
}
// System.Double UnityEngine.ProBuilder.Poly2Tri.DTSweep::HoleAngle(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DTSweep_HoleAngle_m4BD239E050E8067BECD476C4AE2261D093CF0436 (AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	{
		// double px = node.Point.X;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_0 = ___node0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = L_0->___Point_3;
		double L_2 = L_1->___X_3;
		V_0 = L_2;
		// double py = node.Point.Y;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_3 = ___node0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_4 = L_3->___Point_3;
		double L_5 = L_4->___Y_4;
		V_1 = L_5;
		// double ax = node.Next.Point.X - px;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_6 = ___node0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_7 = L_6->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_8 = L_7->___Point_3;
		double L_9 = L_8->___X_3;
		double L_10 = V_0;
		V_2 = ((double)il2cpp_codegen_subtract(L_9, L_10));
		// double ay = node.Next.Point.Y - py;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_11 = ___node0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_12 = L_11->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_13 = L_12->___Point_3;
		double L_14 = L_13->___Y_4;
		double L_15 = V_1;
		V_3 = ((double)il2cpp_codegen_subtract(L_14, L_15));
		// double bx = node.Prev.Point.X - px;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_16 = ___node0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_17 = L_16->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_18 = L_17->___Point_3;
		double L_19 = L_18->___X_3;
		double L_20 = V_0;
		V_4 = ((double)il2cpp_codegen_subtract(L_19, L_20));
		// double by = node.Prev.Point.Y - py;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_21 = ___node0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_22 = L_21->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_23 = L_22->___Point_3;
		double L_24 = L_23->___Y_4;
		double L_25 = V_1;
		V_5 = ((double)il2cpp_codegen_subtract(L_24, L_25));
		// return Math.Atan2(ax * by - ay * bx, ax * bx + ay * by);
		double L_26 = V_2;
		double L_27 = V_5;
		double L_28 = V_3;
		double L_29 = V_4;
		double L_30 = V_2;
		double L_31 = V_4;
		double L_32 = V_3;
		double L_33 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_34;
		L_34 = atan2(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_26, L_27)), ((double)il2cpp_codegen_multiply(L_28, L_29)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_30, L_31)), ((double)il2cpp_codegen_multiply(L_32, L_33)))));
		return L_34;
	}
}
// System.Double UnityEngine.ProBuilder.Poly2Tri.DTSweep::BasinAngle(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DTSweep_BasinAngle_mB5851B9B4EA6E60854C9281606DC1EFAEFDD8DB9 (AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// double ax = node.Point.X - node.Next.Next.Point.X;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_0 = ___node0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = L_0->___Point_3;
		double L_2 = L_1->___X_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_3 = ___node0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_4 = L_3->___Next_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_5 = L_4->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_6 = L_5->___Point_3;
		double L_7 = L_6->___X_3;
		V_0 = ((double)il2cpp_codegen_subtract(L_2, L_7));
		// double ay = node.Point.Y - node.Next.Next.Point.Y;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_8 = ___node0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_9 = L_8->___Point_3;
		double L_10 = L_9->___Y_4;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_11 = ___node0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_12 = L_11->___Next_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_13 = L_12->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_14 = L_13->___Point_3;
		double L_15 = L_14->___Y_4;
		// return Math.Atan2(ay, ax);
		double L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_17;
		L_17 = atan2(((double)il2cpp_codegen_subtract(L_10, L_15)), L_16);
		return L_17;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::Fill(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Fill_m7F1FFCAF4BA437AD0DF18745F829499FD6E699ED (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F339626C6CB6D2881F4FE1FEA34F7D36F35733E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* V_0 = NULL;
	{
		// DelaunayTriangle triangle = new DelaunayTriangle(node.Prev.Point, node.Point, node.Next.Point);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_0 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_1 = L_0->___Prev_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2 = L_1->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_3 = ___node1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_4 = L_3->___Point_3;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_5 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_6 = L_5->___Next_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_7 = L_6->___Point_3;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_8 = (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582*)il2cpp_codegen_object_new(DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582_il2cpp_TypeInfo_var);
		DelaunayTriangle__ctor_mD61268CE26513CDB23A354E3FF2C43B2BA806285(L_8, L_2, L_4, L_7, NULL);
		V_0 = L_8;
		// triangle.MarkNeighbor(node.Prev.Triangle);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_9 = V_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_10 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_11 = L_10->___Prev_1;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_12 = L_11->___Triangle_4;
		DelaunayTriangle_MarkNeighbor_m47AFBF2FA451F82308C1B7C6979C3693120DDD87(L_9, L_12, NULL);
		// triangle.MarkNeighbor(node.Triangle);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_13 = V_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_14 = ___node1;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_15 = L_14->___Triangle_4;
		DelaunayTriangle_MarkNeighbor_m47AFBF2FA451F82308C1B7C6979C3693120DDD87(L_13, L_15, NULL);
		// tcx.Triangles.Add(triangle);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_16 = ___tcx0;
		List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* L_17 = ((TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843*)L_16)->___Triangles_1;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_18 = V_0;
		List_1_Add_m2F339626C6CB6D2881F4FE1FEA34F7D36F35733E_inline(L_17, L_18, List_1_Add_m2F339626C6CB6D2881F4FE1FEA34F7D36F35733E_RuntimeMethod_var);
		// node.Prev.Next = node.Next;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_19 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_20 = L_19->___Prev_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_21 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_22 = L_21->___Next_0;
		L_20->___Next_0 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___Next_0), (void*)L_22);
		// node.Next.Prev = node.Prev;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_23 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_24 = L_23->___Next_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_25 = ___node1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_26 = L_25->___Prev_1;
		L_24->___Prev_1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___Prev_1), (void*)L_26);
		// tcx.RemoveNode(node);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_27 = ___tcx0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_28 = ___node1;
		DTSweepContext_RemoveNode_mCB81440ACE1EC616A49C964EC145405847E747F9(L_27, L_28, NULL);
		// if (!Legalize(tcx, triangle)) tcx.MapTriangleToNodes(triangle);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_29 = ___tcx0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_30 = V_0;
		bool L_31;
		L_31 = DTSweep_Legalize_m32721A3E6484C056A7EA31365F8B21639BF2CB52(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_0084;
		}
	}
	{
		// if (!Legalize(tcx, triangle)) tcx.MapTriangleToNodes(triangle);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_32 = ___tcx0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_33 = V_0;
		DTSweepContext_MapTriangleToNodes_m6B48C2720D77CF48E6AE7328614F55D2A6F4565B(L_32, L_33, NULL);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweep::Legalize(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_Legalize_m32721A3E6484C056A7EA31365F8B21639BF2CB52 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___t1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* V_1 = NULL;
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* V_2 = NULL;
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// for (int i = 0; i < 3; i++) {
		V_0 = 0;
		goto IL_00ff;
	}

IL_0007:
	{
		// if (t.EdgeIsDelaunay[i]) continue;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_0 = ___t1;
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_1 = (&L_0->___EdgeIsDelaunay_3);
		int32_t L_2 = V_0;
		bool L_3;
		L_3 = FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_00fb;
		}
	}
	{
		// DelaunayTriangle ot = t.Neighbors[i];
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_4 = ___t1;
		FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B* L_5 = (&L_4->___Neighbors_1);
		int32_t L_6 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_7;
		L_7 = FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4(L_5, L_6, FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4_RuntimeMethod_var);
		V_1 = L_7;
		// if (ot == null) continue;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_8 = V_1;
		if (!L_8)
		{
			goto IL_00fb;
		}
	}
	{
		// TriangulationPoint p = t.Points[i];
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_9 = ___t1;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_10 = (&L_9->___Points_0);
		int32_t L_11 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_12;
		L_12 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_10, L_11, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		V_2 = L_12;
		// TriangulationPoint op = ot.OppositePoint(t, p);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_13 = V_1;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_14 = ___t1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_15 = V_2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_16;
		L_16 = DelaunayTriangle_OppositePoint_mDC118BD8FC2EFDAA35290CDC91EB08FA53A327BE(L_13, L_14, L_15, NULL);
		V_3 = L_16;
		// int oi = ot.IndexOf(op);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_17 = V_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_18 = V_3;
		int32_t L_19;
		L_19 = DelaunayTriangle_IndexOf_mF7BE86FF7FEB50E93FABD238FE772A3747F4406C(L_17, L_18, NULL);
		V_4 = L_19;
		// if (ot.EdgeIsConstrained[oi] || ot.EdgeIsDelaunay[oi]) {
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_20 = V_1;
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_21 = (&L_20->___EdgeIsConstrained_2);
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4(L_21, L_22, NULL);
		if (L_23)
		{
			goto IL_0068;
		}
	}
	{
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_24 = V_1;
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_25 = (&L_24->___EdgeIsDelaunay_3);
		int32_t L_26 = V_4;
		bool L_27;
		L_27 = FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4(L_25, L_26, NULL);
		if (!L_27)
		{
			goto IL_0083;
		}
	}

IL_0068:
	{
		// t.EdgeIsConstrained[i] = ot.EdgeIsConstrained[oi]; // XXX: have no good way of setting this property when creating new triangles so lets set it here
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_28 = ___t1;
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_29 = (&L_28->___EdgeIsConstrained_2);
		int32_t L_30 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_31 = V_1;
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_32 = (&L_31->___EdgeIsConstrained_2);
		int32_t L_33 = V_4;
		bool L_34;
		L_34 = FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4(L_32, L_33, NULL);
		FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3(L_29, L_30, L_34, NULL);
		// continue;
		goto IL_00fb;
	}

IL_0083:
	{
		// if (!TriangulationUtil.SmartIncircle(p,t.PointCCWFrom(p),t.PointCWFrom(p),op)) continue;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_35 = V_2;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_36 = ___t1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_37 = V_2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_38;
		L_38 = DelaunayTriangle_PointCCWFrom_mF3F5570F090A4EC60F28F72FB6B93E6D09CBF562(L_36, L_37, NULL);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_39 = ___t1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_40 = V_2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_41;
		L_41 = DelaunayTriangle_PointCWFrom_m83A992C1B4D0F5DC005AA65E31225CAB0A610A23(L_39, L_40, NULL);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = TriangulationUtil_SmartIncircle_m86295D46F926C6A802DE6363D586FDCDE2947C28(L_35, L_38, L_41, L_42, NULL);
		if (!L_43)
		{
			goto IL_00fb;
		}
	}
	{
		// t.EdgeIsDelaunay[i] = true;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_44 = ___t1;
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_45 = (&L_44->___EdgeIsDelaunay_3);
		int32_t L_46 = V_0;
		FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3(L_45, L_46, (bool)1, NULL);
		// ot.EdgeIsDelaunay[oi] = true;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_47 = V_1;
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_48 = (&L_47->___EdgeIsDelaunay_3);
		int32_t L_49 = V_4;
		FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3(L_48, L_49, (bool)1, NULL);
		// RotateTrianglePair(t, p, ot, op);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_50 = ___t1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_51 = V_2;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_52 = V_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_53 = V_3;
		DTSweep_RotateTrianglePair_m6D216A93A53C558797A26128451B34FECD6E1385(L_50, L_51, L_52, L_53, NULL);
		// if (!Legalize(tcx, t)) tcx.MapTriangleToNodes(t);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_54 = ___tcx0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_55 = ___t1;
		bool L_56;
		L_56 = DTSweep_Legalize_m32721A3E6484C056A7EA31365F8B21639BF2CB52(L_54, L_55, NULL);
		if (L_56)
		{
			goto IL_00ce;
		}
	}
	{
		// if (!Legalize(tcx, t)) tcx.MapTriangleToNodes(t);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_57 = ___tcx0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_58 = ___t1;
		DTSweepContext_MapTriangleToNodes_m6B48C2720D77CF48E6AE7328614F55D2A6F4565B(L_57, L_58, NULL);
	}

IL_00ce:
	{
		// if (!Legalize(tcx, ot)) tcx.MapTriangleToNodes(ot);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_59 = ___tcx0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_60 = V_1;
		bool L_61;
		L_61 = DTSweep_Legalize_m32721A3E6484C056A7EA31365F8B21639BF2CB52(L_59, L_60, NULL);
		if (L_61)
		{
			goto IL_00de;
		}
	}
	{
		// if (!Legalize(tcx, ot)) tcx.MapTriangleToNodes(ot);
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_62 = ___tcx0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_63 = V_1;
		DTSweepContext_MapTriangleToNodes_m6B48C2720D77CF48E6AE7328614F55D2A6F4565B(L_62, L_63, NULL);
	}

IL_00de:
	{
		// t.EdgeIsDelaunay[i] = false;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_64 = ___t1;
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_65 = (&L_64->___EdgeIsDelaunay_3);
		int32_t L_66 = V_0;
		FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3(L_65, L_66, (bool)0, NULL);
		// ot.EdgeIsDelaunay[oi] = false;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_67 = V_1;
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_68 = (&L_67->___EdgeIsDelaunay_3);
		int32_t L_69 = V_4;
		FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3(L_68, L_69, (bool)0, NULL);
		// return true;
		return (bool)1;
	}

IL_00fb:
	{
		// for (int i = 0; i < 3; i++) {
		int32_t L_70 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_00ff:
	{
		// for (int i = 0; i < 3; i++) {
		int32_t L_71 = V_0;
		if ((((int32_t)L_71) < ((int32_t)3)))
		{
			goto IL_0007;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::RotateTrianglePair(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_RotateTrianglePair_m6D216A93A53C558797A26128451B34FECD6E1385 (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___t0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p1, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___ot2, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___op3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_Clear_m94A77D3BB3854C622D804A69775D8FAC43C2EC7A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* V_0 = NULL;
	DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* V_1 = NULL;
	DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* V_2 = NULL;
	DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	{
		// n1 = t.NeighborCCWFrom(p);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_0 = ___t0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p1;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_2;
		L_2 = DelaunayTriangle_NeighborCCWFrom_m0774E83223AF7F053D275E486AFD39D111D86CBE(L_0, L_1, NULL);
		V_0 = L_2;
		// n2 = t.NeighborCWFrom(p);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_3 = ___t0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_4 = ___p1;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_5;
		L_5 = DelaunayTriangle_NeighborCWFrom_mC74C858ED8A719AE16889DE31B5896988386FFE8(L_3, L_4, NULL);
		V_1 = L_5;
		// n3 = ot.NeighborCCWFrom(op);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_6 = ___ot2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_7 = ___op3;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_8;
		L_8 = DelaunayTriangle_NeighborCCWFrom_m0774E83223AF7F053D275E486AFD39D111D86CBE(L_6, L_7, NULL);
		V_2 = L_8;
		// n4 = ot.NeighborCWFrom(op);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_9 = ___ot2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_10 = ___op3;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_11;
		L_11 = DelaunayTriangle_NeighborCWFrom_mC74C858ED8A719AE16889DE31B5896988386FFE8(L_9, L_10, NULL);
		V_3 = L_11;
		// ce1 = t.GetConstrainedEdgeCCW(p);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_12 = ___t0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_13 = ___p1;
		bool L_14;
		L_14 = DelaunayTriangle_GetConstrainedEdgeCCW_m0A1E2BA7AA74E765F00E216298D5F54FA3BD0C4B(L_12, L_13, NULL);
		V_4 = L_14;
		// ce2 = t.GetConstrainedEdgeCW(p);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_15 = ___t0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_16 = ___p1;
		bool L_17;
		L_17 = DelaunayTriangle_GetConstrainedEdgeCW_mD39CAB2A63B58D2F7C1EA222A273B16EADEDF3F5(L_15, L_16, NULL);
		V_5 = L_17;
		// ce3 = ot.GetConstrainedEdgeCCW(op);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_18 = ___ot2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_19 = ___op3;
		bool L_20;
		L_20 = DelaunayTriangle_GetConstrainedEdgeCCW_m0A1E2BA7AA74E765F00E216298D5F54FA3BD0C4B(L_18, L_19, NULL);
		V_6 = L_20;
		// ce4 = ot.GetConstrainedEdgeCW(op);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_21 = ___ot2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_22 = ___op3;
		bool L_23;
		L_23 = DelaunayTriangle_GetConstrainedEdgeCW_mD39CAB2A63B58D2F7C1EA222A273B16EADEDF3F5(L_21, L_22, NULL);
		V_7 = L_23;
		// de1 = t.GetDelaunayEdgeCCW(p);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_24 = ___t0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_25 = ___p1;
		bool L_26;
		L_26 = DelaunayTriangle_GetDelaunayEdgeCCW_mB846490A27F395EE1DB6B6EFD9D4A404CC383C19(L_24, L_25, NULL);
		V_8 = L_26;
		// de2 = t.GetDelaunayEdgeCW(p);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_27 = ___t0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_28 = ___p1;
		bool L_29;
		L_29 = DelaunayTriangle_GetDelaunayEdgeCW_m094DA13142D433044E4A55DF01977A347BEE1CCF(L_27, L_28, NULL);
		V_9 = L_29;
		// de3 = ot.GetDelaunayEdgeCCW(op);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_30 = ___ot2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_31 = ___op3;
		bool L_32;
		L_32 = DelaunayTriangle_GetDelaunayEdgeCCW_mB846490A27F395EE1DB6B6EFD9D4A404CC383C19(L_30, L_31, NULL);
		V_10 = L_32;
		// de4 = ot.GetDelaunayEdgeCW(op);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_33 = ___ot2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_34 = ___op3;
		bool L_35;
		L_35 = DelaunayTriangle_GetDelaunayEdgeCW_m094DA13142D433044E4A55DF01977A347BEE1CCF(L_33, L_34, NULL);
		V_11 = L_35;
		// t.Legalize(p, op);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_36 = ___t0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_37 = ___p1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_38 = ___op3;
		DelaunayTriangle_Legalize_mB6559CCEE3C8F3737FEA4F08B760ACEBC2B5B8D7(L_36, L_37, L_38, NULL);
		// ot.Legalize(op, p);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_39 = ___ot2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_40 = ___op3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_41 = ___p1;
		DelaunayTriangle_Legalize_mB6559CCEE3C8F3737FEA4F08B760ACEBC2B5B8D7(L_39, L_40, L_41, NULL);
		// ot.SetDelaunayEdgeCCW(p, de1);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_42 = ___ot2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_43 = ___p1;
		bool L_44 = V_8;
		DelaunayTriangle_SetDelaunayEdgeCCW_m9EFA8D292347379E594DAEA4146E4783886D2266(L_42, L_43, L_44, NULL);
		// t.SetDelaunayEdgeCW(p, de2);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_45 = ___t0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_46 = ___p1;
		bool L_47 = V_9;
		DelaunayTriangle_SetDelaunayEdgeCW_m79BD18E41A66EA857742458C3739165EED6520A4(L_45, L_46, L_47, NULL);
		// t.SetDelaunayEdgeCCW(op, de3);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_48 = ___t0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_49 = ___op3;
		bool L_50 = V_10;
		DelaunayTriangle_SetDelaunayEdgeCCW_m9EFA8D292347379E594DAEA4146E4783886D2266(L_48, L_49, L_50, NULL);
		// ot.SetDelaunayEdgeCW(op, de4);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_51 = ___ot2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_52 = ___op3;
		bool L_53 = V_11;
		DelaunayTriangle_SetDelaunayEdgeCW_m79BD18E41A66EA857742458C3739165EED6520A4(L_51, L_52, L_53, NULL);
		// ot.SetConstrainedEdgeCCW(p, ce1);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_54 = ___ot2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_55 = ___p1;
		bool L_56 = V_4;
		DelaunayTriangle_SetConstrainedEdgeCCW_m37951D91C92A7E729EE193E13342557F93246E8B(L_54, L_55, L_56, NULL);
		// t.SetConstrainedEdgeCW(p, ce2);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_57 = ___t0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_58 = ___p1;
		bool L_59 = V_5;
		DelaunayTriangle_SetConstrainedEdgeCW_m542FCC02B9A744E60CD4D9CFC2350B6A03EF2CAF(L_57, L_58, L_59, NULL);
		// t.SetConstrainedEdgeCCW(op, ce3);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_60 = ___t0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_61 = ___op3;
		bool L_62 = V_6;
		DelaunayTriangle_SetConstrainedEdgeCCW_m37951D91C92A7E729EE193E13342557F93246E8B(L_60, L_61, L_62, NULL);
		// ot.SetConstrainedEdgeCW(op, ce4);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_63 = ___ot2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_64 = ___op3;
		bool L_65 = V_7;
		DelaunayTriangle_SetConstrainedEdgeCW_m542FCC02B9A744E60CD4D9CFC2350B6A03EF2CAF(L_63, L_64, L_65, NULL);
		// t.Neighbors.Clear();
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_66 = ___t0;
		FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B* L_67 = (&L_66->___Neighbors_1);
		FixedArray3_1_Clear_m94A77D3BB3854C622D804A69775D8FAC43C2EC7A(L_67, FixedArray3_1_Clear_m94A77D3BB3854C622D804A69775D8FAC43C2EC7A_RuntimeMethod_var);
		// ot.Neighbors.Clear();
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_68 = ___ot2;
		FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B* L_69 = (&L_68->___Neighbors_1);
		FixedArray3_1_Clear_m94A77D3BB3854C622D804A69775D8FAC43C2EC7A(L_69, FixedArray3_1_Clear_m94A77D3BB3854C622D804A69775D8FAC43C2EC7A_RuntimeMethod_var);
		// if (n1 != null) ot.MarkNeighbor(n1);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_70 = V_0;
		if (!L_70)
		{
			goto IL_00e0;
		}
	}
	{
		// if (n1 != null) ot.MarkNeighbor(n1);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_71 = ___ot2;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_72 = V_0;
		DelaunayTriangle_MarkNeighbor_m47AFBF2FA451F82308C1B7C6979C3693120DDD87(L_71, L_72, NULL);
	}

IL_00e0:
	{
		// if (n2 != null) t.MarkNeighbor(n2);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_73 = V_1;
		if (!L_73)
		{
			goto IL_00ea;
		}
	}
	{
		// if (n2 != null) t.MarkNeighbor(n2);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_74 = ___t0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_75 = V_1;
		DelaunayTriangle_MarkNeighbor_m47AFBF2FA451F82308C1B7C6979C3693120DDD87(L_74, L_75, NULL);
	}

IL_00ea:
	{
		// if (n3 != null) t.MarkNeighbor(n3);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_76 = V_2;
		if (!L_76)
		{
			goto IL_00f4;
		}
	}
	{
		// if (n3 != null) t.MarkNeighbor(n3);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_77 = ___t0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_78 = V_2;
		DelaunayTriangle_MarkNeighbor_m47AFBF2FA451F82308C1B7C6979C3693120DDD87(L_77, L_78, NULL);
	}

IL_00f4:
	{
		// if (n4 != null) ot.MarkNeighbor(n4);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_79 = V_3;
		if (!L_79)
		{
			goto IL_00fe;
		}
	}
	{
		// if (n4 != null) ot.MarkNeighbor(n4);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_80 = ___ot2;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_81 = V_3;
		DelaunayTriangle_MarkNeighbor_m47AFBF2FA451F82308C1B7C6979C3693120DDD87(L_80, L_81, NULL);
	}

IL_00fe:
	{
		// t.MarkNeighbor(ot);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_82 = ___t0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_83 = ___ot2;
		DelaunayTriangle_MarkNeighbor_m47AFBF2FA451F82308C1B7C6979C3693120DDD87(L_82, L_83, NULL);
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m969A992BAA0E836F0FB083259ABA64F8361C0F46 (U3CU3Ec__DisplayClass21_0_tC3ED14289D5AC5991F62DC526A965F269717A4DA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweep/<>c__DisplayClass21_0::<SplitEdge>b__0(UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass21_0_U3CSplitEdgeU3Eb__0_m39E95088EC3975461B78F89A602049A166DCAA45 (U3CU3Ec__DisplayClass21_0_tC3ED14289D5AC5991F62DC526A965F269717A4DA* __this, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___e0, const RuntimeMethod* method) 
{
	{
		// DTSweepConstraint edge = eq.Edges.First( e => e.Q==ep || e.P==ep );
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_0 = ___e0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_0)->___Q_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2 = __this->___ep_0;
		if ((((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_1) == ((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_2)))
		{
			goto IL_001d;
		}
	}
	{
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_3 = ___e0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_4 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)L_3)->___P_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_5 = __this->___ep_0;
		return (bool)((((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_4) == ((RuntimeObject*)(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)1;
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepBasin__ctor_m0D81526EA51F48B367AB120D3FD28E21077A8451 (DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* __this, const RuntimeMethod* method) 
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint::.ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepConstraint__ctor_m8288F9EFFFB04AEDE40C94B25CD1C911EC19B401 (DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p10, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p21, const RuntimeMethod* method) 
{
	{
		// public DTSweepConstraint( TriangulationPoint p1, TriangulationPoint p2 ) {
		TriangulationConstraint__ctor_m20B549D737327C3F3F41956937D851E465FDDB33(__this, NULL);
		// P = p1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = ___p10;
		((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)__this)->___P_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)__this)->___P_0), (void*)L_0);
		// Q = p2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___p21;
		((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)__this)->___Q_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)__this)->___Q_1), (void*)L_1);
		// if (p1.Y > p2.Y) {
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2 = ___p10;
		double L_3 = L_2->___Y_4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_4 = ___p21;
		double L_5 = L_4->___Y_4;
		if ((!(((double)L_3) > ((double)L_5))))
		{
			goto IL_0032;
		}
	}
	{
		// Q = p1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_6 = ___p10;
		((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)__this)->___Q_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)__this)->___Q_1), (void*)L_6);
		// P = p2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_7 = ___p21;
		((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)__this)->___P_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)__this)->___P_0), (void*)L_7);
		goto IL_006c;
	}

IL_0032:
	{
		// } else if (p1.Y == p2.Y) {
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_8 = ___p10;
		double L_9 = L_8->___Y_4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_10 = ___p21;
		double L_11 = L_10->___Y_4;
		if ((!(((double)L_9) == ((double)L_11))))
		{
			goto IL_006c;
		}
	}
	{
		// if (p1.X > p2.X) {
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_12 = ___p10;
		double L_13 = L_12->___X_3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_14 = ___p21;
		double L_15 = L_14->___X_3;
		if ((!(((double)L_13) > ((double)L_15))))
		{
			goto IL_005e;
		}
	}
	{
		// Q = p1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_16 = ___p10;
		((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)__this)->___Q_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)__this)->___Q_1), (void*)L_16);
		// P = p2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_17 = ___p21;
		((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)__this)->___P_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)__this)->___P_0), (void*)L_17);
		goto IL_006c;
	}

IL_005e:
	{
		// } else if (p1.X == p2.X) {
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_18 = ___p10;
		double L_19 = L_18->___X_3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_20 = ___p21;
		double L_21 = L_20->___X_3;
	}

IL_006c:
	{
		// Q.AddEdge(this);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_22 = ((TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*)__this)->___Q_1;
		TriangulationPoint_AddEdge_m7A02756B3EC9F87E6DDD555D319C59900641507A(L_22, __this, NULL);
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
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::get_Head()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* DTSweepContext_get_Head_m219A91F763AB1514F9ACB07F87D67076D2EC6493 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, const RuntimeMethod* method) 
{
	{
		// public TriangulationPoint Head { get; set; }
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = __this->___U3CHeadU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::set_Head(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_set_Head_m66CD236E964FEBDDC2234B28E93F3E3B375E256F (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___value0, const RuntimeMethod* method) 
{
	{
		// public TriangulationPoint Head { get; set; }
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = ___value0;
		__this->___U3CHeadU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHeadU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::get_Tail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* DTSweepContext_get_Tail_m9B1B4495CE20D44FB0F16FCB631CA68FB03544A0 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, const RuntimeMethod* method) 
{
	{
		// public TriangulationPoint Tail { get; set; }
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = __this->___U3CTailU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::set_Tail(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_set_Tail_mBE3CCA1D3DEC584E874A9A83E47A6EA72B0DA288 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___value0, const RuntimeMethod* method) 
{
	{
		// public TriangulationPoint Tail { get; set; }
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = ___value0;
		__this->___U3CTailU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTailU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext__ctor_mB676BEA85EBE599FCED0BF9BFF53D9F53235A728 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTSweepEdgeEvent_tADA248BEB364180EA7262E5AFDDB730021B50F8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTSweepPointComparator_tCB29B65B97483C6D6990D13DB2DD47BA9C439F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly float ALPHA = 0.3f;
		__this->___ALPHA_7 = (0.300000012f);
		// public DTSweepBasin     Basin     = new DTSweepBasin();
		DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3* L_0 = (DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3*)il2cpp_codegen_object_new(DTSweepBasin_t48DC39FC25A439A503A735B448391BD744251CB3_il2cpp_TypeInfo_var);
		DTSweepBasin__ctor_m0D81526EA51F48B367AB120D3FD28E21077A8451(L_0, NULL);
		__this->___Basin_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Basin_11), (void*)L_0);
		// public DTSweepEdgeEvent EdgeEvent = new DTSweepEdgeEvent();
		DTSweepEdgeEvent_tADA248BEB364180EA7262E5AFDDB730021B50F8D* L_1 = (DTSweepEdgeEvent_tADA248BEB364180EA7262E5AFDDB730021B50F8D*)il2cpp_codegen_object_new(DTSweepEdgeEvent_tADA248BEB364180EA7262E5AFDDB730021B50F8D_il2cpp_TypeInfo_var);
		DTSweepEdgeEvent__ctor_mC91F183A48FD697ED6F9B89D75B033E6CE534EAC(L_1, NULL);
		__this->___EdgeEvent_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EdgeEvent_12), (void*)L_1);
		// private DTSweepPointComparator _comparator = new DTSweepPointComparator();
		DTSweepPointComparator_tCB29B65B97483C6D6990D13DB2DD47BA9C439F5A* L_2 = (DTSweepPointComparator_tCB29B65B97483C6D6990D13DB2DD47BA9C439F5A*)il2cpp_codegen_object_new(DTSweepPointComparator_tCB29B65B97483C6D6990D13DB2DD47BA9C439F5A_il2cpp_TypeInfo_var);
		DTSweepPointComparator__ctor_mBCC429E4E2F6BF2BBEED49CE558D92261BFE911C(L_2, NULL);
		__this->____comparator_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparator_13), (void*)L_2);
		// public DTSweepContext() {
		TriangulationContext__ctor_mD7C328562CD049D1AD791D51FFD41808353B029D(__this, NULL);
		// Clear();
		VirtualActionInvoker0::Invoke(7 /* System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Clear() */, __this);
		// }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::get_IsDebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweepContext_get_IsDebugEnabled_m04F276A917A51C093F384E2D406D3859DA9A090A (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, const RuntimeMethod* method) 
{
	{
		// return base.IsDebugEnabled;
		bool L_0;
		L_0 = TriangulationContext_get_IsDebugEnabled_mF059C9C7BECA9A7EE5E1AB0B5F074A029BFAFC4B_inline(__this, NULL);
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::set_IsDebugEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_set_IsDebugEnabled_m19AAC7278805D8023ABD4C4D7935FB37968D1293 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value && DebugContext == null) DebugContext = new DTSweepDebugContext(this);
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF* L_1;
		L_1 = TriangulationContext_get_DebugContext_m23CB67610F79453B5BF342ED323324FDF67F9F96_inline(__this, NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (value && DebugContext == null) DebugContext = new DTSweepDebugContext(this);
		DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* L_2 = (DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36*)il2cpp_codegen_object_new(DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36_il2cpp_TypeInfo_var);
		DTSweepDebugContext__ctor_mCC44A58DB7F7110EA3A64C426B789EB9D9260830(L_2, __this, NULL);
		TriangulationContext_set_DebugContext_mBD19D3C963F0E9ED60E979F0098F93618313DF53_inline(__this, L_2, NULL);
	}

IL_0017:
	{
		// base.IsDebugEnabled = value;
		bool L_3 = ___value0;
		TriangulationContext_set_IsDebugEnabled_m3C1053D78B1D1919249AE1012433E889BEA02DAC_inline(__this, L_3, NULL);
		// }}
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::RemoveFromList(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_RemoveFromList_m8D852A85D084F3AC3C9ADBD930B17FA1E27C8435 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___triangle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mBC18B43C59562F8EFBDA885EEC41DE20027BA12D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Triangles.Remove(triangle);
		List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* L_0 = ((TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843*)__this)->___Triangles_1;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_1 = ___triangle0;
		bool L_2;
		L_2 = List_1_Remove_mBC18B43C59562F8EFBDA885EEC41DE20027BA12D(L_0, L_1, List_1_Remove_mBC18B43C59562F8EFBDA885EEC41DE20027BA12D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::MeshClean(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MeshClean_mF382723AD09798F6DE99FF52A31499F755FF4C74 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___triangle0, const RuntimeMethod* method) 
{
	{
		// MeshCleanReq(triangle);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_0 = ___triangle0;
		DTSweepContext_MeshCleanReq_m7ACADB5AF9248DF94DE953CDEDFF77A3172FCB0C(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::MeshCleanReq(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MeshCleanReq_m7ACADB5AF9248DF94DE953CDEDFF77A3172FCB0C (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___triangle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangulatable_t347F179819E93AF575313D9980AEDDB38FC3EC95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (triangle != null && !triangle.IsInterior) {
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_0 = ___triangle0;
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_1 = ___triangle0;
		bool L_2;
		L_2 = DelaunayTriangle_get_IsInterior_m42EE54145AAF8F8137DAE428DF9B34544EDEF3F2_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_004a;
		}
	}
	{
		// triangle.IsInterior = true;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_3 = ___triangle0;
		DelaunayTriangle_set_IsInterior_m940C4269B9329980002506B2326BBACEFAFCEAFB_inline(L_3, (bool)1, NULL);
		// Triangulatable.AddTriangle(triangle);
		RuntimeObject* L_4;
		L_4 = TriangulationContext_get_Triangulatable_mDC9FC5DDE6D25F81887B82987810B6CF77C10762_inline(__this, NULL);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_5 = ___triangle0;
		InterfaceActionInvoker1< DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* >::Invoke(3 /* System.Void UnityEngine.ProBuilder.Poly2Tri.Triangulatable::AddTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle) */, Triangulatable_t347F179819E93AF575313D9980AEDDB38FC3EC95_il2cpp_TypeInfo_var, L_4, L_5);
		// for (int i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_0046;
	}

IL_0022:
	{
		// if (!triangle.EdgeIsConstrained[i])
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_6 = ___triangle0;
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_7 = (&L_6->___EdgeIsConstrained_2);
		int32_t L_8 = V_0;
		bool L_9;
		L_9 = FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4(L_7, L_8, NULL);
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		// MeshCleanReq(triangle.Neighbors[i]);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_10 = ___triangle0;
		FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B* L_11 = (&L_10->___Neighbors_1);
		int32_t L_12 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_13;
		L_13 = FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4(L_11, L_12, FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4_RuntimeMethod_var);
		DTSweepContext_MeshCleanReq_m7ACADB5AF9248DF94DE953CDEDFF77A3172FCB0C(__this, L_13, NULL);
	}

IL_0042:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0046:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)3)))
		{
			goto IL_0022;
		}
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_Clear_m2287217BAAC5CA486580F6699744A89C3162BD5D (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mB45D901DD07F14436350B8FC0DE5C73B9AFE8A30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Clear();
		TriangulationContext_Clear_m8A4E4D7BCC2B26821FD80D4BB6FE6FC613F60AB1(__this, NULL);
		// Triangles.Clear();
		List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* L_0 = ((TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843*)__this)->___Triangles_1;
		List_1_Clear_mB45D901DD07F14436350B8FC0DE5C73B9AFE8A30_inline(L_0, List_1_Clear_mB45D901DD07F14436350B8FC0DE5C73B9AFE8A30_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::AddNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_AddNode_m61AC65BF973265261991CD9F6ADA794C06722556 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node0, const RuntimeMethod* method) 
{
	{
		// Front.AddNode(node);
		AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* L_0 = __this->___Front_8;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_1 = ___node0;
		AdvancingFront_AddNode_m2866FB06EC63AA74FA0ED38E52254E4649826706(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::RemoveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_RemoveNode_mCB81440ACE1EC616A49C964EC145405847E747F9 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___node0, const RuntimeMethod* method) 
{
	{
		// Front.RemoveNode(node);
		AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* L_0 = __this->___Front_8;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_1 = ___node0;
		AdvancingFront_RemoveNode_m6759E452BAE2B7093CA4454EE2B43A2C675369FA(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::LocateNode(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* DTSweepContext_LocateNode_m1398C130FC376009498BD0089B5D6E744D62E0D4 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___point0, const RuntimeMethod* method) 
{
	{
		// return Front.LocateNode(point);
		AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* L_0 = __this->___Front_8;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___point0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_2;
		L_2 = AdvancingFront_LocateNode_m4D3FA6E023FCF7410368C289C2B7D84D8B17C040(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::CreateAdvancingFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_CreateAdvancingFront_m3B116BB121D9C450C9D318BD5014FEAE218EE1CC (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F339626C6CB6D2881F4FE1FEA34F7D36F35733E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* V_0 = NULL;
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* V_1 = NULL;
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* V_2 = NULL;
	DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* V_3 = NULL;
	{
		// DelaunayTriangle iTriangle = new DelaunayTriangle(Points[0], Tail, Head);
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_0 = ((TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843*)__this)->___Points_2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1;
		L_1 = List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5(L_0, 0, List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5_RuntimeMethod_var);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2;
		L_2 = DTSweepContext_get_Tail_m9B1B4495CE20D44FB0F16FCB631CA68FB03544A0_inline(__this, NULL);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_3;
		L_3 = DTSweepContext_get_Head_m219A91F763AB1514F9ACB07F87D67076D2EC6493_inline(__this, NULL);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_4 = (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582*)il2cpp_codegen_object_new(DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582_il2cpp_TypeInfo_var);
		DelaunayTriangle__ctor_mD61268CE26513CDB23A354E3FF2C43B2BA806285(L_4, L_1, L_2, L_3, NULL);
		V_3 = L_4;
		// Triangles.Add(iTriangle);
		List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* L_5 = ((TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843*)__this)->___Triangles_1;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_6 = V_3;
		List_1_Add_m2F339626C6CB6D2881F4FE1FEA34F7D36F35733E_inline(L_5, L_6, List_1_Add_m2F339626C6CB6D2881F4FE1FEA34F7D36F35733E_RuntimeMethod_var);
		// head = new AdvancingFrontNode(iTriangle.Points[1]);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_7 = V_3;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_8 = (&L_7->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_9;
		L_9 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_8, 1, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_10 = (AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)il2cpp_codegen_object_new(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555_il2cpp_TypeInfo_var);
		AdvancingFrontNode__ctor_mAF86518A23A5A801885959F84A6E39CF84C237EE(L_10, L_9, NULL);
		V_0 = L_10;
		// head.Triangle = iTriangle;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_11 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_12 = V_3;
		L_11->___Triangle_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___Triangle_4), (void*)L_12);
		// middle = new AdvancingFrontNode(iTriangle.Points[0]);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_13 = V_3;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_14 = (&L_13->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_15;
		L_15 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_14, 0, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_16 = (AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)il2cpp_codegen_object_new(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555_il2cpp_TypeInfo_var);
		AdvancingFrontNode__ctor_mAF86518A23A5A801885959F84A6E39CF84C237EE(L_16, L_15, NULL);
		V_2 = L_16;
		// middle.Triangle = iTriangle;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_17 = V_2;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_18 = V_3;
		L_17->___Triangle_4 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___Triangle_4), (void*)L_18);
		// tail = new AdvancingFrontNode(iTriangle.Points[2]);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_19 = V_3;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_20 = (&L_19->___Points_0);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_21;
		L_21 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_20, 2, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_22 = (AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)il2cpp_codegen_object_new(AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555_il2cpp_TypeInfo_var);
		AdvancingFrontNode__ctor_mAF86518A23A5A801885959F84A6E39CF84C237EE(L_22, L_21, NULL);
		V_1 = L_22;
		// Front = new AdvancingFront(head, tail);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_23 = V_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_24 = V_1;
		AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* L_25 = (AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561*)il2cpp_codegen_object_new(AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561_il2cpp_TypeInfo_var);
		AdvancingFront__ctor_m93CE3A9A9784022B54560322A34DE46BF8253B49(L_25, L_23, L_24, NULL);
		__this->___Front_8 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Front_8), (void*)L_25);
		// Front.AddNode(middle);
		AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* L_26 = __this->___Front_8;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_27 = V_2;
		AdvancingFront_AddNode_m2866FB06EC63AA74FA0ED38E52254E4649826706(L_26, L_27, NULL);
		// Front.Head.Next = middle;
		AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* L_28 = __this->___Front_8;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_29 = L_28->___Head_0;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_30 = V_2;
		L_29->___Next_0 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___Next_0), (void*)L_30);
		// middle.Next = Front.Tail;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_31 = V_2;
		AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* L_32 = __this->___Front_8;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_33 = L_32->___Tail_1;
		L_31->___Next_0 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___Next_0), (void*)L_33);
		// middle.Prev = Front.Head;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_34 = V_2;
		AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* L_35 = __this->___Front_8;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_36 = L_35->___Head_0;
		L_34->___Prev_1 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->___Prev_1), (void*)L_36);
		// Front.Tail.Prev = middle;
		AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* L_37 = __this->___Front_8;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_38 = L_37->___Tail_1;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_39 = V_2;
		L_38->___Prev_1 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___Prev_1), (void*)L_39);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::MapTriangleToNodes(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MapTriangleToNodes_m6B48C2720D77CF48E6AE7328614F55D2A6F4565B (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* V_1 = NULL;
	{
		// for (int i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_003e;
	}

IL_0004:
	{
		// if (t.Neighbors[i] == null)
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_0 = ___t0;
		FixedArray3_1_tD81E180379969B960F2D912BD226287179DA866B* L_1 = (&L_0->___Neighbors_1);
		int32_t L_2 = V_0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_3;
		L_3 = FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4(L_1, L_2, FixedArray3_1_get_Item_m5CE3B600DD4CA0CD9F233D1DE1DAE70FA8B9DFD4_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_003a;
		}
	}
	{
		// AdvancingFrontNode n = Front.LocatePoint(t.PointCWFrom(t.Points[i]));
		AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* L_4 = __this->___Front_8;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_5 = ___t0;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_6 = ___t0;
		FixedArray3_1_t34D864D81FA1EFCB351869A95EDA59211295F8A6* L_7 = (&L_6->___Points_0);
		int32_t L_8 = V_0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_9;
		L_9 = FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B(L_7, L_8, FixedArray3_1_get_Item_mA5E87636A2EF05D7DE8ABC618BF96C83E972598B_RuntimeMethod_var);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_10;
		L_10 = DelaunayTriangle_PointCWFrom_m83A992C1B4D0F5DC005AA65E31225CAB0A610A23(L_5, L_9, NULL);
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_11;
		L_11 = AdvancingFront_LocatePoint_mE93A89803FD25A03FEA391ECE4352BB65E43BC11(L_4, L_10, NULL);
		V_1 = L_11;
		// if (n != null) n.Triangle = t;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_12 = V_1;
		if (!L_12)
		{
			goto IL_003a;
		}
	}
	{
		// if (n != null) n.Triangle = t;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_13 = V_1;
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_14 = ___t0;
		L_13->___Triangle_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___Triangle_4), (void*)L_14);
	}

IL_003a:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003e:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::PrepareTriangulation(UnityEngine.ProBuilder.Poly2Tri.Triangulatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_PrepareTriangulation_mDC1B2D75761A2C4295AF6068FF9809D678402C7E (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7669CFE774DBDC0DD15762CF2760D013CC2C6D50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m922E30B72FFD2FDD9998F2534602CE7AD4267536_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4DBABAE9A4E23B407332B1EFC28CA3AC02CD12A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF68743403A38CEBE1090A33372A91B2EB3A2C91B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_mF78AE693434875ABEC79AF11996997D2E28F0CBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* V_6 = NULL;
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* V_7 = NULL;
	Enumerator_t02719F8EE5ACF9CE468E9E2BC08776E0A90C3D11 V_8;
	memset((&V_8), 0, sizeof(V_8));
	TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* V_9 = NULL;
	{
		// base.PrepareTriangulation(t);
		RuntimeObject* L_0 = ___t0;
		TriangulationContext_PrepareTriangulation_m074D5117AB8B53FCD479A1D75A8D34B51DC45DCA(__this, L_0, NULL);
		// xmax = xmin = Points[0].X;
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_1 = ((TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843*)__this)->___Points_2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2;
		L_2 = List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5(L_1, 0, List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5_RuntimeMethod_var);
		double L_3 = L_2->___X_3;
		double L_4 = L_3;
		V_1 = L_4;
		V_0 = L_4;
		// ymax = ymin = Points[0].Y;
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_5 = ((TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843*)__this)->___Points_2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_6;
		L_6 = List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5(L_5, 0, List_1_get_Item_mAB0CCF3E86D8E0BE1208BFB38C7DF56E0C1350A5_RuntimeMethod_var);
		double L_7 = L_6->___Y_4;
		double L_8 = L_7;
		V_3 = L_8;
		V_2 = L_8;
		// foreach (TriangulationPoint p in Points) {
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_9 = ((TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843*)__this)->___Points_2;
		Enumerator_t02719F8EE5ACF9CE468E9E2BC08776E0A90C3D11 L_10;
		L_10 = List_1_GetEnumerator_mF68743403A38CEBE1090A33372A91B2EB3A2C91B(L_9, List_1_GetEnumerator_mF68743403A38CEBE1090A33372A91B2EB3A2C91B_RuntimeMethod_var);
		V_8 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7669CFE774DBDC0DD15762CF2760D013CC2C6D50((&V_8), Enumerator_Dispose_m7669CFE774DBDC0DD15762CF2760D013CC2C6D50_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008f_1;
			}

IL_003e_1:
			{
				// foreach (TriangulationPoint p in Points) {
				TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_11;
				L_11 = Enumerator_get_Current_m4DBABAE9A4E23B407332B1EFC28CA3AC02CD12A7_inline((&V_8), Enumerator_get_Current_m4DBABAE9A4E23B407332B1EFC28CA3AC02CD12A7_RuntimeMethod_var);
				V_9 = L_11;
				// if (p.X > xmax) xmax = p.X;
				TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_12 = V_9;
				double L_13 = L_12->___X_3;
				double L_14 = V_0;
				if ((!(((double)L_13) > ((double)L_14))))
				{
					goto IL_0059_1;
				}
			}
			{
				// if (p.X > xmax) xmax = p.X;
				TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_15 = V_9;
				double L_16 = L_15->___X_3;
				V_0 = L_16;
			}

IL_0059_1:
			{
				// if (p.X < xmin) xmin = p.X;
				TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_17 = V_9;
				double L_18 = L_17->___X_3;
				double L_19 = V_1;
				if ((!(((double)L_18) < ((double)L_19))))
				{
					goto IL_006b_1;
				}
			}
			{
				// if (p.X < xmin) xmin = p.X;
				TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_20 = V_9;
				double L_21 = L_20->___X_3;
				V_1 = L_21;
			}

IL_006b_1:
			{
				// if (p.Y > ymax) ymax = p.Y;
				TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_22 = V_9;
				double L_23 = L_22->___Y_4;
				double L_24 = V_2;
				if ((!(((double)L_23) > ((double)L_24))))
				{
					goto IL_007d_1;
				}
			}
			{
				// if (p.Y > ymax) ymax = p.Y;
				TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_25 = V_9;
				double L_26 = L_25->___Y_4;
				V_2 = L_26;
			}

IL_007d_1:
			{
				// if (p.Y < ymin) ymin = p.Y;
				TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_27 = V_9;
				double L_28 = L_27->___Y_4;
				double L_29 = V_3;
				if ((!(((double)L_28) < ((double)L_29))))
				{
					goto IL_008f_1;
				}
			}
			{
				// if (p.Y < ymin) ymin = p.Y;
				TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_30 = V_9;
				double L_31 = L_30->___Y_4;
				V_3 = L_31;
			}

IL_008f_1:
			{
				// foreach (TriangulationPoint p in Points) {
				bool L_32;
				L_32 = Enumerator_MoveNext_m922E30B72FFD2FDD9998F2534602CE7AD4267536((&V_8), Enumerator_MoveNext_m922E30B72FFD2FDD9998F2534602CE7AD4267536_RuntimeMethod_var);
				if (L_32)
				{
					goto IL_003e_1;
				}
			}
			{
				goto IL_00a8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		// double deltaX = ALPHA * (xmax - xmin);
		float L_33 = __this->___ALPHA_7;
		double L_34 = V_0;
		double L_35 = V_1;
		V_4 = ((double)il2cpp_codegen_multiply(((double)L_33), ((double)il2cpp_codegen_subtract(L_34, L_35))));
		// double deltaY = ALPHA * (ymax - ymin);
		float L_36 = __this->___ALPHA_7;
		double L_37 = V_2;
		double L_38 = V_3;
		V_5 = ((double)il2cpp_codegen_multiply(((double)L_36), ((double)il2cpp_codegen_subtract(L_37, L_38))));
		// TriangulationPoint p1 = new TriangulationPoint(xmax + deltaX, ymin - deltaY, -1);
		double L_39 = V_0;
		double L_40 = V_4;
		double L_41 = V_3;
		double L_42 = V_5;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_43 = (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)il2cpp_codegen_object_new(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC_il2cpp_TypeInfo_var);
		TriangulationPoint__ctor_m597CD937EAE5EEFB7F00F2480610423B84E89D15(L_43, ((double)il2cpp_codegen_add(L_39, L_40)), ((double)il2cpp_codegen_subtract(L_41, L_42)), (-1), NULL);
		V_6 = L_43;
		// TriangulationPoint p2 = new TriangulationPoint(xmin - deltaX, ymin - deltaY, -1);
		double L_44 = V_1;
		double L_45 = V_4;
		double L_46 = V_3;
		double L_47 = V_5;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_48 = (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)il2cpp_codegen_object_new(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC_il2cpp_TypeInfo_var);
		TriangulationPoint__ctor_m597CD937EAE5EEFB7F00F2480610423B84E89D15(L_48, ((double)il2cpp_codegen_subtract(L_44, L_45)), ((double)il2cpp_codegen_subtract(L_46, L_47)), (-1), NULL);
		V_7 = L_48;
		// Head = p1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_49 = V_6;
		DTSweepContext_set_Head_m66CD236E964FEBDDC2234B28E93F3E3B375E256F_inline(__this, L_49, NULL);
		// Tail = p2;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_50 = V_7;
		DTSweepContext_set_Tail_mBE3CCA1D3DEC584E874A9A83E47A6EA72B0DA288_inline(__this, L_50, NULL);
		// Points.Sort(_comparator);
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_51 = ((TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843*)__this)->___Points_2;
		DTSweepPointComparator_tCB29B65B97483C6D6990D13DB2DD47BA9C439F5A* L_52 = __this->____comparator_13;
		List_1_Sort_mF78AE693434875ABEC79AF11996997D2E28F0CBB(L_51, L_52, List_1_Sort_mF78AE693434875ABEC79AF11996997D2E28F0CBB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::FinalizeTriangulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_FinalizeTriangulation_mB9D744619005EF2380AEDE0BB18A1C605D9D0ABE (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mB45D901DD07F14436350B8FC0DE5C73B9AFE8A30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangulatable_t347F179819E93AF575313D9980AEDDB38FC3EC95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Triangulatable.AddTriangles(Triangles);
		RuntimeObject* L_0;
		L_0 = TriangulationContext_get_Triangulatable_mDC9FC5DDE6D25F81887B82987810B6CF77C10762_inline(__this, NULL);
		List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* L_1 = ((TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843*)__this)->___Triangles_1;
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(4 /* System.Void UnityEngine.ProBuilder.Poly2Tri.Triangulatable::AddTriangles(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>) */, Triangulatable_t347F179819E93AF575313D9980AEDDB38FC3EC95_il2cpp_TypeInfo_var, L_0, L_1);
		// Triangles.Clear();
		List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* L_2 = ((TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843*)__this)->___Triangles_1;
		List_1_Clear_mB45D901DD07F14436350B8FC0DE5C73B9AFE8A30_inline(L_2, List_1_Clear_mB45D901DD07F14436350B8FC0DE5C73B9AFE8A30_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27* DTSweepContext_NewConstraint_m91F4531C45627119CE853AADAD5ED72EF288A669 (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___a0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new DTSweepConstraint(a, b);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = ___a0;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___b1;
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_2 = (DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A*)il2cpp_codegen_object_new(DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A_il2cpp_TypeInfo_var);
		DTSweepConstraint__ctor_m8288F9EFFFB04AEDE40C94B25CD1C911EC19B401(L_2, L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationAlgorithm UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::get_Algorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DTSweepContext_get_Algorithm_m9CAFCB095C99DBF74D2315F2147A5F7F8491269E (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, const RuntimeMethod* method) 
{
	{
		// public override TriangulationAlgorithm Algorithm { get { return TriangulationAlgorithm.DTSweep; }}
		return (int32_t)(0);
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
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::get_PrimaryTriangle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* DTSweepDebugContext_get_PrimaryTriangle_m3CA5B60C8E096020CCC0AB492B4E0A05FBA1131C (DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* __this, const RuntimeMethod* method) 
{
	{
		// public DelaunayTriangle   PrimaryTriangle   { get { return _primaryTriangle  ; } set { _primaryTriangle   = value; _tcx.Update("set PrimaryTriangle");   } }
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_0 = __this->____primaryTriangle_1;
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_PrimaryTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_PrimaryTriangle_m63C361FFB102F8A98C2D383309A80EBA88D57882 (DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* __this, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B56FA96FE55F4A5B70E48AF16D59739F6389D3C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DelaunayTriangle   PrimaryTriangle   { get { return _primaryTriangle  ; } set { _primaryTriangle   = value; _tcx.Update("set PrimaryTriangle");   } }
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_0 = ___value0;
		__this->____primaryTriangle_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____primaryTriangle_1), (void*)L_0);
		// public DelaunayTriangle   PrimaryTriangle   { get { return _primaryTriangle  ; } set { _primaryTriangle   = value; _tcx.Update("set PrimaryTriangle");   } }
		TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_1 = ((TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF*)__this)->____tcx_0;
		TriangulationContext_Update_m93593C37DCE2DCE7A6FB6308E88F1C008C92C901(L_1, _stringLiteral9B56FA96FE55F4A5B70E48AF16D59739F6389D3C, NULL);
		// public DelaunayTriangle   PrimaryTriangle   { get { return _primaryTriangle  ; } set { _primaryTriangle   = value; _tcx.Update("set PrimaryTriangle");   } }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::get_SecondaryTriangle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* DTSweepDebugContext_get_SecondaryTriangle_m3C453139B2D3B4BAA5348D6903436CFE6374A764 (DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* __this, const RuntimeMethod* method) 
{
	{
		// public DelaunayTriangle   SecondaryTriangle { get { return _secondaryTriangle; } set { _secondaryTriangle = value; _tcx.Update("set SecondaryTriangle"); } }
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_0 = __this->____secondaryTriangle_2;
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_SecondaryTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_SecondaryTriangle_m419A62A2C2D2EFDAA842CBEAF7F2B897C841A699 (DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* __this, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B67A1E3362EA84160157011F823BD6607D1E57);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DelaunayTriangle   SecondaryTriangle { get { return _secondaryTriangle; } set { _secondaryTriangle = value; _tcx.Update("set SecondaryTriangle"); } }
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_0 = ___value0;
		__this->____secondaryTriangle_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____secondaryTriangle_2), (void*)L_0);
		// public DelaunayTriangle   SecondaryTriangle { get { return _secondaryTriangle; } set { _secondaryTriangle = value; _tcx.Update("set SecondaryTriangle"); } }
		TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_1 = ((TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF*)__this)->____tcx_0;
		TriangulationContext_Update_m93593C37DCE2DCE7A6FB6308E88F1C008C92C901(L_1, _stringLiteralB4B67A1E3362EA84160157011F823BD6607D1E57, NULL);
		// public DelaunayTriangle   SecondaryTriangle { get { return _secondaryTriangle; } set { _secondaryTriangle = value; _tcx.Update("set SecondaryTriangle"); } }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::get_ActivePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* DTSweepDebugContext_get_ActivePoint_m8AADEEA464E45BD1B3C599CE7448A10AAA0FD374 (DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* __this, const RuntimeMethod* method) 
{
	{
		// public TriangulationPoint ActivePoint       { get { return _activePoint      ; } set { _activePoint       = value; _tcx.Update("set ActivePoint");       } }
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = __this->____activePoint_3;
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_ActivePoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActivePoint_mF5455A8DEA0B50E16FBA83C88EDDFDE0408B50AE (DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral237443D40E51BEB792E3255884B17F5F2A070555);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TriangulationPoint ActivePoint       { get { return _activePoint      ; } set { _activePoint       = value; _tcx.Update("set ActivePoint");       } }
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = ___value0;
		__this->____activePoint_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activePoint_3), (void*)L_0);
		// public TriangulationPoint ActivePoint       { get { return _activePoint      ; } set { _activePoint       = value; _tcx.Update("set ActivePoint");       } }
		TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_1 = ((TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF*)__this)->____tcx_0;
		TriangulationContext_Update_m93593C37DCE2DCE7A6FB6308E88F1C008C92C901(L_1, _stringLiteral237443D40E51BEB792E3255884B17F5F2A070555, NULL);
		// public TriangulationPoint ActivePoint       { get { return _activePoint      ; } set { _activePoint       = value; _tcx.Update("set ActivePoint");       } }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::get_ActiveNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* DTSweepDebugContext_get_ActiveNode_m4547E406992864F010EB7F6A4AF1A824DDEEF77E (DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* __this, const RuntimeMethod* method) 
{
	{
		// public AdvancingFrontNode ActiveNode        { get { return _activeNode       ; } set { _activeNode        = value; _tcx.Update("set ActiveNode");        } }
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_0 = __this->____activeNode_4;
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_ActiveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActiveNode_mDCE7A20AD32017FF9CC942B918CDD3727115C88B (DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* __this, AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88EB854C80D13C1F40F616EE53A1381BFF41639B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AdvancingFrontNode ActiveNode        { get { return _activeNode       ; } set { _activeNode        = value; _tcx.Update("set ActiveNode");        } }
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_0 = ___value0;
		__this->____activeNode_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeNode_4), (void*)L_0);
		// public AdvancingFrontNode ActiveNode        { get { return _activeNode       ; } set { _activeNode        = value; _tcx.Update("set ActiveNode");        } }
		TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_1 = ((TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF*)__this)->____tcx_0;
		TriangulationContext_Update_m93593C37DCE2DCE7A6FB6308E88F1C008C92C901(L_1, _stringLiteral88EB854C80D13C1F40F616EE53A1381BFF41639B, NULL);
		// public AdvancingFrontNode ActiveNode        { get { return _activeNode       ; } set { _activeNode        = value; _tcx.Update("set ActiveNode");        } }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::get_ActiveConstraint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* DTSweepDebugContext_get_ActiveConstraint_m1477F023486FAF1BE90A2195483F66014B09057F (DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* __this, const RuntimeMethod* method) 
{
	{
		// public DTSweepConstraint  ActiveConstraint  { get { return _activeConstraint ; } set { _activeConstraint  = value; _tcx.Update("set ActiveConstraint");  } }
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_0 = __this->____activeConstraint_5;
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_ActiveConstraint(UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActiveConstraint_m91E586325A3476F2F58F65DEB5016DEEF2F5756A (DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* __this, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB80316C404349B7962BAC3B6CE7C7E7107C36CA1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DTSweepConstraint  ActiveConstraint  { get { return _activeConstraint ; } set { _activeConstraint  = value; _tcx.Update("set ActiveConstraint");  } }
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_0 = ___value0;
		__this->____activeConstraint_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeConstraint_5), (void*)L_0);
		// public DTSweepConstraint  ActiveConstraint  { get { return _activeConstraint ; } set { _activeConstraint  = value; _tcx.Update("set ActiveConstraint");  } }
		TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_1 = ((TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF*)__this)->____tcx_0;
		TriangulationContext_Update_m93593C37DCE2DCE7A6FB6308E88F1C008C92C901(L_1, _stringLiteralB80316C404349B7962BAC3B6CE7C7E7107C36CA1, NULL);
		// public DTSweepConstraint  ActiveConstraint  { get { return _activeConstraint ; } set { _activeConstraint  = value; _tcx.Update("set ActiveConstraint");  } }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::.ctor(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext__ctor_mCC44A58DB7F7110EA3A64C426B789EB9D9260830 (DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* __this, DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* ___tcx0, const RuntimeMethod* method) 
{
	{
		// public DTSweepDebugContext( DTSweepContext tcx ) : base(tcx) { }
		DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* L_0 = ___tcx0;
		TriangulationDebugContext__ctor_m8F35A8940859AC28DC4D462BB314F61567204EDA(__this, L_0, NULL);
		// public DTSweepDebugContext( DTSweepContext tcx ) : base(tcx) { }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::get_IsDebugContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweepDebugContext_get_IsDebugContext_m795B78344D8CE0DEE41D5B9087FF1005D4BDF040 (DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDebugContext { get { return true; } }
		return (bool)1;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_Clear_m363D6984791B57D827047DA84434927EA2D118DD (DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* __this, const RuntimeMethod* method) 
{
	{
		// PrimaryTriangle   = null;
		DTSweepDebugContext_set_PrimaryTriangle_m63C361FFB102F8A98C2D383309A80EBA88D57882(__this, (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582*)NULL, NULL);
		// SecondaryTriangle = null;
		DTSweepDebugContext_set_SecondaryTriangle_m419A62A2C2D2EFDAA842CBEAF7F2B897C841A699(__this, (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582*)NULL, NULL);
		// ActivePoint       = null;
		DTSweepDebugContext_set_ActivePoint_mF5455A8DEA0B50E16FBA83C88EDDFDE0408B50AE(__this, (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)NULL, NULL);
		// ActiveNode        = null;
		DTSweepDebugContext_set_ActiveNode_mDCE7A20AD32017FF9CC942B918CDD3727115C88B(__this, (AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555*)NULL, NULL);
		// ActiveConstraint  = null;
		DTSweepDebugContext_set_ActiveConstraint_m91E586325A3476F2F58F65DEB5016DEEF2F5756A(__this, (DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A*)NULL, NULL);
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepEdgeEvent__ctor_mC91F183A48FD697ED6F9B89D75B033E6CE534EAC (DTSweepEdgeEvent_tADA248BEB364180EA7262E5AFDDB730021B50F8D* __this, const RuntimeMethod* method) 
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
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator::Compare(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DTSweepPointComparator_Compare_m7F65D27E0D6ADC359FCAE9A0ECE5D0D81D402F9F (DTSweepPointComparator_tCB29B65B97483C6D6990D13DB2DD47BA9C439F5A* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p10, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___p21, const RuntimeMethod* method) 
{
	{
		// if (p1.Y < p2.Y) {
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = ___p10;
		double L_1 = L_0->___Y_4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2 = ___p21;
		double L_3 = L_2->___Y_4;
		if ((!(((double)L_1) < ((double)L_3))))
		{
			goto IL_0010;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0010:
	{
		// } else if (p1.Y > p2.Y) {
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_4 = ___p10;
		double L_5 = L_4->___Y_4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_6 = ___p21;
		double L_7 = L_6->___Y_4;
		if ((!(((double)L_5) > ((double)L_7))))
		{
			goto IL_0020;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_0020:
	{
		// if (p1.X < p2.X) {
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_8 = ___p10;
		double L_9 = L_8->___X_3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_10 = ___p21;
		double L_11 = L_10->___X_3;
		if ((!(((double)L_9) < ((double)L_11))))
		{
			goto IL_0030;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0030:
	{
		// } else if (p1.X > p2.X) {
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_12 = ___p10;
		double L_13 = L_12->___X_3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_14 = ___p21;
		double L_15 = L_14->___X_3;
		if ((!(((double)L_13) > ((double)L_15))))
		{
			goto IL_0040;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_0040:
	{
		// return 0;
		return 0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepPointComparator__ctor_mBCC429E4E2F6BF2BBEED49CE558D92261BFE911C (DTSweepPointComparator_tCB29B65B97483C6D6990D13DB2DD47BA9C439F5A* __this, const RuntimeMethod* method) 
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException::.ctor(System.String,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointOnEdgeException__ctor_mCF2DDB9301C4890B5C5C360B926ED12808405D24 (PointOnEdgeException_tC525B89F81C014138323BBD40782538269F85A40* __this, String_t* ___message0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___a1, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___b2, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___c3, const RuntimeMethod* method) 
{
	{
		// : base(message)
		String_t* L_0 = ___message0;
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(__this, L_0, NULL);
		// A=a;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_1 = ___a1;
		__this->___A_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___A_18), (void*)L_1);
		// B=b;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2 = ___b2;
		__this->___B_19 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___B_19), (void*)L_2);
		// C=c;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_3 = ___c3;
		__this->___C_20 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___C_20), (void*)L_3);
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
// System.Int32[] UnityEngine.ProBuilder.Poly2Tri.ConstrainedPointSet::get_EdgeIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ConstrainedPointSet_get_EdgeIndex_mC44B0220E20BBC36F29AAABC8BAB366888021D91 (ConstrainedPointSet_tF7EC96684E0FFB09F8C8AA5A7EC3309E55313E70* __this, const RuntimeMethod* method) 
{
	{
		// public int[] EdgeIndex { get; private set; }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___U3CEdgeIndexU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.ConstrainedPointSet::set_EdgeIndex(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstrainedPointSet_set_EdgeIndex_m4C2E9F38C89CF940E370C54D8716AA90928C2A8E (ConstrainedPointSet_tF7EC96684E0FFB09F8C8AA5A7EC3309E55313E70* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) 
{
	{
		// public int[] EdgeIndex { get; private set; }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___value0;
		__this->___U3CEdgeIndexU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEdgeIndexU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.ConstrainedPointSet::.ctor(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstrainedPointSet__ctor_mFA1634CE4356C1F4A5EDE1A0AE1F7F36E5C157F3 (ConstrainedPointSet_tF7EC96684E0FFB09F8C8AA5A7EC3309E55313E70* __this, List_1_t9DC390849BA500451557578B04CA56F022B76A2B* ___points0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___index1, const RuntimeMethod* method) 
{
	{
		// : base(points) {
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_0 = ___points0;
		PointSet__ctor_m5C5662D98D905C47CF1AB9062B760E51C0798143(__this, L_0, NULL);
		// EdgeIndex = index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___index1;
		ConstrainedPointSet_set_EdgeIndex_m4C2E9F38C89CF940E370C54D8716AA90928C2A8E_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationMode UnityEngine.ProBuilder.Poly2Tri.ConstrainedPointSet::get_TriangulationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConstrainedPointSet_get_TriangulationMode_m73BB28A00B363F7E31C2BF32AAEDA7934B31627F (ConstrainedPointSet_tF7EC96684E0FFB09F8C8AA5A7EC3309E55313E70* __this, const RuntimeMethod* method) 
{
	{
		// public override TriangulationMode TriangulationMode { get { return TriangulationMode.Constrained; } }
		return (int32_t)(1);
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.ConstrainedPointSet::Prepare(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstrainedPointSet_Prepare_m0497EC9AA2E4DDDF39E05E5407540C3A3F7002A7 (ConstrainedPointSet_tF7EC96684E0FFB09F8C8AA5A7EC3309E55313E70* __this, TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* ___tcx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tAAF50CF2D4B1A9F767041F8A3D47C16B0462788C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// base.Prepare(tcx);
		TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_0 = ___tcx0;
		PointSet_Prepare_mC39ADEAA5228B7054DD534FA65E38A4DC372B24C(__this, L_0, NULL);
		// for (int i = 0; i < EdgeIndex.Length; i += 2) {
		V_0 = 0;
		goto IL_003e;
	}

IL_000b:
	{
		// tcx.NewConstraint(Points[EdgeIndex[i]], Points[EdgeIndex[i + 1]]);
		TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_1 = ___tcx0;
		RuntimeObject* L_2;
		L_2 = PointSet_get_Points_m0F297DF803621D09BA621B512C807A6FEA4DFBEE_inline(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = ConstrainedPointSet_get_EdgeIndex_mC44B0220E20BBC36F29AAABC8BAB366888021D91_inline(__this, NULL);
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_7;
		L_7 = InterfaceFuncInvoker1< TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::get_Item(System.Int32) */, IList_1_tAAF50CF2D4B1A9F767041F8A3D47C16B0462788C_il2cpp_TypeInfo_var, L_2, L_6);
		RuntimeObject* L_8;
		L_8 = PointSet_get_Points_m0F297DF803621D09BA621B512C807A6FEA4DFBEE_inline(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9;
		L_9 = ConstrainedPointSet_get_EdgeIndex_mC44B0220E20BBC36F29AAABC8BAB366888021D91_inline(__this, NULL);
		int32_t L_10 = V_0;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_13;
		L_13 = InterfaceFuncInvoker1< TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::get_Item(System.Int32) */, IList_1_tAAF50CF2D4B1A9F767041F8A3D47C16B0462788C_il2cpp_TypeInfo_var, L_8, L_12);
		TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27* L_14;
		L_14 = VirtualFuncInvoker2< TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27*, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* >::Invoke(6 /* UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint) */, L_1, L_7, L_13);
		// for (int i = 0; i < EdgeIndex.Length; i += 2) {
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 2));
	}

IL_003e:
	{
		// for (int i = 0; i < EdgeIndex.Length; i += 2) {
		int32_t L_16 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17;
		L_17 = ConstrainedPointSet_get_EdgeIndex_mC44B0220E20BBC36F29AAABC8BAB366888021D91_inline(__this, NULL);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
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
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> UnityEngine.ProBuilder.Poly2Tri.PointSet::get_Points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PointSet_get_Points_m0F297DF803621D09BA621B512C807A6FEA4DFBEE (PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* __this, const RuntimeMethod* method) 
{
	{
		// public IList<TriangulationPoint> Points { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPointsU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointSet::set_Points(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSet_set_Points_m416AFA305B03A95AEAA7F65B839240E095CEE4B2 (PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IList<TriangulationPoint> Points { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CPointsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPointsU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> UnityEngine.ProBuilder.Poly2Tri.PointSet::get_Triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PointSet_get_Triangles_m9D21B762D23B2BE9E324EEB326EC1E042811F338 (PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* __this, const RuntimeMethod* method) 
{
	{
		// public IList<DelaunayTriangle> Triangles { get; private set; }
		RuntimeObject* L_0 = __this->___U3CTrianglesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointSet::set_Triangles(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSet_set_Triangles_m9F16DDC6C1B9BC407CFBD3C98C90660DEA467366 (PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IList<DelaunayTriangle> Triangles { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CTrianglesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTrianglesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointSet::.ctor(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSet__ctor_m5C5662D98D905C47CF1AB9062B760E51C0798143 (PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* __this, List_1_t9DC390849BA500451557578B04CA56F022B76A2B* ___points0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m086885D0F137C5309C0133DD99ADCE77D2AC5C44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9DC390849BA500451557578B04CA56F022B76A2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PointSet(List<TriangulationPoint> points) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Points = new List<TriangulationPoint>(points);
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_0 = ___points0;
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_1 = (List_1_t9DC390849BA500451557578B04CA56F022B76A2B*)il2cpp_codegen_object_new(List_1_t9DC390849BA500451557578B04CA56F022B76A2B_il2cpp_TypeInfo_var);
		List_1__ctor_m086885D0F137C5309C0133DD99ADCE77D2AC5C44(L_1, L_0, List_1__ctor_m086885D0F137C5309C0133DD99ADCE77D2AC5C44_RuntimeMethod_var);
		PointSet_set_Points_m416AFA305B03A95AEAA7F65B839240E095CEE4B2_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationMode UnityEngine.ProBuilder.Poly2Tri.PointSet::get_TriangulationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointSet_get_TriangulationMode_m90CF06BBDBDC75822501A270F1D69817F0B3013D (PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* __this, const RuntimeMethod* method) 
{
	{
		// public virtual TriangulationMode TriangulationMode { get { return TriangulationMode.Unconstrained; }}
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointSet::AddTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSet_AddTriangle_m7287EAE59C43CB521A55604CA509337E82167DAF (PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* __this, DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t8BA3CFA7E95BDF2EE15CE68B4A14DF167E12E6C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Triangles.Add(t);
		RuntimeObject* L_0;
		L_0 = PointSet_get_Triangles_m9D21B762D23B2BE9E324EEB326EC1E042811F338_inline(__this, NULL);
		DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_1 = ___t0;
		InterfaceActionInvoker1< DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::Add(T) */, ICollection_1_t8BA3CFA7E95BDF2EE15CE68B4A14DF167E12E6C0_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointSet::AddTriangles(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSet_AddTriangles_m9D52634E77550F118738202D2C21C76483A0A1B9 (PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* __this, RuntimeObject* ___list0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t8BA3CFA7E95BDF2EE15CE68B4A14DF167E12E6C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t11F89F538D47F0DF2C1F3B1FADA72F1FACD462B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9B09864C45D9137FA0B60B1034CB6F76A9D011C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* V_1 = NULL;
	{
		// foreach ( var tri in list ) Triangles.Add(tri);
		RuntimeObject* L_0 = ___list0;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::GetEnumerator() */, IEnumerable_1_t11F89F538D47F0DF2C1F3B1FADA72F1FACD462B3_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002f;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001c_1;
			}

IL_0009_1:
			{
				// foreach ( var tri in list ) Triangles.Add(tri);
				RuntimeObject* L_4 = V_0;
				DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_5;
				L_5 = InterfaceFuncInvoker0< DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::get_Current() */, IEnumerator_1_t9B09864C45D9137FA0B60B1034CB6F76A9D011C4_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				// foreach ( var tri in list ) Triangles.Add(tri);
				RuntimeObject* L_6;
				L_6 = PointSet_get_Triangles_m9D21B762D23B2BE9E324EEB326EC1E042811F338_inline(__this, NULL);
				DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* L_7 = V_1;
				InterfaceActionInvoker1< DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::Add(T) */, ICollection_1_t8BA3CFA7E95BDF2EE15CE68B4A14DF167E12E6C0_il2cpp_TypeInfo_var, L_6, L_7);
			}

IL_001c_1:
			{
				// foreach ( var tri in list ) Triangles.Add(tri);
				RuntimeObject* L_8 = V_0;
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0030;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointSet::ClearTriangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSet_ClearTriangles_m215EDBA6369136CAA4647A5A05F8F99A1DF30AB8 (PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t8BA3CFA7E95BDF2EE15CE68B4A14DF167E12E6C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Triangles.Clear();
		RuntimeObject* L_0;
		L_0 = PointSet_get_Triangles_m9D21B762D23B2BE9E324EEB326EC1E042811F338_inline(__this, NULL);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::Clear() */, ICollection_1_t8BA3CFA7E95BDF2EE15CE68B4A14DF167E12E6C0_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointSet::Prepare(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSet_Prepare_mC39ADEAA5228B7054DD534FA65E38A4DC372B24C (PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* __this, TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* ___tcx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t8BA3CFA7E95BDF2EE15CE68B4A14DF167E12E6C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tCA280C2D07C066AD184D8048DA66AF7B8B4C47AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m346A80ECA3AF0181845D900A962D78284782D100_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF5D0A29AF338C34408DD7D1ABE7311CF318D436C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Triangles == null) {
		RuntimeObject* L_0;
		L_0 = PointSet_get_Triangles_m9D21B762D23B2BE9E324EEB326EC1E042811F338_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// Triangles = new List<DelaunayTriangle>(Points.Count);
		RuntimeObject* L_1;
		L_1 = PointSet_get_Points_m0F297DF803621D09BA621B512C807A6FEA4DFBEE_inline(__this, NULL);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::get_Count() */, ICollection_1_tCA280C2D07C066AD184D8048DA66AF7B8B4C47AD_il2cpp_TypeInfo_var, L_1);
		List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* L_3 = (List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8*)il2cpp_codegen_object_new(List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8_il2cpp_TypeInfo_var);
		List_1__ctor_mF5D0A29AF338C34408DD7D1ABE7311CF318D436C(L_3, L_2, List_1__ctor_mF5D0A29AF338C34408DD7D1ABE7311CF318D436C_RuntimeMethod_var);
		PointSet_set_Triangles_m9F16DDC6C1B9BC407CFBD3C98C90660DEA467366_inline(__this, L_3, NULL);
		goto IL_002b;
	}

IL_0020:
	{
		// Triangles.Clear();
		RuntimeObject* L_4;
		L_4 = PointSet_get_Triangles_m9D21B762D23B2BE9E324EEB326EC1E042811F338_inline(__this, NULL);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::Clear() */, ICollection_1_t8BA3CFA7E95BDF2EE15CE68B4A14DF167E12E6C0_il2cpp_TypeInfo_var, L_4);
	}

IL_002b:
	{
		// tcx.Points.AddRange(Points);
		TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_5 = ___tcx0;
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_6 = L_5->___Points_2;
		RuntimeObject* L_7;
		L_7 = PointSet_get_Points_m0F297DF803621D09BA621B512C807A6FEA4DFBEE_inline(__this, NULL);
		List_1_AddRange_m346A80ECA3AF0181845D900A962D78284782D100(L_6, L_7, List_1_AddRange_m346A80ECA3AF0181845D900A962D78284782D100_RuntimeMethod_var);
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationConstraint__ctor_m20B549D737327C3F3F41956937D851E465FDDB33 (TriangulationConstraint_t8D963A624DAF77DF8670A37E72EC7A57C2FEEF27* __this, const RuntimeMethod* method) 
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
// UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_DebugContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF* TriangulationContext_get_DebugContext_m23CB67610F79453B5BF342ED323324FDF67F9F96 (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) 
{
	{
		// public TriangulationDebugContext DebugContext { get; protected set; }
		TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF* L_0 = __this->___U3CDebugContextU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_DebugContext(UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_set_DebugContext_mBD19D3C963F0E9ED60E979F0098F93618313DF53 (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF* ___value0, const RuntimeMethod* method) 
{
	{
		// public TriangulationDebugContext DebugContext { get; protected set; }
		TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF* L_0 = ___value0;
		__this->___U3CDebugContextU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDebugContextU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationMode UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_TriangulationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_TriangulationMode_mC9F2694F48A7760DCE953389DC8C86614FCCA6A9 (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) 
{
	{
		// public TriangulationMode TriangulationMode { get; protected set; }
		int32_t L_0 = __this->___U3CTriangulationModeU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_TriangulationMode(UnityEngine.ProBuilder.Poly2Tri.TriangulationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_set_TriangulationMode_m7EF0A1774FEF974C65A78C97C4F118BADAB7F5B7 (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public TriangulationMode TriangulationMode { get; protected set; }
		int32_t L_0 = ___value0;
		__this->___U3CTriangulationModeU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.Triangulatable UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_Triangulatable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TriangulationContext_get_Triangulatable_mDC9FC5DDE6D25F81887B82987810B6CF77C10762 (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) 
{
	{
		// public Triangulatable Triangulatable { get; private set; }
		RuntimeObject* L_0 = __this->___U3CTriangulatableU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_Triangulatable(UnityEngine.ProBuilder.Poly2Tri.Triangulatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_set_Triangulatable_mE747794031053D5739164E85F751E84FAA393ED7 (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public Triangulatable Triangulatable { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CTriangulatableU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTriangulatableU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_StepCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_StepCount_mBCE2A72A243B279CC12D8E31BC296681440B3FA1 (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) 
{
	{
		// public int StepCount { get; private set; }
		int32_t L_0 = __this->___U3CStepCountU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_StepCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_set_StepCount_m01197774AF89D76DE680E429ADB0F50BA77CEF46 (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int StepCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CStepCountU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Done()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Done_mA5FFC0AB433C505BEEE9ACC366DB93BE81E5961C (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// StepCount++;
		int32_t L_0;
		L_0 = TriangulationContext_get_StepCount_mBCE2A72A243B279CC12D8E31BC296681440B3FA1_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		TriangulationContext_set_StepCount_m01197774AF89D76DE680E429ADB0F50BA77CEF46_inline(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::PrepareTriangulation(UnityEngine.ProBuilder.Poly2Tri.Triangulatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_PrepareTriangulation_m074D5117AB8B53FCD479A1D75A8D34B51DC45DCA (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangulatable_t347F179819E93AF575313D9980AEDDB38FC3EC95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Triangulatable = t;
		RuntimeObject* L_0 = ___t0;
		TriangulationContext_set_Triangulatable_mE747794031053D5739164E85F751E84FAA393ED7_inline(__this, L_0, NULL);
		// TriangulationMode = t.TriangulationMode;
		RuntimeObject* L_1 = ___t0;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* UnityEngine.ProBuilder.Poly2Tri.TriangulationMode UnityEngine.ProBuilder.Poly2Tri.Triangulatable::get_TriangulationMode() */, Triangulatable_t347F179819E93AF575313D9980AEDDB38FC3EC95_il2cpp_TypeInfo_var, L_1);
		TriangulationContext_set_TriangulationMode_m7EF0A1774FEF974C65A78C97C4F118BADAB7F5B7_inline(__this, L_2, NULL);
		// t.Prepare(this);
		RuntimeObject* L_3 = ___t0;
		InterfaceActionInvoker1< TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* >::Invoke(0 /* System.Void UnityEngine.ProBuilder.Poly2Tri.Triangulatable::Prepare(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext) */, Triangulatable_t347F179819E93AF575313D9980AEDDB38FC3EC95_il2cpp_TypeInfo_var, L_3, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Update(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Update_m93593C37DCE2DCE7A6FB6308E88F1C008C92C901 (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		// public void Update(string message) {}
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Clear_m8A4E4D7BCC2B26821FD80D4BB6FE6FC613F60AB1 (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4BD21D8641DD87A7F789778611CBF94ECE0478E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Points.Clear();
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_0 = __this->___Points_2;
		List_1_Clear_m4BD21D8641DD87A7F789778611CBF94ECE0478E7_inline(L_0, List_1_Clear_m4BD21D8641DD87A7F789778611CBF94ECE0478E7_RuntimeMethod_var);
		// if (DebugContext != null) DebugContext.Clear();
		TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF* L_1;
		L_1 = TriangulationContext_get_DebugContext_m23CB67610F79453B5BF342ED323324FDF67F9F96_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// if (DebugContext != null) DebugContext.Clear();
		TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF* L_2;
		L_2 = TriangulationContext_get_DebugContext_m23CB67610F79453B5BF342ED323324FDF67F9F96_inline(__this, NULL);
		VirtualActionInvoker0::Invoke(4 /* System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext::Clear() */, L_2);
	}

IL_001e:
	{
		// StepCount = 0;
		TriangulationContext_set_StepCount_m01197774AF89D76DE680E429ADB0F50BA77CEF46_inline(__this, 0, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationContext_get_IsDebugEnabled_mF059C9C7BECA9A7EE5E1AB0B5F074A029BFAFC4B (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) 
{
	{
		// public virtual bool IsDebugEnabled { get; protected set; }
		bool L_0 = __this->___U3CIsDebugEnabledU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_IsDebugEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_set_IsDebugEnabled_m3C1053D78B1D1919249AE1012433E889BEA02DAC (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public virtual bool IsDebugEnabled { get; protected set; }
		bool L_0 = ___value0;
		__this->___U3CIsDebugEnabledU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_DTDebugContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36* TriangulationContext_get_DTDebugContext_mA17E0C26062DC7E004F53FC5726639F1BFA45CFE (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DTSweepDebugContext DTDebugContext { get { return DebugContext as DTSweepDebugContext; } }
		TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF* L_0;
		L_0 = TriangulationContext_get_DebugContext_m23CB67610F79453B5BF342ED323324FDF67F9F96_inline(__this, NULL);
		return ((DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36*)IsInstClass((RuntimeObject*)L_0, DTSweepDebugContext_tF589B51BEB215A28E3ADB3B2582CF24F802A7D36_il2cpp_TypeInfo_var));
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext__ctor_mD7C328562CD049D1AD791D51FFD41808353B029D (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7FE690CC3514D8246B03B1E7815960030669018B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEBE46FB3137F198A07FCDCD86E9192F0BDCF0435_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9DC390849BA500451557578B04CA56F022B76A2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly List<DelaunayTriangle> Triangles = new List<DelaunayTriangle>();
		List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8* L_0 = (List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8*)il2cpp_codegen_object_new(List_1_tD19D4B2A41DEBE89A22A8BD2C046E6A624A3BEC8_il2cpp_TypeInfo_var);
		List_1__ctor_mEBE46FB3137F198A07FCDCD86E9192F0BDCF0435(L_0, List_1__ctor_mEBE46FB3137F198A07FCDCD86E9192F0BDCF0435_RuntimeMethod_var);
		__this->___Triangles_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Triangles_1), (void*)L_0);
		// public readonly List<TriangulationPoint> Points = new List<TriangulationPoint>();
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_1 = (List_1_t9DC390849BA500451557578B04CA56F022B76A2B*)il2cpp_codegen_object_new(List_1_t9DC390849BA500451557578B04CA56F022B76A2B_il2cpp_TypeInfo_var);
		List_1__ctor_m7FE690CC3514D8246B03B1E7815960030669018B(L_1, List_1__ctor_m7FE690CC3514D8246B03B1E7815960030669018B_RuntimeMethod_var);
		__this->___Points_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Points_2), (void*)L_1);
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext::.ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationDebugContext__ctor_m8F35A8940859AC28DC4D462BB314F61567204EDA (TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF* __this, TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* ___tcx0, const RuntimeMethod* method) 
{
	{
		// public TriangulationDebugContext(TriangulationContext tcx) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _tcx = tcx;
		TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* L_0 = ___tcx0;
		__this->____tcx_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tcx_0), (void*)L_0);
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
// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint> UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::get_Edges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2* TriangulationPoint_get_Edges_m727DF4F3A45513F80246773E13FA8B8909E864BD (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* __this, const RuntimeMethod* method) 
{
	{
		// public List<DTSweepConstraint> Edges { get; private set; }
		List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2* L_0 = __this->___U3CEdgesU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::set_Edges(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint_set_Edges_m9C2561A4DA140E813FA71BF1EFEAAA9924DA9F02 (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* __this, List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<DTSweepConstraint> Edges { get; private set; }
		List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2* L_0 = ___value0;
		__this->___U3CEdgesU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEdgesU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::.ctor(System.Double,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint__ctor_m597CD937EAE5EEFB7F00F2480610423B84E89D15 (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* __this, double ___x0, double ___y1, int32_t ___index2, const RuntimeMethod* method) 
{
	{
		// public TriangulationPoint( double x, double y, int index = INSERTED_INDEX) { X=x; Y=y; Index = index; }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public TriangulationPoint( double x, double y, int index = INSERTED_INDEX) { X=x; Y=y; Index = index; }
		double L_0 = ___x0;
		__this->___X_3 = L_0;
		// public TriangulationPoint( double x, double y, int index = INSERTED_INDEX) { X=x; Y=y; Index = index; }
		double L_1 = ___y1;
		__this->___Y_4 = L_1;
		// public TriangulationPoint( double x, double y, int index = INSERTED_INDEX) { X=x; Y=y; Index = index; }
		int32_t L_2 = ___index2;
		__this->___Index_5 = L_2;
		// public TriangulationPoint( double x, double y, int index = INSERTED_INDEX) { X=x; Y=y; Index = index; }
		return;
	}
}
// System.String UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TriangulationPoint_ToString_m3F464D7BB6E9B48D6942CFB85208824D00836222 (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "[" + X + "," + Y + "]";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		double* L_3 = (&__this->___X_3);
		String_t* L_4;
		L_4 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339(L_3, NULL);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		ArrayElementTypeCheck (L_5, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		double* L_7 = (&__this->___Y_4);
		String_t* L_8;
		L_8 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339(L_7, NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		ArrayElementTypeCheck (L_9, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		String_t* L_10;
		L_10 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		return L_10;
	}
}
// System.Single UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::get_Xf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TriangulationPoint_get_Xf_m8EE4B8A81FC44AFB78A417E62C1A3E423D28AC71 (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* __this, const RuntimeMethod* method) 
{
	{
		// public float Xf { get { return (float)X; } set { X=value; } }
		double L_0 = __this->___X_3;
		return ((float)L_0);
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::set_Xf(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint_set_Xf_m74F2EF8E4BB9AC2CCF129A6CF8D7D2D0A867EE9C (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Xf { get { return (float)X; } set { X=value; } }
		float L_0 = ___value0;
		__this->___X_3 = ((double)L_0);
		// public float Xf { get { return (float)X; } set { X=value; } }
		return;
	}
}
// System.Single UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::get_Yf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TriangulationPoint_get_Yf_m3919A2D6CE94BCB4F5A6E062772890FD1E29E0C8 (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* __this, const RuntimeMethod* method) 
{
	{
		// public float Yf { get { return (float)Y; } set { Y=value; } }
		double L_0 = __this->___Y_4;
		return ((float)L_0);
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::set_Yf(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint_set_Yf_m997A59681374072F3420BAF3540EC64E005818F6 (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Yf { get { return (float)Y; } set { Y=value; } }
		float L_0 = ___value0;
		__this->___Y_4 = ((double)L_0);
		// public float Yf { get { return (float)Y; } set { Y=value; } }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::AddEdge(UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint_AddEdge_m7A02756B3EC9F87E6DDD555D319C59900641507A (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* __this, DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m54D819D8FE66ECD9F2A235A929C1D70CAA688E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB6CFA6AA5DED1145A9094DF5D552D9B588FF2684_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Edges == null) Edges = new List<DTSweepConstraint>();
		List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2* L_0;
		L_0 = TriangulationPoint_get_Edges_m727DF4F3A45513F80246773E13FA8B8909E864BD_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (Edges == null) Edges = new List<DTSweepConstraint>();
		List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2* L_1 = (List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2*)il2cpp_codegen_object_new(List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2_il2cpp_TypeInfo_var);
		List_1__ctor_mB6CFA6AA5DED1145A9094DF5D552D9B588FF2684(L_1, List_1__ctor_mB6CFA6AA5DED1145A9094DF5D552D9B588FF2684_RuntimeMethod_var);
		TriangulationPoint_set_Edges_m9C2561A4DA140E813FA71BF1EFEAAA9924DA9F02_inline(__this, L_1, NULL);
	}

IL_0013:
	{
		// Edges.Add(e);
		List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2* L_2;
		L_2 = TriangulationPoint_get_Edges_m727DF4F3A45513F80246773E13FA8B8909E864BD_inline(__this, NULL);
		DTSweepConstraint_t598178E749B7C8E0DC8F29C2692522A8A96C665A* L_3 = ___e0;
		List_1_Add_m54D819D8FE66ECD9F2A235A929C1D70CAA688E83_inline(L_2, L_3, List_1_Add_m54D819D8FE66ECD9F2A235A929C1D70CAA688E83_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::get_HasEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationPoint_get_HasEdges_m416A9901C620DE3F2F7D5EAC3355FD3F084B7027 (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasEdges { get { return Edges != null; } }
		List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2* L_0;
		L_0 = TriangulationPoint_get_Edges_m727DF4F3A45513F80246773E13FA8B8909E864BD_inline(__this, NULL);
		return (bool)((!(((RuntimeObject*)(List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
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
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::SmartIncircle(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationUtil_SmartIncircle_m86295D46F926C6A802DE6363D586FDCDE2947C28 (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pa0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pb1, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pc2, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pd3, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	{
		// double pdx = pd.X;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = ___pd3;
		double L_1 = L_0->___X_3;
		V_0 = L_1;
		// double pdy = pd.Y;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2 = ___pd3;
		double L_3 = L_2->___Y_4;
		V_1 = L_3;
		// double adx = pa.X - pdx;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_4 = ___pa0;
		double L_5 = L_4->___X_3;
		double L_6 = V_0;
		V_2 = ((double)il2cpp_codegen_subtract(L_5, L_6));
		// double ady = pa.Y - pdy;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_7 = ___pa0;
		double L_8 = L_7->___Y_4;
		double L_9 = V_1;
		V_3 = ((double)il2cpp_codegen_subtract(L_8, L_9));
		// double bdx = pb.X - pdx;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_10 = ___pb1;
		double L_11 = L_10->___X_3;
		double L_12 = V_0;
		V_4 = ((double)il2cpp_codegen_subtract(L_11, L_12));
		// double bdy = pb.Y - pdy;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_13 = ___pb1;
		double L_14 = L_13->___Y_4;
		double L_15 = V_1;
		V_5 = ((double)il2cpp_codegen_subtract(L_14, L_15));
		// double adxbdy = adx * bdy;
		double L_16 = V_2;
		double L_17 = V_5;
		// double bdxady = bdx * ady;
		double L_18 = V_4;
		double L_19 = V_3;
		V_6 = ((double)il2cpp_codegen_multiply(L_18, L_19));
		// double oabd = adxbdy - bdxady;
		double L_20 = V_6;
		V_7 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_16, L_17)), L_20));
		// if (oabd <= 0) return false;
		double L_21 = V_7;
		if ((!(((double)L_21) <= ((double)(0.0)))))
		{
			goto IL_0052;
		}
	}
	{
		// if (oabd <= 0) return false;
		return (bool)0;
	}

IL_0052:
	{
		// double cdx = pc.X - pdx;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_22 = ___pc2;
		double L_23 = L_22->___X_3;
		double L_24 = V_0;
		V_8 = ((double)il2cpp_codegen_subtract(L_23, L_24));
		// double cdy = pc.Y - pdy;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_25 = ___pc2;
		double L_26 = L_25->___Y_4;
		double L_27 = V_1;
		V_9 = ((double)il2cpp_codegen_subtract(L_26, L_27));
		// double cdxady = cdx * ady;
		double L_28 = V_8;
		double L_29 = V_3;
		// double adxcdy = adx * cdy;
		double L_30 = V_2;
		double L_31 = V_9;
		V_10 = ((double)il2cpp_codegen_multiply(L_30, L_31));
		// double ocad = cdxady - adxcdy;
		double L_32 = V_10;
		V_11 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_28, L_29)), L_32));
		// if (ocad <= 0) return false;
		double L_33 = V_11;
		if ((!(((double)L_33) <= ((double)(0.0)))))
		{
			goto IL_0084;
		}
	}
	{
		// if (ocad <= 0) return false;
		return (bool)0;
	}

IL_0084:
	{
		// double bdxcdy = bdx * cdy;
		double L_34 = V_4;
		double L_35 = V_9;
		V_12 = ((double)il2cpp_codegen_multiply(L_34, L_35));
		// double cdxbdy = cdx * bdy;
		double L_36 = V_8;
		double L_37 = V_5;
		V_13 = ((double)il2cpp_codegen_multiply(L_36, L_37));
		// double alift = adx * adx + ady * ady;
		double L_38 = V_2;
		double L_39 = V_2;
		double L_40 = V_3;
		double L_41 = V_3;
		// double blift = bdx * bdx + bdy * bdy;
		double L_42 = V_4;
		double L_43 = V_4;
		double L_44 = V_5;
		double L_45 = V_5;
		V_14 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_42, L_43)), ((double)il2cpp_codegen_multiply(L_44, L_45))));
		// double clift = cdx * cdx + cdy * cdy;
		double L_46 = V_8;
		double L_47 = V_8;
		double L_48 = V_9;
		double L_49 = V_9;
		V_15 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_46, L_47)), ((double)il2cpp_codegen_multiply(L_48, L_49))));
		// double det = alift * (bdxcdy - cdxbdy) + blift * ocad + clift * oabd;
		double L_50 = V_12;
		double L_51 = V_13;
		double L_52 = V_14;
		double L_53 = V_11;
		double L_54 = V_15;
		double L_55 = V_7;
		// return det > 0;
		return (bool)((((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_38, L_39)), ((double)il2cpp_codegen_multiply(L_40, L_41)))), ((double)il2cpp_codegen_subtract(L_50, L_51)))), ((double)il2cpp_codegen_multiply(L_52, L_53)))), ((double)il2cpp_codegen_multiply(L_54, L_55))))) > ((double)(0.0)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::InScanArea(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationUtil_InScanArea_mCFD6C361EDDDF32F4B8515E5ABB534063CB6BFA3 (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pa0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pb1, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pc2, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pd3, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	{
		// double pdx = pd.X;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = ___pd3;
		double L_1 = L_0->___X_3;
		V_0 = L_1;
		// double pdy = pd.Y;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2 = ___pd3;
		double L_3 = L_2->___Y_4;
		V_1 = L_3;
		// double adx = pa.X - pdx;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_4 = ___pa0;
		double L_5 = L_4->___X_3;
		double L_6 = V_0;
		V_2 = ((double)il2cpp_codegen_subtract(L_5, L_6));
		// double ady = pa.Y - pdy;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_7 = ___pa0;
		double L_8 = L_7->___Y_4;
		double L_9 = V_1;
		V_3 = ((double)il2cpp_codegen_subtract(L_8, L_9));
		// double bdx = pb.X - pdx;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_10 = ___pb1;
		double L_11 = L_10->___X_3;
		double L_12 = V_0;
		V_4 = ((double)il2cpp_codegen_subtract(L_11, L_12));
		// double bdy = pb.Y - pdy;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_13 = ___pb1;
		double L_14 = L_13->___Y_4;
		double L_15 = V_1;
		V_5 = ((double)il2cpp_codegen_subtract(L_14, L_15));
		// double adxbdy = adx * bdy;
		double L_16 = V_2;
		double L_17 = V_5;
		// double bdxady = bdx * ady;
		double L_18 = V_4;
		double L_19 = V_3;
		V_6 = ((double)il2cpp_codegen_multiply(L_18, L_19));
		// double oabd = adxbdy - bdxady;
		double L_20 = V_6;
		// if (oabd <= 0) {
		if ((!(((double)((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_16, L_17)), L_20))) <= ((double)(0.0)))))
		{
			goto IL_004e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_004e:
	{
		// double cdx = pc.X - pdx;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_21 = ___pc2;
		double L_22 = L_21->___X_3;
		double L_23 = V_0;
		// double cdy = pc.Y - pdy;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_24 = ___pc2;
		double L_25 = L_24->___Y_4;
		double L_26 = V_1;
		V_7 = ((double)il2cpp_codegen_subtract(L_25, L_26));
		// double cdxady = cdx * ady;
		double L_27 = V_3;
		// double adxcdy = adx * cdy;
		double L_28 = V_2;
		double L_29 = V_7;
		V_8 = ((double)il2cpp_codegen_multiply(L_28, L_29));
		// double ocad = cdxady - adxcdy;
		double L_30 = V_8;
		// if (ocad <= 0) {
		if ((!(((double)((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_22, L_23)), L_27)), L_30))) <= ((double)(0.0)))))
		{
			goto IL_0078;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0078:
	{
		// return true;
		return (bool)1;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.Orientation UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::Orient2d(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangulationUtil_Orient2d_m2B5B81643AAADE1CB5DFD0053EDD46FBA7395BDD (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pa0, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pb1, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___pc2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		// double detleft = (pa.X - pc.X) * (pb.Y - pc.Y);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = ___pa0;
		double L_1 = L_0->___X_3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_2 = ___pc2;
		double L_3 = L_2->___X_3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_4 = ___pb1;
		double L_5 = L_4->___Y_4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_6 = ___pc2;
		double L_7 = L_6->___Y_4;
		// double detright = (pa.Y - pc.Y) * (pb.X - pc.X);
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_8 = ___pa0;
		double L_9 = L_8->___Y_4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_10 = ___pc2;
		double L_11 = L_10->___Y_4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_12 = ___pb1;
		double L_13 = L_12->___X_3;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_14 = ___pc2;
		double L_15 = L_14->___X_3;
		V_0 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_9, L_11)), ((double)il2cpp_codegen_subtract(L_13, L_15))));
		// double val = detleft - detright;
		double L_16 = V_0;
		V_1 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1, L_3)), ((double)il2cpp_codegen_subtract(L_5, L_7)))), L_16));
		// if (val > -EPSILON && val < EPSILON) {
		double L_17 = V_1;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		double L_18 = ((TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_StaticFields*)il2cpp_codegen_static_fields_for(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var))->___EPSILON_0;
		if ((!(((double)L_17) > ((double)((-L_18))))))
		{
			goto IL_004d;
		}
	}
	{
		double L_19 = V_1;
		il2cpp_codegen_runtime_class_init_inline(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		double L_20 = ((TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_StaticFields*)il2cpp_codegen_static_fields_for(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var))->___EPSILON_0;
		if ((!(((double)L_19) < ((double)L_20))))
		{
			goto IL_004d;
		}
	}
	{
		// return Orientation.Collinear;
		return (int32_t)(2);
	}

IL_004d:
	{
		// } else if (val > 0) {
		double L_21 = V_1;
		if ((!(((double)L_21) > ((double)(0.0)))))
		{
			goto IL_005b;
		}
	}
	{
		// return Orientation.CCW;
		return (int32_t)(1);
	}

IL_005b:
	{
		// return Orientation.CW;
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationUtil__ctor_mBA3F09D1FB79AE4DA06FD0267EA40584E87A01FB (TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationUtil__cctor_mD3D42C9DF8D62B28368F30332123B2677A98D147 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static double EPSILON = 1e-12;
		((TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_StaticFields*)il2cpp_codegen_static_fields_for(TriangulationUtil_t1CA74174E369426489F46D5F7B232D5F359FA183_il2cpp_TypeInfo_var))->___EPSILON_0 = (9.9999999999999998E-13);
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
// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> UnityEngine.ProBuilder.Poly2Tri.PointGenerator::UniformDistribution(System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9DC390849BA500451557578B04CA56F022B76A2B* PointGenerator_UniformDistribution_m070DF4E11B35EB72A262D4AC86F33C686A829441 (int32_t ___n0, double ___scale1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE9F03103B8FC2E56F54D8D5FCA5F2F466AE622C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7FE690CC3514D8246B03B1E7815960030669018B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9DC390849BA500451557578B04CA56F022B76A2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointGenerator_t6FDB0C44B9B42A5674AD9F2A037D3CF88F3A603E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t9DC390849BA500451557578B04CA56F022B76A2B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// List<TriangulationPoint> points = new List<TriangulationPoint>();
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_0 = (List_1_t9DC390849BA500451557578B04CA56F022B76A2B*)il2cpp_codegen_object_new(List_1_t9DC390849BA500451557578B04CA56F022B76A2B_il2cpp_TypeInfo_var);
		List_1__ctor_m7FE690CC3514D8246B03B1E7815960030669018B(L_0, List_1__ctor_m7FE690CC3514D8246B03B1E7815960030669018B_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < n; i++) points.Add(new TriangulationPoint(scale * (0.5 - RNG.NextDouble()), scale * (0.5 - RNG.NextDouble()), i));
		V_1 = 0;
		goto IL_0046;
	}

IL_000a:
	{
		// for (int i = 0; i < n; i++) points.Add(new TriangulationPoint(scale * (0.5 - RNG.NextDouble()), scale * (0.5 - RNG.NextDouble()), i));
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_1 = V_0;
		double L_2 = ___scale1;
		il2cpp_codegen_runtime_class_init_inline(PointGenerator_t6FDB0C44B9B42A5674AD9F2A037D3CF88F3A603E_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_3 = ((PointGenerator_t6FDB0C44B9B42A5674AD9F2A037D3CF88F3A603E_StaticFields*)il2cpp_codegen_static_fields_for(PointGenerator_t6FDB0C44B9B42A5674AD9F2A037D3CF88F3A603E_il2cpp_TypeInfo_var))->___RNG_0;
		double L_4;
		L_4 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_3);
		double L_5 = ___scale1;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_6 = ((PointGenerator_t6FDB0C44B9B42A5674AD9F2A037D3CF88F3A603E_StaticFields*)il2cpp_codegen_static_fields_for(PointGenerator_t6FDB0C44B9B42A5674AD9F2A037D3CF88F3A603E_il2cpp_TypeInfo_var))->___RNG_0;
		double L_7;
		L_7 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_6);
		int32_t L_8 = V_1;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_9 = (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)il2cpp_codegen_object_new(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC_il2cpp_TypeInfo_var);
		TriangulationPoint__ctor_m597CD937EAE5EEFB7F00F2480610423B84E89D15(L_9, ((double)il2cpp_codegen_multiply(L_2, ((double)il2cpp_codegen_subtract((0.5), L_4)))), ((double)il2cpp_codegen_multiply(L_5, ((double)il2cpp_codegen_subtract((0.5), L_7)))), L_8, NULL);
		List_1_Add_mE9F03103B8FC2E56F54D8D5FCA5F2F466AE622C4_inline(L_1, L_9, List_1_Add_mE9F03103B8FC2E56F54D8D5FCA5F2F466AE622C4_RuntimeMethod_var);
		// for (int i = 0; i < n; i++) points.Add(new TriangulationPoint(scale * (0.5 - RNG.NextDouble()), scale * (0.5 - RNG.NextDouble()), i));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0046:
	{
		// for (int i = 0; i < n; i++) points.Add(new TriangulationPoint(scale * (0.5 - RNG.NextDouble()), scale * (0.5 - RNG.NextDouble()), i));
		int32_t L_11 = V_1;
		int32_t L_12 = ___n0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000a;
		}
	}
	{
		// return points;
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_13 = V_0;
		return L_13;
	}
}
// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> UnityEngine.ProBuilder.Poly2Tri.PointGenerator::UniformGrid(System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9DC390849BA500451557578B04CA56F022B76A2B* PointGenerator_UniformGrid_mA257D43CF87B162D72A52120BFC83AE80E4CAAE6 (int32_t ___n0, double ___scale1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE9F03103B8FC2E56F54D8D5FCA5F2F466AE622C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7FE690CC3514D8246B03B1E7815960030669018B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9DC390849BA500451557578B04CA56F022B76A2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	List_1_t9DC390849BA500451557578B04CA56F022B76A2B* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// double x = 0;
		V_0 = (0.0);
		// double size = scale / n;
		double L_0 = ___scale1;
		int32_t L_1 = ___n0;
		V_1 = ((double)(L_0/((double)L_1)));
		// double halfScale = 0.5 * scale;
		double L_2 = ___scale1;
		V_2 = ((double)il2cpp_codegen_multiply((0.5), L_2));
		// List<TriangulationPoint> points = new List<TriangulationPoint>();
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_3 = (List_1_t9DC390849BA500451557578B04CA56F022B76A2B*)il2cpp_codegen_object_new(List_1_t9DC390849BA500451557578B04CA56F022B76A2B_il2cpp_TypeInfo_var);
		List_1__ctor_m7FE690CC3514D8246B03B1E7815960030669018B(L_3, List_1__ctor_m7FE690CC3514D8246B03B1E7815960030669018B_RuntimeMethod_var);
		V_3 = L_3;
		// for (int i = 0; i < n + 1; i++) {
		V_4 = 0;
		goto IL_005b;
	}

IL_0026:
	{
		// x = halfScale - i * size;
		double L_4 = V_2;
		int32_t L_5 = V_4;
		double L_6 = V_1;
		V_0 = ((double)il2cpp_codegen_subtract(L_4, ((double)il2cpp_codegen_multiply(((double)L_5), L_6))));
		// for (int j = 0; j < n + 1; j++) points.Add(new TriangulationPoint(x, halfScale - j * size, i));
		V_5 = 0;
		goto IL_004e;
	}

IL_0033:
	{
		// for (int j = 0; j < n + 1; j++) points.Add(new TriangulationPoint(x, halfScale - j * size, i));
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_7 = V_3;
		double L_8 = V_0;
		double L_9 = V_2;
		int32_t L_10 = V_5;
		double L_11 = V_1;
		int32_t L_12 = V_4;
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_13 = (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC*)il2cpp_codegen_object_new(TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC_il2cpp_TypeInfo_var);
		TriangulationPoint__ctor_m597CD937EAE5EEFB7F00F2480610423B84E89D15(L_13, L_8, ((double)il2cpp_codegen_subtract(L_9, ((double)il2cpp_codegen_multiply(((double)L_10), L_11)))), L_12, NULL);
		List_1_Add_mE9F03103B8FC2E56F54D8D5FCA5F2F466AE622C4_inline(L_7, L_13, List_1_Add_mE9F03103B8FC2E56F54D8D5FCA5F2F466AE622C4_RuntimeMethod_var);
		// for (int j = 0; j < n + 1; j++) points.Add(new TriangulationPoint(x, halfScale - j * size, i));
		int32_t L_14 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004e:
	{
		// for (int j = 0; j < n + 1; j++) points.Add(new TriangulationPoint(x, halfScale - j * size, i));
		int32_t L_15 = V_5;
		int32_t L_16 = ___n0;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)il2cpp_codegen_add(L_16, 1)))))
		{
			goto IL_0033;
		}
	}
	{
		// for (int i = 0; i < n + 1; i++) {
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_005b:
	{
		// for (int i = 0; i < n + 1; i++) {
		int32_t L_18 = V_4;
		int32_t L_19 = ___n0;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)il2cpp_codegen_add(L_19, 1)))))
		{
			goto IL_0026;
		}
	}
	{
		// return points;
		List_1_t9DC390849BA500451557578B04CA56F022B76A2B* L_20 = V_3;
		return L_20;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointGenerator__ctor_mF040D68412C3ECA91FC197908A7D8D185FC52E6D (PointGenerator_t6FDB0C44B9B42A5674AD9F2A037D3CF88F3A603E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointGenerator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointGenerator__cctor_mFAB3C221C79EEFE5CA0C56562F13B98563325531 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointGenerator_t6FDB0C44B9B42A5674AD9F2A037D3CF88F3A603E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly System.Random RNG = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		((PointGenerator_t6FDB0C44B9B42A5674AD9F2A037D3CF88F3A603E_StaticFields*)il2cpp_codegen_static_fields_for(PointGenerator_t6FDB0C44B9B42A5674AD9F2A037D3CF88F3A603E_il2cpp_TypeInfo_var))->___RNG_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PointGenerator_t6FDB0C44B9B42A5674AD9F2A037D3CF88F3A603E_StaticFields*)il2cpp_codegen_static_fields_for(PointGenerator_t6FDB0C44B9B42A5674AD9F2A037D3CF88F3A603E_il2cpp_TypeInfo_var))->___RNG_0), (void*)L_0);
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
// UnityEngine.ProBuilder.Poly2Tri.Polygon UnityEngine.ProBuilder.Poly2Tri.PolygonGenerator::RandomCircleSweep(System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* PolygonGenerator_RandomCircleSweep_m9B284CF5BF63851C2001300661A0A6AF5584404D (double ___scale0, int32_t ___vertexCount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* V_0 = NULL;
	PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC* V_1 = NULL;
	double V_2 = 0.0;
	int32_t V_3 = 0;
	double G_B9_0 = 0.0;
	double G_B12_0 = 0.0;
	{
		// double radius = scale / 4;
		double L_0 = ___scale0;
		V_2 = ((double)(L_0/(4.0)));
		// points = new PolygonPoint[vertexCount];
		int32_t L_1 = ___vertexCount1;
		PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC* L_2 = (PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC*)(PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC*)SZArrayNew(PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		// for (int i = 0; i < vertexCount; i++) {
		V_3 = 0;
		goto IL_0128;
	}

IL_001a:
	{
		// if (i % 250 == 0) {
		int32_t L_3 = V_3;
		if (((int32_t)(L_3%((int32_t)250))))
		{
			goto IL_0048;
		}
	}
	{
		// radius += scale / 2 * (0.5 - RNG.NextDouble());
		double L_4 = V_2;
		double L_5 = ___scale0;
		il2cpp_codegen_runtime_class_init_inline(PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_6 = ((PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_StaticFields*)il2cpp_codegen_static_fields_for(PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_il2cpp_TypeInfo_var))->___RNG_0;
		double L_7;
		L_7 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_6);
		V_2 = ((double)il2cpp_codegen_add(L_4, ((double)il2cpp_codegen_multiply(((double)(L_5/(2.0))), ((double)il2cpp_codegen_subtract((0.5), L_7))))));
		goto IL_0099;
	}

IL_0048:
	{
		// } else if (i % 50 == 0) {
		int32_t L_8 = V_3;
		if (((int32_t)(L_8%((int32_t)50))))
		{
			goto IL_0073;
		}
	}
	{
		// radius += scale / 5 * (0.5 - RNG.NextDouble());
		double L_9 = V_2;
		double L_10 = ___scale0;
		il2cpp_codegen_runtime_class_init_inline(PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_11 = ((PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_StaticFields*)il2cpp_codegen_static_fields_for(PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_il2cpp_TypeInfo_var))->___RNG_0;
		double L_12;
		L_12 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_11);
		V_2 = ((double)il2cpp_codegen_add(L_9, ((double)il2cpp_codegen_multiply(((double)(L_10/(5.0))), ((double)il2cpp_codegen_subtract((0.5), L_12))))));
		goto IL_0099;
	}

IL_0073:
	{
		// radius += 25 * scale / vertexCount * (0.5 - RNG.NextDouble());
		double L_13 = V_2;
		double L_14 = ___scale0;
		int32_t L_15 = ___vertexCount1;
		il2cpp_codegen_runtime_class_init_inline(PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_16 = ((PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_StaticFields*)il2cpp_codegen_static_fields_for(PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_il2cpp_TypeInfo_var))->___RNG_0;
		double L_17;
		L_17 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_16);
		V_2 = ((double)il2cpp_codegen_add(L_13, ((double)il2cpp_codegen_multiply(((double)(((double)il2cpp_codegen_multiply((25.0), L_14))/((double)L_15))), ((double)il2cpp_codegen_subtract((0.5), L_17))))));
	}

IL_0099:
	{
		// radius = radius > scale / 2 ? scale / 2 : radius;
		double L_18 = V_2;
		double L_19 = ___scale0;
		if ((((double)L_18) > ((double)((double)(L_19/(2.0))))))
		{
			goto IL_00aa;
		}
	}
	{
		double L_20 = V_2;
		G_B9_0 = L_20;
		goto IL_00b5;
	}

IL_00aa:
	{
		double L_21 = ___scale0;
		G_B9_0 = ((double)(L_21/(2.0)));
	}

IL_00b5:
	{
		V_2 = G_B9_0;
		// radius = radius < scale / 10 ? scale / 10 : radius;
		double L_22 = V_2;
		double L_23 = ___scale0;
		if ((((double)L_22) < ((double)((double)(L_23/(10.0))))))
		{
			goto IL_00c7;
		}
	}
	{
		double L_24 = V_2;
		G_B12_0 = L_24;
		goto IL_00d2;
	}

IL_00c7:
	{
		double L_25 = ___scale0;
		G_B12_0 = ((double)(L_25/(10.0)));
	}

IL_00d2:
	{
		V_2 = G_B12_0;
		// } while (radius < scale / 10 || radius > scale / 2);
		double L_26 = V_2;
		double L_27 = ___scale0;
		if ((((double)L_26) < ((double)((double)(L_27/(10.0))))))
		{
			goto IL_001a;
		}
	}
	{
		double L_28 = V_2;
		double L_29 = ___scale0;
		if ((((double)L_28) > ((double)((double)(L_29/(2.0))))))
		{
			goto IL_001a;
		}
	}
	{
		// point = new PolygonPoint(radius * Math.Cos((PI_2 * i) / vertexCount),
		//                           radius * Math.Sin((PI_2 * i) / vertexCount), i);
		double L_30 = V_2;
		il2cpp_codegen_runtime_class_init_inline(PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_il2cpp_TypeInfo_var);
		double L_31 = ((PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_StaticFields*)il2cpp_codegen_static_fields_for(PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_il2cpp_TypeInfo_var))->___PI_2_1;
		int32_t L_32 = V_3;
		int32_t L_33 = ___vertexCount1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_34;
		L_34 = cos(((double)(((double)il2cpp_codegen_multiply(L_31, ((double)L_32)))/((double)L_33))));
		double L_35 = V_2;
		double L_36 = ((PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_StaticFields*)il2cpp_codegen_static_fields_for(PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_il2cpp_TypeInfo_var))->___PI_2_1;
		int32_t L_37 = V_3;
		int32_t L_38 = ___vertexCount1;
		double L_39;
		L_39 = sin(((double)(((double)il2cpp_codegen_multiply(L_36, ((double)L_37)))/((double)L_38))));
		int32_t L_40 = V_3;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_41 = (PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332*)il2cpp_codegen_object_new(PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332_il2cpp_TypeInfo_var);
		PolygonPoint__ctor_m9EC32A7B351C4F32B021948CCB19A357030040C2(L_41, ((double)il2cpp_codegen_multiply(L_30, L_34)), ((double)il2cpp_codegen_multiply(L_35, L_39)), L_40, NULL);
		V_0 = L_41;
		// points[i] = point;
		PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC* L_42 = V_1;
		int32_t L_43 = V_3;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_44 = V_0;
		ArrayElementTypeCheck (L_42, L_44);
		(L_42)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43), (PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332*)L_44);
		// for (int i = 0; i < vertexCount; i++) {
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0128:
	{
		// for (int i = 0; i < vertexCount; i++) {
		int32_t L_46 = V_3;
		int32_t L_47 = ___vertexCount1;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_001a;
		}
	}
	{
		// return new Polygon(points);
		PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC* L_48 = V_1;
		Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* L_49 = (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50*)il2cpp_codegen_object_new(Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50_il2cpp_TypeInfo_var);
		Polygon__ctor_mB15F1908A1148E484BACDCDF7A8B8354EE0591A5(L_49, L_48, NULL);
		return L_49;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.Polygon UnityEngine.ProBuilder.Poly2Tri.PolygonGenerator::RandomCircleSweep2(System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* PolygonGenerator_RandomCircleSweep2_m86CF179AA6FEBF00ABB8BFF60F72E05FCB94F825 (double ___scale0, int32_t ___vertexCount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* V_0 = NULL;
	PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC* V_1 = NULL;
	double V_2 = 0.0;
	int32_t V_3 = 0;
	double G_B4_0 = 0.0;
	double G_B7_0 = 0.0;
	{
		// double radius = scale / 4;
		double L_0 = ___scale0;
		V_2 = ((double)(L_0/(4.0)));
		// points = new PolygonPoint[vertexCount];
		int32_t L_1 = ___vertexCount1;
		PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC* L_2 = (PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC*)(PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC*)SZArrayNew(PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		// for (int i = 0; i < vertexCount; i++) {
		V_3 = 0;
		goto IL_00c6;
	}

IL_001a:
	{
		// radius += scale / 5 * (0.5 - RNG.NextDouble());
		double L_3 = V_2;
		double L_4 = ___scale0;
		il2cpp_codegen_runtime_class_init_inline(PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_5 = ((PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_StaticFields*)il2cpp_codegen_static_fields_for(PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_il2cpp_TypeInfo_var))->___RNG_0;
		double L_6;
		L_6 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_5);
		V_2 = ((double)il2cpp_codegen_add(L_3, ((double)il2cpp_codegen_multiply(((double)(L_4/(5.0))), ((double)il2cpp_codegen_subtract((0.5), L_6))))));
		// radius = radius > scale / 2 ? scale / 2 : radius;
		double L_7 = V_2;
		double L_8 = ___scale0;
		if ((((double)L_7) > ((double)((double)(L_8/(2.0))))))
		{
			goto IL_004e;
		}
	}
	{
		double L_9 = V_2;
		G_B4_0 = L_9;
		goto IL_0059;
	}

IL_004e:
	{
		double L_10 = ___scale0;
		G_B4_0 = ((double)(L_10/(2.0)));
	}

IL_0059:
	{
		V_2 = G_B4_0;
		// radius = radius < scale / 10 ? scale / 10 : radius;
		double L_11 = V_2;
		double L_12 = ___scale0;
		if ((((double)L_11) < ((double)((double)(L_12/(10.0))))))
		{
			goto IL_006b;
		}
	}
	{
		double L_13 = V_2;
		G_B7_0 = L_13;
		goto IL_0076;
	}

IL_006b:
	{
		double L_14 = ___scale0;
		G_B7_0 = ((double)(L_14/(10.0)));
	}

IL_0076:
	{
		V_2 = G_B7_0;
		// } while (radius < scale / 10 || radius > scale / 2);
		double L_15 = V_2;
		double L_16 = ___scale0;
		if ((((double)L_15) < ((double)((double)(L_16/(10.0))))))
		{
			goto IL_001a;
		}
	}
	{
		double L_17 = V_2;
		double L_18 = ___scale0;
		if ((((double)L_17) > ((double)((double)(L_18/(2.0))))))
		{
			goto IL_001a;
		}
	}
	{
		// point = new PolygonPoint(radius * Math.Cos((PI_2 * i) / vertexCount),
		//                           radius * Math.Sin((PI_2 * i) / vertexCount), i);
		double L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_il2cpp_TypeInfo_var);
		double L_20 = ((PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_StaticFields*)il2cpp_codegen_static_fields_for(PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_il2cpp_TypeInfo_var))->___PI_2_1;
		int32_t L_21 = V_3;
		int32_t L_22 = ___vertexCount1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_23;
		L_23 = cos(((double)(((double)il2cpp_codegen_multiply(L_20, ((double)L_21)))/((double)L_22))));
		double L_24 = V_2;
		double L_25 = ((PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_StaticFields*)il2cpp_codegen_static_fields_for(PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_il2cpp_TypeInfo_var))->___PI_2_1;
		int32_t L_26 = V_3;
		int32_t L_27 = ___vertexCount1;
		double L_28;
		L_28 = sin(((double)(((double)il2cpp_codegen_multiply(L_25, ((double)L_26)))/((double)L_27))));
		int32_t L_29 = V_3;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_30 = (PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332*)il2cpp_codegen_object_new(PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332_il2cpp_TypeInfo_var);
		PolygonPoint__ctor_m9EC32A7B351C4F32B021948CCB19A357030040C2(L_30, ((double)il2cpp_codegen_multiply(L_19, L_23)), ((double)il2cpp_codegen_multiply(L_24, L_28)), L_29, NULL);
		V_0 = L_30;
		// points[i] = point;
		PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC* L_31 = V_1;
		int32_t L_32 = V_3;
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_33 = V_0;
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32), (PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332*)L_33);
		// for (int i = 0; i < vertexCount; i++) {
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00c6:
	{
		// for (int i = 0; i < vertexCount; i++) {
		int32_t L_35 = V_3;
		int32_t L_36 = ___vertexCount1;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_001a;
		}
	}
	{
		// return new Polygon(points);
		PolygonPointU5BU5D_t819A54C5C3FD5EA29D56C0F54B9D60A8928220CC* L_37 = V_1;
		Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50* L_38 = (Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50*)il2cpp_codegen_object_new(Polygon_tE28A18B03D2BEFD9B436BC98245C798601AF6A50_il2cpp_TypeInfo_var);
		Polygon__ctor_mB15F1908A1148E484BACDCDF7A8B8354EE0591A5(L_38, L_37, NULL);
		return L_38;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PolygonGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolygonGenerator__ctor_m9417AF13BD52308D432CCA6F074A3C5046D2F90A (PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PolygonGenerator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolygonGenerator__cctor_m252B957933C0FFDEEF0C889BF02B09A0CBE52EE0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly System.Random RNG = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		((PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_StaticFields*)il2cpp_codegen_static_fields_for(PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_il2cpp_TypeInfo_var))->___RNG_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_StaticFields*)il2cpp_codegen_static_fields_for(PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_il2cpp_TypeInfo_var))->___RNG_0), (void*)L_0);
		// private static double PI_2 = 2.0 * Math.PI;
		((PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_StaticFields*)il2cpp_codegen_static_fields_for(PolygonGenerator_tCEA4E03561FAAD471C57E17A06348BDDDC43E4E2_il2cpp_TypeInfo_var))->___PI_2_1 = (6.2831853071795862);
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
// Conversion methods for marshalling of: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
IL2CPP_EXTERN_C void FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E_marshal_pinvoke(const FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E& unmarshaled, FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E_marshaled_pinvoke& marshaled)
{
	marshaled.____0_0 = static_cast<int32_t>(unmarshaled.____0_0);
	marshaled.____1_1 = static_cast<int32_t>(unmarshaled.____1_1);
	marshaled.____2_2 = static_cast<int32_t>(unmarshaled.____2_2);
}
IL2CPP_EXTERN_C void FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E_marshal_pinvoke_back(const FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E_marshaled_pinvoke& marshaled, FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E& unmarshaled)
{
	bool unmarshaled_0_temp_0 = false;
	unmarshaled_0_temp_0 = static_cast<bool>(marshaled.____0_0);
	unmarshaled.____0_0 = unmarshaled_0_temp_0;
	bool unmarshaled_1_temp_1 = false;
	unmarshaled_1_temp_1 = static_cast<bool>(marshaled.____1_1);
	unmarshaled.____1_1 = unmarshaled_1_temp_1;
	bool unmarshaled_2_temp_2 = false;
	unmarshaled_2_temp_2 = static_cast<bool>(marshaled.____2_2);
	unmarshaled.____2_2 = unmarshaled_2_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
IL2CPP_EXTERN_C void FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E_marshal_pinvoke_cleanup(FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
IL2CPP_EXTERN_C void FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E_marshal_com(const FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E& unmarshaled, FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E_marshaled_com& marshaled)
{
	marshaled.____0_0 = static_cast<int32_t>(unmarshaled.____0_0);
	marshaled.____1_1 = static_cast<int32_t>(unmarshaled.____1_1);
	marshaled.____2_2 = static_cast<int32_t>(unmarshaled.____2_2);
}
IL2CPP_EXTERN_C void FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E_marshal_com_back(const FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E_marshaled_com& marshaled, FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E& unmarshaled)
{
	bool unmarshaled_0_temp_0 = false;
	unmarshaled_0_temp_0 = static_cast<bool>(marshaled.____0_0);
	unmarshaled.____0_0 = unmarshaled_0_temp_0;
	bool unmarshaled_1_temp_1 = false;
	unmarshaled_1_temp_1 = static_cast<bool>(marshaled.____1_1);
	unmarshaled.____1_1 = unmarshaled_1_temp_1;
	bool unmarshaled_2_temp_2 = false;
	unmarshaled_2_temp_2 = static_cast<bool>(marshaled.____2_2);
	unmarshaled.____2_2 = unmarshaled_2_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
IL2CPP_EXTERN_C void FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E_marshal_com_cleanup(FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4 (FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0014;
			}
			case 1:
			{
				goto IL_001b;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0029;
	}

IL_0014:
	{
		// case 0: return _0;
		bool L_1 = __this->____0_0;
		return L_1;
	}

IL_001b:
	{
		// case 1: return _1;
		bool L_2 = __this->____1_1;
		return L_2;
	}

IL_0022:
	{
		// case 2: return _2;
		bool L_3 = __this->____2_2;
		return L_3;
	}

IL_0029:
	{
		// default: throw new IndexOutOfRangeException();
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_4 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  bool FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E*>(__this + _offset);
	bool _returnValue;
	_returnValue = FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::set_Item(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3 (FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* __this, int32_t ___index0, bool ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0014;
			}
			case 1:
			{
				goto IL_001c;
			}
			case 2:
			{
				goto IL_0024;
			}
		}
	}
	{
		goto IL_002c;
	}

IL_0014:
	{
		// case 0: _0 = value; break;
		bool L_1 = ___value1;
		__this->____0_0 = L_1;
		// case 0: _0 = value; break;
		return;
	}

IL_001c:
	{
		// case 1: _1 = value; break;
		bool L_2 = ___value1;
		__this->____1_1 = L_2;
		// case 1: _1 = value; break;
		return;
	}

IL_0024:
	{
		// case 2: _2 = value; break;
		bool L_3 = ___value1;
		__this->____2_2 = L_3;
		// case 2: _2 = value; break;
		return;
	}

IL_002c:
	{
		// default: throw new IndexOutOfRangeException();
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_4 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, bool ___value1, const RuntimeMethod* method)
{
	FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E*>(__this + _offset);
	FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3(_thisAdjusted, ___index0, ___value1, method);
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::Contains(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FixedBitArray3_Contains_m422E29E9B878D3ABC3684F48E4D4A7C5CAE2D0BA (FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* __this, bool ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for ( int i = 0 ; i < 3 ; ++i ) if ( this[i]==value ) return true;
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		// for ( int i = 0 ; i < 3 ; ++i ) if ( this[i]==value ) return true;
		int32_t L_0 = V_0;
		bool L_1;
		L_1 = FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4(__this, L_0, NULL);
		bool L_2 = ___value0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0010;
		}
	}
	{
		// for ( int i = 0 ; i < 3 ; ++i ) if ( this[i]==value ) return true;
		return (bool)1;
	}

IL_0010:
	{
		// for ( int i = 0 ; i < 3 ; ++i ) if ( this[i]==value ) return true;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0014:
	{
		// for ( int i = 0 ; i < 3 ; ++i ) if ( this[i]==value ) return true;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool FixedBitArray3_Contains_m422E29E9B878D3ABC3684F48E4D4A7C5CAE2D0BA_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E*>(__this + _offset);
	bool _returnValue;
	_returnValue = FixedBitArray3_Contains_m422E29E9B878D3ABC3684F48E4D4A7C5CAE2D0BA(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::IndexOf(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FixedBitArray3_IndexOf_m175C83B15360BDFD5FB13D20BA69271D66C1F49A (FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* __this, bool ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for ( int i = 0 ; i < 3 ; ++i ) if ( this[i]==value ) return i;
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		// for ( int i = 0 ; i < 3 ; ++i ) if ( this[i]==value ) return i;
		int32_t L_0 = V_0;
		bool L_1;
		L_1 = FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4(__this, L_0, NULL);
		bool L_2 = ___value0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0010;
		}
	}
	{
		// for ( int i = 0 ; i < 3 ; ++i ) if ( this[i]==value ) return i;
		int32_t L_3 = V_0;
		return L_3;
	}

IL_0010:
	{
		// for ( int i = 0 ; i < 3 ; ++i ) if ( this[i]==value ) return i;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0014:
	{
		// for ( int i = 0 ; i < 3 ; ++i ) if ( this[i]==value ) return i;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// return -1;
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t FixedBitArray3_IndexOf_m175C83B15360BDFD5FB13D20BA69271D66C1F49A_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = FixedBitArray3_IndexOf_m175C83B15360BDFD5FB13D20BA69271D66C1F49A(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedBitArray3_Clear_mF3519208B98A783170334C2431FFCBD3BDA726E5 (FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// _0=_1=_2=false;
		int32_t L_0 = 0;
		V_0 = (bool)L_0;
		__this->____2_2 = (bool)L_0;
		bool L_1 = V_0;
		bool L_2 = L_1;
		V_0 = L_2;
		__this->____1_1 = L_2;
		bool L_3 = V_0;
		__this->____0_0 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FixedBitArray3_Clear_mF3519208B98A783170334C2431FFCBD3BDA726E5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E*>(__this + _offset);
	FixedBitArray3_Clear_mF3519208B98A783170334C2431FFCBD3BDA726E5(_thisAdjusted, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::Clear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedBitArray3_Clear_m0ED1BAF55E774590CFFA89081C07CE4A80913FCB (FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* __this, bool ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for ( int i = 0 ; i < 3 ; ++i ) if ( this[i]==value ) this[i] = false;
		V_0 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		// for ( int i = 0 ; i < 3 ; ++i ) if ( this[i]==value ) this[i] = false;
		int32_t L_0 = V_0;
		bool L_1;
		L_1 = FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4(__this, L_0, NULL);
		bool L_2 = ___value0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0016;
		}
	}
	{
		// for ( int i = 0 ; i < 3 ; ++i ) if ( this[i]==value ) this[i] = false;
		int32_t L_3 = V_0;
		FixedBitArray3_set_Item_mAEC9709C8E7F4748915A3789A3C4A29F4A6947C3(__this, L_3, (bool)0, NULL);
	}

IL_0016:
	{
		// for ( int i = 0 ; i < 3 ; ++i ) if ( this[i]==value ) this[i] = false;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001a:
	{
		// for ( int i = 0 ; i < 3 ; ++i ) if ( this[i]==value ) this[i] = false;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FixedBitArray3_Clear_m0ED1BAF55E774590CFFA89081C07CE4A80913FCB_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E*>(__this + _offset);
	FixedBitArray3_Clear_m0ED1BAF55E774590CFFA89081C07CE4A80913FCB(_thisAdjusted, ___value0, method);
}
// System.Collections.Generic.IEnumerable`1<System.Boolean> UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::Enumerate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_Enumerate_mFCC94DB3557FE0EE1E36AF63450D30F9D69C292B (FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408* L_0 = (U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408*)il2cpp_codegen_object_new(U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408_il2cpp_TypeInfo_var);
		U3CEnumerateU3Ed__10__ctor_mC29A4BB3265EB1547A06ADDDBA3D1DD17B2CF0CA(L_0, ((int32_t)-2), NULL);
		U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408* L_1 = L_0;
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E L_2 = (*(FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E*)__this);
		L_1->___U3CU3E3__U3CU3E4__this_4 = L_2;
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FixedBitArray3_Enumerate_mFCC94DB3557FE0EE1E36AF63450D30F9D69C292B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = FixedBitArray3_Enumerate_mFCC94DB3557FE0EE1E36AF63450D30F9D69C292B(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerator`1<System.Boolean> UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_GetEnumerator_m3E4F30DF7D75884E5B8EC7A17CC6EAD0549F1E91 (FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IEnumerator<bool> GetEnumerator() { return Enumerate().GetEnumerator(); }
		RuntimeObject* L_0;
		L_0 = FixedBitArray3_Enumerate_mFCC94DB3557FE0EE1E36AF63450D30F9D69C292B(__this, NULL);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Boolean>::GetEnumerator() */, IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FixedBitArray3_GetEnumerator_m3E4F30DF7D75884E5B8EC7A17CC6EAD0549F1E91_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = FixedBitArray3_GetEnumerator_m3E4F30DF7D75884E5B8EC7A17CC6EAD0549F1E91(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.IEnumerator UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_System_Collections_IEnumerable_GetEnumerator_mD407A0EAABF2A9F73A8BF1261EE27A638CCE6747 (FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* __this, const RuntimeMethod* method) 
{
	{
		// IEnumerator IEnumerable.GetEnumerator() { return GetEnumerator(); }
		RuntimeObject* L_0;
		L_0 = FixedBitArray3_GetEnumerator_m3E4F30DF7D75884E5B8EC7A17CC6EAD0549F1E91(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FixedBitArray3_System_Collections_IEnumerable_GetEnumerator_mD407A0EAABF2A9F73A8BF1261EE27A638CCE6747_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = FixedBitArray3_System_Collections_IEnumerable_GetEnumerator_mD407A0EAABF2A9F73A8BF1261EE27A638CCE6747(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__10__ctor_mC29A4BB3265EB1547A06ADDDBA3D1DD17B2CF0CA (U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__10_System_IDisposable_Dispose_mD72E60CE566812B532FE349E1B45F82A5912321B (U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__10_MoveNext_mCE4653E77A57648719178AA170F8A88685839529 (U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for ( int i=0 ; i<3 ; ++i ) yield return this[i];
		__this->___U3CiU3E5__2_5 = 0;
		goto IL_0057;
	}

IL_0020:
	{
		// for ( int i=0 ; i<3 ; ++i ) yield return this[i];
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E* L_3 = (&__this->___U3CU3E4__this_3);
		int32_t L_4 = __this->___U3CiU3E5__2_5;
		bool L_5;
		L_5 = FixedBitArray3_get_Item_mB30D45B31DCDD1992E61D2EC24A61375E1699CB4(L_3, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0040:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for ( int i=0 ; i<3 ; ++i ) yield return this[i];
		int32_t L_6 = __this->___U3CiU3E5__2_5;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		__this->___U3CiU3E5__2_5 = L_7;
	}

IL_0057:
	{
		// for ( int i=0 ; i<3 ; ++i ) yield return this[i];
		int32_t L_8 = __this->___U3CiU3E5__2_5;
		if ((((int32_t)L_8) < ((int32_t)3)))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::System.Collections.Generic.IEnumerator<System.Boolean>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_BooleanU3E_get_Current_mE23F831CCA0F51A2E3CB75274525F0A13C73ED73 (U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__10_System_Collections_IEnumerator_Reset_m69B89B35DE2194C69FF985E4FE54C807B66732F2 (U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnumerateU3Ed__10_System_Collections_IEnumerator_Reset_m69B89B35DE2194C69FF985E4FE54C807B66732F2_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__10_System_Collections_IEnumerator_get_Current_m2D58B00BD2FDCD951F65196F90B2BB97EB8A1C02 (U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___U3CU3E2__current_1;
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Boolean> UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::System.Collections.Generic.IEnumerable<System.Boolean>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__10_System_Collections_Generic_IEnumerableU3CSystem_BooleanU3E_GetEnumerator_mAB1FC4D08E4B8F3AAA4F8209DC7D082E330049FD (U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408* L_3 = (U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408*)il2cpp_codegen_object_new(U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408_il2cpp_TypeInfo_var);
		U3CEnumerateU3Ed__10__ctor_mC29A4BB3265EB1547A06ADDDBA3D1DD17B2CF0CA(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408* L_4 = V_0;
		FixedBitArray3_tF6B8AF43C4B7C23D61EF1981CF7BA3519E20D77E L_5 = __this->___U3CU3E3__U3CU3E4__this_4;
		L_4->___U3CU3E4__this_3 = L_5;
		U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__10_System_Collections_IEnumerable_GetEnumerator_mBF070C0DDF4B15B4A52586E3312BF6D4BDDAAF1A (U3CEnumerateU3Ed__10_tAAE822F3D969118BCCEFA3DCA78D5391314C7408* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CEnumerateU3Ed__10_System_Collections_Generic_IEnumerableU3CSystem_BooleanU3E_GetEnumerator_mAB1FC4D08E4B8F3AAA4F8209DC7D082E330049FD(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PolygonSet_get_Polygons_m5D4E7E58CD64A56270CF83C0E8544F924A7AD097_inline (PolygonSet_t5F5953714FCF415C18CBD74B9B10425832578526* __this, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<Polygon> Polygons { get { return _polygons; } }
		List_1_t09268444D33C688E9180D99FFF84ADE1CBD1C3FC* L_0 = __this->____polygons_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* PolygonPoint_get_Next_m2F3BF4CDBBAC577A25F45BA429A5024CF71EDC01_inline (PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* __this, const RuntimeMethod* method) 
{
	{
		// public PolygonPoint Next { get; set; }
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_0 = __this->___U3CNextU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PolygonPoint_set_Next_mBE4F9B811E2D887E87082ACE0D1D28A0623915A4_inline (PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* __this, PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* ___value0, const RuntimeMethod* method) 
{
	{
		// public PolygonPoint Next { get; set; }
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_0 = ___value0;
		__this->___U3CNextU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNextU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PolygonPoint_set_Previous_m7F6ACCA339AE8CCDEC6E468A49CD056EEF2A6FAF_inline (PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* __this, PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* ___value0, const RuntimeMethod* method) 
{
	{
		// public PolygonPoint Previous { get; set; }
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_0 = ___value0;
		__this->___U3CPreviousU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPreviousU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* PolygonPoint_get_Previous_m13E87872F1A6A9C1F61CB2799095DBCE6CE79F96_inline (PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* __this, const RuntimeMethod* method) 
{
	{
		// public PolygonPoint Previous { get; set; }
		PolygonPoint_t36D55F4945EB51AC03AE9D5961DAF07AEF7FB332* L_0 = __this->___U3CPreviousU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* AdvancingFront_FindSearchNode_m55D2612ABFD4E9ECCF4A1D2A1B2FF6B378C789B6_inline (AdvancingFront_t09C4189E96A8F76B9C350F1322A912B557BC8561* __this, double ___x0, const RuntimeMethod* method) 
{
	{
		// return Search;
		AdvancingFrontNode_tD76F0BCA5F400BDEE329F744AFDDF21B8684C555* L_0 = __this->___Search_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_TriangulationMode_mC9F2694F48A7760DCE953389DC8C86614FCCA6A9_inline (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) 
{
	{
		// public TriangulationMode TriangulationMode { get; protected set; }
		int32_t L_0 = __this->___U3CTriangulationModeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2* TriangulationPoint_get_Edges_m727DF4F3A45513F80246773E13FA8B8909E864BD_inline (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* __this, const RuntimeMethod* method) 
{
	{
		// public List<DTSweepConstraint> Edges { get; private set; }
		List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2* L_0 = __this->___U3CEdgesU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TriangulationContext_get_IsDebugEnabled_mF059C9C7BECA9A7EE5E1AB0B5F074A029BFAFC4B_inline (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) 
{
	{
		// public virtual bool IsDebugEnabled { get; protected set; }
		bool L_0 = __this->___U3CIsDebugEnabledU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF* TriangulationContext_get_DebugContext_m23CB67610F79453B5BF342ED323324FDF67F9F96_inline (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) 
{
	{
		// public TriangulationDebugContext DebugContext { get; protected set; }
		TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF* L_0 = __this->___U3CDebugContextU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_DebugContext_mBD19D3C963F0E9ED60E979F0098F93618313DF53_inline (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF* ___value0, const RuntimeMethod* method) 
{
	{
		// public TriangulationDebugContext DebugContext { get; protected set; }
		TriangulationDebugContext_tC0C1FB789F31EE5104BCE2CEAB79EE485B9772FF* L_0 = ___value0;
		__this->___U3CDebugContextU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDebugContextU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_IsDebugEnabled_m3C1053D78B1D1919249AE1012433E889BEA02DAC_inline (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public virtual bool IsDebugEnabled { get; protected set; }
		bool L_0 = ___value0;
		__this->___U3CIsDebugEnabledU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DelaunayTriangle_get_IsInterior_m42EE54145AAF8F8137DAE428DF9B34544EDEF3F2_inline (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsInterior { get; set; }
		bool L_0 = __this->___U3CIsInteriorU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DelaunayTriangle_set_IsInterior_m940C4269B9329980002506B2326BBACEFAFCEAFB_inline (DelaunayTriangle_t0D8B78469A9C6EE71A234C4B8A1ADE8134770582* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsInterior { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsInteriorU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TriangulationContext_get_Triangulatable_mDC9FC5DDE6D25F81887B82987810B6CF77C10762_inline (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) 
{
	{
		// public Triangulatable Triangulatable { get; private set; }
		RuntimeObject* L_0 = __this->___U3CTriangulatableU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* DTSweepContext_get_Tail_m9B1B4495CE20D44FB0F16FCB631CA68FB03544A0_inline (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, const RuntimeMethod* method) 
{
	{
		// public TriangulationPoint Tail { get; set; }
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = __this->___U3CTailU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* DTSweepContext_get_Head_m219A91F763AB1514F9ACB07F87D67076D2EC6493_inline (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, const RuntimeMethod* method) 
{
	{
		// public TriangulationPoint Head { get; set; }
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = __this->___U3CHeadU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DTSweepContext_set_Head_m66CD236E964FEBDDC2234B28E93F3E3B375E256F_inline (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___value0, const RuntimeMethod* method) 
{
	{
		// public TriangulationPoint Head { get; set; }
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = ___value0;
		__this->___U3CHeadU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHeadU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DTSweepContext_set_Tail_mBE3CCA1D3DEC584E874A9A83E47A6EA72B0DA288_inline (DTSweepContext_t569F963E1E5B6F81420AEFFF87AB7A1981BB6145* __this, TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* ___value0, const RuntimeMethod* method) 
{
	{
		// public TriangulationPoint Tail { get; set; }
		TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* L_0 = ___value0;
		__this->___U3CTailU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTailU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstrainedPointSet_set_EdgeIndex_m4C2E9F38C89CF940E370C54D8716AA90928C2A8E_inline (ConstrainedPointSet_tF7EC96684E0FFB09F8C8AA5A7EC3309E55313E70* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) 
{
	{
		// public int[] EdgeIndex { get; private set; }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___value0;
		__this->___U3CEdgeIndexU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEdgeIndexU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PointSet_get_Points_m0F297DF803621D09BA621B512C807A6FEA4DFBEE_inline (PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* __this, const RuntimeMethod* method) 
{
	{
		// public IList<TriangulationPoint> Points { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPointsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ConstrainedPointSet_get_EdgeIndex_mC44B0220E20BBC36F29AAABC8BAB366888021D91_inline (ConstrainedPointSet_tF7EC96684E0FFB09F8C8AA5A7EC3309E55313E70* __this, const RuntimeMethod* method) 
{
	{
		// public int[] EdgeIndex { get; private set; }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___U3CEdgeIndexU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointSet_set_Points_m416AFA305B03A95AEAA7F65B839240E095CEE4B2_inline (PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IList<TriangulationPoint> Points { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CPointsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPointsU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PointSet_get_Triangles_m9D21B762D23B2BE9E324EEB326EC1E042811F338_inline (PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* __this, const RuntimeMethod* method) 
{
	{
		// public IList<DelaunayTriangle> Triangles { get; private set; }
		RuntimeObject* L_0 = __this->___U3CTrianglesU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointSet_set_Triangles_m9F16DDC6C1B9BC407CFBD3C98C90660DEA467366_inline (PointSet_tF3DA7F8A5E5D89DAD130A03951D09C744785BF22* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IList<DelaunayTriangle> Triangles { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CTrianglesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTrianglesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_StepCount_mBCE2A72A243B279CC12D8E31BC296681440B3FA1_inline (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, const RuntimeMethod* method) 
{
	{
		// public int StepCount { get; private set; }
		int32_t L_0 = __this->___U3CStepCountU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_StepCount_m01197774AF89D76DE680E429ADB0F50BA77CEF46_inline (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int StepCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CStepCountU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_Triangulatable_mE747794031053D5739164E85F751E84FAA393ED7_inline (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public Triangulatable Triangulatable { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CTriangulatableU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTriangulatableU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_TriangulationMode_m7EF0A1774FEF974C65A78C97C4F118BADAB7F5B7_inline (TriangulationContext_t9E576D70156CBA9DC2DD62EBD97EA8B492E58843* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public TriangulationMode TriangulationMode { get; protected set; }
		int32_t L_0 = ___value0;
		__this->___U3CTriangulationModeU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationPoint_set_Edges_m9C2561A4DA140E813FA71BF1EFEAAA9924DA9F02_inline (TriangulationPoint_tFFFDC0D413476C5F6777C66CB732B8410B1CD6FC* __this, List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<DTSweepConstraint> Edges { get; private set; }
		List_1_tA64CCBCBACFB2537E8F7994486ED2F829D1C7FA2* L_0 = ___value0;
		__this->___U3CEdgesU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEdgesU3Ek__BackingField_2), (void*)L_0);
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
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}

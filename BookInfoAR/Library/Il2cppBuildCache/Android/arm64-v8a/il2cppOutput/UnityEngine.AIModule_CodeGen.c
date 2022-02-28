#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngine.AI.NavMeshPath::.ctor()
extern void NavMeshPath__ctor_m0B7FA10A8709A07D67DC34E2B1263218058A892E (void);
// 0x00000002 System.Void UnityEngine.AI.NavMeshPath::Finalize()
extern void NavMeshPath_Finalize_m5EFE68A7EC561B422FF53F3D23A3F36A6774C02D (void);
// 0x00000003 System.IntPtr UnityEngine.AI.NavMeshPath::InitializeNavMeshPath()
extern void NavMeshPath_InitializeNavMeshPath_m32DFF3F0374B71A31D91E74620E2FC57F891D884 (void);
// 0x00000004 System.Void UnityEngine.AI.NavMeshPath::DestroyNavMeshPath(System.IntPtr)
extern void NavMeshPath_DestroyNavMeshPath_m0FDC5217D082B8887F70888B9BD142615FB0AE87 (void);
// 0x00000005 UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::CalculateCornersInternal()
extern void NavMeshPath_CalculateCornersInternal_m68AB380B3B4234B5B16DBB16E7E6AF6CB21A4366 (void);
// 0x00000006 System.Void UnityEngine.AI.NavMeshPath::CalculateCorners()
extern void NavMeshPath_CalculateCorners_m4BE2AEE818ED9BF09B59913DD1A856DAD2BABCEA (void);
// 0x00000007 UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::get_corners()
extern void NavMeshPath_get_corners_mBE959A717B33143A8C2CC48114028AD55929A6AD (void);
// 0x00000008 System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern void NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747 (void);
// 0x00000009 System.Boolean UnityEngine.AI.NavMeshAgent::get_pathPending()
extern void NavMeshAgent_get_pathPending_mA015EA650D0BE842B15BDF2C8F344F3F2DE0828D (void);
// 0x0000000A UnityEngine.AI.NavMeshPath UnityEngine.AI.NavMeshAgent::get_path()
extern void NavMeshAgent_get_path_m53AFAF48CCA3F1095351E23E5FDA3A978B0B04D1 (void);
// 0x0000000B System.Void UnityEngine.AI.NavMeshAgent::CopyPathTo(UnityEngine.AI.NavMeshPath)
extern void NavMeshAgent_CopyPathTo_mB161E7C67B0A219C4E88D122DD81B3098CA80C47 (void);
// 0x0000000C System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination_Injected(UnityEngine.Vector3&)
extern void NavMeshAgent_SetDestination_Injected_m41607AA111EE126BBBDCDDF76B7523B0BC369D9A (void);
// 0x0000000D System.Void UnityEngine.AI.NavMesh::Internal_CallOnNavMeshPreUpdate()
extern void NavMesh_Internal_CallOnNavMeshPreUpdate_m5C0CEF0AEF92B6BE0368AA5ABC02B4CCDEFA9AD5 (void);
// 0x0000000E System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::.ctor(System.Object,System.IntPtr)
extern void OnNavMeshPreUpdate__ctor_mDBB85480C3EA968112EB3B356486B9C9FF387BD4 (void);
// 0x0000000F System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
extern void OnNavMeshPreUpdate_Invoke_m8950FEDFD3E07B272ED469FD1911AA98C60FC28D (void);
// 0x00000010 System.IAsyncResult UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::BeginInvoke(System.AsyncCallback,System.Object)
extern void OnNavMeshPreUpdate_BeginInvoke_m8B7FF1B745E38190A2B744775602508E77B291FA (void);
// 0x00000011 System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::EndInvoke(System.IAsyncResult)
extern void OnNavMeshPreUpdate_EndInvoke_mA263F64ADF01540E24327DDB24BD334539B1B4D2 (void);
static Il2CppMethodPointer s_methodPointers[17] = 
{
	NavMeshPath__ctor_m0B7FA10A8709A07D67DC34E2B1263218058A892E,
	NavMeshPath_Finalize_m5EFE68A7EC561B422FF53F3D23A3F36A6774C02D,
	NavMeshPath_InitializeNavMeshPath_m32DFF3F0374B71A31D91E74620E2FC57F891D884,
	NavMeshPath_DestroyNavMeshPath_m0FDC5217D082B8887F70888B9BD142615FB0AE87,
	NavMeshPath_CalculateCornersInternal_m68AB380B3B4234B5B16DBB16E7E6AF6CB21A4366,
	NavMeshPath_CalculateCorners_m4BE2AEE818ED9BF09B59913DD1A856DAD2BABCEA,
	NavMeshPath_get_corners_mBE959A717B33143A8C2CC48114028AD55929A6AD,
	NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747,
	NavMeshAgent_get_pathPending_mA015EA650D0BE842B15BDF2C8F344F3F2DE0828D,
	NavMeshAgent_get_path_m53AFAF48CCA3F1095351E23E5FDA3A978B0B04D1,
	NavMeshAgent_CopyPathTo_mB161E7C67B0A219C4E88D122DD81B3098CA80C47,
	NavMeshAgent_SetDestination_Injected_m41607AA111EE126BBBDCDDF76B7523B0BC369D9A,
	NavMesh_Internal_CallOnNavMeshPreUpdate_m5C0CEF0AEF92B6BE0368AA5ABC02B4CCDEFA9AD5,
	OnNavMeshPreUpdate__ctor_mDBB85480C3EA968112EB3B356486B9C9FF387BD4,
	OnNavMeshPreUpdate_Invoke_m8950FEDFD3E07B272ED469FD1911AA98C60FC28D,
	OnNavMeshPreUpdate_BeginInvoke_m8B7FF1B745E38190A2B744775602508E77B291FA,
	OnNavMeshPreUpdate_EndInvoke_mA263F64ADF01540E24327DDB24BD334539B1B4D2,
};
static const int32_t s_InvokerIndices[17] = 
{
	2940,
	2940,
	4441,
	4370,
	2881,
	2940,
	2881,
	2109,
	2909,
	2881,
	2358,
	1999,
	4463,
	1352,
	2940,
	995,
	2358,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_AIModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_AIModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_AIModule_CodeGenModule = 
{
	"UnityEngine.AIModule.dll",
	17,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_AIModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};

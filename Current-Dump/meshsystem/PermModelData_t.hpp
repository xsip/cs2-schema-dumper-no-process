#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace PermModelData_t {
			 uintptr_t m_name = 0x0; // CUtlString
			 uintptr_t m_modelInfo = 0x8; // PermModelInfo_t
			 uintptr_t m_ExtParts = 0x60; // CUtlVector< PermModelExtPart_t >
			 uintptr_t m_refMeshes = 0x78; // CUtlVector< CStrongHandle< InfoForResourceTypeCRenderMesh > >
			 uintptr_t m_refMeshGroupMasks = 0x90; // CUtlVector< uint64 >
			 uintptr_t m_refPhysGroupMasks = 0xa8; // CUtlVector< uint64 >
			 uintptr_t m_refLODGroupMasks = 0xc0; // CUtlVector< uint8 >
			 uintptr_t m_lodGroupSwitchDistances = 0xd8; // CUtlVector< float32 >
			 uintptr_t m_refPhysicsData = 0xf0; // CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > >
			 uintptr_t m_refPhysicsHitboxData = 0x108; // CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > >
			 uintptr_t m_refAnimGroups = 0x120; // CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > >
			 uintptr_t m_refSequenceGroups = 0x138; // CUtlVector< CStrongHandle< InfoForResourceTypeCSequenceGroupData > >
			 uintptr_t m_meshGroups = 0x150; // CUtlVector< CUtlString >
			 uintptr_t m_materialGroups = 0x168; // CUtlVector< MaterialGroup_t >
			 uintptr_t m_nDefaultMeshGroupMask = 0x180; // uint64
			 uintptr_t m_modelSkeleton = 0x188; // ModelSkeletonData_t
			 uintptr_t m_remappingTable = 0x230; // CUtlVector< int16 >
			 uintptr_t m_remappingTableStarts = 0x248; // CUtlVector< uint16 >
			 uintptr_t m_boneFlexDrivers = 0x260; // CUtlVector< ModelBoneFlexDriver_t >
			 uintptr_t m_pModelConfigList = 0x278; // CModelConfigList*
			 uintptr_t m_BodyGroupsHiddenInTools = 0x280; // CUtlVector< CUtlString >
			 uintptr_t m_refAnimIncludeModels = 0x298; // CUtlVector< CStrongHandle< InfoForResourceTypeCModel > >
			 uintptr_t m_AnimatedMaterialAttributes = 0x2b0; // CUtlVector< PermModelDataAnimatedMaterialAttribute_t >
		}
	}
}

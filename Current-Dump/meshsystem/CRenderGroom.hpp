#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CRenderGroom {
			 uintptr_t m_hairs = 0x0; // CUtlVector< RenderHairStrandInfo_t >
			 uintptr_t m_hairPositionOffsets = 0x18; // CUtlVector< uint32 >
			 uintptr_t m_hSimParamsMat = 0x40; // CStrongHandleCopyable< InfoForResourceTypeIMaterial2 >
			 uintptr_t m_nSegmentsPerHairStrand = 0x48; // int32
			 uintptr_t m_nGuideHairCount = 0x4c; // int32
			 uintptr_t m_nHairCount = 0x50; // int32
			 uintptr_t m_nGroomGroupID = 0x54; // int32
			 uintptr_t m_nAttachBoneIdx = 0x58; // int32
			 uintptr_t m_nAttachMeshIdx = 0x5c; // int32
			 uintptr_t m_nAttachMeshDrawCallIdx = 0x60; // int32
			 uintptr_t m_bEnableSimulation = 0x64; // bool
		}
	}
}

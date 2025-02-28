#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CSkeletonInstance {
			 uintptr_t m_modelState = 0x170; // CModelState
			 uintptr_t m_bIsAnimationEnabled = 0x3a0; // bool
			 uintptr_t m_bUseParentRenderBounds = 0x3a1; // bool
			 uintptr_t m_bDisableSolidCollisionsForHierarchy = 0x3a2; // bool
			 uintptr_t m_bDirtyMotionType = 0x0; // bitfield:1
			 uintptr_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
			 uintptr_t m_materialGroup = 0x3a4; // CUtlStringToken
			 uintptr_t m_nHitboxSet = 0x3a8; // uint8
		}
	}
}

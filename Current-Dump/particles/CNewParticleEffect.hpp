#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace CNewParticleEffect {
			 uintptr_t m_pNext = 0x10; // CNewParticleEffect*
			 uintptr_t m_pPrev = 0x18; // CNewParticleEffect*
			 uintptr_t m_pParticles = 0x20; // IParticleCollection*
			 uintptr_t m_pDebugName = 0x28; // char*
			 uintptr_t m_bDontRemove = 0x0; // bitfield:1
			 uintptr_t m_bRemove = 0x0; // bitfield:1
			 uintptr_t m_bNeedsBBoxUpdate = 0x0; // bitfield:1
			 uintptr_t m_bIsFirstFrame = 0x0; // bitfield:1
			 uintptr_t m_bAutoUpdateBBox = 0x0; // bitfield:1
			 uintptr_t m_bAllocated = 0x0; // bitfield:1
			 uintptr_t m_bSimulate = 0x0; // bitfield:1
			 uintptr_t m_bShouldPerformCullCheck = 0x0; // bitfield:1
			 uintptr_t m_bForceNoDraw = 0x0; // bitfield:1
			 uintptr_t m_bShouldSave = 0x0; // bitfield:1
			 uintptr_t m_bDisableAggregation = 0x0; // bitfield:1
			 uintptr_t m_bShouldSimulateDuringGamePaused = 0x0; // bitfield:1
			 uintptr_t m_bShouldCheckFoW = 0x0; // bitfield:1
			 uintptr_t m_vSortOrigin = 0x40; // Vector
			 uintptr_t m_flScale = 0x4c; // float32
			 uintptr_t m_hOwner = 0x50; // PARTICLE_EHANDLE__*
			 uintptr_t m_pOwningParticleProperty = 0x58; // CParticleProperty*
			 uintptr_t m_flFreezeTransitionStart = 0x70; // float32
			 uintptr_t m_flFreezeTransitionDuration = 0x74; // float32
			 uintptr_t m_flFreezeTransitionOverride = 0x78; // float32
			 uintptr_t m_bFreezeTransitionActive = 0x7c; // bool
			 uintptr_t m_bFreezeTargetState = 0x7d; // bool
			 uintptr_t m_bCanFreeze = 0x7e; // bool
			 uintptr_t m_LastMin = 0x80; // Vector
			 uintptr_t m_LastMax = 0x8c; // Vector
			 uintptr_t m_nSplitScreenUser = 0x98; // CSplitScreenSlot
			 uintptr_t m_vecAggregationCenter = 0x9c; // Vector
			 uintptr_t m_RefCount = 0xc0; // int32
		}
	}
}

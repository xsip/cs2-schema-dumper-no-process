#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace CNewParticleEffect {
			 uintptr_t m_pNext = 0x10;
			 uintptr_t m_pPrev = 0x18;
			 uintptr_t m_pParticles = 0x20;
			 uintptr_t m_pDebugName = 0x28;
			 uintptr_t m_bDontRemove = 0x0;
			 uintptr_t m_bRemove = 0x0;
			 uintptr_t m_bNeedsBBoxUpdate = 0x0;
			 uintptr_t m_bIsFirstFrame = 0x0;
			 uintptr_t m_bAutoUpdateBBox = 0x0;
			 uintptr_t m_bAllocated = 0x0;
			 uintptr_t m_bSimulate = 0x0;
			 uintptr_t m_bShouldPerformCullCheck = 0x0;
			 uintptr_t m_bForceNoDraw = 0x0;
			 uintptr_t m_bShouldSave = 0x0;
			 uintptr_t m_bDisableAggregation = 0x0;
			 uintptr_t m_bShouldSimulateDuringGamePaused = 0x0;
			 uintptr_t m_bShouldCheckFoW = 0x0;
			 uintptr_t m_vSortOrigin = 0x40;
			 uintptr_t m_flScale = 0x4c;
			 uintptr_t m_hOwner = 0x50;
			 uintptr_t m_pOwningParticleProperty = 0x58;
			 uintptr_t m_flFreezeTransitionStart = 0x70;
			 uintptr_t m_flFreezeTransitionDuration = 0x74;
			 uintptr_t m_flFreezeTransitionOverride = 0x78;
			 uintptr_t m_bFreezeTransitionActive = 0x7c;
			 uintptr_t m_bFreezeTargetState = 0x7d;
			 uintptr_t m_bCanFreeze = 0x7e;
			 uintptr_t m_LastMin = 0x80;
			 uintptr_t m_LastMax = 0x8c;
			 uintptr_t m_nSplitScreenUser = 0x98;
			 uintptr_t m_vecAggregationCenter = 0x9c;
			 uintptr_t m_RefCount = 0xc0;
		}
	}
}

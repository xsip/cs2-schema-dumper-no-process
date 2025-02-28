#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CDynamicProp {
			 uintptr_t m_bCreateNavObstacle = 0xb60; // bool
			 uintptr_t m_bNavObstacleUpdatesOverridden = 0xb61; // bool
			 uintptr_t m_bUseHitboxesForRenderBox = 0xb62; // bool
			 uintptr_t m_bUseAnimGraph = 0xb63; // bool
			 uintptr_t m_pOutputAnimBegun = 0xb68; // CEntityIOOutput
			 uintptr_t m_pOutputAnimOver = 0xb90; // CEntityIOOutput
			 uintptr_t m_pOutputAnimLoopCycleOver = 0xbb8; // CEntityIOOutput
			 uintptr_t m_OnAnimReachedStart = 0xbe0; // CEntityIOOutput
			 uintptr_t m_OnAnimReachedEnd = 0xc08; // CEntityIOOutput
			 uintptr_t m_iszIdleAnim = 0xc30; // CUtlSymbolLarge
			 uintptr_t m_nIdleAnimLoopMode = 0xc38; // AnimLoopMode_t
			 uintptr_t m_bRandomizeCycle = 0xc3c; // bool
			 uintptr_t m_bStartDisabled = 0xc3d; // bool
			 uintptr_t m_bFiredStartEndOutput = 0xc3e; // bool
			 uintptr_t m_bForceNpcExclude = 0xc3f; // bool
			 uintptr_t m_bCreateNonSolid = 0xc40; // bool
			 uintptr_t m_bIsOverrideProp = 0xc41; // bool
			 uintptr_t m_iInitialGlowState = 0xc44; // int32
			 uintptr_t m_nGlowRange = 0xc48; // int32
			 uintptr_t m_nGlowRangeMin = 0xc4c; // int32
			 uintptr_t m_glowColor = 0xc50; // Color
			 uintptr_t m_nGlowTeam = 0xc54; // int32
		}
	}
}

#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_DynamicProp {
			 uintptr_t m_bUseHitboxesForRenderBox = 0x1110; // bool
			 uintptr_t m_bUseAnimGraph = 0x1111; // bool
			 uintptr_t m_pOutputAnimBegun = 0x1118; // CEntityIOOutput
			 uintptr_t m_pOutputAnimOver = 0x1140; // CEntityIOOutput
			 uintptr_t m_pOutputAnimLoopCycleOver = 0x1168; // CEntityIOOutput
			 uintptr_t m_OnAnimReachedStart = 0x1190; // CEntityIOOutput
			 uintptr_t m_OnAnimReachedEnd = 0x11b8; // CEntityIOOutput
			 uintptr_t m_iszIdleAnim = 0x11e0; // CUtlSymbolLarge
			 uintptr_t m_nIdleAnimLoopMode = 0x11e8; // AnimLoopMode_t
			 uintptr_t m_bRandomizeCycle = 0x11ec; // bool
			 uintptr_t m_bStartDisabled = 0x11ed; // bool
			 uintptr_t m_bFiredStartEndOutput = 0x11ee; // bool
			 uintptr_t m_bForceNpcExclude = 0x11ef; // bool
			 uintptr_t m_bCreateNonSolid = 0x11f0; // bool
			 uintptr_t m_bIsOverrideProp = 0x11f1; // bool
			 uintptr_t m_iInitialGlowState = 0x11f4; // int32
			 uintptr_t m_nGlowRange = 0x11f8; // int32
			 uintptr_t m_nGlowRangeMin = 0x11fc; // int32
			 uintptr_t m_glowColor = 0x1200; // Color
			 uintptr_t m_nGlowTeam = 0x1204; // int32
			 uintptr_t m_iCachedFrameCount = 0x1208; // int32
			 uintptr_t m_vecCachedRenderMins = 0x120c; // Vector
			 uintptr_t m_vecCachedRenderMaxs = 0x1218; // Vector
		}
	}
}

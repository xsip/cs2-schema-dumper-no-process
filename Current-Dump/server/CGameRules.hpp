#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CGameRules {
			 uintptr_t __m_pChainEntity = 0x8; // CNetworkVarChainer
			 uintptr_t m_szQuestName = 0x30; // char[128]
			 uintptr_t m_nQuestPhase = 0xb0; // int32
			 uintptr_t m_nTotalPausedTicks = 0xb4; // int32
			 uintptr_t m_nPauseStartTick = 0xb8; // int32
			 uintptr_t m_bGamePaused = 0xbc; // bool
		}
	}
}

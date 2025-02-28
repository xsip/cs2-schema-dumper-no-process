#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCommentarySystem {
			 uintptr_t m_bCommentaryConvarsChanging = 0x11;
			 uintptr_t m_bCommentaryEnabledMidGame = 0x12;
			 uintptr_t m_flNextTeleportTime = 0x14;
			 uintptr_t m_iTeleportStage = 0x18;
			 uintptr_t m_bCheatState = 0x1c;
			 uintptr_t m_bIsFirstSpawnGroupToLoad = 0x1d;
			 uintptr_t m_hCurrentNode = 0x38;
			 uintptr_t m_hActiveCommentaryNode = 0x3c;
			 uintptr_t m_hLastCommentaryNode = 0x40;
			 uintptr_t m_vecNodes = 0x48;
		}
	}
}

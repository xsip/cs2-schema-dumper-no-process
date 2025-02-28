#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCommentarySystem {
			 uintptr_t m_bCommentaryConvarsChanging = 0x11; // bool
			 uintptr_t m_bCommentaryEnabledMidGame = 0x12; // bool
			 uintptr_t m_flNextTeleportTime = 0x14; // GameTime_t
			 uintptr_t m_iTeleportStage = 0x18; // int32
			 uintptr_t m_bCheatState = 0x1c; // bool
			 uintptr_t m_bIsFirstSpawnGroupToLoad = 0x1d; // bool
			 uintptr_t m_hCurrentNode = 0x38; // CHandle< CPointCommentaryNode >
			 uintptr_t m_hActiveCommentaryNode = 0x3c; // CHandle< CPointCommentaryNode >
			 uintptr_t m_hLastCommentaryNode = 0x40; // CHandle< CPointCommentaryNode >
			 uintptr_t m_vecNodes = 0x48; // CUtlVector< CHandle< CPointCommentaryNode > >
		}
	}
}

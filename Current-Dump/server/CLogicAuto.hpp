#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CLogicAuto {
			 uintptr_t m_OnMapSpawn = 0x4e0; // CEntityIOOutput
			 uintptr_t m_OnDemoMapSpawn = 0x508; // CEntityIOOutput
			 uintptr_t m_OnNewGame = 0x530; // CEntityIOOutput
			 uintptr_t m_OnLoadGame = 0x558; // CEntityIOOutput
			 uintptr_t m_OnMapTransition = 0x580; // CEntityIOOutput
			 uintptr_t m_OnBackgroundMap = 0x5a8; // CEntityIOOutput
			 uintptr_t m_OnMultiNewMap = 0x5d0; // CEntityIOOutput
			 uintptr_t m_OnMultiNewRound = 0x5f8; // CEntityIOOutput
			 uintptr_t m_OnVREnabled = 0x620; // CEntityIOOutput
			 uintptr_t m_OnVRNotEnabled = 0x648; // CEntityIOOutput
			 uintptr_t m_globalstate = 0x670; // CUtlSymbolLarge
		}
	}
}

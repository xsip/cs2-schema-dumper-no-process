#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CInfoSpawnGroupLoadUnload {
			 uintptr_t m_OnSpawnGroupLoadStarted = 0x4e0; // CEntityIOOutput
			 uintptr_t m_OnSpawnGroupLoadFinished = 0x508; // CEntityIOOutput
			 uintptr_t m_OnSpawnGroupUnloadStarted = 0x530; // CEntityIOOutput
			 uintptr_t m_OnSpawnGroupUnloadFinished = 0x558; // CEntityIOOutput
			 uintptr_t m_iszSpawnGroupName = 0x580; // CUtlSymbolLarge
			 uintptr_t m_iszSpawnGroupFilterName = 0x588; // CUtlSymbolLarge
			 uintptr_t m_iszLandmarkName = 0x590; // CUtlSymbolLarge
			 uintptr_t m_sFixedSpawnGroupName = 0x598; // CUtlString
			 uintptr_t m_flTimeoutInterval = 0x5a0; // float32
			 uintptr_t m_bStreamingStarted = 0x5a4; // bool
			 uintptr_t m_bUnloadingStarted = 0x5a5; // bool
		}
	}
}

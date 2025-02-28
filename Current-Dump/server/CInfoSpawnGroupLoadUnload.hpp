#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CInfoSpawnGroupLoadUnload {
			 uintptr_t m_OnSpawnGroupLoadStarted = 0x4e0;
			 uintptr_t m_OnSpawnGroupLoadFinished = 0x508;
			 uintptr_t m_OnSpawnGroupUnloadStarted = 0x530;
			 uintptr_t m_OnSpawnGroupUnloadFinished = 0x558;
			 uintptr_t m_iszSpawnGroupName = 0x580;
			 uintptr_t m_iszSpawnGroupFilterName = 0x588;
			 uintptr_t m_iszLandmarkName = 0x590;
			 uintptr_t m_sFixedSpawnGroupName = 0x598;
			 uintptr_t m_flTimeoutInterval = 0x5a0;
			 uintptr_t m_bStreamingStarted = 0x5a4;
			 uintptr_t m_bUnloadingStarted = 0x5a5;
		}
	}
}

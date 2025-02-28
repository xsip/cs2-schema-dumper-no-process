#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CChangeLevel {
			 uintptr_t m_sMapName = 0x960; // CUtlString
			 uintptr_t m_sLandmarkName = 0x968; // CUtlString
			 uintptr_t m_OnChangeLevel = 0x970; // CEntityIOOutput
			 uintptr_t m_bTouched = 0x998; // bool
			 uintptr_t m_bNoTouch = 0x999; // bool
			 uintptr_t m_bNewChapter = 0x99a; // bool
			 uintptr_t m_bOnChangeLevelFired = 0x99b; // bool
		}
	}
}

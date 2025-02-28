#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBombTarget {
			 uintptr_t m_OnBombExplode = 0x960;
			 uintptr_t m_OnBombPlanted = 0x988;
			 uintptr_t m_OnBombDefused = 0x9b0;
			 uintptr_t m_bIsBombSiteB = 0x9d8;
			 uintptr_t m_bIsHeistBombTarget = 0x9d9;
			 uintptr_t m_bBombPlantedHere = 0x9da;
			 uintptr_t m_szMountTarget = 0x9e0;
			 uintptr_t m_hInstructorHint = 0x9e8;
			 uintptr_t m_nBombSiteDesignation = 0x9ec;
		}
	}
}

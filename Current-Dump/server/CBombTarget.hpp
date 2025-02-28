#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBombTarget {
			 uintptr_t m_OnBombExplode = 0x960; // CEntityIOOutput
			 uintptr_t m_OnBombPlanted = 0x988; // CEntityIOOutput
			 uintptr_t m_OnBombDefused = 0x9b0; // CEntityIOOutput
			 uintptr_t m_bIsBombSiteB = 0x9d8; // bool
			 uintptr_t m_bIsHeistBombTarget = 0x9d9; // bool
			 uintptr_t m_bBombPlantedHere = 0x9da; // bool
			 uintptr_t m_szMountTarget = 0x9e0; // CUtlSymbolLarge
			 uintptr_t m_hInstructorHint = 0x9e8; // CHandle< CBaseEntity >
			 uintptr_t m_nBombSiteDesignation = 0x9ec; // int32
		}
	}
}

#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_EntityDissolve {
			 uintptr_t m_flStartTime = 0xd30;
			 uintptr_t m_flFadeInStart = 0xd34;
			 uintptr_t m_flFadeInLength = 0xd38;
			 uintptr_t m_flFadeOutModelStart = 0xd3c;
			 uintptr_t m_flFadeOutModelLength = 0xd40;
			 uintptr_t m_flFadeOutStart = 0xd44;
			 uintptr_t m_flFadeOutLength = 0xd48;
			 uintptr_t m_flNextSparkTime = 0xd4c;
			 uintptr_t m_nDissolveType = 0xd50;
			 uintptr_t m_vDissolverOrigin = 0xd54;
			 uintptr_t m_nMagnitude = 0xd60;
			 uintptr_t m_bCoreExplode = 0xd64;
			 uintptr_t m_bLinkedToServerEnt = 0xd65;
		}
	}
}

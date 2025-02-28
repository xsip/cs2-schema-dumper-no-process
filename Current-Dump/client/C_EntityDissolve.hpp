#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_EntityDissolve {
			 uintptr_t m_flStartTime = 0xd30; // GameTime_t
			 uintptr_t m_flFadeInStart = 0xd34; // float32
			 uintptr_t m_flFadeInLength = 0xd38; // float32
			 uintptr_t m_flFadeOutModelStart = 0xd3c; // float32
			 uintptr_t m_flFadeOutModelLength = 0xd40; // float32
			 uintptr_t m_flFadeOutStart = 0xd44; // float32
			 uintptr_t m_flFadeOutLength = 0xd48; // float32
			 uintptr_t m_flNextSparkTime = 0xd4c; // GameTime_t
			 uintptr_t m_nDissolveType = 0xd50; // EntityDisolveType_t
			 uintptr_t m_vDissolverOrigin = 0xd54; // Vector
			 uintptr_t m_nMagnitude = 0xd60; // uint32
			 uintptr_t m_bCoreExplode = 0xd64; // bool
			 uintptr_t m_bLinkedToServerEnt = 0xd65; // bool
		}
	}
}

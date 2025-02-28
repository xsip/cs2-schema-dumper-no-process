#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEntityDissolve {
			 uintptr_t m_flFadeInStart = 0x790; // float32
			 uintptr_t m_flFadeInLength = 0x794; // float32
			 uintptr_t m_flFadeOutModelStart = 0x798; // float32
			 uintptr_t m_flFadeOutModelLength = 0x79c; // float32
			 uintptr_t m_flFadeOutStart = 0x7a0; // float32
			 uintptr_t m_flFadeOutLength = 0x7a4; // float32
			 uintptr_t m_flStartTime = 0x7a8; // GameTime_t
			 uintptr_t m_nDissolveType = 0x7ac; // EntityDisolveType_t
			 uintptr_t m_vDissolverOrigin = 0x7b0; // Vector
			 uintptr_t m_nMagnitude = 0x7bc; // uint32
		}
	}
}

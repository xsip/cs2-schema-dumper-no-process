#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CFireOverlay {
			 uintptr_t m_pOwner = 0xd0; // C_FireSmoke*
			 uintptr_t m_vBaseColors = 0xd8; // Vector[4]
			 uintptr_t m_flScale = 0x108; // float32
			 uintptr_t m_nGUID = 0x10c; // int32
		}
	}
}

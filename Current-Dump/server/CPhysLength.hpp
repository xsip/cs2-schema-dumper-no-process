#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysLength {
			 uintptr_t m_offset = 0x558; // Vector[2]
			 uintptr_t m_vecAttach = 0x570; // Vector
			 uintptr_t m_addLength = 0x57c; // float32
			 uintptr_t m_minLength = 0x580; // float32
			 uintptr_t m_totalLength = 0x584; // float32
			 uintptr_t m_bEnableCollision = 0x588; // bool
		}
	}
}

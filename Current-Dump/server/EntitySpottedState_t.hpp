#include <Windows.h>


namespace xsip {
	namespace server {
		namespace EntitySpottedState_t {
			 uintptr_t m_bSpotted = 0x8; // bool
			 uintptr_t m_bSpottedByMask = 0xc; // uint32[2]
		}
	}
}

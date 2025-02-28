#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CTransitionUpdateData {
			 uintptr_t m_srcStateIndex = 0x0; // uint8
			 uintptr_t m_destStateIndex = 0x1; // uint8
			 uintptr_t m_nHandshakeMaskToDisableFirst = 0x0; // bitfield:7
			 uintptr_t m_bDisabled = 0x0; // bitfield:1
		}
	}
}

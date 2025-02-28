#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTriggerSndSosOpvar {
			 uintptr_t m_hTouchingPlayers = 0x960; // CUtlVector< CHandle< CBaseEntity > >
			 uintptr_t m_flPosition = 0x978; // Vector
			 uintptr_t m_flCenterSize = 0x984; // float32
			 uintptr_t m_flMinVal = 0x988; // float32
			 uintptr_t m_flMaxVal = 0x98c; // float32
			 uintptr_t m_opvarName = 0x990; // CUtlSymbolLarge
			 uintptr_t m_stackName = 0x998; // CUtlSymbolLarge
			 uintptr_t m_operatorName = 0x9a0; // CUtlSymbolLarge
			 uintptr_t m_bVolIs2D = 0x9a8; // bool
			 uintptr_t m_opvarNameChar = 0x9a9; // char[256]
			 uintptr_t m_stackNameChar = 0xaa9; // char[256]
			 uintptr_t m_operatorNameChar = 0xba9; // char[256]
			 uintptr_t m_VecNormPos = 0xcac; // Vector
			 uintptr_t m_flNormCenterSize = 0xcb8; // float32
		}
	}
}

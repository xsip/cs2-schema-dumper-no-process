#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RestartAfterDuration {
			 uintptr_t m_flDurationMin = 0x1c0; // float32
			 uintptr_t m_flDurationMax = 0x1c4; // float32
			 uintptr_t m_nCP = 0x1c8; // int32
			 uintptr_t m_nCPField = 0x1cc; // int32
			 uintptr_t m_nChildGroupID = 0x1d0; // int32
			 uintptr_t m_bOnlyChildren = 0x1d4; // bool
		}
	}
}

#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPulse_RegisterInfo {
			 uintptr_t m_nReg = 0x0; // PulseRuntimeRegisterIndex_t
			 uintptr_t m_Type = 0x8; // CPulseValueFullType
			 uintptr_t m_OriginName = 0x18; // CKV3MemberNameWithStorage
			 uintptr_t m_nWrittenByInstruction = 0x50; // int32
			 uintptr_t m_nLastReadByInstruction = 0x54; // int32
		}
	}
}

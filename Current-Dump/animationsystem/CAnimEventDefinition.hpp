#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CAnimEventDefinition {
			 uintptr_t m_nFrame = 0x8; // int32
			 uintptr_t m_nEndFrame = 0xc; // int32
			 uintptr_t m_flCycle = 0x10; // float32
			 uintptr_t m_flDuration = 0x14; // float32
			 uintptr_t m_EventData = 0x18; // KeyValues3
			 uintptr_t m_sLegacyOptions = 0x28; // CBufferString
			 uintptr_t m_sEventName = 0x38; // CGlobalSymbol
		}
	}
}

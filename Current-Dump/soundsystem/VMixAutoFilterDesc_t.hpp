#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixAutoFilterDesc_t {
			 uintptr_t m_flEnvelopeAmount = 0x0;
			 uintptr_t m_flAttackTimeMS = 0x4;
			 uintptr_t m_flReleaseTimeMS = 0x8;
			 uintptr_t m_filter = 0xc;
			 uintptr_t m_flLFOAmount = 0x1c;
			 uintptr_t m_flLFORate = 0x20;
			 uintptr_t m_flPhase = 0x24;
			 uintptr_t m_nLFOShape = 0x28;
		}
	}
}

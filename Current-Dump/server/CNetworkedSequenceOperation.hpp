#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CNetworkedSequenceOperation {
			 uintptr_t m_hSequence = 0x8;
			 uintptr_t m_flPrevCycle = 0xc;
			 uintptr_t m_flCycle = 0x10;
			 uintptr_t m_flWeight = 0x14;
			 uintptr_t m_bSequenceChangeNetworked = 0x1c;
			 uintptr_t m_bDiscontinuity = 0x1d;
			 uintptr_t m_flPrevCycleFromDiscontinuity = 0x20;
			 uintptr_t m_flPrevCycleForAnimEventDetection = 0x24;
		}
	}
}

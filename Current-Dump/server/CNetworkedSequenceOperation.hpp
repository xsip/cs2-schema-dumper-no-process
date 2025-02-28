#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CNetworkedSequenceOperation {
			 uintptr_t m_hSequence = 0x8; // HSequence
			 uintptr_t m_flPrevCycle = 0xc; // float32
			 uintptr_t m_flCycle = 0x10; // float32
			 uintptr_t m_flWeight = 0x14; // CNetworkedQuantizedFloat
			 uintptr_t m_bSequenceChangeNetworked = 0x1c; // bool
			 uintptr_t m_bDiscontinuity = 0x1d; // bool
			 uintptr_t m_flPrevCycleFromDiscontinuity = 0x20; // float32
			 uintptr_t m_flPrevCycleForAnimEventDetection = 0x24; // float32
		}
	}
}

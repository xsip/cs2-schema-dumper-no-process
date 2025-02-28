#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_RandomSequence {
			 uintptr_t m_nSequenceMin = 0x1c8; // int32
			 uintptr_t m_nSequenceMax = 0x1cc; // int32
			 uintptr_t m_bShuffle = 0x1d0; // bool
			 uintptr_t m_bLinear = 0x1d1; // bool
			 uintptr_t m_WeightedList = 0x1d8; // CUtlVector< SequenceWeightedList_t >
		}
	}
}

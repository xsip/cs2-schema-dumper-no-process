#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CSeqSynthAnimDesc {
			 uintptr_t m_sName = 0x0; // CBufferString
			 uintptr_t m_flags = 0x10; // CSeqSeqDescFlag
			 uintptr_t m_transition = 0x1c; // CSeqTransition
			 uintptr_t m_nLocalBaseReference = 0x24; // int16
			 uintptr_t m_nLocalBoneMask = 0x26; // int16
			 uintptr_t m_activityArray = 0x28; // CUtlVector< CAnimActivity >
		}
	}
}

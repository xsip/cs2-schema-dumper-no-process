#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CSequenceUpdateNode {
			 uintptr_t m_hSequence = 0x70; // HSequence
			 uintptr_t m_duration = 0x74; // float32
			 uintptr_t m_paramSpans = 0x78; // CParamSpanUpdater
			 uintptr_t m_tags = 0x90; // CUtlVector< TagSpan_t >
		}
	}
}

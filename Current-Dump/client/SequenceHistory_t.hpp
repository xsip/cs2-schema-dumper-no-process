#include <Windows.h>


namespace xsip {
	namespace client {
		namespace SequenceHistory_t {
			 uintptr_t m_hSequence = 0x0;
			 uintptr_t m_flSeqStartTime = 0x4;
			 uintptr_t m_flSeqFixedCycle = 0x8;
			 uintptr_t m_nSeqLoopMode = 0xc;
			 uintptr_t m_flPlaybackRate = 0x10;
			 uintptr_t m_flCyclesPerSecond = 0x14;
		}
	}
}

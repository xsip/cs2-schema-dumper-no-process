#include <Windows.h>


namespace xsip {
	namespace server {
		namespace SequenceHistory_t {
			 uintptr_t m_hSequence = 0x0; // HSequence
			 uintptr_t m_flSeqStartTime = 0x4; // GameTime_t
			 uintptr_t m_flSeqFixedCycle = 0x8; // float32
			 uintptr_t m_nSeqLoopMode = 0xc; // AnimLoopMode_t
			 uintptr_t m_flPlaybackRate = 0x10; // float32
			 uintptr_t m_flCyclesPerSecond = 0x14; // float32
		}
	}
}

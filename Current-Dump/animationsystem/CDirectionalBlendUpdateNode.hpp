#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CDirectionalBlendUpdateNode {
			 uintptr_t m_hSequences = 0x5c; // HSequence[8]
			 uintptr_t m_damping = 0x80; // CAnimInputDamping
			 uintptr_t m_blendValueSource = 0x90; // AnimValueSource
			 uintptr_t m_paramIndex = 0x94; // CAnimParamHandle
			 uintptr_t m_playbackSpeed = 0x98; // float32
			 uintptr_t m_duration = 0x9c; // float32
			 uintptr_t m_bLoop = 0xa0; // bool
			 uintptr_t m_bLockBlendOnReset = 0xa1; // bool
		}
	}
}

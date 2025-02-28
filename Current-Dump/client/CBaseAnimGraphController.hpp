#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CBaseAnimGraphController {
			 uintptr_t m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
			 uintptr_t m_bSequenceFinished = 0x14a8; // bool
			 uintptr_t m_flSoundSyncTime = 0x14ac; // float32
			 uintptr_t m_nActiveIKChainMask = 0x14b0; // uint32
			 uintptr_t m_hSequence = 0x14b4; // HSequence
			 uintptr_t m_flSeqStartTime = 0x14b8; // GameTime_t
			 uintptr_t m_flSeqFixedCycle = 0x14bc; // float32
			 uintptr_t m_nAnimLoopMode = 0x14c0; // AnimLoopMode_t
			 uintptr_t m_flPlaybackRate = 0x14c4; // CNetworkedQuantizedFloat
			 uintptr_t m_nNotifyState = 0x14d0; // SequenceFinishNotifyState_t
			 uintptr_t m_bNetworkedAnimationInputsChanged = 0x14d2; // bool
			 uintptr_t m_bNetworkedSequenceChanged = 0x14d3; // bool
			 uintptr_t m_bLastUpdateSkipped = 0x14d4; // bool
			 uintptr_t m_flPrevAnimUpdateTime = 0x14d8; // GameTime_t
		}
	}
}

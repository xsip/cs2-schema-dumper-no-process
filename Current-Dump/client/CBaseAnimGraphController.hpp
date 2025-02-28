#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CBaseAnimGraphController {
			 uintptr_t m_animGraphNetworkedVars = 0x18;
			 uintptr_t m_bSequenceFinished = 0x14a8;
			 uintptr_t m_flSoundSyncTime = 0x14ac;
			 uintptr_t m_nActiveIKChainMask = 0x14b0;
			 uintptr_t m_hSequence = 0x14b4;
			 uintptr_t m_flSeqStartTime = 0x14b8;
			 uintptr_t m_flSeqFixedCycle = 0x14bc;
			 uintptr_t m_nAnimLoopMode = 0x14c0;
			 uintptr_t m_flPlaybackRate = 0x14c4;
			 uintptr_t m_nNotifyState = 0x14d0;
			 uintptr_t m_bNetworkedAnimationInputsChanged = 0x14d2;
			 uintptr_t m_bNetworkedSequenceChanged = 0x14d3;
			 uintptr_t m_bLastUpdateSkipped = 0x14d4;
			 uintptr_t m_flPrevAnimUpdateTime = 0x14d8;
		}
	}
}

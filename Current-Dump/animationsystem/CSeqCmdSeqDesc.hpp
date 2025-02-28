#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CSeqCmdSeqDesc {
			 uintptr_t m_sName = 0x0; // CBufferString
			 uintptr_t m_flags = 0x10; // CSeqSeqDescFlag
			 uintptr_t m_transition = 0x1c; // CSeqTransition
			 uintptr_t m_nFrameRangeSequence = 0x24; // int16
			 uintptr_t m_nFrameCount = 0x26; // int16
			 uintptr_t m_flFPS = 0x28; // float32
			 uintptr_t m_nSubCycles = 0x2c; // int16
			 uintptr_t m_numLocalResults = 0x2e; // int16
			 uintptr_t m_cmdLayerArray = 0x30; // CUtlVector< CSeqCmdLayer >
			 uintptr_t m_eventArray = 0x48; // CUtlVector< CAnimEventDefinition >
			 uintptr_t m_activityArray = 0x60; // CUtlVector< CAnimActivity >
			 uintptr_t m_poseSettingArray = 0x78; // CUtlVector< CSeqPoseSetting >
		}
	}
}

#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CSequenceGroupData {
			 uintptr_t m_sName = 0x10; // CBufferString
			 uintptr_t m_nFlags = 0x20; // uint32
			 uintptr_t m_localSequenceNameArray = 0x28; // CUtlVector< CBufferString >
			 uintptr_t m_localS1SeqDescArray = 0x40; // CUtlVector< CSeqS1SeqDesc >
			 uintptr_t m_localMultiSeqDescArray = 0x58; // CUtlVector< CSeqS1SeqDesc >
			 uintptr_t m_localSynthAnimDescArray = 0x70; // CUtlVector< CSeqSynthAnimDesc >
			 uintptr_t m_localCmdSeqDescArray = 0x88; // CUtlVector< CSeqCmdSeqDesc >
			 uintptr_t m_localBoneMaskArray = 0xa0; // CUtlVector< CSeqBoneMaskList >
			 uintptr_t m_localScaleSetArray = 0xb8; // CUtlVector< CSeqScaleSet >
			 uintptr_t m_localBoneNameArray = 0xd0; // CUtlVector< CBufferString >
			 uintptr_t m_localNodeName = 0xe8; // CBufferString
			 uintptr_t m_localPoseParamArray = 0xf8; // CUtlVector< CSeqPoseParamDesc >
			 uintptr_t m_keyValues = 0x110; // KeyValues3
			 uintptr_t m_localIKAutoplayLockArray = 0x120; // CUtlVector< CSeqIKLock >
		}
	}
}

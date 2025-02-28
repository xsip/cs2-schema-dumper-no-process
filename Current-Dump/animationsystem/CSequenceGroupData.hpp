#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CSequenceGroupData {
			 uintptr_t m_sName = 0x10;
			 uintptr_t m_nFlags = 0x20;
			 uintptr_t m_localSequenceNameArray = 0x28;
			 uintptr_t m_localS1SeqDescArray = 0x40;
			 uintptr_t m_localMultiSeqDescArray = 0x58;
			 uintptr_t m_localSynthAnimDescArray = 0x70;
			 uintptr_t m_localCmdSeqDescArray = 0x88;
			 uintptr_t m_localBoneMaskArray = 0xa0;
			 uintptr_t m_localScaleSetArray = 0xb8;
			 uintptr_t m_localBoneNameArray = 0xd0;
			 uintptr_t m_localNodeName = 0xe8;
			 uintptr_t m_localPoseParamArray = 0xf8;
			 uintptr_t m_keyValues = 0x110;
			 uintptr_t m_localIKAutoplayLockArray = 0x120;
		}
	}
}

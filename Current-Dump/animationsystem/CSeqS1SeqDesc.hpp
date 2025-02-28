#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CSeqS1SeqDesc {
			 uintptr_t m_sName = 0x0; // CBufferString
			 uintptr_t m_flags = 0x10; // CSeqSeqDescFlag
			 uintptr_t m_fetch = 0x20; // CSeqMultiFetch
			 uintptr_t m_nLocalWeightlist = 0x90; // int32
			 uintptr_t m_autoLayerArray = 0x98; // CUtlVector< CSeqAutoLayer >
			 uintptr_t m_IKLockArray = 0xb0; // CUtlVector< CSeqIKLock >
			 uintptr_t m_transition = 0xc8; // CSeqTransition
			 uintptr_t m_SequenceKeys = 0xd0; // KeyValues3
			 uintptr_t m_LegacyKeyValueText = 0xe0; // CBufferString
			 uintptr_t m_activityArray = 0xf0; // CUtlVector< CAnimActivity >
			 uintptr_t m_footMotion = 0x108; // CUtlVector< CFootMotion >
		}
	}
}

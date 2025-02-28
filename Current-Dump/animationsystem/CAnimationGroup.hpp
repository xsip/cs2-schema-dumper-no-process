#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CAnimationGroup {
			 uintptr_t m_nFlags = 0x10; // uint32
			 uintptr_t m_name = 0x18; // CBufferString
			 uintptr_t m_localHAnimArray_Handle = 0x60; // CUtlVector< CStrongHandle< InfoForResourceTypeCAnimData > >
			 uintptr_t m_includedGroupArray_Handle = 0x78; // CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > >
			 uintptr_t m_directHSeqGroup_Handle = 0x90; // CStrongHandle< InfoForResourceTypeCSequenceGroupData >
			 uintptr_t m_decodeKey = 0x98; // CAnimKeyData
			 uintptr_t m_szScripts = 0x110; // CUtlVector< CBufferString >
			 uintptr_t m_AdditionalExtRefs = 0x128; // CUtlVector< CStrongHandleVoid >
		}
	}
}

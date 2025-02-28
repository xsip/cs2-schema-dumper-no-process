#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CAnimKeyData {
			 uintptr_t m_name = 0x0; // CBufferString
			 uintptr_t m_boneArray = 0x10; // CUtlVector< CAnimBone >
			 uintptr_t m_userArray = 0x28; // CUtlVector< CAnimUser >
			 uintptr_t m_morphArray = 0x40; // CUtlVector< CBufferString >
			 uintptr_t m_nChannelElements = 0x58; // int32
			 uintptr_t m_dataChannelArray = 0x60; // CUtlVector< CAnimDataChannelDesc >
		}
	}
}

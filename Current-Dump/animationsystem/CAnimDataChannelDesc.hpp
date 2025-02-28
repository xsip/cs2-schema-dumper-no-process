#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CAnimDataChannelDesc {
			 uintptr_t m_szChannelClass = 0x0; // CBufferString
			 uintptr_t m_szVariableName = 0x10; // CBufferString
			 uintptr_t m_nFlags = 0x20; // int32
			 uintptr_t m_nType = 0x24; // int32
			 uintptr_t m_szGrouping = 0x28; // CBufferString
			 uintptr_t m_szDescription = 0x38; // CBufferString
			 uintptr_t m_szElementNameArray = 0x48; // CUtlVector< CBufferString >
			 uintptr_t m_nElementIndexArray = 0x60; // CUtlVector< int32 >
			 uintptr_t m_nElementMaskArray = 0x78; // CUtlVector< uint32 >
		}
	}
}

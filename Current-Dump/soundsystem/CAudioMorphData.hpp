#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CAudioMorphData {
			 uintptr_t m_times = 0x0; // CUtlVector< float32 >
			 uintptr_t m_nameHashCodes = 0x18; // CUtlVector< uint32 >
			 uintptr_t m_nameStrings = 0x30; // CUtlVector< CUtlString >
			 uintptr_t m_samples = 0x48; // CUtlVector< CUtlVector< float32 > >
			 uintptr_t m_flEaseIn = 0x60; // float32
			 uintptr_t m_flEaseOut = 0x64; // float32
		}
	}
}

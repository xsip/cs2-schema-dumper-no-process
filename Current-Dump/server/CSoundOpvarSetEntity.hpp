#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CSoundOpvarSetEntity {
			 uintptr_t m_iszStackName = 0x4e8; // CUtlSymbolLarge
			 uintptr_t m_iszOperatorName = 0x4f0; // CUtlSymbolLarge
			 uintptr_t m_iszOpvarName = 0x4f8; // CUtlSymbolLarge
			 uintptr_t m_nOpvarType = 0x500; // int32
			 uintptr_t m_nOpvarIndex = 0x504; // int32
			 uintptr_t m_flOpvarValue = 0x508; // float32
			 uintptr_t m_OpvarValueString = 0x510; // CUtlSymbolLarge
			 uintptr_t m_bSetOnSpawn = 0x518; // bool
		}
	}
}

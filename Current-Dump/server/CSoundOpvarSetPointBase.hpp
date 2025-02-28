#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CSoundOpvarSetPointBase {
			 uintptr_t m_bDisabled = 0x4e0; // bool
			 uintptr_t m_hSource = 0x4e4; // CEntityHandle
			 uintptr_t m_iszSourceEntityName = 0x4f0; // CUtlSymbolLarge
			 uintptr_t m_vLastPosition = 0x548; // Vector
			 uintptr_t m_iszStackName = 0x558; // CUtlSymbolLarge
			 uintptr_t m_iszOperatorName = 0x560; // CUtlSymbolLarge
			 uintptr_t m_iszOpvarName = 0x568; // CUtlSymbolLarge
			 uintptr_t m_iOpvarIndex = 0x570; // int32
			 uintptr_t m_bUseAutoCompare = 0x574; // bool
		}
	}
}

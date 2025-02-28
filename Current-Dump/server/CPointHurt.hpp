#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPointHurt {
			 uintptr_t m_nDamage = 0x4e0; // int32
			 uintptr_t m_bitsDamageType = 0x4e4; // DamageTypes_t
			 uintptr_t m_flRadius = 0x4e8; // float32
			 uintptr_t m_flDelay = 0x4ec; // float32
			 uintptr_t m_strTarget = 0x4f0; // CUtlSymbolLarge
			 uintptr_t m_pActivator = 0x4f8; // CHandle< CBaseEntity >
		}
	}
}

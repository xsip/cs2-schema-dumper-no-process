#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CTakeDamageResult {
			 uintptr_t m_pOriginatingInfo = 0x0; // CTakeDamageInfo*
			 uintptr_t m_nHealthLost = 0x8; // int32
			 uintptr_t m_nDamageTaken = 0xc; // int32
			 uintptr_t m_nTotalledHealthLost = 0x10; // int32
			 uintptr_t m_nTotalledDamageTaken = 0x14; // int32
			 uintptr_t m_flTotalledDamageAbsorbed = 0x18; // float32
		}
	}
}

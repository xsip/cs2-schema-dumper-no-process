#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTriggerProximity {
			 uintptr_t m_hMeasureTarget = 0x960; // CHandle< CBaseEntity >
			 uintptr_t m_iszMeasureTarget = 0x968; // CUtlSymbolLarge
			 uintptr_t m_fRadius = 0x970; // float32
			 uintptr_t m_nTouchers = 0x974; // int32
			 uintptr_t m_NearestEntityDistance = 0x978; // CEntityOutputTemplate< float32 >
		}
	}
}

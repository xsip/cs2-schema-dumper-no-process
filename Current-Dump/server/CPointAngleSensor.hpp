#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPointAngleSensor {
			 uintptr_t m_bDisabled = 0x4e0; // bool
			 uintptr_t m_nLookAtName = 0x4e8; // CUtlSymbolLarge
			 uintptr_t m_hTargetEntity = 0x4f0; // CHandle< CBaseEntity >
			 uintptr_t m_hLookAtEntity = 0x4f4; // CHandle< CBaseEntity >
			 uintptr_t m_flDuration = 0x4f8; // float32
			 uintptr_t m_flDotTolerance = 0x4fc; // float32
			 uintptr_t m_flFacingTime = 0x500; // GameTime_t
			 uintptr_t m_bFired = 0x504; // bool
			 uintptr_t m_OnFacingLookat = 0x508; // CEntityIOOutput
			 uintptr_t m_OnNotFacingLookat = 0x530; // CEntityIOOutput
			 uintptr_t m_TargetDir = 0x558; // CEntityOutputTemplate< Vector >
			 uintptr_t m_FacingPercentage = 0x580; // CEntityOutputTemplate< float32 >
		}
	}
}

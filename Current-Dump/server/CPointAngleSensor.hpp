#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPointAngleSensor {
			 uintptr_t m_bDisabled = 0x4e0;
			 uintptr_t m_nLookAtName = 0x4e8;
			 uintptr_t m_hTargetEntity = 0x4f0;
			 uintptr_t m_hLookAtEntity = 0x4f4;
			 uintptr_t m_flDuration = 0x4f8;
			 uintptr_t m_flDotTolerance = 0x4fc;
			 uintptr_t m_flFacingTime = 0x500;
			 uintptr_t m_bFired = 0x504;
			 uintptr_t m_OnFacingLookat = 0x508;
			 uintptr_t m_OnNotFacingLookat = 0x530;
			 uintptr_t m_TargetDir = 0x558;
			 uintptr_t m_FacingPercentage = 0x580;
		}
	}
}

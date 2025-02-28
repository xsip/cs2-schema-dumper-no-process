#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPointVelocitySensor {
			 uintptr_t m_hTargetEntity = 0x4e0;
			 uintptr_t m_vecAxis = 0x4e4;
			 uintptr_t m_bEnabled = 0x4f0;
			 uintptr_t m_fPrevVelocity = 0x4f4;
			 uintptr_t m_flAvgInterval = 0x4f8;
			 uintptr_t m_Velocity = 0x500;
		}
	}
}

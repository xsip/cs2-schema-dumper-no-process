#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_BaseCombatCharacter {
			 uintptr_t m_hMyWearables = 0x1120; // C_NetworkUtlVectorBase< CHandle< C_EconWearable > >
			 uintptr_t m_leftFootAttachment = 0x1138; // AttachmentHandle_t
			 uintptr_t m_rightFootAttachment = 0x1139; // AttachmentHandle_t
			 uintptr_t m_nWaterWakeMode = 0x113c; // C_BaseCombatCharacter::WaterWakeMode_t
			 uintptr_t m_flWaterWorldZ = 0x1140; // float32
			 uintptr_t m_flWaterNextTraceTime = 0x1144; // float32
		}
	}
}

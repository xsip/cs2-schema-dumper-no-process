#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CColorCorrectionVolume {
			 uintptr_t m_bEnabled = 0x960; // bool
			 uintptr_t m_MaxWeight = 0x964; // float32
			 uintptr_t m_FadeDuration = 0x968; // float32
			 uintptr_t m_bStartDisabled = 0x96c; // bool
			 uintptr_t m_Weight = 0x970; // float32
			 uintptr_t m_lookupFilename = 0x974; // char[512]
			 uintptr_t m_LastEnterWeight = 0xb74; // float32
			 uintptr_t m_LastEnterTime = 0xb78; // GameTime_t
			 uintptr_t m_LastExitWeight = 0xb7c; // float32
			 uintptr_t m_LastExitTime = 0xb80; // GameTime_t
		}
	}
}

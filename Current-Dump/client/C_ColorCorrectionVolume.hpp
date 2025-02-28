#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_ColorCorrectionVolume {
			 uintptr_t m_LastEnterWeight = 0xd30; // float32
			 uintptr_t m_LastEnterTime = 0xd34; // float32
			 uintptr_t m_LastExitWeight = 0xd38; // float32
			 uintptr_t m_LastExitTime = 0xd3c; // float32
			 uintptr_t m_bEnabled = 0xd40; // bool
			 uintptr_t m_MaxWeight = 0xd44; // float32
			 uintptr_t m_FadeDuration = 0xd48; // float32
			 uintptr_t m_Weight = 0xd4c; // float32
			 uintptr_t m_lookupFilename = 0xd50; // char[512]
		}
	}
}

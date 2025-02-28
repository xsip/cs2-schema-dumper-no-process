#include <Windows.h>


namespace xsip {
	namespace server {
		namespace fogplayerparams_t {
			 uintptr_t m_hCtrl = 0x8; // CHandle< CFogController >
			 uintptr_t m_flTransitionTime = 0xc; // float32
			 uintptr_t m_OldColor = 0x10; // Color
			 uintptr_t m_flOldStart = 0x14; // float32
			 uintptr_t m_flOldEnd = 0x18; // float32
			 uintptr_t m_flOldMaxDensity = 0x1c; // float32
			 uintptr_t m_flOldHDRColorScale = 0x20; // float32
			 uintptr_t m_flOldFarZ = 0x24; // float32
			 uintptr_t m_NewColor = 0x28; // Color
			 uintptr_t m_flNewStart = 0x2c; // float32
			 uintptr_t m_flNewEnd = 0x30; // float32
			 uintptr_t m_flNewMaxDensity = 0x34; // float32
			 uintptr_t m_flNewHDRColorScale = 0x38; // float32
			 uintptr_t m_flNewFarZ = 0x3c; // float32
		}
	}
}

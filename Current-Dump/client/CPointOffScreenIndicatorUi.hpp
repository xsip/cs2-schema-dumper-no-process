#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPointOffScreenIndicatorUi {
			 uintptr_t m_bBeenEnabled = 0xf90; // bool
			 uintptr_t m_bHide = 0xf91; // bool
			 uintptr_t m_flSeenTargetTime = 0xf94; // float32
			 uintptr_t m_pTargetPanel = 0xf98; // C_PointClientUIWorldPanel*
		}
	}
}

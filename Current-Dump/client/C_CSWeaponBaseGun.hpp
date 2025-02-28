#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_CSWeaponBaseGun {
			 uintptr_t m_zoomLevel = 0x1b20; // int32
			 uintptr_t m_iBurstShotsRemaining = 0x1b24; // int32
			 uintptr_t m_iSilencerBodygroup = 0x1b28; // int32
			 uintptr_t m_silencedModelIndex = 0x1b38; // int32
			 uintptr_t m_inPrecache = 0x1b3c; // bool
			 uintptr_t m_bNeedsBoltAction = 0x1b3d; // bool
		}
	}
}

#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSWeaponBaseGun {
			 uintptr_t m_zoomLevel = 0xf70; // int32
			 uintptr_t m_iBurstShotsRemaining = 0xf74; // int32
			 uintptr_t m_silencedModelIndex = 0xf80; // int32
			 uintptr_t m_inPrecache = 0xf84; // bool
			 uintptr_t m_bNeedsBoltAction = 0xf85; // bool
			 uintptr_t m_bSkillReloadAvailable = 0xf86; // bool
			 uintptr_t m_bSkillReloadLiftedReloadKey = 0xf87; // bool
			 uintptr_t m_bSkillBoltInterruptAvailable = 0xf88; // bool
			 uintptr_t m_bSkillBoltLiftedFireKey = 0xf89; // bool
		}
	}
}

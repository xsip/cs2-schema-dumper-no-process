#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseViewModel {
			 uintptr_t m_vecLastFacing = 0x9b0; // Vector
			 uintptr_t m_nViewModelIndex = 0x9bc; // uint32
			 uintptr_t m_nAnimationParity = 0x9c0; // uint32
			 uintptr_t m_flAnimationStartTime = 0x9c4; // float32
			 uintptr_t m_hWeapon = 0x9c8; // CHandle< CBasePlayerWeapon >
			 uintptr_t m_sVMName = 0x9d0; // CUtlSymbolLarge
			 uintptr_t m_sAnimationPrefix = 0x9d8; // CUtlSymbolLarge
			 uintptr_t m_hOldLayerSequence = 0x9e0; // HSequence
			 uintptr_t m_oldLayer = 0x9e4; // int32
			 uintptr_t m_oldLayerStartTime = 0x9e8; // float32
			 uintptr_t m_hControlPanel = 0x9ec; // CHandle< CBaseEntity >
		}
	}
}

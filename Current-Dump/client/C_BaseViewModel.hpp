#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_BaseViewModel {
			 uintptr_t m_vecLastFacing = 0xf90; // Vector
			 uintptr_t m_nViewModelIndex = 0xf9c; // uint32
			 uintptr_t m_nAnimationParity = 0xfa0; // uint32
			 uintptr_t m_flAnimationStartTime = 0xfa4; // float32
			 uintptr_t m_hWeapon = 0xfa8; // CHandle< C_BasePlayerWeapon >
			 uintptr_t m_sVMName = 0xfb0; // CUtlSymbolLarge
			 uintptr_t m_sAnimationPrefix = 0xfb8; // CUtlSymbolLarge
			 uintptr_t m_iCameraAttachment = 0xfc0; // AttachmentHandle_t
			 uintptr_t m_vecLastCameraAngles = 0xfc4; // QAngle
			 uintptr_t m_previousElapsedDuration = 0xfd0; // float32
			 uintptr_t m_previousCycle = 0xfd4; // float32
			 uintptr_t m_nOldAnimationParity = 0xfd8; // int32
			 uintptr_t m_hOldLayerSequence = 0xfdc; // HSequence
			 uintptr_t m_oldLayer = 0xfe0; // int32
			 uintptr_t m_oldLayerStartTime = 0xfe4; // float32
			 uintptr_t m_hControlPanel = 0xfe8; // CHandle< C_BaseEntity >
		}
	}
}

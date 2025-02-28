#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CDecalInfo {
			 uintptr_t m_flAnimationScale = 0x0; // float32
			 uintptr_t m_flAnimationLifeSpan = 0x4; // float32
			 uintptr_t m_flPlaceTime = 0x8; // float32
			 uintptr_t m_flFadeStartTime = 0xc; // float32
			 uintptr_t m_flFadeDuration = 0x10; // float32
			 uintptr_t m_nVBSlot = 0x14; // int32
			 uintptr_t m_nBoneIndex = 0x18; // int32
			 uintptr_t m_vPosition = 0x28; // Vector
			 uintptr_t m_flBoundingRadiusSqr = 0x34; // float32
			 uintptr_t m_pNext = 0x40; // CDecalInfo*
			 uintptr_t m_pPrev = 0x48; // CDecalInfo*
			 uintptr_t m_nDecalMaterialIndex = 0xd0; // int32
		}
	}
}

#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_TextureBasedAnimatable {
			 uintptr_t m_bLoop = 0xd28; // bool
			 uintptr_t m_flFPS = 0xd2c; // float32
			 uintptr_t m_hPositionKeys = 0xd30; // CStrongHandle< InfoForResourceTypeCTextureBase >
			 uintptr_t m_hRotationKeys = 0xd38; // CStrongHandle< InfoForResourceTypeCTextureBase >
			 uintptr_t m_vAnimationBoundsMin = 0xd40; // Vector
			 uintptr_t m_vAnimationBoundsMax = 0xd4c; // Vector
			 uintptr_t m_flStartTime = 0xd58; // float32
			 uintptr_t m_flStartFrame = 0xd5c; // float32
		}
	}
}

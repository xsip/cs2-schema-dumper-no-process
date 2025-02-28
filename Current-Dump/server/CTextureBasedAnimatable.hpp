#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTextureBasedAnimatable {
			 uintptr_t m_bLoop = 0x790; // bool
			 uintptr_t m_flFPS = 0x794; // float32
			 uintptr_t m_hPositionKeys = 0x798; // CStrongHandle< InfoForResourceTypeCTextureBase >
			 uintptr_t m_hRotationKeys = 0x7a0; // CStrongHandle< InfoForResourceTypeCTextureBase >
			 uintptr_t m_vAnimationBoundsMin = 0x7a8; // Vector
			 uintptr_t m_vAnimationBoundsMax = 0x7b4; // Vector
			 uintptr_t m_flStartTime = 0x7c0; // float32
			 uintptr_t m_flStartFrame = 0x7c4; // float32
		}
	}
}

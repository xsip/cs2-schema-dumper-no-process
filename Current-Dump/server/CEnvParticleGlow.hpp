#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvParticleGlow {
			 uintptr_t m_flAlphaScale = 0xd08; // float32
			 uintptr_t m_flRadiusScale = 0xd0c; // float32
			 uintptr_t m_flSelfIllumScale = 0xd10; // float32
			 uintptr_t m_ColorTint = 0xd14; // Color
			 uintptr_t m_hTextureOverride = 0xd18; // CStrongHandle< InfoForResourceTypeCTextureBase >
		}
	}
}

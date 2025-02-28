#include <Windows.h>


namespace xsip {
	namespace server {
		namespace fogparams_t {
			 uintptr_t dirPrimary = 0x8; // Vector
			 uintptr_t colorPrimary = 0x14; // Color
			 uintptr_t colorSecondary = 0x18; // Color
			 uintptr_t colorPrimaryLerpTo = 0x1c; // Color
			 uintptr_t colorSecondaryLerpTo = 0x20; // Color
			 uintptr_t start = 0x24; // float32
			 uintptr_t end = 0x28; // float32
			 uintptr_t farz = 0x2c; // float32
			 uintptr_t maxdensity = 0x30; // float32
			 uintptr_t exponent = 0x34; // float32
			 uintptr_t HDRColorScale = 0x38; // float32
			 uintptr_t skyboxFogFactor = 0x3c; // float32
			 uintptr_t skyboxFogFactorLerpTo = 0x40; // float32
			 uintptr_t startLerpTo = 0x44; // float32
			 uintptr_t endLerpTo = 0x48; // float32
			 uintptr_t maxdensityLerpTo = 0x4c; // float32
			 uintptr_t lerptime = 0x50; // GameTime_t
			 uintptr_t duration = 0x54; // float32
			 uintptr_t blendtobackground = 0x58; // float32
			 uintptr_t scattering = 0x5c; // float32
			 uintptr_t locallightscale = 0x60; // float32
			 uintptr_t enable = 0x64; // bool
			 uintptr_t blend = 0x65; // bool
			 uintptr_t m_bNoReflectionFog = 0x66; // bool
			 uintptr_t m_bPadding = 0x67; // bool
		}
	}
}

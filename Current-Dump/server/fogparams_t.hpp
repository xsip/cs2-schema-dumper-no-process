#include <Windows.h>


namespace xsip {
	namespace server {
		namespace fogparams_t {
			 uintptr_t dirPrimary = 0x8;
			 uintptr_t colorPrimary = 0x14;
			 uintptr_t colorSecondary = 0x18;
			 uintptr_t colorPrimaryLerpTo = 0x1c;
			 uintptr_t colorSecondaryLerpTo = 0x20;
			 uintptr_t start = 0x24;
			 uintptr_t end = 0x28;
			 uintptr_t farz = 0x2c;
			 uintptr_t maxdensity = 0x30;
			 uintptr_t exponent = 0x34;
			 uintptr_t HDRColorScale = 0x38;
			 uintptr_t skyboxFogFactor = 0x3c;
			 uintptr_t skyboxFogFactorLerpTo = 0x40;
			 uintptr_t startLerpTo = 0x44;
			 uintptr_t endLerpTo = 0x48;
			 uintptr_t maxdensityLerpTo = 0x4c;
			 uintptr_t lerptime = 0x50;
			 uintptr_t duration = 0x54;
			 uintptr_t blendtobackground = 0x58;
			 uintptr_t scattering = 0x5c;
			 uintptr_t locallightscale = 0x60;
			 uintptr_t enable = 0x64;
			 uintptr_t blend = 0x65;
			 uintptr_t m_bNoReflectionFog = 0x66;
			 uintptr_t m_bPadding = 0x67;
		}
	}
}

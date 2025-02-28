#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace TextureGroup_t {
			 uintptr_t m_bEnabled = 0x0; // bool
			 uintptr_t m_bReplaceTextureWithGradient = 0x1; // bool
			 uintptr_t m_hTexture = 0x8; // CStrongHandle< InfoForResourceTypeCTextureBase >
			 uintptr_t m_Gradient = 0x10; // CColorGradient
			 uintptr_t m_nTextureType = 0x28; // SpriteCardTextureType_t
			 uintptr_t m_nTextureChannels = 0x2c; // SpriteCardTextureChannel_t
			 uintptr_t m_nTextureBlendMode = 0x30; // ParticleTextureLayerBlendType_t
			 uintptr_t m_flTextureBlend = 0x38; // CParticleCollectionRendererFloatInput
			 uintptr_t m_TextureControls = 0x198; // TextureControls_t
		}
	}
}

#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_Inferno {
			 uintptr_t m_nfxFireDamageEffect = 0xd68; // ParticleIndex_t
			 uintptr_t m_hInfernoPointsSnapshot = 0xd70; // CStrongHandle< InfoForResourceTypeIParticleSnapshot >
			 uintptr_t m_hInfernoFillerPointsSnapshot = 0xd78; // CStrongHandle< InfoForResourceTypeIParticleSnapshot >
			 uintptr_t m_hInfernoOutlinePointsSnapshot = 0xd80; // CStrongHandle< InfoForResourceTypeIParticleSnapshot >
			 uintptr_t m_hInfernoClimbingOutlinePointsSnapshot = 0xd88; // CStrongHandle< InfoForResourceTypeIParticleSnapshot >
			 uintptr_t m_hInfernoDecalsSnapshot = 0xd90; // CStrongHandle< InfoForResourceTypeIParticleSnapshot >
			 uintptr_t m_firePositions = 0xd98; // Vector[64]
			 uintptr_t m_fireParentPositions = 0x1098; // Vector[64]
			 uintptr_t m_bFireIsBurning = 0x1398; // bool[64]
			 uintptr_t m_BurnNormal = 0x13d8; // Vector[64]
			 uintptr_t m_fireCount = 0x16d8; // int32
			 uintptr_t m_nInfernoType = 0x16dc; // int32
			 uintptr_t m_nFireLifetime = 0x16e0; // float32
			 uintptr_t m_bInPostEffectTime = 0x16e4; // bool
			 uintptr_t m_lastFireCount = 0x16e8; // int32
			 uintptr_t m_nFireEffectTickBegin = 0x16ec; // int32
			 uintptr_t m_drawableCount = 0x82f0; // int32
			 uintptr_t m_blosCheck = 0x82f4; // bool
			 uintptr_t m_nlosperiod = 0x82f8; // int32
			 uintptr_t m_maxFireHalfWidth = 0x82fc; // float32
			 uintptr_t m_maxFireHeight = 0x8300; // float32
			 uintptr_t m_minBounds = 0x8304; // Vector
			 uintptr_t m_maxBounds = 0x8310; // Vector
			 uintptr_t m_flLastGrassBurnThink = 0x831c; // float32
		}
	}
}

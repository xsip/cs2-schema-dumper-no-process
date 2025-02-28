#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_C4 {
			 uintptr_t m_szScreenText = 0x1b20; // char[32]
			 uintptr_t m_activeLightParticleIndex = 0x1b40; // ParticleIndex_t
			 uintptr_t m_eActiveLightEffect = 0x1b44; // C4LightEffect_t
			 uintptr_t m_bStartedArming = 0x1b48; // bool
			 uintptr_t m_fArmedTime = 0x1b4c; // GameTime_t
			 uintptr_t m_bBombPlacedAnimation = 0x1b50; // bool
			 uintptr_t m_bIsPlantingViaUse = 0x1b51; // bool
			 uintptr_t m_entitySpottedState = 0x1b58; // EntitySpottedState_t
			 uintptr_t m_nSpotRules = 0x1b70; // int32
			 uintptr_t m_bPlayedArmingBeeps = 0x1b74; // bool[7]
			 uintptr_t m_bBombPlanted = 0x1b7b; // bool
		}
	}
}

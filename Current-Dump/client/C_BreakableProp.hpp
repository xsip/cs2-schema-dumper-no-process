#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_BreakableProp {
			 uintptr_t m_CPropDataComponent = 0xfc8; // CPropDataComponent
			 uintptr_t m_OnBreak = 0x1008; // CEntityIOOutput
			 uintptr_t m_OnHealthChanged = 0x1030; // CEntityOutputTemplate< float32 >
			 uintptr_t m_OnTakeDamage = 0x1058; // CEntityIOOutput
			 uintptr_t m_impactEnergyScale = 0x1080; // float32
			 uintptr_t m_iMinHealthDmg = 0x1084; // int32
			 uintptr_t m_flPressureDelay = 0x1088; // float32
			 uintptr_t m_flDefBurstScale = 0x108c; // float32
			 uintptr_t m_vDefBurstOffset = 0x1090; // Vector
			 uintptr_t m_hBreaker = 0x109c; // CHandle< C_BaseEntity >
			 uintptr_t m_PerformanceMode = 0x10a0; // PerformanceMode_t
			 uintptr_t m_flPreventDamageBeforeTime = 0x10a4; // GameTime_t
			 uintptr_t m_BreakableContentsType = 0x10a8; // BreakableContentsType_t
			 uintptr_t m_strBreakableContentsPropGroupOverride = 0x10b0; // CUtlString
			 uintptr_t m_strBreakableContentsParticleOverride = 0x10b8; // CUtlString
			 uintptr_t m_bHasBreakPiecesOrCommands = 0x10c0; // bool
			 uintptr_t m_explodeDamage = 0x10c4; // float32
			 uintptr_t m_explodeRadius = 0x10c8; // float32
			 uintptr_t m_explosionDelay = 0x10d0; // float32
			 uintptr_t m_explosionBuildupSound = 0x10d8; // CUtlSymbolLarge
			 uintptr_t m_explosionCustomEffect = 0x10e0; // CUtlSymbolLarge
			 uintptr_t m_explosionCustomSound = 0x10e8; // CUtlSymbolLarge
			 uintptr_t m_explosionModifier = 0x10f0; // CUtlSymbolLarge
			 uintptr_t m_hPhysicsAttacker = 0x10f8; // CHandle< C_BasePlayerPawn >
			 uintptr_t m_flLastPhysicsInfluenceTime = 0x10fc; // GameTime_t
			 uintptr_t m_flDefaultFadeScale = 0x1100; // float32
			 uintptr_t m_hLastAttacker = 0x1104; // CHandle< C_BaseEntity >
			 uintptr_t m_hFlareEnt = 0x1108; // CHandle< C_BaseEntity >
			 uintptr_t m_noGhostCollision = 0x110c; // bool
		}
	}
}

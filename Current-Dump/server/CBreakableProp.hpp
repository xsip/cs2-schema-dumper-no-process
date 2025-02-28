#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBreakableProp {
			 uintptr_t m_CPropDataComponent = 0x9f0; // CPropDataComponent
			 uintptr_t m_OnBreak = 0xa30; // CEntityIOOutput
			 uintptr_t m_OnHealthChanged = 0xa58; // CEntityOutputTemplate< float32 >
			 uintptr_t m_OnTakeDamage = 0xa80; // CEntityIOOutput
			 uintptr_t m_impactEnergyScale = 0xaa8; // float32
			 uintptr_t m_iMinHealthDmg = 0xaac; // int32
			 uintptr_t m_preferredCarryAngles = 0xab0; // QAngle
			 uintptr_t m_flPressureDelay = 0xabc; // float32
			 uintptr_t m_flDefBurstScale = 0xac0; // float32
			 uintptr_t m_vDefBurstOffset = 0xac4; // Vector
			 uintptr_t m_hBreaker = 0xad0; // CHandle< CBaseEntity >
			 uintptr_t m_PerformanceMode = 0xad4; // PerformanceMode_t
			 uintptr_t m_flPreventDamageBeforeTime = 0xad8; // GameTime_t
			 uintptr_t m_BreakableContentsType = 0xadc; // BreakableContentsType_t
			 uintptr_t m_strBreakableContentsPropGroupOverride = 0xae0; // CUtlString
			 uintptr_t m_strBreakableContentsParticleOverride = 0xae8; // CUtlString
			 uintptr_t m_bHasBreakPiecesOrCommands = 0xaf0; // bool
			 uintptr_t m_explodeDamage = 0xaf4; // float32
			 uintptr_t m_explodeRadius = 0xaf8; // float32
			 uintptr_t m_explosionDelay = 0xb00; // float32
			 uintptr_t m_explosionBuildupSound = 0xb08; // CUtlSymbolLarge
			 uintptr_t m_explosionCustomEffect = 0xb10; // CUtlSymbolLarge
			 uintptr_t m_explosionCustomSound = 0xb18; // CUtlSymbolLarge
			 uintptr_t m_explosionModifier = 0xb20; // CUtlSymbolLarge
			 uintptr_t m_hPhysicsAttacker = 0xb28; // CHandle< CBasePlayerPawn >
			 uintptr_t m_flLastPhysicsInfluenceTime = 0xb2c; // GameTime_t
			 uintptr_t m_bOriginalBlockLOS = 0xb30; // bool
			 uintptr_t m_flDefaultFadeScale = 0xb34; // float32
			 uintptr_t m_hLastAttacker = 0xb38; // CHandle< CBaseEntity >
			 uintptr_t m_hFlareEnt = 0xb3c; // CHandle< CBaseEntity >
			 uintptr_t m_bUsePuntSound = 0xb40; // bool
			 uintptr_t m_iszPuntSound = 0xb48; // CUtlSymbolLarge
			 uintptr_t m_noGhostCollision = 0xb50; // bool
		}
	}
}

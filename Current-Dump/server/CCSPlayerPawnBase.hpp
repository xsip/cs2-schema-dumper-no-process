#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSPlayerPawnBase {
			 uintptr_t m_CTouchExpansionComponent = 0xc68; // CTouchExpansionComponent
			 uintptr_t m_pPingServices = 0xcb8; // CCSPlayer_PingServices*
			 uintptr_t m_pViewModelServices = 0xcc0; // CPlayer_ViewModelServices*
			 uintptr_t m_blindUntilTime = 0xcc8; // GameTime_t
			 uintptr_t m_blindStartTime = 0xccc; // GameTime_t
			 uintptr_t m_iPlayerState = 0xcd0; // CSPlayerState
			 uintptr_t m_bRespawning = 0xd80; // bool
			 uintptr_t m_fImmuneToGunGameDamageTime = 0xd84; // GameTime_t
			 uintptr_t m_bGunGameImmunity = 0xd88; // bool
			 uintptr_t m_fMolotovDamageTime = 0xd8c; // float32
			 uintptr_t m_bHasMovedSinceSpawn = 0xd90; // bool
			 uintptr_t m_iNumSpawns = 0xd94; // int32
			 uintptr_t m_flIdleTimeSinceLastAction = 0xd9c; // float32
			 uintptr_t m_fNextRadarUpdateTime = 0xda0; // float32
			 uintptr_t m_flFlashDuration = 0xda4; // float32
			 uintptr_t m_flFlashMaxAlpha = 0xda8; // float32
			 uintptr_t m_flProgressBarStartTime = 0xdac; // float32
			 uintptr_t m_iProgressBarDuration = 0xdb0; // int32
			 uintptr_t m_angEyeAngles = 0xdb4; // QAngle
			 uintptr_t m_wasNotKilledNaturally = 0xdc0; // bool
			 uintptr_t m_bCommittingSuicideOnTeamChange = 0xdc1; // bool
			 uintptr_t m_hOriginalController = 0xdc4; // CHandle< CCSPlayerController >
		}
	}
}

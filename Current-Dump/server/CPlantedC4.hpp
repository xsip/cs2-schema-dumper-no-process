#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPlantedC4 {
			 uintptr_t m_bBombTicking = 0x9b0; // bool
			 uintptr_t m_flC4Blow = 0x9b4; // GameTime_t
			 uintptr_t m_nBombSite = 0x9b8; // int32
			 uintptr_t m_nSourceSoundscapeHash = 0x9bc; // int32
			 uintptr_t m_AttributeManager = 0x9c0; // CAttributeContainer
			 uintptr_t m_OnBombDefused = 0xc88; // CEntityIOOutput
			 uintptr_t m_OnBombBeginDefuse = 0xcb0; // CEntityIOOutput
			 uintptr_t m_OnBombDefuseAborted = 0xcd8; // CEntityIOOutput
			 uintptr_t m_bCannotBeDefused = 0xd00; // bool
			 uintptr_t m_entitySpottedState = 0xd08; // EntitySpottedState_t
			 uintptr_t m_nSpotRules = 0xd20; // int32
			 uintptr_t m_bTrainingPlacedByPlayer = 0xd24; // bool
			 uintptr_t m_bHasExploded = 0xd25; // bool
			 uintptr_t m_flTimerLength = 0xd28; // float32
			 uintptr_t m_bBeingDefused = 0xd2c; // bool
			 uintptr_t m_fLastDefuseTime = 0xd34; // GameTime_t
			 uintptr_t m_flDefuseLength = 0xd3c; // float32
			 uintptr_t m_flDefuseCountDown = 0xd40; // GameTime_t
			 uintptr_t m_bBombDefused = 0xd44; // bool
			 uintptr_t m_hBombDefuser = 0xd48; // CHandle< CCSPlayerPawn >
			 uintptr_t m_hControlPanel = 0xd4c; // CHandle< CBaseEntity >
			 uintptr_t m_iProgressBarTime = 0xd50; // int32
			 uintptr_t m_bVoiceAlertFired = 0xd54; // bool
			 uintptr_t m_bVoiceAlertPlayed = 0xd55; // bool[4]
			 uintptr_t m_flNextBotBeepTime = 0xd5c; // GameTime_t
			 uintptr_t m_angCatchUpToPlayerEye = 0xd64; // QAngle
			 uintptr_t m_flLastSpinDetectionTime = 0xd70; // GameTime_t
		}
	}
}

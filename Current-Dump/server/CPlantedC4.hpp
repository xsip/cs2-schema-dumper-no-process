#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPlantedC4 {
			 uintptr_t m_bBombTicking = 0x9b0;
			 uintptr_t m_flC4Blow = 0x9b4;
			 uintptr_t m_nBombSite = 0x9b8;
			 uintptr_t m_nSourceSoundscapeHash = 0x9bc;
			 uintptr_t m_AttributeManager = 0x9c0;
			 uintptr_t m_OnBombDefused = 0xc88;
			 uintptr_t m_OnBombBeginDefuse = 0xcb0;
			 uintptr_t m_OnBombDefuseAborted = 0xcd8;
			 uintptr_t m_bCannotBeDefused = 0xd00;
			 uintptr_t m_entitySpottedState = 0xd08;
			 uintptr_t m_nSpotRules = 0xd20;
			 uintptr_t m_bTrainingPlacedByPlayer = 0xd24;
			 uintptr_t m_bHasExploded = 0xd25;
			 uintptr_t m_flTimerLength = 0xd28;
			 uintptr_t m_bBeingDefused = 0xd2c;
			 uintptr_t m_fLastDefuseTime = 0xd34;
			 uintptr_t m_flDefuseLength = 0xd3c;
			 uintptr_t m_flDefuseCountDown = 0xd40;
			 uintptr_t m_bBombDefused = 0xd44;
			 uintptr_t m_hBombDefuser = 0xd48;
			 uintptr_t m_hControlPanel = 0xd4c;
			 uintptr_t m_iProgressBarTime = 0xd50;
			 uintptr_t m_bVoiceAlertFired = 0xd54;
			 uintptr_t m_bVoiceAlertPlayed = 0xd55;
			 uintptr_t m_flNextBotBeepTime = 0xd5c;
			 uintptr_t m_angCatchUpToPlayerEye = 0xd64;
			 uintptr_t m_flLastSpinDetectionTime = 0xd70;
		}
	}
}

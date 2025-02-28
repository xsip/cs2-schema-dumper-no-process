#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBasePlayerPawn {
			 uintptr_t m_pWeaponServices = 0xac0;
			 uintptr_t m_pItemServices = 0xac8;
			 uintptr_t m_pAutoaimServices = 0xad0;
			 uintptr_t m_pObserverServices = 0xad8;
			 uintptr_t m_pWaterServices = 0xae0;
			 uintptr_t m_pUseServices = 0xae8;
			 uintptr_t m_pFlashlightServices = 0xaf0;
			 uintptr_t m_pCameraServices = 0xaf8;
			 uintptr_t m_pMovementServices = 0xb00;
			 uintptr_t m_ServerViewAngleChanges = 0xb10;
			 uintptr_t m_nHighestGeneratedServerViewAngleChangeIndex = 0xb60;
			 uintptr_t v_angle = 0xb64;
			 uintptr_t v_anglePrevious = 0xb70;
			 uintptr_t m_iHideHUD = 0xb7c;
			 uintptr_t m_skybox3d = 0xb80;
			 uintptr_t m_fTimeLastHurt = 0xc10;
			 uintptr_t m_flDeathTime = 0xc14;
			 uintptr_t m_fNextSuicideTime = 0xc18;
			 uintptr_t m_fInitHUD = 0xc1c;
			 uintptr_t m_pExpresser = 0xc20;
			 uintptr_t m_hController = 0xc28;
			 uintptr_t m_fHltvReplayDelay = 0xc30;
			 uintptr_t m_fHltvReplayEnd = 0xc34;
			 uintptr_t m_iHltvReplayEntity = 0xc38;
			 uintptr_t m_sndOpvarLatchData = 0xc40;
		}
	}
}

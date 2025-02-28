#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBasePlayerPawn {
			 uintptr_t m_pWeaponServices = 0xac0; // CPlayer_WeaponServices*
			 uintptr_t m_pItemServices = 0xac8; // CPlayer_ItemServices*
			 uintptr_t m_pAutoaimServices = 0xad0; // CPlayer_AutoaimServices*
			 uintptr_t m_pObserverServices = 0xad8; // CPlayer_ObserverServices*
			 uintptr_t m_pWaterServices = 0xae0; // CPlayer_WaterServices*
			 uintptr_t m_pUseServices = 0xae8; // CPlayer_UseServices*
			 uintptr_t m_pFlashlightServices = 0xaf0; // CPlayer_FlashlightServices*
			 uintptr_t m_pCameraServices = 0xaf8; // CPlayer_CameraServices*
			 uintptr_t m_pMovementServices = 0xb00; // CPlayer_MovementServices*
			 uintptr_t m_ServerViewAngleChanges = 0xb10; // CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t >
			 uintptr_t m_nHighestGeneratedServerViewAngleChangeIndex = 0xb60; // uint32
			 uintptr_t v_angle = 0xb64; // QAngle
			 uintptr_t v_anglePrevious = 0xb70; // QAngle
			 uintptr_t m_iHideHUD = 0xb7c; // uint32
			 uintptr_t m_skybox3d = 0xb80; // sky3dparams_t
			 uintptr_t m_fTimeLastHurt = 0xc10; // GameTime_t
			 uintptr_t m_flDeathTime = 0xc14; // GameTime_t
			 uintptr_t m_fNextSuicideTime = 0xc18; // GameTime_t
			 uintptr_t m_fInitHUD = 0xc1c; // bool
			 uintptr_t m_pExpresser = 0xc20; // CAI_Expresser*
			 uintptr_t m_hController = 0xc28; // CHandle< CBasePlayerController >
			 uintptr_t m_fHltvReplayDelay = 0xc30; // float32
			 uintptr_t m_fHltvReplayEnd = 0xc34; // float32
			 uintptr_t m_iHltvReplayEntity = 0xc38; // CEntityIndex
			 uintptr_t m_sndOpvarLatchData = 0xc40; // CUtlVector< sndopvarlatchdata_t >
		}
	}
}

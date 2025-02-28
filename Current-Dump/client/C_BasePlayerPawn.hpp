#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_BasePlayerPawn {
			 uintptr_t m_pWeaponServices = 0x11a8; // CPlayer_WeaponServices*
			 uintptr_t m_pItemServices = 0x11b0; // CPlayer_ItemServices*
			 uintptr_t m_pAutoaimServices = 0x11b8; // CPlayer_AutoaimServices*
			 uintptr_t m_pObserverServices = 0x11c0; // CPlayer_ObserverServices*
			 uintptr_t m_pWaterServices = 0x11c8; // CPlayer_WaterServices*
			 uintptr_t m_pUseServices = 0x11d0; // CPlayer_UseServices*
			 uintptr_t m_pFlashlightServices = 0x11d8; // CPlayer_FlashlightServices*
			 uintptr_t m_pCameraServices = 0x11e0; // CPlayer_CameraServices*
			 uintptr_t m_pMovementServices = 0x11e8; // CPlayer_MovementServices*
			 uintptr_t m_ServerViewAngleChanges = 0x11f8; // C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t >
			 uintptr_t m_nHighestConsumedServerViewAngleChangeIndex = 0x1248; // uint32
			 uintptr_t v_angle = 0x124c; // QAngle
			 uintptr_t v_anglePrevious = 0x1258; // QAngle
			 uintptr_t m_iHideHUD = 0x1264; // uint32
			 uintptr_t m_skybox3d = 0x1268; // sky3dparams_t
			 uintptr_t m_flDeathTime = 0x12f8; // GameTime_t
			 uintptr_t m_vecPredictionError = 0x12fc; // Vector
			 uintptr_t m_flPredictionErrorTime = 0x1308; // GameTime_t
			 uintptr_t m_vecLastCameraSetupLocalOrigin = 0x130c; // Vector
			 uintptr_t m_flLastCameraSetupTime = 0x1318; // GameTime_t
			 uintptr_t m_flFOVSensitivityAdjust = 0x131c; // float32
			 uintptr_t m_flMouseSensitivity = 0x1320; // float32
			 uintptr_t m_vOldOrigin = 0x1324; // Vector
			 uintptr_t m_flOldSimulationTime = 0x1330; // float32
			 uintptr_t m_nLastExecutedCommandNumber = 0x1334; // int32
			 uintptr_t m_nLastExecutedCommandTick = 0x1338; // int32
			 uintptr_t m_hController = 0x133c; // CHandle< CBasePlayerController >
			 uintptr_t m_bIsSwappingToPredictableController = 0x1340; // bool
		}
	}
}

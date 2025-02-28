#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_BasePlayerPawn {
			 uintptr_t m_pWeaponServices = 0x11a8;
			 uintptr_t m_pItemServices = 0x11b0;
			 uintptr_t m_pAutoaimServices = 0x11b8;
			 uintptr_t m_pObserverServices = 0x11c0;
			 uintptr_t m_pWaterServices = 0x11c8;
			 uintptr_t m_pUseServices = 0x11d0;
			 uintptr_t m_pFlashlightServices = 0x11d8;
			 uintptr_t m_pCameraServices = 0x11e0;
			 uintptr_t m_pMovementServices = 0x11e8;
			 uintptr_t m_ServerViewAngleChanges = 0x11f8;
			 uintptr_t m_nHighestConsumedServerViewAngleChangeIndex = 0x1248;
			 uintptr_t v_angle = 0x124c;
			 uintptr_t v_anglePrevious = 0x1258;
			 uintptr_t m_iHideHUD = 0x1264;
			 uintptr_t m_skybox3d = 0x1268;
			 uintptr_t m_flDeathTime = 0x12f8;
			 uintptr_t m_vecPredictionError = 0x12fc;
			 uintptr_t m_flPredictionErrorTime = 0x1308;
			 uintptr_t m_vecLastCameraSetupLocalOrigin = 0x130c;
			 uintptr_t m_flLastCameraSetupTime = 0x1318;
			 uintptr_t m_flFOVSensitivityAdjust = 0x131c;
			 uintptr_t m_flMouseSensitivity = 0x1320;
			 uintptr_t m_vOldOrigin = 0x1324;
			 uintptr_t m_flOldSimulationTime = 0x1330;
			 uintptr_t m_nLastExecutedCommandNumber = 0x1334;
			 uintptr_t m_nLastExecutedCommandTick = 0x1338;
			 uintptr_t m_hController = 0x133c;
			 uintptr_t m_bIsSwappingToPredictableController = 0x1340;
		}
	}
}

#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPlayer_CameraServices {
			 uintptr_t m_vecCsViewPunchAngle = 0x40; // QAngle
			 uintptr_t m_nCsViewPunchAngleTick = 0x4c; // GameTick_t
			 uintptr_t m_flCsViewPunchAngleTickRatio = 0x50; // float32
			 uintptr_t m_PlayerFog = 0x58; // fogplayerparams_t
			 uintptr_t m_hColorCorrectionCtrl = 0x98; // CHandle< CColorCorrection >
			 uintptr_t m_hViewEntity = 0x9c; // CHandle< CBaseEntity >
			 uintptr_t m_hTonemapController = 0xa0; // CHandle< CTonemapController2 >
			 uintptr_t m_audio = 0xa8; // audioparams_t
			 uintptr_t m_PostProcessingVolumes = 0x120; // CNetworkUtlVectorBase< CHandle< CPostProcessingVolume > >
			 uintptr_t m_flOldPlayerZ = 0x138; // float32
			 uintptr_t m_flOldPlayerViewOffsetZ = 0x13c; // float32
			 uintptr_t m_hTriggerSoundscapeList = 0x158; // CUtlVector< CHandle< CEnvSoundscapeTriggerable > >
		}
	}
}

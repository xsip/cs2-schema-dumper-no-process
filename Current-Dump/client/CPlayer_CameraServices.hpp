#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPlayer_CameraServices {
			 uintptr_t m_vecCsViewPunchAngle = 0x40; // QAngle
			 uintptr_t m_nCsViewPunchAngleTick = 0x4c; // GameTick_t
			 uintptr_t m_flCsViewPunchAngleTickRatio = 0x50; // float32
			 uintptr_t m_PlayerFog = 0x58; // C_fogplayerparams_t
			 uintptr_t m_hColorCorrectionCtrl = 0x98; // CHandle< C_ColorCorrection >
			 uintptr_t m_hViewEntity = 0x9c; // CHandle< C_BaseEntity >
			 uintptr_t m_hTonemapController = 0xa0; // CHandle< C_TonemapController2 >
			 uintptr_t m_audio = 0xa8; // audioparams_t
			 uintptr_t m_PostProcessingVolumes = 0x120; // C_NetworkUtlVectorBase< CHandle< C_PostProcessingVolume > >
			 uintptr_t m_flOldPlayerZ = 0x138; // float32
			 uintptr_t m_flOldPlayerViewOffsetZ = 0x13c; // float32
			 uintptr_t m_CurrentFog = 0x140; // fogparams_t
			 uintptr_t m_hOldFogController = 0x1a8; // CHandle< C_FogController >
			 uintptr_t m_bOverrideFogColor = 0x1ac; // bool[5]
			 uintptr_t m_OverrideFogColor = 0x1b1; // Color[5]
			 uintptr_t m_bOverrideFogStartEnd = 0x1c5; // bool[5]
			 uintptr_t m_fOverrideFogStart = 0x1cc; // float32[5]
			 uintptr_t m_fOverrideFogEnd = 0x1e0; // float32[5]
			 uintptr_t m_hActivePostProcessingVolume = 0x1f4; // CHandle< C_PostProcessingVolume >
			 uintptr_t m_angDemoViewAngles = 0x1f8; // QAngle
		}
	}
}

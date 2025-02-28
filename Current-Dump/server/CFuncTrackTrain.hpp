#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CFuncTrackTrain {
			 uintptr_t m_ppath = 0x790; // CHandle< CPathTrack >
			 uintptr_t m_length = 0x794; // float32
			 uintptr_t m_vPosPrev = 0x798; // Vector
			 uintptr_t m_angPrev = 0x7a4; // QAngle
			 uintptr_t m_controlMins = 0x7b0; // Vector
			 uintptr_t m_controlMaxs = 0x7bc; // Vector
			 uintptr_t m_lastBlockPos = 0x7c8; // Vector
			 uintptr_t m_lastBlockTick = 0x7d4; // int32
			 uintptr_t m_flVolume = 0x7d8; // float32
			 uintptr_t m_flBank = 0x7dc; // float32
			 uintptr_t m_oldSpeed = 0x7e0; // float32
			 uintptr_t m_flBlockDamage = 0x7e4; // float32
			 uintptr_t m_height = 0x7e8; // float32
			 uintptr_t m_maxSpeed = 0x7ec; // float32
			 uintptr_t m_dir = 0x7f0; // float32
			 uintptr_t m_iszSoundMove = 0x7f8; // CUtlSymbolLarge
			 uintptr_t m_iszSoundMovePing = 0x800; // CUtlSymbolLarge
			 uintptr_t m_iszSoundStart = 0x808; // CUtlSymbolLarge
			 uintptr_t m_iszSoundStop = 0x810; // CUtlSymbolLarge
			 uintptr_t m_strPathTarget = 0x818; // CUtlSymbolLarge
			 uintptr_t m_flMoveSoundMinDuration = 0x820; // float32
			 uintptr_t m_flMoveSoundMaxDuration = 0x824; // float32
			 uintptr_t m_flNextMoveSoundTime = 0x828; // GameTime_t
			 uintptr_t m_flMoveSoundMinPitch = 0x82c; // float32
			 uintptr_t m_flMoveSoundMaxPitch = 0x830; // float32
			 uintptr_t m_eOrientationType = 0x834; // TrainOrientationType_t
			 uintptr_t m_eVelocityType = 0x838; // TrainVelocityType_t
			 uintptr_t m_OnStart = 0x848; // CEntityIOOutput
			 uintptr_t m_OnNext = 0x870; // CEntityIOOutput
			 uintptr_t m_OnArrivedAtDestinationNode = 0x898; // CEntityIOOutput
			 uintptr_t m_bManualSpeedChanges = 0x8c0; // bool
			 uintptr_t m_flDesiredSpeed = 0x8c4; // float32
			 uintptr_t m_flSpeedChangeTime = 0x8c8; // GameTime_t
			 uintptr_t m_flAccelSpeed = 0x8cc; // float32
			 uintptr_t m_flDecelSpeed = 0x8d0; // float32
			 uintptr_t m_bAccelToSpeed = 0x8d4; // bool
			 uintptr_t m_flNextMPSoundTime = 0x8d8; // GameTime_t
		}
	}
}

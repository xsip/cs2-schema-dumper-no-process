#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTankTrainAI {
			 uintptr_t m_hTrain = 0x4e0; // CHandle< CFuncTrackTrain >
			 uintptr_t m_hTargetEntity = 0x4e4; // CHandle< CBaseEntity >
			 uintptr_t m_soundPlaying = 0x4e8; // int32
			 uintptr_t m_startSoundName = 0x500; // CUtlSymbolLarge
			 uintptr_t m_engineSoundName = 0x508; // CUtlSymbolLarge
			 uintptr_t m_movementSoundName = 0x510; // CUtlSymbolLarge
			 uintptr_t m_targetEntityName = 0x518; // CUtlSymbolLarge
		}
	}
}

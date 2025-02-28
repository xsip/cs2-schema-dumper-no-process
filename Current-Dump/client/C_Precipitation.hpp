#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_Precipitation {
			 uintptr_t m_flDensity = 0xd30; // float32
			 uintptr_t m_flParticleInnerDist = 0xd40; // float32
			 uintptr_t m_pParticleDef = 0xd48; // char*
			 uintptr_t m_tParticlePrecipTraceTimer = 0xd70; // TimedEvent[1]
			 uintptr_t m_bActiveParticlePrecipEmitter = 0xd78; // bool[1]
			 uintptr_t m_bParticlePrecipInitialized = 0xd79; // bool
			 uintptr_t m_bHasSimulatedSinceLastSceneObjectUpdate = 0xd7a; // bool
			 uintptr_t m_nAvailableSheetSequencesMaxIndex = 0xd7c; // int32
		}
	}
}

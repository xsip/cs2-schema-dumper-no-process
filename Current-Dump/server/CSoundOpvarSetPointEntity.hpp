#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CSoundOpvarSetPointEntity {
			 uintptr_t m_OnEnter = 0x578; // CEntityIOOutput
			 uintptr_t m_OnExit = 0x5a0; // CEntityIOOutput
			 uintptr_t m_bAutoDisable = 0x5c8; // bool
			 uintptr_t m_flDistanceMin = 0x60c; // float32
			 uintptr_t m_flDistanceMax = 0x610; // float32
			 uintptr_t m_flDistanceMapMin = 0x614; // float32
			 uintptr_t m_flDistanceMapMax = 0x618; // float32
			 uintptr_t m_flOcclusionRadius = 0x61c; // float32
			 uintptr_t m_flOcclusionMin = 0x620; // float32
			 uintptr_t m_flOcclusionMax = 0x624; // float32
			 uintptr_t m_flValSetOnDisable = 0x628; // float32
			 uintptr_t m_bSetValueOnDisable = 0x62c; // bool
			 uintptr_t m_bReloading = 0x62d; // bool
			 uintptr_t m_nSimulationMode = 0x630; // int32
			 uintptr_t m_nVisibilitySamples = 0x634; // int32
			 uintptr_t m_vDynamicProxyPoint = 0x638; // Vector
			 uintptr_t m_flDynamicMaximumOcclusion = 0x644; // float32
			 uintptr_t m_hDynamicEntity = 0x648; // CEntityHandle
			 uintptr_t m_iszDynamicEntityName = 0x650; // CUtlSymbolLarge
			 uintptr_t m_flPathingDistanceNormFactor = 0x658; // float32
			 uintptr_t m_vPathingSourcePos = 0x65c; // Vector
			 uintptr_t m_vPathingListenerPos = 0x668; // Vector
			 uintptr_t m_vPathingDirection = 0x674; // Vector
			 uintptr_t m_nPathingSourceIndex = 0x680; // int32
		}
	}
}

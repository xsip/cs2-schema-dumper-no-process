#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CParticleSystem {
			 uintptr_t m_szSnapshotFileName = 0x790; // char[512]
			 uintptr_t m_bActive = 0x990; // bool
			 uintptr_t m_bFrozen = 0x991; // bool
			 uintptr_t m_flFreezeTransitionDuration = 0x994; // float32
			 uintptr_t m_nStopType = 0x998; // int32
			 uintptr_t m_bAnimateDuringGameplayPause = 0x99c; // bool
			 uintptr_t m_iEffectIndex = 0x9a0; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
			 uintptr_t m_flStartTime = 0x9a8; // GameTime_t
			 uintptr_t m_flPreSimTime = 0x9ac; // float32
			 uintptr_t m_vServerControlPoints = 0x9b0; // Vector[4]
			 uintptr_t m_iServerControlPointAssignments = 0x9e0; // uint8[4]
			 uintptr_t m_hControlPointEnts = 0x9e4; // CHandle< CBaseEntity >[64]
			 uintptr_t m_bNoSave = 0xae4; // bool
			 uintptr_t m_bNoFreeze = 0xae5; // bool
			 uintptr_t m_bNoRamp = 0xae6; // bool
			 uintptr_t m_bStartActive = 0xae7; // bool
			 uintptr_t m_iszEffectName = 0xae8; // CUtlSymbolLarge
			 uintptr_t m_iszControlPointNames = 0xaf0; // CUtlSymbolLarge[64]
			 uintptr_t m_nDataCP = 0xcf0; // int32
			 uintptr_t m_vecDataCPValue = 0xcf4; // Vector
			 uintptr_t m_nTintCP = 0xd00; // int32
			 uintptr_t m_clrTint = 0xd04; // Color
		}
	}
}

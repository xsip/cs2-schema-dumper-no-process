#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_ParticleSystem {
			 uintptr_t m_szSnapshotFileName = 0xd28; // char[512]
			 uintptr_t m_bActive = 0xf28; // bool
			 uintptr_t m_bFrozen = 0xf29; // bool
			 uintptr_t m_flFreezeTransitionDuration = 0xf2c; // float32
			 uintptr_t m_nStopType = 0xf30; // int32
			 uintptr_t m_bAnimateDuringGameplayPause = 0xf34; // bool
			 uintptr_t m_iEffectIndex = 0xf38; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
			 uintptr_t m_flStartTime = 0xf40; // GameTime_t
			 uintptr_t m_flPreSimTime = 0xf44; // float32
			 uintptr_t m_vServerControlPoints = 0xf48; // Vector[4]
			 uintptr_t m_iServerControlPointAssignments = 0xf78; // uint8[4]
			 uintptr_t m_hControlPointEnts = 0xf7c; // CHandle< C_BaseEntity >[64]
			 uintptr_t m_bNoSave = 0x107c; // bool
			 uintptr_t m_bNoFreeze = 0x107d; // bool
			 uintptr_t m_bNoRamp = 0x107e; // bool
			 uintptr_t m_bStartActive = 0x107f; // bool
			 uintptr_t m_iszEffectName = 0x1080; // CUtlSymbolLarge
			 uintptr_t m_iszControlPointNames = 0x1088; // CUtlSymbolLarge[64]
			 uintptr_t m_nDataCP = 0x1288; // int32
			 uintptr_t m_vecDataCPValue = 0x128c; // Vector
			 uintptr_t m_nTintCP = 0x1298; // int32
			 uintptr_t m_clrTint = 0x129c; // Color
			 uintptr_t m_bOldActive = 0x12c0; // bool
			 uintptr_t m_bOldFrozen = 0x12c1; // bool
		}
	}
}

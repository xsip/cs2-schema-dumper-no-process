#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CRagdollComponentUpdater {
			 uintptr_t m_ragdollNodePaths = 0x30; // CUtlVector< CAnimNodePath >
			 uintptr_t m_boneIndices = 0x48; // CUtlVector< int32 >
			 uintptr_t m_boneNames = 0x60; // CUtlVector< CUtlString >
			 uintptr_t m_weightLists = 0x78; // CUtlVector< WeightList >
			 uintptr_t m_flSpringFrequencyMin = 0x90; // float32
			 uintptr_t m_flSpringFrequencyMax = 0x94; // float32
			 uintptr_t m_flMaxStretch = 0x98; // float32
			 uintptr_t m_bSolidCollisionAtZeroWeight = 0x9c; // bool
		}
	}
}

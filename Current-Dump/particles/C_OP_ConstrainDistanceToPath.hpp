#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_ConstrainDistanceToPath {
			 uintptr_t m_fMinDistance = 0x1c0; // float32
			 uintptr_t m_flMaxDistance0 = 0x1c4; // float32
			 uintptr_t m_flMaxDistanceMid = 0x1c8; // float32
			 uintptr_t m_flMaxDistance1 = 0x1cc; // float32
			 uintptr_t m_PathParameters = 0x1d0; // CPathParameters
			 uintptr_t m_flTravelTime = 0x210; // float32
			 uintptr_t m_nFieldScale = 0x214; // ParticleAttributeIndex_t
			 uintptr_t m_nManualTField = 0x218; // ParticleAttributeIndex_t
		}
	}
}

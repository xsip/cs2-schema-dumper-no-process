#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_LockToPointList {
			 uintptr_t m_nFieldOutput = 0x1c0; // ParticleAttributeIndex_t
			 uintptr_t m_pointList = 0x1c8; // CUtlVector< PointDefinition_t >
			 uintptr_t m_bPlaceAlongPath = 0x1e0; // bool
			 uintptr_t m_bClosedLoop = 0x1e1; // bool
			 uintptr_t m_nNumPointsAlongPath = 0x1e4; // int32
		}
	}
}

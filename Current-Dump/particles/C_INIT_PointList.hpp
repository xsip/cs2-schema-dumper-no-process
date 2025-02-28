#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_PointList {
			 uintptr_t m_nFieldOutput = 0x1c8; // ParticleAttributeIndex_t
			 uintptr_t m_pointList = 0x1d0; // CUtlVector< PointDefinition_t >
			 uintptr_t m_bPlaceAlongPath = 0x1e8; // bool
			 uintptr_t m_bClosedLoop = 0x1e9; // bool
			 uintptr_t m_nNumPointsAlongPath = 0x1ec; // int32
		}
	}
}

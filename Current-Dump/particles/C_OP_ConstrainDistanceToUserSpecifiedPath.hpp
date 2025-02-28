#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_ConstrainDistanceToUserSpecifiedPath {
			 uintptr_t m_fMinDistance = 0x1c0; // float32
			 uintptr_t m_flMaxDistance = 0x1c4; // float32
			 uintptr_t m_flTimeScale = 0x1c8; // float32
			 uintptr_t m_bLoopedPath = 0x1cc; // bool
			 uintptr_t m_pointList = 0x1d0; // CUtlVector< PointDefinitionWithTimeValues_t >
		}
	}
}

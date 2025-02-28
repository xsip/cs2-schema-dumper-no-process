#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CSosGroupActionSoundeventClusterSchema {
			 uintptr_t m_nMinNearby = 0x18; // int32
			 uintptr_t m_flClusterEpsilon = 0x1c; // float32
			 uintptr_t m_shouldPlayOpvar = 0x20; // CUtlString
			 uintptr_t m_shouldPlayClusterChild = 0x28; // CUtlString
			 uintptr_t m_clusterSizeOpvar = 0x30; // CUtlString
			 uintptr_t m_groupBoundingBoxMinsOpvar = 0x38; // CUtlString
			 uintptr_t m_groupBoundingBoxMaxsOpvar = 0x40; // CUtlString
		}
	}
}

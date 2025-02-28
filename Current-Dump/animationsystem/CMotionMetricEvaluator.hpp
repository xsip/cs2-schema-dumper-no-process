#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CMotionMetricEvaluator {
			 uintptr_t m_means = 0x18; // CUtlVector< float32 >
			 uintptr_t m_standardDeviations = 0x30; // CUtlVector< float32 >
			 uintptr_t m_flWeight = 0x48; // float32
			 uintptr_t m_nDimensionStartIndex = 0x4c; // int32
		}
	}
}

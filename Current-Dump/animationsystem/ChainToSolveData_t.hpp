#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace ChainToSolveData_t {
			 uintptr_t m_nChainIndex = 0x0; // int32
			 uintptr_t m_SolverSettings = 0x4; // IKSolverSettings_t
			 uintptr_t m_TargetSettings = 0x10; // IKTargetSettings_t
			 uintptr_t m_DebugSetting = 0x38; // SolveIKChainAnimNodeDebugSetting
			 uintptr_t m_flDebugNormalizedValue = 0x3c; // float32
			 uintptr_t m_vDebugOffset = 0x40; // VectorAligned
		}
	}
}

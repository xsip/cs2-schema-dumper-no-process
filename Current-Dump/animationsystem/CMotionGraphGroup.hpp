#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CMotionGraphGroup {
			 uintptr_t m_searchDB = 0x0; // CMotionSearchDB
			 uintptr_t m_motionGraphs = 0xb8; // CUtlVector< CSmartPtr< CMotionGraph > >
			 uintptr_t m_motionGraphConfigs = 0xd0; // CUtlVector< CMotionGraphConfig >
			 uintptr_t m_sampleToConfig = 0xe8; // CUtlVector< int32 >
			 uintptr_t m_hIsActiveScript = 0x100; // AnimScriptHandle
		}
	}
}

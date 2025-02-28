#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CMotionSearchNode {
			 uintptr_t m_children = 0x0; // CUtlVector< CMotionSearchNode* >
			 uintptr_t m_quantizer = 0x18; // CVectorQuantizer
			 uintptr_t m_sampleCodes = 0x38; // CUtlVector< CUtlVector< SampleCode > >
			 uintptr_t m_sampleIndices = 0x50; // CUtlVector< CUtlVector< int32 > >
			 uintptr_t m_selectableSamples = 0x68; // CUtlVector< int32 >
		}
	}
}

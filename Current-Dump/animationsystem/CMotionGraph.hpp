#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CMotionGraph {
			 uintptr_t m_paramSpans = 0x10; // CParamSpanUpdater
			 uintptr_t m_tags = 0x28; // CUtlVector< TagSpan_t >
			 uintptr_t m_pRootNode = 0x40; // CSmartPtr< CMotionNode >
			 uintptr_t m_nParameterCount = 0x48; // int32
			 uintptr_t m_nConfigStartIndex = 0x4c; // int32
			 uintptr_t m_nConfigCount = 0x50; // int32
			 uintptr_t m_bLoop = 0x54; // bool
		}
	}
}

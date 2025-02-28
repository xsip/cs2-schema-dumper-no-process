#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CAnimParameterManagerUpdater {
			 uintptr_t m_parameters = 0x18; // CUtlVector< CSmartPtr< CAnimParameterBase > >
			 uintptr_t m_idToIndexMap = 0x30; // CUtlHashtable< AnimParamID, int32 >
			 uintptr_t m_nameToIndexMap = 0x50; // CUtlHashtable< CUtlString, int32 >
			 uintptr_t m_indexToHandle = 0x70; // CUtlVector< CAnimParamHandle >
			 uintptr_t m_autoResetParams = 0x88; // CUtlVector< CUtlPair< CAnimParamHandle, CAnimVariant > >
			 uintptr_t m_autoResetMap = 0xa0; // CUtlHashtable< CAnimParamHandle, int16 >
		}
	}
}

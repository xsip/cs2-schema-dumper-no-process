#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CAnimUpdateSharedData {
			 uintptr_t m_nodes = 0x10; // CUtlVector< CSmartPtr< CAnimUpdateNodeBase > >
			 uintptr_t m_nodeIndexMap = 0x28; // CUtlHashtable< CAnimNodePath, int32 >
			 uintptr_t m_components = 0x48; // CUtlVector< CSmartPtr< CAnimComponentUpdater > >
			 uintptr_t m_pParamListUpdater = 0x60; // CSmartPtr< CAnimParameterManagerUpdater >
			 uintptr_t m_pTagManagerUpdater = 0x68; // CSmartPtr< CAnimTagManagerUpdater >
			 uintptr_t m_scriptManager = 0x70; // CSmartPtr< CAnimScriptManager >
			 uintptr_t m_settings = 0x78; // CAnimGraphSettingsManager
			 uintptr_t m_pStaticPoseCache = 0xa8; // CSmartPtr< CStaticPoseCacheBuilder >
			 uintptr_t m_pSkeleton = 0xb0; // CSmartPtr< CAnimSkeleton >
			 uintptr_t m_rootNodePath = 0xb8; // CAnimNodePath
		}
	}
}

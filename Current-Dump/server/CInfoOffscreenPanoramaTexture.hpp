#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CInfoOffscreenPanoramaTexture {
			 uintptr_t m_bDisabled = 0x4e0; // bool
			 uintptr_t m_nResolutionX = 0x4e4; // int32
			 uintptr_t m_nResolutionY = 0x4e8; // int32
			 uintptr_t m_szLayoutFileName = 0x4f0; // CUtlSymbolLarge
			 uintptr_t m_RenderAttrName = 0x4f8; // CUtlSymbolLarge
			 uintptr_t m_TargetEntities = 0x500; // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > >
			 uintptr_t m_nTargetChangeCount = 0x518; // int32
			 uintptr_t m_vecCSSClasses = 0x520; // CNetworkUtlVectorBase< CUtlSymbolLarge >
			 uintptr_t m_szTargetsName = 0x538; // CUtlSymbolLarge
			 uintptr_t m_AdditionalTargetEntities = 0x540; // CUtlVector< CHandle< CBaseModelEntity > >
		}
	}
}

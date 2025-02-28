#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CRenderComponent {
			 uintptr_t __m_pChainEntity = 0x10; // CNetworkVarChainer
			 uintptr_t m_bIsRenderingWithViewModels = 0x50; // bool
			 uintptr_t m_nSplitscreenFlags = 0x54; // uint32
			 uintptr_t m_bEnableRendering = 0x60; // bool
			 uintptr_t m_bInterpolationReadyToDraw = 0xb0; // bool
		}
	}
}

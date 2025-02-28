#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_PointClientUIHUD {
			 uintptr_t m_bCheckCSSClasses = 0xd60; // bool
			 uintptr_t m_bIgnoreInput = 0xee0; // bool
			 uintptr_t m_flWidth = 0xee4; // float32
			 uintptr_t m_flHeight = 0xee8; // float32
			 uintptr_t m_flDPI = 0xeec; // float32
			 uintptr_t m_flInteractDistance = 0xef0; // float32
			 uintptr_t m_flDepthOffset = 0xef4; // float32
			 uintptr_t m_unOwnerContext = 0xef8; // uint32
			 uintptr_t m_unHorizontalAlign = 0xefc; // uint32
			 uintptr_t m_unVerticalAlign = 0xf00; // uint32
			 uintptr_t m_unOrientation = 0xf04; // uint32
			 uintptr_t m_bAllowInteractionFromAllSceneWorlds = 0xf08; // bool
			 uintptr_t m_vecCSSClasses = 0xf10; // C_NetworkUtlVectorBase< CUtlSymbolLarge >
		}
	}
}

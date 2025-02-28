#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CMorphRectData {
			 uintptr_t m_nXLeftDst = 0x0; // int16
			 uintptr_t m_nYTopDst = 0x2; // int16
			 uintptr_t m_flUWidthSrc = 0x4; // float32
			 uintptr_t m_flVHeightSrc = 0x8; // float32
			 uintptr_t m_bundleDatas = 0x10; // CUtlVector< CMorphBundleData >
		}
	}
}

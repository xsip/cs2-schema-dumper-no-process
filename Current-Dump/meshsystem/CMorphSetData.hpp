#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CMorphSetData {
			 uintptr_t m_nWidth = 0x10; // int32
			 uintptr_t m_nHeight = 0x14; // int32
			 uintptr_t m_bundleTypes = 0x18; // CUtlVector< MorphBundleType_t >
			 uintptr_t m_morphDatas = 0x30; // CUtlVector< CMorphData >
			 uintptr_t m_pTextureAtlas = 0x48; // CStrongHandle< InfoForResourceTypeCTextureBase >
			 uintptr_t m_FlexDesc = 0x50; // CUtlVector< CFlexDesc >
			 uintptr_t m_FlexControllers = 0x68; // CUtlVector< CFlexController >
			 uintptr_t m_FlexRules = 0x80; // CUtlVector< CFlexRule >
		}
	}
}

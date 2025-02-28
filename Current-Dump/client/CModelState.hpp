#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CModelState {
			 uintptr_t m_hModel = 0xa0; // CStrongHandle< InfoForResourceTypeCModel >
			 uintptr_t m_ModelName = 0xa8; // CUtlSymbolLarge
			 uintptr_t m_bClientClothCreationSuppressed = 0xe8; // bool
			 uintptr_t m_MeshGroupMask = 0x198; // uint64
			 uintptr_t m_nIdealMotionType = 0x21a; // int8
			 uintptr_t m_nForceLOD = 0x21b; // int8
			 uintptr_t m_nClothUpdateFlags = 0x21c; // int8
		}
	}
}

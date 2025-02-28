#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CompositeMaterial_t {
			 uintptr_t m_TargetKVs = 0x8; // KeyValues3
			 uintptr_t m_PreGenerationKVs = 0x18; // KeyValues3
			 uintptr_t m_FinalKVs = 0x58; // KeyValues3
			 uintptr_t m_vecGeneratedTextures = 0x80; // CUtlVector< GeneratedTextureHandle_t >
		}
	}
}

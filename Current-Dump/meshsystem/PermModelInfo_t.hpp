#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace PermModelInfo_t {
			 uintptr_t m_nFlags = 0x0; // uint32
			 uintptr_t m_vHullMin = 0x4; // Vector
			 uintptr_t m_vHullMax = 0x10; // Vector
			 uintptr_t m_vViewMin = 0x1c; // Vector
			 uintptr_t m_vViewMax = 0x28; // Vector
			 uintptr_t m_flMass = 0x34; // float32
			 uintptr_t m_vEyePosition = 0x38; // Vector
			 uintptr_t m_flMaxEyeDeflection = 0x44; // float32
			 uintptr_t m_sSurfaceProperty = 0x48; // CUtlString
			 uintptr_t m_keyValueText = 0x50; // CUtlString
		}
	}
}

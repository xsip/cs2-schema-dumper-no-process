#include <Windows.h>


namespace xsip {
	namespace materialsystem2 {
		namespace MaterialResourceData_t {
			 uintptr_t m_materialName = 0x0; // CUtlString
			 uintptr_t m_shaderName = 0x8; // CUtlString
			 uintptr_t m_intParams = 0x10; // CUtlVector< MaterialParamInt_t >
			 uintptr_t m_floatParams = 0x28; // CUtlVector< MaterialParamFloat_t >
			 uintptr_t m_vectorParams = 0x40; // CUtlVector< MaterialParamVector_t >
			 uintptr_t m_textureParams = 0x58; // CUtlVector< MaterialParamTexture_t >
			 uintptr_t m_dynamicParams = 0x70; // CUtlVector< MaterialParamBuffer_t >
			 uintptr_t m_dynamicTextureParams = 0x88; // CUtlVector< MaterialParamBuffer_t >
			 uintptr_t m_intAttributes = 0xa0; // CUtlVector< MaterialParamInt_t >
			 uintptr_t m_floatAttributes = 0xb8; // CUtlVector< MaterialParamFloat_t >
			 uintptr_t m_vectorAttributes = 0xd0; // CUtlVector< MaterialParamVector_t >
			 uintptr_t m_textureAttributes = 0xe8; // CUtlVector< MaterialParamTexture_t >
			 uintptr_t m_stringAttributes = 0x100; // CUtlVector< MaterialParamString_t >
			 uintptr_t m_renderAttributesUsed = 0x118; // CUtlVector< CUtlString >
		}
	}
}

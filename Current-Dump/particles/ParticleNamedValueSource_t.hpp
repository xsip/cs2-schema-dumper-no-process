#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace ParticleNamedValueSource_t {
			 uintptr_t m_Name = 0x0; // CUtlString
			 uintptr_t m_IsPublic = 0x8; // bool
			 uintptr_t m_ValueType = 0xc; // PulseValueType_t
			 uintptr_t m_DefaultConfig = 0x10; // ParticleNamedValueConfiguration_t
			 uintptr_t m_NamedConfigs = 0x48; // CUtlVector< ParticleNamedValueConfiguration_t >
		}
	}
}

#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_OscillateVector {
			 uintptr_t m_RateMin = 0x1c0; // Vector
			 uintptr_t m_RateMax = 0x1cc; // Vector
			 uintptr_t m_FrequencyMin = 0x1d8; // Vector
			 uintptr_t m_FrequencyMax = 0x1e4; // Vector
			 uintptr_t m_nField = 0x1f0; // ParticleAttributeIndex_t
			 uintptr_t m_bProportional = 0x1f4; // bool
			 uintptr_t m_bProportionalOp = 0x1f5; // bool
			 uintptr_t m_bOffset = 0x1f6; // bool
			 uintptr_t m_flStartTime_min = 0x1f8; // float32
			 uintptr_t m_flStartTime_max = 0x1fc; // float32
			 uintptr_t m_flEndTime_min = 0x200; // float32
			 uintptr_t m_flEndTime_max = 0x204; // float32
			 uintptr_t m_flOscMult = 0x208; // CPerParticleFloatInput
			 uintptr_t m_flOscAdd = 0x368; // CPerParticleFloatInput
			 uintptr_t m_flRateScale = 0x4c8; // CPerParticleFloatInput
		}
	}
}

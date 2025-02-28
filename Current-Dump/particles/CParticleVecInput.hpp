#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace CParticleVecInput {
			 uintptr_t m_nType = 0x10; // ParticleVecType_t
			 uintptr_t m_vLiteralValue = 0x14; // Vector
			 uintptr_t m_LiteralColor = 0x20; // Color
			 uintptr_t m_NamedValue = 0x28; // CParticleNamedValueRef
			 uintptr_t m_bFollowNamedValue = 0x68; // bool
			 uintptr_t m_nVectorAttribute = 0x6c; // ParticleAttributeIndex_t
			 uintptr_t m_vVectorAttributeScale = 0x70; // Vector
			 uintptr_t m_nControlPoint = 0x7c; // int32
			 uintptr_t m_nDeltaControlPoint = 0x80; // int32
			 uintptr_t m_vCPValueScale = 0x84; // Vector
			 uintptr_t m_vCPRelativePosition = 0x90; // Vector
			 uintptr_t m_vCPRelativeDir = 0x9c; // Vector
			 uintptr_t m_FloatComponentX = 0xa8; // CParticleFloatInput
			 uintptr_t m_FloatComponentY = 0x208; // CParticleFloatInput
			 uintptr_t m_FloatComponentZ = 0x368; // CParticleFloatInput
			 uintptr_t m_FloatInterp = 0x4c8; // CParticleFloatInput
			 uintptr_t m_flInterpInput0 = 0x628; // float32
			 uintptr_t m_flInterpInput1 = 0x62c; // float32
			 uintptr_t m_vInterpOutput0 = 0x630; // Vector
			 uintptr_t m_vInterpOutput1 = 0x63c; // Vector
			 uintptr_t m_Gradient = 0x648; // CColorGradient
			 uintptr_t m_vRandomMin = 0x660; // Vector
			 uintptr_t m_vRandomMax = 0x66c; // Vector
		}
	}
}

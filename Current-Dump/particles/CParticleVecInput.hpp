#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace CParticleVecInput {
			 uintptr_t m_nType = 0x10;
			 uintptr_t m_vLiteralValue = 0x14;
			 uintptr_t m_LiteralColor = 0x20;
			 uintptr_t m_NamedValue = 0x28;
			 uintptr_t m_bFollowNamedValue = 0x68;
			 uintptr_t m_nVectorAttribute = 0x6c;
			 uintptr_t m_vVectorAttributeScale = 0x70;
			 uintptr_t m_nControlPoint = 0x7c;
			 uintptr_t m_nDeltaControlPoint = 0x80;
			 uintptr_t m_vCPValueScale = 0x84;
			 uintptr_t m_vCPRelativePosition = 0x90;
			 uintptr_t m_vCPRelativeDir = 0x9c;
			 uintptr_t m_FloatComponentX = 0xa8;
			 uintptr_t m_FloatComponentY = 0x208;
			 uintptr_t m_FloatComponentZ = 0x368;
			 uintptr_t m_FloatInterp = 0x4c8;
			 uintptr_t m_flInterpInput0 = 0x628;
			 uintptr_t m_flInterpInput1 = 0x62c;
			 uintptr_t m_vInterpOutput0 = 0x630;
			 uintptr_t m_vInterpOutput1 = 0x63c;
			 uintptr_t m_Gradient = 0x648;
			 uintptr_t m_vRandomMin = 0x660;
			 uintptr_t m_vRandomMax = 0x66c;
		}
	}
}

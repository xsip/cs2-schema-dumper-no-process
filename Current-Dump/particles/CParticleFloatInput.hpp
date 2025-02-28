#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace CParticleFloatInput {
			 uintptr_t m_nType = 0x10; // ParticleFloatType_t
			 uintptr_t m_nMapType = 0x14; // ParticleFloatMapType_t
			 uintptr_t m_flLiteralValue = 0x18; // float32
			 uintptr_t m_NamedValue = 0x20; // CParticleNamedValueRef
			 uintptr_t m_nControlPoint = 0x60; // int32
			 uintptr_t m_nScalarAttribute = 0x64; // ParticleAttributeIndex_t
			 uintptr_t m_nVectorAttribute = 0x68; // ParticleAttributeIndex_t
			 uintptr_t m_nVectorComponent = 0x6c; // int32
			 uintptr_t m_flRandomMin = 0x70; // float32
			 uintptr_t m_flRandomMax = 0x74; // float32
			 uintptr_t m_bHasRandomSignFlip = 0x78; // bool
			 uintptr_t m_nRandomSeed = 0x7c; // int32
			 uintptr_t m_nRandomMode = 0x80; // ParticleFloatRandomMode_t
			 uintptr_t m_flLOD0 = 0x88; // float32
			 uintptr_t m_flLOD1 = 0x8c; // float32
			 uintptr_t m_flLOD2 = 0x90; // float32
			 uintptr_t m_flLOD3 = 0x94; // float32
			 uintptr_t m_nNoiseInputVectorAttribute = 0x98; // ParticleAttributeIndex_t
			 uintptr_t m_flNoiseOutputMin = 0x9c; // float32
			 uintptr_t m_flNoiseOutputMax = 0xa0; // float32
			 uintptr_t m_flNoiseScale = 0xa4; // float32
			 uintptr_t m_vecNoiseOffsetRate = 0xa8; // Vector
			 uintptr_t m_flNoiseOffset = 0xb4; // float32
			 uintptr_t m_nNoiseOctaves = 0xb8; // int32
			 uintptr_t m_nNoiseTurbulence = 0xbc; // PFNoiseTurbulence_t
			 uintptr_t m_nNoiseType = 0xc0; // PFNoiseType_t
			 uintptr_t m_nNoiseModifier = 0xc4; // PFNoiseModifier_t
			 uintptr_t m_flNoiseTurbulenceScale = 0xc8; // float32
			 uintptr_t m_flNoiseTurbulenceMix = 0xcc; // float32
			 uintptr_t m_flNoiseImgPreviewScale = 0xd0; // float32
			 uintptr_t m_bNoiseImgPreviewLive = 0xd4; // bool
			 uintptr_t m_flNoCameraFallback = 0xe0; // float32
			 uintptr_t m_bUseBoundsCenter = 0xe4; // bool
			 uintptr_t m_nInputMode = 0xe8; // ParticleFloatInputMode_t
			 uintptr_t m_flMultFactor = 0xec; // float32
			 uintptr_t m_flInput0 = 0xf0; // float32
			 uintptr_t m_flInput1 = 0xf4; // float32
			 uintptr_t m_flOutput0 = 0xf8; // float32
			 uintptr_t m_flOutput1 = 0xfc; // float32
			 uintptr_t m_flNotchedRangeMin = 0x100; // float32
			 uintptr_t m_flNotchedRangeMax = 0x104; // float32
			 uintptr_t m_flNotchedOutputOutside = 0x108; // float32
			 uintptr_t m_flNotchedOutputInside = 0x10c; // float32
			 uintptr_t m_nRoundType = 0x110; // ParticleFloatRoundType_t
			 uintptr_t m_nBiasType = 0x114; // ParticleFloatBiasType_t
			 uintptr_t m_flBiasParameter = 0x118; // float32
			 uintptr_t m_Curve = 0x120; // CPiecewiseCurve
		}
	}
}

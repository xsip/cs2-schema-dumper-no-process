#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace CParticleFloatInput {
			 uintptr_t m_nType = 0x10;
			 uintptr_t m_nMapType = 0x14;
			 uintptr_t m_flLiteralValue = 0x18;
			 uintptr_t m_NamedValue = 0x20;
			 uintptr_t m_nControlPoint = 0x60;
			 uintptr_t m_nScalarAttribute = 0x64;
			 uintptr_t m_nVectorAttribute = 0x68;
			 uintptr_t m_nVectorComponent = 0x6c;
			 uintptr_t m_flRandomMin = 0x70;
			 uintptr_t m_flRandomMax = 0x74;
			 uintptr_t m_bHasRandomSignFlip = 0x78;
			 uintptr_t m_nRandomSeed = 0x7c;
			 uintptr_t m_nRandomMode = 0x80;
			 uintptr_t m_flLOD0 = 0x88;
			 uintptr_t m_flLOD1 = 0x8c;
			 uintptr_t m_flLOD2 = 0x90;
			 uintptr_t m_flLOD3 = 0x94;
			 uintptr_t m_nNoiseInputVectorAttribute = 0x98;
			 uintptr_t m_flNoiseOutputMin = 0x9c;
			 uintptr_t m_flNoiseOutputMax = 0xa0;
			 uintptr_t m_flNoiseScale = 0xa4;
			 uintptr_t m_vecNoiseOffsetRate = 0xa8;
			 uintptr_t m_flNoiseOffset = 0xb4;
			 uintptr_t m_nNoiseOctaves = 0xb8;
			 uintptr_t m_nNoiseTurbulence = 0xbc;
			 uintptr_t m_nNoiseType = 0xc0;
			 uintptr_t m_nNoiseModifier = 0xc4;
			 uintptr_t m_flNoiseTurbulenceScale = 0xc8;
			 uintptr_t m_flNoiseTurbulenceMix = 0xcc;
			 uintptr_t m_flNoiseImgPreviewScale = 0xd0;
			 uintptr_t m_bNoiseImgPreviewLive = 0xd4;
			 uintptr_t m_flNoCameraFallback = 0xe0;
			 uintptr_t m_bUseBoundsCenter = 0xe4;
			 uintptr_t m_nInputMode = 0xe8;
			 uintptr_t m_flMultFactor = 0xec;
			 uintptr_t m_flInput0 = 0xf0;
			 uintptr_t m_flInput1 = 0xf4;
			 uintptr_t m_flOutput0 = 0xf8;
			 uintptr_t m_flOutput1 = 0xfc;
			 uintptr_t m_flNotchedRangeMin = 0x100;
			 uintptr_t m_flNotchedRangeMax = 0x104;
			 uintptr_t m_flNotchedOutputOutside = 0x108;
			 uintptr_t m_flNotchedOutputInside = 0x10c;
			 uintptr_t m_nRoundType = 0x110;
			 uintptr_t m_nBiasType = 0x114;
			 uintptr_t m_flBiasParameter = 0x118;
			 uintptr_t m_Curve = 0x120;
		}
	}
}

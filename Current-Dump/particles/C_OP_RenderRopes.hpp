#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RenderRopes {
			 uintptr_t m_bEnableFadingAndClamping = 0x2aa8; // bool
			 uintptr_t m_flMinSize = 0x2aac; // float32
			 uintptr_t m_flMaxSize = 0x2ab0; // float32
			 uintptr_t m_flStartFadeSize = 0x2ab4; // float32
			 uintptr_t m_flEndFadeSize = 0x2ab8; // float32
			 uintptr_t m_flStartFadeDot = 0x2abc; // float32
			 uintptr_t m_flEndFadeDot = 0x2ac0; // float32
			 uintptr_t m_flRadiusTaper = 0x2ac4; // float32
			 uintptr_t m_nMinTesselation = 0x2ac8; // int32
			 uintptr_t m_nMaxTesselation = 0x2acc; // int32
			 uintptr_t m_flTessScale = 0x2ad0; // float32
			 uintptr_t m_flTextureVWorldSize = 0x2ad8; // CParticleCollectionRendererFloatInput
			 uintptr_t m_flTextureVScrollRate = 0x2c38; // CParticleCollectionRendererFloatInput
			 uintptr_t m_flTextureVOffset = 0x2d98; // CParticleCollectionRendererFloatInput
			 uintptr_t m_nTextureVParamsCP = 0x2ef8; // int32
			 uintptr_t m_bClampV = 0x2efc; // bool
			 uintptr_t m_nScaleCP1 = 0x2f00; // int32
			 uintptr_t m_nScaleCP2 = 0x2f04; // int32
			 uintptr_t m_flScaleVSizeByControlPointDistance = 0x2f08; // float32
			 uintptr_t m_flScaleVScrollByControlPointDistance = 0x2f0c; // float32
			 uintptr_t m_flScaleVOffsetByControlPointDistance = 0x2f10; // float32
			 uintptr_t m_bUseScalarForTextureCoordinate = 0x2f15; // bool
			 uintptr_t m_nScalarFieldForTextureCoordinate = 0x2f18; // ParticleAttributeIndex_t
			 uintptr_t m_flScalarAttributeTextureCoordScale = 0x2f1c; // float32
			 uintptr_t m_bReverseOrder = 0x2f20; // bool
			 uintptr_t m_bClosedLoop = 0x2f21; // bool
			 uintptr_t m_nOrientationType = 0x2f24; // ParticleOrientationChoiceList_t
			 uintptr_t m_nVectorFieldForOrientation = 0x2f28; // ParticleAttributeIndex_t
			 uintptr_t m_bDrawAsOpaque = 0x2f2c; // bool
			 uintptr_t m_bGenerateNormals = 0x2f2d; // bool
		}
	}
}

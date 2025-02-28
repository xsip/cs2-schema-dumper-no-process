#include <Windows.h>


namespace xsip {
	namespace worldrenderer {
		namespace SceneObject_t {
			 uintptr_t m_nObjectID = 0x0; // uint32
			 uintptr_t m_vTransform = 0x4; // Vector4D[3]
			 uintptr_t m_flFadeStartDistance = 0x34; // float32
			 uintptr_t m_flFadeEndDistance = 0x38; // float32
			 uintptr_t m_vTintColor = 0x3c; // Vector4D
			 uintptr_t m_skin = 0x50; // CUtlString
			 uintptr_t m_nObjectTypeFlags = 0x58; // ObjectTypeFlags_t
			 uintptr_t m_vLightingOrigin = 0x5c; // Vector
			 uintptr_t m_nOverlayRenderOrder = 0x68; // int16
			 uintptr_t m_nLODOverride = 0x6a; // int16
			 uintptr_t m_nCubeMapPrecomputedHandshake = 0x6c; // int32
			 uintptr_t m_nLightProbeVolumePrecomputedHandshake = 0x70; // int32
			 uintptr_t m_renderableModel = 0x78; // CStrongHandle< InfoForResourceTypeCModel >
			 uintptr_t m_renderable = 0x80; // CStrongHandle< InfoForResourceTypeCRenderMesh >
		}
	}
}

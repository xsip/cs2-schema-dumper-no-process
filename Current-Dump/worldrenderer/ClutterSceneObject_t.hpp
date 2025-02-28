#include <Windows.h>


namespace xsip {
	namespace worldrenderer {
		namespace ClutterSceneObject_t {
			 uintptr_t m_Bounds = 0x0; // AABB_t
			 uintptr_t m_flags = 0x18; // ObjectTypeFlags_t
			 uintptr_t m_nLayer = 0x1c; // int16
			 uintptr_t m_instancePositions = 0x20; // CUtlVector< Vector >
			 uintptr_t m_instanceScales = 0x50; // CUtlVector< float32 >
			 uintptr_t m_instanceTintSrgb = 0x68; // CUtlVector< Color >
			 uintptr_t m_tiles = 0x80; // CUtlVector< ClutterTile_t >
			 uintptr_t m_renderableModel = 0x98; // CStrongHandle< InfoForResourceTypeCModel >
		}
	}
}

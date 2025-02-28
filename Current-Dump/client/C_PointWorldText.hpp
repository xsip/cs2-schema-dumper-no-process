#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_PointWorldText {
			 uintptr_t m_bForceRecreateNextUpdate = 0xd30; // bool
			 uintptr_t m_messageText = 0xd48; // char[512]
			 uintptr_t m_FontName = 0xf48; // char[64]
			 uintptr_t m_BackgroundMaterialName = 0xf88; // char[64]
			 uintptr_t m_bEnabled = 0xfc8; // bool
			 uintptr_t m_bFullbright = 0xfc9; // bool
			 uintptr_t m_flWorldUnitsPerPx = 0xfcc; // float32
			 uintptr_t m_flFontSize = 0xfd0; // float32
			 uintptr_t m_flDepthOffset = 0xfd4; // float32
			 uintptr_t m_bDrawBackground = 0xfd8; // bool
			 uintptr_t m_flBackgroundBorderWidth = 0xfdc; // float32
			 uintptr_t m_flBackgroundBorderHeight = 0xfe0; // float32
			 uintptr_t m_flBackgroundWorldToUV = 0xfe4; // float32
			 uintptr_t m_Color = 0xfe8; // Color
			 uintptr_t m_nJustifyHorizontal = 0xfec; // PointWorldTextJustifyHorizontal_t
			 uintptr_t m_nJustifyVertical = 0xff0; // PointWorldTextJustifyVertical_t
			 uintptr_t m_nReorientMode = 0xff4; // PointWorldTextReorientMode_t
		}
	}
}

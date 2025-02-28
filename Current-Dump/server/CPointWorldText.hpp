#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPointWorldText {
			 uintptr_t m_messageText = 0x790; // char[512]
			 uintptr_t m_FontName = 0x990; // char[64]
			 uintptr_t m_BackgroundMaterialName = 0x9d0; // char[64]
			 uintptr_t m_bEnabled = 0xa10; // bool
			 uintptr_t m_bFullbright = 0xa11; // bool
			 uintptr_t m_flWorldUnitsPerPx = 0xa14; // float32
			 uintptr_t m_flFontSize = 0xa18; // float32
			 uintptr_t m_flDepthOffset = 0xa1c; // float32
			 uintptr_t m_bDrawBackground = 0xa20; // bool
			 uintptr_t m_flBackgroundBorderWidth = 0xa24; // float32
			 uintptr_t m_flBackgroundBorderHeight = 0xa28; // float32
			 uintptr_t m_flBackgroundWorldToUV = 0xa2c; // float32
			 uintptr_t m_Color = 0xa30; // Color
			 uintptr_t m_nJustifyHorizontal = 0xa34; // PointWorldTextJustifyHorizontal_t
			 uintptr_t m_nJustifyVertical = 0xa38; // PointWorldTextJustifyVertical_t
			 uintptr_t m_nReorientMode = 0xa3c; // PointWorldTextReorientMode_t
		}
	}
}

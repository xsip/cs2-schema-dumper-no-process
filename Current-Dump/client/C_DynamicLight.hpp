#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_DynamicLight {
			 uintptr_t m_Flags = 0xd28; // uint8
			 uintptr_t m_LightStyle = 0xd29; // uint8
			 uintptr_t m_Radius = 0xd2c; // float32
			 uintptr_t m_Exponent = 0xd30; // int32
			 uintptr_t m_InnerAngle = 0xd34; // float32
			 uintptr_t m_OuterAngle = 0xd38; // float32
			 uintptr_t m_SpotRadius = 0xd3c; // float32
		}
	}
}

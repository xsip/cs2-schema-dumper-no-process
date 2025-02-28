#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CDynamicLight {
			 uintptr_t m_ActualFlags = 0x790; // uint8
			 uintptr_t m_Flags = 0x791; // uint8
			 uintptr_t m_LightStyle = 0x792; // uint8
			 uintptr_t m_On = 0x793; // bool
			 uintptr_t m_Radius = 0x794; // float32
			 uintptr_t m_Exponent = 0x798; // int32
			 uintptr_t m_InnerAngle = 0x79c; // float32
			 uintptr_t m_OuterAngle = 0x7a0; // float32
			 uintptr_t m_SpotRadius = 0x7a4; // float32
		}
	}
}

#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_Fish {
			 uintptr_t m_pos = 0xf88; // Vector
			 uintptr_t m_vel = 0xf94; // Vector
			 uintptr_t m_angles = 0xfa0; // QAngle
			 uintptr_t m_localLifeState = 0xfac; // int32
			 uintptr_t m_deathDepth = 0xfb0; // float32
			 uintptr_t m_deathAngle = 0xfb4; // float32
			 uintptr_t m_buoyancy = 0xfb8; // float32
			 uintptr_t m_wiggleTimer = 0xfc0; // CountdownTimer
			 uintptr_t m_wigglePhase = 0xfd8; // float32
			 uintptr_t m_wiggleRate = 0xfdc; // float32
			 uintptr_t m_actualPos = 0xfe0; // Vector
			 uintptr_t m_actualAngles = 0xfec; // QAngle
			 uintptr_t m_poolOrigin = 0xff8; // Vector
			 uintptr_t m_waterLevel = 0x1004; // float32
			 uintptr_t m_gotUpdate = 0x1008; // bool
			 uintptr_t m_x = 0x100c; // float32
			 uintptr_t m_y = 0x1010; // float32
			 uintptr_t m_z = 0x1014; // float32
			 uintptr_t m_angle = 0x1018; // float32
			 uintptr_t m_errorHistory = 0x101c; // float32[20]
			 uintptr_t m_errorHistoryIndex = 0x106c; // int32
			 uintptr_t m_errorHistoryCount = 0x1070; // int32
			 uintptr_t m_averageError = 0x1074; // float32
		}
	}
}

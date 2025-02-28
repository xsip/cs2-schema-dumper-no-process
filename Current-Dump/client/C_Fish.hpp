#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_Fish {
			 uintptr_t m_pos = 0xf88;
			 uintptr_t m_vel = 0xf94;
			 uintptr_t m_angles = 0xfa0;
			 uintptr_t m_localLifeState = 0xfac;
			 uintptr_t m_deathDepth = 0xfb0;
			 uintptr_t m_deathAngle = 0xfb4;
			 uintptr_t m_buoyancy = 0xfb8;
			 uintptr_t m_wiggleTimer = 0xfc0;
			 uintptr_t m_wigglePhase = 0xfd8;
			 uintptr_t m_wiggleRate = 0xfdc;
			 uintptr_t m_actualPos = 0xfe0;
			 uintptr_t m_actualAngles = 0xfec;
			 uintptr_t m_poolOrigin = 0xff8;
			 uintptr_t m_waterLevel = 0x1004;
			 uintptr_t m_gotUpdate = 0x1008;
			 uintptr_t m_x = 0x100c;
			 uintptr_t m_y = 0x1010;
			 uintptr_t m_z = 0x1014;
			 uintptr_t m_angle = 0x1018;
			 uintptr_t m_errorHistory = 0x101c;
			 uintptr_t m_errorHistoryIndex = 0x106c;
			 uintptr_t m_errorHistoryCount = 0x1070;
			 uintptr_t m_averageError = 0x1074;
		}
	}
}

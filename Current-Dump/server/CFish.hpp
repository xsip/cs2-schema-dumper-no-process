#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CFish {
			 uintptr_t m_pool = 0x9a8; // CHandle< CFishPool >
			 uintptr_t m_id = 0x9ac; // uint32
			 uintptr_t m_x = 0x9b0; // float32
			 uintptr_t m_y = 0x9b4; // float32
			 uintptr_t m_z = 0x9b8; // float32
			 uintptr_t m_angle = 0x9bc; // float32
			 uintptr_t m_angleChange = 0x9c0; // float32
			 uintptr_t m_forward = 0x9c4; // Vector
			 uintptr_t m_perp = 0x9d0; // Vector
			 uintptr_t m_poolOrigin = 0x9dc; // Vector
			 uintptr_t m_waterLevel = 0x9e8; // float32
			 uintptr_t m_speed = 0x9ec; // float32
			 uintptr_t m_desiredSpeed = 0x9f0; // float32
			 uintptr_t m_calmSpeed = 0x9f4; // float32
			 uintptr_t m_panicSpeed = 0x9f8; // float32
			 uintptr_t m_avoidRange = 0x9fc; // float32
			 uintptr_t m_turnTimer = 0xa00; // CountdownTimer
			 uintptr_t m_turnClockwise = 0xa18; // bool
			 uintptr_t m_goTimer = 0xa20; // CountdownTimer
			 uintptr_t m_moveTimer = 0xa38; // CountdownTimer
			 uintptr_t m_panicTimer = 0xa50; // CountdownTimer
			 uintptr_t m_disperseTimer = 0xa68; // CountdownTimer
			 uintptr_t m_proximityTimer = 0xa80; // CountdownTimer
			 uintptr_t m_visible = 0xa98; // CUtlVector< CFish* >
		}
	}
}

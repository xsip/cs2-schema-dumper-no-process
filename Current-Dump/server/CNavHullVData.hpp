#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CNavHullVData {
			 uintptr_t m_bAgentEnabled = 0x0; // bool
			 uintptr_t m_agentRadius = 0x4; // float32
			 uintptr_t m_agentHeight = 0x8; // float32
			 uintptr_t m_agentShortHeightEnabled = 0xc; // bool
			 uintptr_t m_agentShortHeight = 0x10; // float32
			 uintptr_t m_agentMaxClimb = 0x14; // float32
			 uintptr_t m_agentMaxSlope = 0x18; // int32
			 uintptr_t m_agentMaxJumpDownDist = 0x1c; // float32
			 uintptr_t m_agentMaxJumpHorizDistBase = 0x20; // float32
			 uintptr_t m_agentMaxJumpUpDist = 0x24; // float32
			 uintptr_t m_agentBorderErosion = 0x28; // int32
			 uintptr_t m_flowMapGenerationEnabled = 0x2c; // bool
			 uintptr_t m_flowMapNodeMaxRadius = 0x30; // float32
		}
	}
}

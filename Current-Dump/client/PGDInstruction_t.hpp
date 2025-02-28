#include <Windows.h>


namespace xsip {
	namespace client {
		namespace PGDInstruction_t {
			 uintptr_t m_nCode = 0x0; // PulseInstructionCode_t
			 uintptr_t m_nVar = 0x4; // PulseRuntimeVarIndex_t
			 uintptr_t m_nReg0 = 0x8; // PulseRuntimeRegisterIndex_t
			 uintptr_t m_nReg1 = 0xa; // PulseRuntimeRegisterIndex_t
			 uintptr_t m_nReg2 = 0xc; // PulseRuntimeRegisterIndex_t
			 uintptr_t m_nInvokeBindingIndex = 0x10; // PulseRuntimeInvokeIndex_t
			 uintptr_t m_nChunk = 0x14; // PulseRuntimeChunkIndex_t
			 uintptr_t m_nDestInstruction = 0x18; // int32
			 uintptr_t m_nCallInfoIndex = 0x1c; // PulseRuntimeCallInfoIndex_t
			 uintptr_t m_nConstIdx = 0x20; // PulseRuntimeConstantIndex_t
			 uintptr_t m_nDomainValueIdx = 0x22; // PulseRuntimeDomainValueIndex_t
			 uintptr_t m_nBlackboardReferenceIdx = 0x24; // PulseRuntimeBlackboardReferenceIndex_t
		}
	}
}

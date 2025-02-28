#include <Windows.h>


namespace xsip {
	namespace schemasystem {
		namespace CSchemaSystemInternalRegistration {
			 uintptr_t m_Vector2D = 0x0; // Vector2D
			 uintptr_t m_Vector = 0x8; // Vector
			 uintptr_t m_VectorAligned = 0x20; // VectorAligned
			 uintptr_t m_Quaternion = 0x30; // Quaternion
			 uintptr_t m_QAngle = 0x40; // QAngle
			 uintptr_t m_RotationVector = 0x4c; // RotationVector
			 uintptr_t m_RadianEuler = 0x58; // RadianEuler
			 uintptr_t m_DegreeEuler = 0x64; // DegreeEuler
			 uintptr_t m_QuaternionStorage = 0x70; // QuaternionStorage
			 uintptr_t m_matrix3x4_t = 0x80; // matrix3x4_t
			 uintptr_t m_matrix3x4a_t = 0xb0; // matrix3x4a_t
			 uintptr_t m_Color = 0xe0; // Color
			 uintptr_t m_Vector4D = 0xe4; // Vector4D
			 uintptr_t m_CTransform = 0x100; // CTransform
			 uintptr_t m_pKeyValues = 0x120; // KeyValues*
			 uintptr_t m_CUtlBinaryBlock = 0x128; // CUtlBinaryBlock
			 uintptr_t m_CUtlString = 0x140; // CUtlString
			 uintptr_t m_CUtlSymbol = 0x148; // CUtlSymbol
			 uintptr_t m_stringToken = 0x14c; // CUtlStringToken
			 uintptr_t m_stringTokenWithStorage = 0x150; // CUtlStringTokenWithStorage
			 uintptr_t m_ResourceTypes = 0x168; // CResourceArray< CResourcePointer< CResourceString > >
			 uintptr_t m_KV3 = 0x170; // KeyValues3
		}
	}
}

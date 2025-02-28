#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "CSchemaSystem.h"
#include "GlobalLoader.hpp"

class CSchemaDumper {
public:
	inline static void DumpToFS(const char* outputPath) {
		std::string outputPathStr = std::string(outputPath);
		auto pSchemaSystem = GlobalLoader::GetSchemaSystem();
		if (!CSchemaDumper::CreateDir(outputPath)) {
			printf("Couldn't create output path ( %s )!\n", outputPath);
			return;
		}
		std::ofstream sdkFile;
		auto sdkFilePath = outputPathStr + std::string("\\SDK.hpp");

		sdkFile.open(sdkFilePath.c_str());

		for (int scopeIdx = 0; scopeIdx < pSchemaSystem->m_nScopeSize; scopeIdx++) {
			auto currentScope = pSchemaSystem->m_pScopeArray[scopeIdx];
			std::ofstream infoFile;
			std::ofstream simpleSdkFile;
			auto scopeStr = std::string(currentScope->m_szName);

			auto dllToFolderName = scopeStr.substr(0,scopeStr.find(".dll"));

			simpleSdkFile.open(outputPathStr + "\\" + dllToFolderName + ".hpp");

			auto scopePath = (std::string(outputPath) + "\\" + dllToFolderName);
			if (!CSchemaDumper::CreateDir(scopePath.c_str())) {
				printf("Couldn't create output path ( %s )!\n", scopePath.c_str());
				return;
			}
			infoFile.open((scopePath + "\\" + "info.txt").c_str());
			infoFile << "// Current Scope: " << currentScope->m_szName << std::endl;
			infoFile << "// Number of Classes In Scope: " << currentScope->m_nNumDeclaredClasses << std::endl << std::endl;
			infoFile << "// Classes: " << std::endl;

			if (currentScope->m_pEnumBindings) {
				printf("Class: 0x%p ( %s ) | %i\n", &pSchemaSystem->m_pScopeArray[scopeIdx], currentScope->m_szName, currentScope->m_nNumDeclaredClasses);

			}
			
			if (currentScope->m_nNumDeclaredClasses == 65535)
				continue;

			sdkFile << "#include \"" << dllToFolderName.c_str() << ".hpp\"" << std::endl;

			for (int classIdx = 0; classIdx < currentScope->m_nNumDeclaredClasses; classIdx++) {
				auto currentClassDef = currentScope->m_pDeclaredClasses[classIdx];
				
				auto classData = currentClassDef.m_pDeclaredClass->m_Class;
				auto numFields = classData->m_nNumFields;

				std::ofstream currentClassFile;
				auto currentClassPath = scopePath + "\\" + std::string(classData->m_szName) + ".hpp";
				currentClassFile.open(currentClassPath.c_str());

				currentClassFile << "#include <Windows.h>" << std::endl<< std::endl<< std::endl;
				currentClassFile << "namespace xsip {" << std::endl;
				currentClassFile << "\tnamespace " << dllToFolderName.c_str() << " {" << std::endl;
				currentClassFile << "\t\tnamespace " << classData->m_szName << " {" << std::endl;
				infoFile << "//\t" << classData->m_szName << " ( " << numFields << " properties )" << std::endl;
				if (strstr(classData->m_szName, "CCSPlayer_PingServices")) {
					printf("Class: 0x%p ( %s | %s )\n", &currentScope->m_pDeclaredClasses[classIdx], classData->m_szName, dllToFolderName.c_str());

				}
				// printf("\tClassDefinition: %s ( %i fields )\n", classData->m_szName, numFields);
				for (int propertyIdx = 0; propertyIdx < numFields; propertyIdx++) {
					currentClassFile << "\t\t\t uintptr_t " << classData->m_pFields[propertyIdx].m_szName << " = 0x" << std::hex << classData->m_pFields[propertyIdx].m_nOffset << "; // " << classData->m_pFields[propertyIdx].m_pType->m_szName << std::endl;
					/*if (strstr(classData->m_szName, "BaseEntity") && classData->m_pFields[propertyIdx].m_nMetadataSize) {
						printf("Prop: 0x%p\n", &classData->m_pFields[propertyIdx]);
						printf("\t\tField: %s | Offset: 0x%x | %s\n", classData->m_pFields[propertyIdx].m_szName, classData->m_pFields[propertyIdx].m_nOffset, classData->m_pFields[propertyIdx].m_pType->m_szName);
					}*/
				}
				currentClassFile << "\t\t}" << std::endl;
				currentClassFile << "\t}" << std::endl;
				currentClassFile << "}" << std::endl;
				simpleSdkFile << "#include \"" << dllToFolderName.c_str() << "/" << classData->m_szName << ".hpp\"" << std::endl;
				currentClassFile.close();

			}
			infoFile << std::endl;
			infoFile.close();
			simpleSdkFile.close();
		}
		sdkFile.close();
	}
private:

	inline static bool CreateDir(const char* path) {
		return CreateDirectory(path, NULL) ||
			ERROR_ALREADY_EXISTS == GetLastError();
	}
};
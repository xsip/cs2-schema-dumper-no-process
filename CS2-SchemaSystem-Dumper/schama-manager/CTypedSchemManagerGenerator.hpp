#pragma once

#include <string>
#include <cctype>
#include <iostream>
#include <fstream>

#include "../GlobalLoader.hpp"

class CTypedSchemaManagerGenerator {
public:
	inline static bool CreateEnums(std::string path) {

		std::ofstream moduleEnumFile;
		std::ofstream moduleResolverFile;
		std::ofstream classResolverFile;
		std::ofstream classEnumFile;

		auto pSchemaSystem = GlobalLoader::GetSchemaSystem();
		
		auto moduleEnumFilePath = path + std::string("\\ModuleConstants.hpp");
		auto classEnumFilePath = path + std::string("\\ClassConstants.hpp");
		auto moduleResolverFilePath = path + std::string("\\ModuleResolver.hpp");
		auto classResolverFilePath = path + std::string("\\ClassResolver.hpp");

		if (!CTypedSchemaManagerGenerator::CreateDir(path.c_str())) {
			printf("Couldn't create output path ( %s )!\n", path.c_str());
			return false;
		}

		moduleEnumFile.open(moduleEnumFilePath);
		moduleResolverFile.open(moduleResolverFilePath);
		classResolverFile.open(classResolverFilePath);
		classEnumFile.open(classEnumFilePath);

		moduleEnumFile << "namespace SchemaManager {  " << std::endl;
		moduleEnumFile << "\tenum Module {  " << std::endl;
		
		classEnumFile << "namespace SchemaManager {  " << std::endl;
		classEnumFile << "\tenum ClassList {  " << std::endl;

		moduleResolverFile << "namespace SchemaManager {  " << std::endl;
		moduleResolverFile << "\tclass ModuleResolver {  " << std::endl;
		moduleResolverFile << "\tpublic:  " << std::endl;
		moduleResolverFile << "\tinline static const char* GetModuleNameFromEnum(SchemaManager::Module m) {  " << std::endl;
		moduleResolverFile << "\t\t\tswitch(m) {  " << std::endl;	


		classResolverFile << "namespace SchemaManager {  " << std::endl;
		classResolverFile << "\tclass ClassResolver {  " << std::endl;
		classResolverFile << "\tpublic:  " << std::endl;
		classResolverFile << "\tinline static const char* GetClassNameFromEnum(SchemaManager::ClassList c) {  " << std::endl;
		classResolverFile << "\t\t\tswitch(c) {  " << std::endl;

		int globalClassIdx = 0;
		for (int scopeIdx = 0; scopeIdx < pSchemaSystem->m_nScopeSize; scopeIdx++) {

			auto currentScope = pSchemaSystem->GetScopeEntry(scopeIdx);
			auto scopeStr = std::string(currentScope->m_szName);
			auto moduleNameFixed = std::string(scopeStr.substr(0, scopeStr.find(".dll")));
			auto moduleNameFixedLowercase = std::string(scopeStr.substr(0, scopeStr.find(".dll")));
			
			moduleNameFixed[0] = std::toupper(moduleNameFixed[0]);
			moduleEnumFile << "\t\t" << moduleNameFixed.c_str() << ",  " << std::endl;

			moduleResolverFile << "\t\t\t\tcase SchemaManager::Module::"<< moduleNameFixed.c_str() << ":" << std::endl;
			moduleResolverFile << "\t\t\t\t\treturn \"" << moduleNameFixedLowercase.c_str() << "\";" << std::endl;


			if (currentScope->m_nNumDeclaredClasses == 65535)
				continue;


			for (int classIdx = 0; classIdx < currentScope->m_nNumDeclaredClasses; classIdx++) {
				auto currentClassDef = currentScope->m_pDeclaredClasses[classIdx];
				auto classData = currentClassDef.m_pDeclaredClass->m_Class;
				auto numFields = classData->m_nNumFields;

				std::string className = std::string(classData->m_szName);
				className = RemoveNamespace(className);
				std::string classNameFixed = std::string(className.c_str());
				classNameFixed[0] = std::toupper(classNameFixed[0]);

				classResolverFile << "\t\t\t\tcase SchemaManager::ClassList::" << classNameFixed.c_str() << ":" << std::endl;
				classResolverFile << "\t\t\t\t\treturn \"" << className.c_str() << "\";" << std::endl;
				classEnumFile << "\t\t" << classNameFixed.c_str() << " = " << globalClassIdx << ", " << std::endl;

				globalClassIdx++;
			}

		}

		moduleResolverFile << "\t\t\t default:"  << std::endl;
		moduleResolverFile << "\t\t\t\t return (const char*)\"\";" << std::endl;
		moduleResolverFile << "\t\t\t\t}  " << std::endl;
		moduleResolverFile << "\t\t\t}  " << std::endl;
		moduleResolverFile << "\t\t}  " << std::endl;
		moduleResolverFile << "\t}  " << std::endl;

		moduleResolverFile.close();

	

		moduleEnumFile << "\t}  " << std::endl;
		moduleEnumFile << "}  " << std::endl;
		moduleEnumFile.close();

		classEnumFile << "\t}  " << std::endl;
		classEnumFile << "}  " << std::endl;
		classEnumFile.close();

		classResolverFile << "\t\t\t default:" << std::endl;
		classResolverFile << "\t\t\t\t return (const char*)\"\";" << std::endl;
		classResolverFile << "\t\t\t\t}  " << std::endl;
		classResolverFile << "\t\t\t}  " << std::endl;
		classResolverFile << "\t\t}  " << std::endl;
		classResolverFile << "\t}  " << std::endl;

		classResolverFile.close();
	}

	inline static bool CreateDir(const char* path) {
		return CreateDirectory(path, NULL) ||
			ERROR_ALREADY_EXISTS == GetLastError();
	}

	inline static std::string& RemoveNamespace(std::string& s)
	{
		for (auto& i : s)
		{
			if (i == '\:' )
			{
				i = '\_';
			}
		}
		return s;
	}
};
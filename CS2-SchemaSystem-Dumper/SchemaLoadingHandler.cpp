#include "SchemaLoadingHandler.hpp"
#include "BaseLoader.hpp"


 bool SchemaLoadingHandler::InstallSchemaBindings(const char* dllName) {

	if (SchemaLoadingHandler::installedSchemaBindings[dllName]) {
		printf("Ignoring %s\n", dllName);
		return true;
	}

	if (SchemaLoadingHandler::pSchemaSystem == NULL) {
		printf("pSchemaSystem is NULL!\nCouldn't install schema bindings for %s\n", dllName);
		return false;
	}

	std::map<const char*, HINSTANCE>::iterator it;
	HINSTANCE foundDll = NULL;
	for (it = SchemaLoadingHandler::dependencyMap.begin(); it != SchemaLoadingHandler::dependencyMap.end(); it++)
	{
		if (strstr(it->first, dllName)) {
			foundDll = it->second;
			break;
		}
	}
	if (!foundDll) {
		printf("Didn't find %s to get InstallBindings function..\n", dllName);
		return false;
	}


	SchemaLoadingHandler::_InstallSchemaBindings installBindingsFn = (SchemaLoadingHandler::_InstallSchemaBindings)GetProcAddress(foundDll, "InstallSchemaBindings");

	auto res = installBindingsFn("SchemaSystem_001", SchemaLoadingHandler::pSchemaSystem);

	if (res != 0x00000000C0000001) {
		printf("Couldn't install schemaBindings for %s!\n", dllName);
		return false;
	}
	printf("Installed Bindings for %s\n", dllName);
	SchemaLoadingHandler::installedSchemaBindings.insert({ dllName, true });

	return true;

}

 bool SchemaLoadingHandler::LoadNeededDlls(std::vector<const char*> dependencyDlls, const char* mainDll) {
	std::string tier0FullPath = std::string(BaseLoader::basePath) + std::string(SchemaLoadingHandler::tier0Path);
	std::string schemaSystemFullPath = std::string(BaseLoader::basePath) + std::string(SchemaLoadingHandler::schemaSystemPath);
	if (SchemaLoadingHandler::loadedMainDlls[mainDll])
		return true;

	if (SchemaLoadingHandler::schemaSystemDllHandle == NULL || SchemaLoadingHandler::pSchemaSystem == NULL || SchemaLoadingHandler::tier0DllHandle == NULL) {

		if (SchemaLoadingHandler::tier0DllHandle == NULL) {
			SchemaLoadingHandler::tier0DllHandle = LoadLibrary(_T(tier0FullPath.c_str()));

			if (SchemaLoadingHandler::tier0DllHandle == NULL) {
				printf("tier0.dll couldn't be loaded: 0x%x\n", GetLastError());
				return false;
			}
			SchemaLoadingHandler::dependencyMap.insert({ tier0FullPath.c_str(), SchemaLoadingHandler::tier0DllHandle });
		}



		if (SchemaLoadingHandler::schemaSystemDllHandle == NULL) {
			SchemaLoadingHandler::schemaSystemDllHandle = LoadLibrary(_T(schemaSystemFullPath.c_str()));

			if (SchemaLoadingHandler::schemaSystemDllHandle == NULL) {
				printf("schemaSystem.dll couldn't be loaded 0x%x\n", GetLastError());
				return false;
			}

			SchemaLoadingHandler::dependencyMap.insert({ SchemaLoadingHandler::schemaSystemPath, SchemaLoadingHandler::schemaSystemDllHandle });
		}


		if (SchemaLoadingHandler::pSchemaSystem == NULL)
			SchemaLoadingHandler::pSchemaSystem = SchemaLoadingHandler::GetCreateInterfaceFn<SDK::CSchemaSystem*>("schemasystem.dll")("SchemaSystem_001", NULL);

		if (pSchemaSystem == NULL) {
			printf("Couldn't create SchemaSystem_001\n");
			return false;
		}

		if (!SchemaLoadingHandler::InstallSchemaBindings("schemasystem.dll")) {
			printf("Couldnt install schema bindings for schemasystem.dll");
			return false;
		}

	}

	for (const auto dllToLoad : dependencyDlls) {
		if (SchemaLoadingHandler::dependencyMap[dllToLoad]) {
			printf("%s alread loaded!\n", dllToLoad);
			continue;
		}
		std::string path = std::string(BaseLoader::basePath) + std::string(dllToLoad);
		auto handle = LoadLibrary(_T(path.c_str()));
		if (handle == NULL) {
			printf("[WTF]Coudln't load \"%s\" (0x%x)\n", dllToLoad, GetLastError());
			return false;
		}
		SchemaLoadingHandler::dependencyMap.insert({ dllToLoad, handle });
	}
	std::string mainPath = std::string(BaseLoader::basePath) + std::string(mainDll);
	auto mainHandle = LoadLibrary(_T(mainPath.c_str()));
	if (mainHandle == NULL) {
		printf("Coudln't load main dll \"%s\" (0x%x)\n", mainDll, GetLastError());
		return false;
	}


	SchemaLoadingHandler::dependencyMap.insert({ mainDll, mainHandle });
	SchemaLoadingHandler::loadedMainDlls.insert({ mainDll, true });

	return true;

}
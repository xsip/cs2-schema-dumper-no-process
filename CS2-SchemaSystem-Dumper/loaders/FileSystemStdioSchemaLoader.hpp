#pragma once
#include "../BaseLoader.hpp"

class FileSystemStdioSchemaLoader : public BaseLoader {

public:
	FileSystemStdioSchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		dllsToLoad = {
			"game\\bin\\win64\\steam_api64.dll",
		};
		mainDll = "game\\bin\\win64\\filesystem_stdio.dll";

		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};
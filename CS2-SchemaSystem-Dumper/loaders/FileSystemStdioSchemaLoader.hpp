#pragma once
#include "../BaseLoader.hpp"

class FileSystemStdioSchemaLoader : public BaseLoader {

public:
	FileSystemStdioSchemaLoader() : BaseLoader() { 
		dllsToLoad = {
			"game\\bin\\win64\\steam_api64.dll",
		};
		mainDll = "game\\bin\\win64\\filesystem_stdio.dll";
	}

	inline bool Initialize() {

		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};
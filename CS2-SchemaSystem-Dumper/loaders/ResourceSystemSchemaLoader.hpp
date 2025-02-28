

#pragma once
#include "../BaseLoader.hpp"

class ResourceSystemSchemaLoader : public BaseLoader {

public:
	ResourceSystemSchemaLoader() :
		BaseLoader() {

		dllsToLoad = {
			"game\\bin\\win64\\tier0.dll"
		};

		mainDll = "game\\bin\\win64\\resourcesystem.dll";

	}

	inline bool Initialize() {
		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};
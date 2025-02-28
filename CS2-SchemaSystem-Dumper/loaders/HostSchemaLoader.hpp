#pragma once
#include "../BaseLoader.hpp"

class HostSchemaLoader : public BaseLoader {

public:
	HostSchemaLoader() : BaseLoader() {

		dllsToLoad = {
			"game\\bin\\win64\\tier0.dll",
		};

		mainDll = "game\\csgo\\bin\\win64\\host.dll";
	
	}

	inline bool Initialize() {
		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};
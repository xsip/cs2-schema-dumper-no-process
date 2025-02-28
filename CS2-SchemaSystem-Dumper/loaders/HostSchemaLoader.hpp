#pragma once
#include "../BaseLoader.hpp"

class HostSchemaLoader : public BaseLoader {

public:
	HostSchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		dllsToLoad = {
			"game\\bin\\win64\\tier0.dll",
		};
		mainDll = "game\\csgo\\bin\\win64\\host.dll";

		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};
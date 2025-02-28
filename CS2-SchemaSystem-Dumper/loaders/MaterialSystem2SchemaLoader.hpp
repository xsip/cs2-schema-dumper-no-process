

#pragma once
#include "../BaseLoader.hpp"

class MaterialSystem2SchemaLoader : public BaseLoader {

public:
	MaterialSystem2SchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		dllsToLoad = {
			"game\\bin\\win64\\tier0.dll"
		};
		mainDll = "game\\bin\\win64\\materialsystem2.dll";

		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};
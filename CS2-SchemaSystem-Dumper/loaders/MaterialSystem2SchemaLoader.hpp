

#pragma once
#include "../BaseLoader.hpp"

class MaterialSystem2SchemaLoader : public BaseLoader {

public:
	MaterialSystem2SchemaLoader() :
		BaseLoader() {

		dllsToLoad = {
			"game\\bin\\win64\\tier0.dll"
		};

		mainDll = "game\\bin\\win64\\materialsystem2.dll";

	}

	inline bool Initialize() {

		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};
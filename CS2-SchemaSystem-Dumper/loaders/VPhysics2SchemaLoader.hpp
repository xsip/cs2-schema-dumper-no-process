#pragma once
#include "../BaseLoader.hpp"

class VPhysics2SchemaLoader : public BaseLoader {

public:
	VPhysics2SchemaLoader() :
		BaseLoader() {

		dllsToLoad = {
			"game\\bin\\win64\\tier0.dll"
		};

		mainDll = "game\\bin\\win64\\vphysics2.dll";

	}

	inline bool Initialize() {
		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};
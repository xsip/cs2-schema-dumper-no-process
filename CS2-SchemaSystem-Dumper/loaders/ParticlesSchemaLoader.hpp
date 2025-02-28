#pragma once
#include "../BaseLoader.hpp"

class ParticlesSchemaLoader : public BaseLoader {

public:
	ParticlesSchemaLoader() :
		BaseLoader() {

		dllsToLoad = {
			"game\\bin\\win64\\tier0.dll"
		};

		mainDll = "game\\bin\\win64\\particles.dll";

	}

	inline bool Initialize() {

		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};
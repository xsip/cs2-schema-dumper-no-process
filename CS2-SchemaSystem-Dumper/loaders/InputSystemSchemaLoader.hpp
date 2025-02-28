#pragma once
#include "../BaseLoader.hpp"

class InputSystemSchemaLoader : public BaseLoader {

public:
	InputSystemSchemaLoader() :
		BaseLoader() {

		dllsToLoad = {
			"game\\bin\\win64\\tier0.dll"
		};

		mainDll = "game\\bin\\win64\\inputsystem.dll";

	}

	inline bool Initialize() {

		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};
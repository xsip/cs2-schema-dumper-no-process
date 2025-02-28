#pragma once
#include "../BaseLoader.hpp"

class PulseSystemSchemaLoader : public BaseLoader {

public:
	PulseSystemSchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		dllsToLoad = {
			"game\\bin\\win64\\tier0.dll",
			// needed for v8
			"game\\bin\\win64\\dbghelp.dll", // needed for libbase!
			"game\\bin\\win64\\v8_libbase.dll", // actual libbase!
			"game\\bin\\win64\\v8_libbase.dll",
			"game\\bin\\win64\\v8_icuuc.dll",
			"game\\bin\\win64\\v8_icui18n.dll",
			"game\\bin\\win64\\v8_zlib.dll",
			"game\\bin\\win64\\v8.dll", // actual v8
		};
		mainDll = "game\\bin\\win64\\pulse_system.dll";

		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};

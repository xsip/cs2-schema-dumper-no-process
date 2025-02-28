#pragma once
#include "../BaseLoader.hpp"

class V8SystemSchemaLoader : public BaseLoader {

public:
	V8SystemSchemaLoader() :
		BaseLoader() {

		dllsToLoad = {
			"game\\bin\\win64\\steam_api64.dll",
			"game\\bin\\win64\\tier0.dll",
			// needed for v8
			"game\\bin\\win64\\dbghelp.dll", // needed for libbase!
			"game\\bin\\win64\\v8_libbase.dll", // actual libbase!
			"game\\bin\\win64\\v8_icuuc.dll",
			"game\\bin\\win64\\v8_icui18n.dll",
			"game\\bin\\win64\\v8_zlib.dll",
			"game\\bin\\win64\\v8.dll", // actual v8
			"game\\bin\\win64\\v8_libplatform.dll",

		};

		mainDll = "game\\bin\\win64\\v8system.dll";
	}

	inline bool Initialize() {
		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};

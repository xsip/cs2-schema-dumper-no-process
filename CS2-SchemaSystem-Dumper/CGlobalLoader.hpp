#pragma once
#include "SchemaLoaders.hpp"
#include "core/CLogService.hpp"

#include <iostream>
#include <sstream>

class CGlobalLoader {
private:
	inline static CLogService* pLogger = new CLogService("CGlobalLoader");

	inline static std::vector<BaseLoader*> loaderList = std::vector<BaseLoader*>{
		new ClientSchemaLoader(),
		new Engine2SchemaLoader(),
		new FileSystemStdioSchemaLoader(),
		new ServerSchemaLoader(),
		new InputSystemSchemaLoader(),
		new ImeManagerSchemaLoader(),
		new LocalizeSchemaLoader(),
		new RenderSystemDx11SchemaLoader(),
		new ResourceSystemSchemaLoader(),
		new MaterialSystem2SchemaLoader(),
		new MeshSystemSchemaLoader(),
		new WorldRendererSchemaLoader(),
		new PulseSystemSchemaLoader(),
		new VScriptSchemaLoader(),
		new NetworkSystemSchemaLoader(),
		new AnimationSystemSchemaLoader(),
		new VPhysics2SchemaLoader(),
		new SoundSystemSchemaLoader(),
		new SteamAudioSchemaLoader(),
		new SceneSystemSchemaLoader(),
		new ParticlesSchemaLoader(),
		new PanoramaUiClientSchemaLoader(),
		new V8SystemSchemaLoader(),
		new PanoramaSchemaLoader(),
		new HostSchemaLoader(),
		new SceneFileCacheSchemaLoader(),
		new MatchMakingSchemaLoader(),
		new NavSystemSchemaLoader()
	};

public:
	inline static bool Initialize() {

		auto start = std::chrono::system_clock::now();

		for (const auto loader : CGlobalLoader::loaderList) {
			if (!loader->Initialize()) {
				CGlobalLoader::pLogger->Log("Coudln't initialize %s Loader!\n", loader->GetModuleNameFromPath()->c_str());
				return false;
			}
		}

		auto end = std::chrono::system_clock::now();

		std::chrono::duration<double> elapsed_seconds = end - start;
		CGlobalLoader::pLogger->Log("Initializing Loaders took %.5f seconds\n", elapsed_seconds.count());
		return true;
	}

	inline static bool InstallSchemaBindings() {
		auto start = std::chrono::system_clock::now();

		for (const auto loader : CGlobalLoader::loaderList) {
			if (!loader->InstallBindings()) {
				CGlobalLoader::pLogger->Log("Coudln't install bindings for %s Loader!\n", loader->GetModuleNameFromPath()->c_str());
				return false;
			}
		}

		auto end = std::chrono::system_clock::now();

		std::chrono::duration<double> elapsed_seconds = end - start;
		CGlobalLoader::pLogger->Log("Installing Schema Bindings took %.5f seconds\n", elapsed_seconds.count());
		return true;
	}

	inline static SDK::CSchemaSystem* GetSchemaSystem() {
		return SchemaLoadingHandler::GetSchemaSystem();
	}
};
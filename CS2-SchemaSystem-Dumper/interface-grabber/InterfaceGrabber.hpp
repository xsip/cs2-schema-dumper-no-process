#ifndef _InterfaceGrabber
#define _InterfaceGrabber
#include <Windows.h>
#include <iostream>
#include <map>
#include <vector>
#include "../core/CLogService.hpp"
class InterfaceGrabber {
private:
	inline static CLogService* pLogger = new CLogService("InterfaceGrabber");

	static std::map<const char*, std::map<const char*, uintptr_t>> interfacesForModule;
	static std::map<const char*, const char*> interfaceGrabberPatternForModule;
	static inline bool initialized = false;

public:
	static void Inialize();
	static void CollectInterfacesFromDll(const char* dllName, bool log = false);
	static void CollectInterfacesForEachDll(bool log = false);
	static void GenerateCheatEngineTable(const char * outputFile);
	static std::map<const char*, uintptr_t> GetInterfaces(const char* dllName) {
		
		InterfaceGrabber::Inialize();

		if (!InterfaceGrabber::interfacesForModule.contains(dllName)) {
			InterfaceGrabber::CollectInterfacesFromDll(dllName, false);
		}

		InterfaceGrabber::pLogger->Log("Getting Interface list for \"%s\"\n", dllName);

		if (!InterfaceGrabber::interfacesForModule.contains(dllName)) {
			InterfaceGrabber::pLogger->Log("InterfaceList empty for \"%s\"\n", dllName);
			return {};
		}

		auto list = InterfaceGrabber::interfacesForModule[dllName];
		return list;
	}
	
	inline static const char* GetPattern(const char* dllName) {
		std::map<const char*, const char*>::iterator it;

		for (it = InterfaceGrabber::interfaceGrabberPatternForModule.begin(); it != InterfaceGrabber::interfaceGrabberPatternForModule.end(); it++)
		{
			if (strstr(dllName, it->first))
				return it->second;
		}
		return "";
	}

	template <typename T>
	inline static T GetInterface(const char* dllName, const char* interfaceName) {

		auto interfacesList = InterfaceGrabber::GetInterfaces(dllName);

		if (interfacesList.size() <= 0) {
			InterfaceGrabber::pLogger->Log("InterfaceList empty for \"%s\"\n", dllName);
			return T();
		}
		std::map<const char*, uintptr_t>::iterator it;

		for (it = interfacesList.begin(); it != interfacesList.end(); it++)
		{
			if (strstr(it->first, interfaceName)) {
				return (T)(it->second);
			}
		}

		return  T();

	}
};


#endif
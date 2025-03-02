#pragma once

#include <regex>

class CLogService {
	const char* serviceName;
	bool loggingEnabled;
public:
	CLogService(const char* _serviceName) {
		serviceName = _serviceName;
		loggingEnabled = true;
	}


	template<typename... params>
	inline void Log(const char* format, params&&... parameters)
	{
		auto withPrefx = std::string("[\033[32;1m"+ std::string(serviceName) +"\033[0m]\t " + std::string(format));
		// auto r = std::regex("(^|\s)%(.*?)");
		CLogService::replaceAll(withPrefx, "%s", "\033[32;1m%s\033[0m");
		CLogService::replaceAll(withPrefx, "0x%d", "\033[32;1m0x%d\033[0m");
		CLogService::replaceAll(withPrefx, "0x%x", "\033[32;1m0x%x\033[0m");
		CLogService::replaceAll(withPrefx, "%.1f", "\033[32;1m%.1f\033[0m");
		CLogService::replaceAll(withPrefx, "%.2f", "\033[32;1m%.2f\033[0m");
		CLogService::replaceAll(withPrefx, "%.3f", "\033[32;1m%.3f\033[0m");
		CLogService::replaceAll(withPrefx, "%.4f", "\033[32;1m%.4f\033[0m");
		CLogService::replaceAll(withPrefx, "%.5f", "\033[32;1m%.5f\033[0m");
		printf(withPrefx.c_str(), std::forward<params>(parameters)...);
	}

	inline void replaceAll(std::string& str, const std::string& from, const std::string& to) {
		if (from.empty())
			return;
		size_t start_pos = 0;
		while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
			str.replace(start_pos, from.length(), to);
			start_pos += to.length(); // In case 'to' contains 'from', like replacing 'x' with 'yx'
		}
	}
};
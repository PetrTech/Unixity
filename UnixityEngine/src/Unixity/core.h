#pragma once

#ifdef UX_PLATFORM_WINDOWS
	#ifdef UX_BUILD_DLL
		#define UNIXITY_API __declspec(dllexport)
	#else
		#define UNIXITY_API __declspec(dllimport)
	#endif
#else
#error Unixity only supports windows. Sorry!
#endif
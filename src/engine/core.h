#pragma once

#ifdef PLATFORM_WINDOWS
	#ifdef ENGINE_DLL
		#define ENGINE_API _declspec(dllexport)
	#else 
		#define ENGINE_API _declspec(dllimport)
	#endif
#else 
	#error Only for windows!
#endif // DEBUG

#pragma once
#include "PluginSettings.h"
#include "SimpleClass.h"
#ifdef __cplusplus
extern "C"
{
#endif
	// Put your functions here
	PLUGIN_API int SimpleFunction();
	//I/O
	PLUGIN_API void ReadInto(float x, float y, float z);
	PLUGIN_API float ReadOut(int j);
	PLUGIN_API int aTest();
#ifdef __cplusplus
}
#endif
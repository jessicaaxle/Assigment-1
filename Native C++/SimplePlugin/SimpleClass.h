#pragma once
#include "PluginSettings.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Vec3
{
	float x;
	float y;
	float z;
};
class PLUGIN_API SimpleClass
{
public:
	int SimpleFunction();
	int aTest();
	void ReadInto(float x, float y, float z);
	float ReadOut(int j);

	vector <float> read;

};

#include "Wrapper.h"
SimpleClass simpleClass;
int SimpleFunction()
{
	return simpleClass.SimpleFunction();
}
int aTest()
{
	return simpleClass.aTest();
}

void ReadInto(float x, float y, float z)
{
	simpleClass.ReadInto(x, y, z);
}

float ReadOut(int j)
{
	return simpleClass.ReadOut(j);
}

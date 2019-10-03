#include "SimpleClass.h"
int SimpleClass::SimpleFunction()
{
	return 1;
}

int SimpleClass::aTest()
{
	return 1;
}

void SimpleClass::ReadInto(float x, float y, float z)
{
	ofstream myFile;
	myFile.open("test.txt");
	myFile << x << "\n";
	myFile << y << "\n";
	myFile << z << "\n";
	
	myFile.close();
}

float SimpleClass::ReadOut(int j)
{
	read.clear();
	ifstream myReadFile;
	myReadFile.open("test.txt");
	float value;
	while (myReadFile >> value)
	{
		read.push_back(value);
	}
	myReadFile.close();
	return read[j];
}
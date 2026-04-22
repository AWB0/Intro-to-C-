#pragma once
#include <string.h>
#include <iostream>
#include <cassert>


int ArrayFunction(const int intArray[], const int arraySize)
{

	int lowestNumber = 0;
	bool firstLoop = true;
	for (int i = 0; i < arraySize; i++) 
	{
	
		if (firstLoop == true)
		{
			lowestNumber = intArray[i];
			firstLoop = false;
		}
		if (lowestNumber > intArray[i])
		{
			lowestNumber = intArray[i];
		}
	
	
	
		
	}

	std::cout << lowestNumber;

	return 0;
}
int main()
{
	const int arraySize = 20;
	int intArray[arraySize] = { 67, 13, 3, 89, 43, 2, 19, 71, 5, 61, 97, 7, 37, 31, 17, 11, 83, 53, 23, 29 };


	ArrayFunction(intArray, arraySize);


}



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




#pragma once
#include <string.h>
#include <iostream>
#include <cassert>


int ArrayFunction(const int intArray[], const int arraySize)
{

	int lowestNumber = 0;

	for (int i = 0; i < arraySize; i++)
	{
		//set the initial LowestNumber to the array first number of the array
		if (i == 0)
		{
			lowestNumber = intArray[i];
			continue;
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



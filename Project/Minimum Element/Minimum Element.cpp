#pragma once
#include <string.h>
#include <iostream>
#include <cassert>

//function to find the minimum value of an integer array
int ArrayFunction(const int intArray[], const int arraySize)
{
	//define the lowest number value for use in our loop
	int lowestNumber = 0;

	//loop through every value of the array and compare the current value to the previous lowest
	for (int i = 0; i < arraySize; i++)
	{
		//set the initial LowestNumber to the array first number of the array
		if (i == 0)
		{
			lowestNumber = intArray[i];
			continue;
		}

		//compare the current lowestNumber to the new value and assign the new lowestNumber
		if (lowestNumber > intArray[i])
		{
			lowestNumber = intArray[i];
		}




	}


	return lowestNumber;
}
int main()
{
	//define the array and its size
	const int arraySize = 20;
	int intArray[arraySize] = { 67, 13, 3, 89, 43, 2, 19, 71, 5, 61, 97, 7, 37, 31, 17, 11, 83, 53, 23, 29 };

	
	assert(ArrayFunction(intArray, arraySize) == 2);
	


}



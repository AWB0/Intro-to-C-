#pragma once
#include <string.h>
#include <iostream>
#include <vector>
#include <cassert>





//linear search function
int LinearSearch(int intArray[], const int arraySize, int numberToFind)
{



	//initialise integer for returning
	int integer;

	// loop through the array based on its size linearly
	for (int i = 0; i < arraySize; i++) 
	{

		// when value has been found
		if (intArray[i] == numberToFind) 
		{
			return integer = i;
		}
		
		
		
	}
	
	return 0;
	
}
int main()
{
	//initialise array
	const int arraySize = 20;
	int intArray[arraySize] = { 67, 13, 3, 89, 43, 2, 19, 71, 5, 61, 97, 7, 37, 31, 17, 11, 83, 53, 23, 29 };

	//asserts to check if the search works
	assert(LinearSearch(intArray, arraySize, 3) == 2);
	assert(LinearSearch(intArray, arraySize, 7) == 11);
	assert(LinearSearch(intArray, arraySize, 67) == 0);

}
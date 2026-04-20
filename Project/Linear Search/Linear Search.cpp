#pragma once
#include <string.h>
#include <iostream>
#include <vector>






int LinearSearch(int numberToFind)
{


	std::vector<int> array;
	for (int i = 1; i <= 1000; i++) 
	{
		array.push_back(i);
	}
	
	int loops = 0;

	// loop through the array based on its size linearly
	for (int i = 0; i < array.size(); i++) 
	{

		// when value has been found
		if (array[i] == numberToFind) 
		{
			std::cout << "found Value: " << i;
		}
	}
	

	return 0;
}
int main()
{
	
}
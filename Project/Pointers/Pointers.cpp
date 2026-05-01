#pragma once
#include <string.h>
#include <iostream>
#include <cassert>

//swapping using pointers
void static Pointer(int* firstValue, int* secondValue)
{
	//define the pointer and to a 
	int temp = *firstValue;
	*firstValue = *secondValue;
	*secondValue = temp;
}

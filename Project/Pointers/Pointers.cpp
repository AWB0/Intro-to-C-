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
int main()
{
	int a = 45;
	int b = 12;
	//get original values before they are swapped
	int aO = a;
	int bO = b;

	Pointer(&a, &b);

	//assert the values have been swapped successfully
	assert(a == bO);
	assert(b == aO);


}
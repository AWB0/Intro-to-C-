#pragma once
#include <string.h>
#include <iostream>
#include <assert.h>
#include <vector>




//swaps the contents of the first and second integers
void swap(int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
}

void BubbleSort(int array[], int arraySize)
{

    //exit for single element or invalid indices
    if (arraySize < 2)
    {
        return;
    }
    //Value to Track if List is Sorted or not
    bool sorted = false; //false to ensure the loop begins
    while (!sorted)
    {
        sorted = true;

        for (int i = 0; i < arraySize - 1; ++i)
        {
            if (array[i] > array[i + 1])
            {
                swap(array[i], array[i + 1]);
                sorted = false;
            }
        }

    }
}

int main()
{
    const int arraySize = 20;
    int array[arraySize] = { 67,13,3,89,43,2,19,71,5,61,97,7,37,31,17,11,83,53,23,29 };
 
  //sort the array using bubblesort
    BubbleSort(array, arraySize);
   
   
   
        for (int i = 0; i < arraySize; i += 2)
        {
            assert(array[i] < array[i + 1]);
          
        }
    

    return 0;
}
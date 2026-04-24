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
int BinarySearch(int array[], int arraySize, int searchValue)
{
   int start = 0;
   int end = arraySize - 1;

   //while the left side is currently greated or equal to the right side we check between
    while (start <= end)
    {
        
        //the middle of the array is both the left and right sides we check between divided by 2
        int middle = (start + end) / 2;

        //if the new middle of the area we check between is the value
        if (array[middle] == searchValue)
        {
           
            return middle;
        }
        //if the value we are searching for is higher than the middle of the search area
        if (array[middle] < searchValue)
        {
            start = middle + 1;

        }
        //if the value we are searching for is lower than the middle of the search area
        if( array[middle] > searchValue)
        {
            end = middle - 1;
        }

    }

    return -1;
}

int main()
{
    const int arraySize = 20;
    int array[arraySize] = { 67,13,3,89,43,2,19,71,5,61,97,7,37,31,17,11,83,53,23,29 };
 
  //sort the array using bubblesort
    BubbleSort(array, arraySize);
   
   
   //test the bubble sort sorts values smallest to largest properly
        for (int i = 0; i < arraySize; i += 2)
        {
            assert(array[i] < array[i + 1]);
          
        }

        //test the binary provides the correct values
       assert(BinarySearch(array, arraySize, 11 ) == 4);
       assert(BinarySearch(array, arraySize, 23) == 8);
       assert(BinarySearch(array, arraySize, 97) == 19);
       assert(BinarySearch(array, arraySize, 88) == -1);

}
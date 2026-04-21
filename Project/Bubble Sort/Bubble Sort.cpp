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
    }
        for (int i = 0; i < arraySize - 1; ++i)
        {
            if (array[i] > array[i + 1])
            {
                swap(array[i], array[i + 1]);
                sorted = false;
            }
        }
    
   
}

int main()
{
    const int arraySize = 10;
    int array[arraySize] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };
 
  //sort the array using bubblesort
    BubbleSort(array, arraySize);
   
   
    //define array of integer pairs?
    std::vector<std::pair<int, int>> pairs;
    
        for (int i = 0; i < arraySize; ++i)
        {
            
                std::cout << i << std::endl;
                if (array[i] < array[i + 1])
                {

                    assert("Not sorted", i);
                }
                else {

                
            }
           
            
             

            
        }
    

    return 0;
}
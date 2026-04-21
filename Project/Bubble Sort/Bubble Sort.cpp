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
int BinarySearch(int array[], int start_index, int end_index, int key) 
{
    while (start_index <= end_index)
    {
        int pivot = (start_index + end_index) / 2;

        if (array[pivot] == key)
        {
            return pivot;
        }
        if (key < array[pivot])
        {
            end_index = pivot - 1;
       
        }
        else
            start_index = pivot + 1;
     
        return -1;
           
    }
}

int main()
{
    int search_key = -1;
    while (true) {
        std::cout << std::endl << std::endl << "Enter a number to find in the sequence: -1 to end" << std::endl;
        
        std::cin >> search_key;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (search_key == -1)
        {
            break;
        }
         
    }

 
   
    const int arraySize = 10;
    int array[arraySize] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };

    //sort the array using bubblesort
      BubbleSort(array, arraySize);

      int r = BinarySearch(array, 0,arraySize - 1, search_key);
      if (r == -1)
      {
          std::cout << "Couldn't find " << search_key << " in the list" << std::endl;
      }
       
      else
      {
          std::cout << "Found " << search_key << " at position " << r << std::endl;
      }
        

      //define array of integer pairs?
      std::vector<std::pair<int, int>> pairs;

          for (int i = 0; i < arraySize; ++i)
          {

                  std::cout << array[i] << std::endl;
                  if (array[i] < array[i + 1])
                  {

                      assert("Not sorted", i);
                  }
                  else {


              }





          }


      return 0;
    }

#pragma once
#include <string.h>
#include <iostream>



void print_array(int array[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << array[i] << ",\t";
        if (i % 10 == 9) std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
}
//swaps the contents of the first and second integers
void swap(int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
}

int BubbleSort(int array[], int toSort)
{

    //exit for single element or invalid indices
    if (toSort < 2) 
    {
        return;
    }
    //Value to Track if List is Sorted or not
    bool sorted = false; //false to ensure the loop begins
    while (!sorted)
    {
        sorted = true;
    }
    for (int i = 0; i < toSort - i; ++i) 
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



}
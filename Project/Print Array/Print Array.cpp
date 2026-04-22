#include <string.h>
#include <iostream>
#include <vector>




const int ArrayFunction(const int intArray[], const int arraySize)
{

    //loop through the array by its size
    for (int i = 0; i < arraySize; i++)
    {
        //Print the array elements in the console without a comma at the end
        std::cout << intArray[i];

        //add commas for each array element except the last one
        if (i < arraySize - 1)
        {
            std::cout << " ,";
        }

    }

    return 0;
}


int main()
{

    //initialise array and array size
    const int arraySize = 10;
    int intArray[arraySize] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };


    //print the array to the console without an end comma
    ArrayFunction(intArray, arraySize);


}








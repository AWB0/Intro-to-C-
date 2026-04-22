#include <string.h>
#include <iostream>
#include <vector>




const int ArrayFunction(const int intArray[], const int arraySize)
{


   
    for (int i = 0; i < arraySize; i++)
    {
        
        std::cout << intArray[i];

       
        if (i < arraySize - 1)
        {
            std::cout << " ,";
        }

    }

    return 0;
}








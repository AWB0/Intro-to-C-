#include <string.h>
#include <iostream>
#include <vector>




const int ArrayFunction(int intArray[], const int arraySize) 
{

    
    
    for (int i = 0; i < arraySize; i++)
    {
        //Print the array elements in the console without a comma at the end
        std::cout << intArray[i];
        if (i < arraySize -1)
        {
            std::cout << " ,";
        }
   
    }
   
    return 0;
}


int main()
{
   
 
    const int arraySize = 10;
    int intArray[arraySize] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3};



    ArrayFunction(intArray, arraySize);


   

    


/*


 int number1;
    int number2;
    std::string operation;

    std::cout << "Enter your first number: ";
    std::cin >> number1;
    std::cout << '\n';



    std::system("cls");
    std::cout << "Enter operation (+, -, *, /, %) ";
    std::cin >> operation;

    std::system("cls");

    std::cout << "Enter your second number: ";
    std::cin >> number2;




    std::system("cls");





    int answer =  -1;
    if (operation == "+")
    {
        answer = number1 + number2;
    }
    else if (operation == "-")
    {
        answer = number1 - number2;
    }
    else if (operation == "*")
    {
        answer = number1 * number2;
    }
    else if (operation == "/")
    {
        answer = number1 / number2;
    }
    else if (operation == "%")
    {
        answer = number1 % number2;
    }

     std::cout << "result of " << number1 << " " << operation << " " << number2 << " is " << answer;

    return 0;

*/
   
}




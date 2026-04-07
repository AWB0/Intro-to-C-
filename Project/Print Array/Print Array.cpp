#include <string.h>
#include <iostream>




int ArrayFunction(int intArray[], const int arraySize)
{

    
    
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << intArray[i];
        if (i < arraySize - 1) 
        {
            std::cout << ", ";
            
        }
      

    }
    return 0;
}


int main()
{
   
 
    const int arraySize = 15;
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


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

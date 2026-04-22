#pragma once
#include <string.h>
#include <iostream>


//Function for Finding Multiples of integers
int FizzBuzzFunction(int integer)
{
	int multiple3 = 0;
	int multiple5 = 0;
	// loop through integers until we reach the current integer and check if its equal to a multiple of 5
	for (int i = 0; i < integer; i++)
	{

	}


	// loop through integers until we reach the current integer and check if its equal to a multiple of 3, if so break
	for (int i = 0; i < integer; i++)
	{

		multiple3 = i * 3;
		if (multiple3 == integer)
		{
			break;
		}
		else if (multiple3 > integer)
		{
			break;
		}

	}


	//if integer is a multiple of 3 and 5 send FIZZBUZZ
	if (integer == multiple3 && integer == multiple5)
	{
		std::cout << "FizzBuzz" << "\n";
	}
	//if integer is a multiple of 3 send FIZZ
	else if (integer == multiple3)
	{
		std::cout << "Fizz" << "\n";
	}
	//if integer is a multiple of 5 send BUZZ
	else if (integer == multiple5)
	{
		std::cout << "Buzz " << "\n";
	}
	//if integer is not a multiple of 3 or 5 send the integer
	else
	{
		std::cout << integer << "\n";
	}

	return 0;


}
int main()
{
	int test = 12000;



	FizzBuzzFunction(test);

}



	
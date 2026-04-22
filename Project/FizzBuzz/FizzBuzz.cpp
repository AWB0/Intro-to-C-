#pragma once
#include <string.h>
#include <iostream>


//Function for Finding Multiples of integers
int FizzBuzzFunction(int integer)
{
	int multiple3 = 0;
	int multiple5 = 0;
	// loop through integers until we reach the current integer and check if its equal to a multiple of 5
	for (int i = 0; i <= integer; i++)
	{
	
		
		if (i % 3 == 0 && integer == i )
		{
			std::cout << "Fizz";
		}
		if (i % 5 == 0 && integer == i )
		{
			std::cout << "Buzz ";
		}
		else if (integer == i)
		{
			std::cout << integer << "\n";
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
		
	}
	//if integer is a multiple of 5 send BUZZ
	else if (integer == multiple5)
	{
		
	}
	//if integer is not a multiple of 3 or 5 send the integer
	else
	{
		
	}

	return 0;


}
int main()
{
	int test = 7;



	FizzBuzzFunction(test);

}



	
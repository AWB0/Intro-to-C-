#pragma once
#include <string.h>
#include <iostream>



int FizzBuzzFunction(int integer)
{
	int multiple3 = 0;
	int multiple5 = 0;

	for (int i = 0; i < integer; i++)
	{
		multiple5 = i * 5;
		if (multiple5 == integer)
		{
			break;
		}
		else if (multiple5 > integer)
		{
			break;
		}
	}



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

	if (integer == multiple3 && integer == multiple5)
	{
		std::cout << "FizzBuzz" << "\n";
	}

	else if (integer == multiple3)
	{
		std::cout << "Fizz" << "\n";
	}

	else if (integer == multiple5)
	{
		std::cout << "Buzz " << "\n";
	}
	
	else
	{
		std::cout << integer << "\n";
	}

	return 0;

}


	
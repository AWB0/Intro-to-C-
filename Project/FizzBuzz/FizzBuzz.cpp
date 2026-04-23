#pragma once
#include <string.h>
#include <iostream>
#include <cassert>
#include <string>

//Function for Finding Multiples of integers
std::string FizzBuzzFunction(int integer)
{
	//define the string we will use in the loop
	std::string text;

	
		//if value is a multiple of 3 or 5 "FizzBuzz"
		if (integer % 3 == 0 && integer % 5 == 0 &&integer == integer)
		{
			text = "FizzBuzz";
	    }
		//if value is a multiple of 3 "Fizz"
		else if (integer % 3 == 0 && integer == integer)
		{
			text = "Fizz";
		}
		//if value is a multiple of 5 "Buzz"
		else if (integer % 5 == 0 && integer == integer)
		{
			text = "Buzz";
		}
		//if value is not a multiple of 3 or 5 then integer to string
		else if (integer == integer)
		{
			text = std::to_string(integer);
		}
	

	return text;


}
int main()
{
	//string for error testing
	std::string test;
	//test all the asserts with the string
	 test = FizzBuzzFunction(7);
	assert(test == "7");
	 test = FizzBuzzFunction(3);
	assert(test == "Fizz");
	 test = FizzBuzzFunction(5);
	assert(test == "Buzz");
	 test = FizzBuzzFunction(15);
	assert(test == "FizzBuzz");

	int loopTimes = 20;
	//loop through 20 times and output the FizzBuzz result to the console
	for (int i = 0; i <= loopTimes; i++) 
	{
		test = FizzBuzzFunction(i);
		std::cout << test << std::endl;
	}
	
	
	
	
	
}



	
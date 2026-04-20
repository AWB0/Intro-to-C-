#pragma once
#include <string.h>
#include <iostream>
#include <cassert>


int Shoot(int hitCount, int shotCount) 
{

	//How many shots are fired
	//How many shots hit

	//based on how many shots are fired compared to hits is accuracy
	for (int i = 0; i < shotCount; i++) 
	{
		if (i < hitCount)
		{
			std::cout << "shot " << "\n";
		}
		else
		{
			std::cout << "miss " << "\n";
		}
		
	}
	if (shotCount <= 0 || hitCount <= 0)
	{

	}
	else
	{
		float percentage = hitCount * 100 / shotCount;


		std::cout << "\n";

		std::cout << percentage << "\n";
	}


	
	
	return 0;

}
int main()
{
	int hitCount = 1;
	int shotCount = 103;
	

	Shoot(hitCount, shotCount);



}
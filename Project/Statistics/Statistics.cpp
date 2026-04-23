#pragma once
#include <string.h>
#include <iostream>
#include <cassert>


int StatisticShoot(int hitCount, int shotCount)
{

	//ensure the hitcount is not greater than shotcount
	//and ensure neither hitcount nor shotcount are less than 0
	assert(shotCount >= hitCount);
	assert(shotCount >= 0);
	assert(hitCount >= 0);

	//initialise the percentage value to be returned later
	float percentage = 0;

	//if we don't shoot accuracy does not exist
	//if there are no shots and hits then return 0;
	if (shotCount <= 0 || hitCount <= 0)
	{
		return 0;
	}
	// get the percentage of hits to shots
	else
	{
		percentage = hitCount * 100 / shotCount;
	}

	

	return percentage;

}
int main()
{

   //test Function with asserts
	assert(StatisticShoot(3, 4) == 75);
	assert(StatisticShoot(1, 2) == 50);
	assert(StatisticShoot(13, 13) == 100);
	assert(StatisticShoot(21, 173) == 12);
	assert(StatisticShoot(0, 0) == 0);

}


	
	


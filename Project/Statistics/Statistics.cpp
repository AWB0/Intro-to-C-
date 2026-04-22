#pragma once
#include <string.h>
#include <iostream>
#include <cassert>


int StatisticsShoot(int hitCount, int shotCount)
{
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


	assert(shotCount > hitCount);

	return percentage;

}


	
	


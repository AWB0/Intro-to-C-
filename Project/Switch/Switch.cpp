#pragma once
#include <string.h>
#include <iostream>


struct Player { int health = 30; int speed = 10; int strength = 15; int magic = 30; };
enum PotionType { HEALTH, SPEED, STRENGTH, MAGIC };

//apply potion effects to the player 
Player applyEffect(PotionType potionType, Player player)
{
	
	
	switch (potionType)
	{
	case HEALTH:
		player.health = 100;
		
		break;
	case SPEED:

		player.speed = 50;
		player.health -= 10;
		player.strength -= 10;
		player.magic = 10;
		break;
	case STRENGTH:

		player.speed = 25;
		player.health *= 2;
		player.strength = 200;
	
		break;
	case MAGIC:

		player.magic = 100;
		player.strength = 10;
		break;
	}

	return player;

}
int main()
{

	PotionType potionType{};
	const Player playerTest;
	Player player;


	potionType = STRENGTH;
	player = applyEffect(potionType, playerTest);
	std::cout << player.health << "\n" << player.speed << "\n" << player.strength << "\n" << player.magic;

}
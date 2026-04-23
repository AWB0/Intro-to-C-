#pragma once
#include <string.h>
#include <iostream>
#include <cassert>

//struct for player stat values
struct Player { int health = 30; int speed = 10; int strength = 15; int magic = 30; };

//enum for  differant potiontypes
enum PotionType { HEALTH, SPEED, STRENGTH, MAGIC };

//apply potion effects to the player 
Player ApplyEffect(PotionType potionType, Player player)
{
	
	//depending on the potionType change the player stats
	switch (potionType)
	{
     //case for health potion used
	case HEALTH:

		//alter the player stats
		player.health = 100;
		
		break;
		//case for speed potion used
	case SPEED:

		//alter the player stats
		player.speed = 50;
		player.health -= 10;
		player.strength -= 10;
		player.magic = 10;
		break;
		//case for strength potion used
	case STRENGTH:

		player.speed = 25;
		player.health *= 2;
		player.strength = 200;
	
		break;
		//case for magic potion used
	case MAGIC:

		//alter the player stats
		player.magic = 100;
		player.strength = 10;
		break;
	}

	return player;

}
int main()
{

	

	

	
	
	//define players
	const Player playertest;
	
	const Player player1=	ApplyEffect(HEALTH,  playertest);
	const Player player2=	ApplyEffect(SPEED,   playertest);
	const Player player3=	ApplyEffect(STRENGTH,playertest);
	const Player player4=	ApplyEffect(MAGIC,   playertest);
	
	//check all the stats are correctly applied to the players
	assert(player1.health == 100 && player1.speed == 10 && player1.strength == 15  && player1.magic == 30 );
	assert(player2.health == 20  && player2.speed == 50 && player2.strength == 5   && player2.magic == 10 );
	assert(player3.health == 60  && player3.speed == 25 && player3.strength == 200 && player3.magic == 30 );
	assert(player4.health == 30  && player4.speed == 10 && player4.strength == 10  && player4.magic == 100);
}
#pragma once
#include <string.h>
#include <iostream>
#include <algorithm>
#include <time.h>
enum AttackSkill
{
	poison,

	stab,

	smite,

	fireBall

};
struct Mob
{
	std::string name;

	AttackSkill attackSkill;

	float health;

	float damageRating;
};
//Random damage 
int Damage(int damage, int variance)
{

	float random = rand() % variance;
	float damageValue = damage * (1 + random);
	return damageValue;
}

float Outcome(Mob attacker, Mob attacked)
{
	float addedValue = 0;
	float damageValue = 0;
	switch (attacker.attackSkill)
	{
	case poison:

		for (int i = 0; i < 5; i++)
		{
			damageValue = Damage(attacker.damageRating, 2) * 0.15;
			attacked.health -= damageValue;
		}
		break;
	case stab:

		damageValue = Damage(attacker.damageRating, 5) * 0.15;
		attacked.health -= damageValue;
		break;
	case smite:

		damageValue = Damage(attacker.damageRating, 5) * 0.15;
		attacked.health -= damageValue;
		break;
	case fireBall:

		damageValue = Damage(attacker.damageRating, 5) * 0.15;
		attacked.health -= damageValue;
		for (int i = 0; i < 10; i++)
		{

			damageValue = Damage(attacker.damageRating, 5) * 0.05;
			attacked.health -= damageValue;

			std::cout << std::endl;
			std::cout << attacked.name << " took " << damageValue << " damage from poison!";

			addedValue += damageValue;

		}
		std::cout << std::endl;
		std::cout << attacked.name << " took " << addedValue << " damage! and has " << attacked.health << " health left!" << std::endl;
		break;
	}
	return attacked.health;
}


int Battle(Mob mob1, Mob mob2)
{
	

	int attackTimes = 100;

	for (int i = 0; i < attackTimes; i++)
	{
			mob2.health = Outcome(mob1, mob2);
			mob1.health = Outcome(mob2, mob1);
	}

	if (mob1.health <= 0)
	{
		mob1.health = 0;


		std::cout << mob2.name << " has fallen!" << std::endl;
		std::cout << std::endl;
		std::cout << mob1.name << " has won the battle!" << std::endl;


	}
	if (mob2.health <= 0)
	{
		mob2.health = 0;


		std::cout << mob1.name << " has fallen!" << std::endl;
		std::cout << std::endl;
		std::cout << mob2.name << " has won the battle!" << std::endl;

	}

	return 0;
}
int main()
{
	srand(time(NULL));

	Mob delph{ "Delph",poison, 50, 10.0f };

	Mob vessel = { "Vessel", stab, 100, 5.0f };


	Battle(delph, vessel);
}
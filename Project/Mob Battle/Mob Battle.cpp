#pragma once
#include <string.h>
#include <iostream>
#include <algorithm>
#include <random>
#include <cmath>
enum AttackSkill
{
	poison,

	stab,

	smite,

	fireBall

};
struct Mob
{
	std::string name = "Doll";

	AttackSkill attackSkill = stab;

	float health = 20;

	float damageRating = 1;

};
//Random damage 
int Damage(float damage, float damageRatio)
{
	std::random_device rd;
	std::mt19937 gen(rd());

	if (damageRatio < 1)
	{
		damageRatio = damage / 100;
	}
	if (damageRatio >= 2)
	{
		damageRatio = 1.99;
	}
	float MinDamage = damage / damageRatio;
	float maxDamage = damage * damageRatio;
	std::uniform_real_distribution<>distribution(MinDamage, maxDamage);

	float damageValue = distribution(gen);
	return damageValue;
}


float Attack(Mob attacker, Mob attacked)
{
	float damageValue = 0;


	damageValue = Damage(attacker.damageRating, 1.5);
	attacked.health -= damageValue;
	if (attacked.health <= 0)
	{
				attacked.health = 0;
	}
	std::cout << std::endl;
	std::cout << attacker.name << " damaged " << attacked.name << " for " << damageValue << " damage!" << std::endl;
	return 0;
}
// change the name of the enemy based off it's skill
std::string printOutcome(Mob mob1)
{
	switch (mob1.attackSkill)
	{
	case poison:
		mob1.name = "The Poisonous " + mob1.name;
		break;

	case stab:

		mob1.name = "The Stabby " + mob1.name;
		break;
	
	}
	return mob1.name;
}
//the mobs fight once
int Battle(Mob mob1, Mob mob2)
{
	int attackTimes = 100;
	float damageValue = 0;
	for (int i = 0; i < attackTimes; i++)
	{

		mob1.name = printOutcome(mob1);
		mob2.name = printOutcome(mob2);
	
			

			damageValue = Damage(mob1.damageRating, 1.5);
			mob1.health -= damageValue;
			if (mob1.health <= 0)
			{
				mob1.health = 0;
			}
			std::cout << std::endl;
			std::cout << mob1.name << " damaged " << mob2.name << " for " << damageValue << " damage!" << std::endl;
			break;

			

		}
	

	

	return 0;
}
int main()
{

	Mob delph{ "Delph",poison, 50, 10.0f};

	Mob vessel = { "Vessel", stab, 100, 5.0f};


	Battle(delph, vessel);
}
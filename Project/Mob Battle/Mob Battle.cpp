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

	switch (attacker.attackSkill)
	{
	case poison:

		damageValue = Damage(attacker.damageRating, 1.9);
		attacked.health -= damageValue;
		if (attacked.health <= 0)
		{
			attacked.health = 0;
		}
		std::cout << std::endl;
		std::cout << attacker.name << " damaged " << attacked.name << " for " << damageValue << " damage!" << std::endl;
		return 0;
		break;

	case stab:
		damageValue = Damage(attacker.damageRating, 1.1);
		attacked.health -= damageValue;
		if (attacked.health <= 0)
		{
			attacked.health = 0;
		}
		std::cout << std::endl;
		std::cout << attacker.name << " damaged " << attacked.name << " for " << damageValue << " damage!" << std::endl;
		
		
		return 0;
		break;

	}
	return 0;

}

//the mobs fight once
int Battle(Mob mob1, Mob mob2)
{
	
	


	
		

		Attack(mob1, mob2);
		Attack(mob2, mob1);

	
	

	

	return 0;
}
int main()
{

	Mob delph{ "Delph",poison, 50, 10.0f };

	Mob vessel = { "Vessel", stab, 100, 5.0f };

	int battleLoops = 100;
	for (int i = 0; i < battleLoops;i++)
	{
		Battle(delph, vessel);
	}
	
}

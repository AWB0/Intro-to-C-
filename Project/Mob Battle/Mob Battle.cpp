#pragma once
#include <string.h>
#include <iostream>
#include <algorithm>
#include <random>
#include <cmath>
enum AttackSkill
{
chaos,
stab,
smite
};
struct Mob
{
std::string name = "Doll";
AttackSkill attackSkill = stab;
float health = 20;
float damageRating = 1;
};
//provide the damage with a Variance Ratio
int Damage(float damage, float damageRatio)
{
	//define randomness
	std::random_device rd;
	std::mt19937 gen(rd());

	//ratio is a value between 1-1.99+ that determines how much the damage varies from the original damage
	//higher ratios equate to more variance

	//if the ratio is less than 1, prevent it to avoid math issues
	if (damageRatio < 1)
	{
		damageRatio = damage / 100;
	}
	//if the ratio is too high lower it to a maximum valid ratio
	if (damageRatio >= 2)
	{
		damageRatio = 1.99;
	}
	//minimum damage of the ratio
	int minDamage = damage / damageRatio;
	//maximum damage of the ratio
	int maxDamage = damage * damageRatio;

	//define the distrubution ratio/limit the random value is within
	std::uniform_real_distribution<>distribution(minDamage, maxDamage);


	//damage value is equal to the random value within the ratio
	float damageValue = distribution(gen);

	return damageValue;
}



float Attack(Mob attacker, Mob attacked)
{
	//Define DamageValue used to apply damage to the attacked mob
	float damageValue = 0;


	//define Randomness
	std::random_device rd;
	std::mt19937 gen(rd());


	//random value between 1 to 100
	std::uniform_real_distribution<>distribution(1, 100);
	int chance = distribution(gen);

	//damage and output based on attackSkill and randomness
	switch (attacker.attackSkill)
	{

//when the AttackSkill of the Attacking Mob is Chaos
//chaotic damage, self damage
case chaos:


		//represents 80% chance
		if (chance >= 20)
		{
			//damage the attacked Mob using damage with Variance
			damageValue = Damage(attacker.damageRating, 1.99);
			attacked.health -= damageValue;

			//ensure the attacked enemy health is not less than 0
			if (attacked.health < 0)
			{
				attacked.health = 0;
			}

			//message displayed after attack
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << attacker.name << " Attacked " << attacked.name << " for " << damageValue << " damage!" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;

			//attacked Mob remaining health displayed
			std::cout << attacked.name << " has " << attacked.health << " health remaining " << std::endl;
			
		}
		//represents 15% chance
		else if(chance <= 20 && chance  > 5)
		{
			//damage the attacked Mob using damage with Variance
			damageValue = Damage(attacker.damageRating, 1.99) * 0.5;
			attacker.health -= damageValue;

			//ensure the attacked enemy health is not less than 0
			if (attacked.health <= 0)
			{
				attacked.health = 0;
			}

			//message displayed after attack
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << attacker.name << " Hit " << attacker.name << "??? for " << damageValue << " damage!?" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;

			//attacked Mob remaining health displayed
			std::cout << attacker.name << " has " << attacker.health << " health remaining " <<  std::endl;
			
		}
		//represents 5% chance
		else 
		{
			//damage the attacked Mob using damage with Variance
			damageValue = Damage(attacker.damageRating, 1.99) * 5;
			attacked.health -= damageValue;

			//ensure the attacked enemy health is not less than 0
			if (attacked.health < 0)
			{
				attacked.health = 0;
				
			}

			//message displayed after attack
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << attacker.name << " Chaos Nuked " << attacked.name << " for " << damageValue << " damage!" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;

			//attacked Mob remaining health displayed
			std::cout << attacked.name << " has " << attacked.health << " health remaining " << std::endl;
			
		}

		break;

//when the AttackSkill of the Attacking Mob is Stab
//Consistent Damage
case stab:


		//damage the attacked Mob using damage with Variance
		damageValue = Damage(attacker.damageRating, 1.01);
		attacked.health -= damageValue;

		//ensure the attacked enemy health is not less than 0
		if (attacked.health <= 0)
		{
			attacked.health = 0;
			
		}

		//message displayed after attack
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << attacker.name << " Stabbed " << attacked.name << " for " << damageValue << " damage!" << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		//attacked Mob remaining health displayed
		std::cout << attacked.name << " has " << attacked.health << " health remaining " << std::endl;
		break;

//when the AttackSkill of the Attacking Mob is Smite
//50% chance to do a powerful attack, otherwise fail
case smite:


		//represents 50% chance
		if (chance >= 50)
		{
			//damage the attacked Mob using damage with Variance
			damageValue = Damage(attacker.damageRating, 1.0) * 3;
			attacked.health -= damageValue;
			if (attacked.health < 0)
			{
				attacked.health = 0;
				
			}

			//message displayed after attack
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << attacker.name << " Smites " << attacked.name << " for " << damageValue << " damage!" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;

			//attacked Mob remaining health displayed
			std::cout << attacked.name << " has " << attacked.health << " health remaining " << std::endl;

		}
		else 
		{

			//message displayed after failed attack
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << attacker.name << " Missed their Smite Against " << attacked.name << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;

			//attacked Mob remaining health displayed
			std::cout << attacked.name << " has " << attacked.health << " health remaining " << std::endl;
		}
		
		
		
		break;

	}
	return attacked.health;

}

int main()
{
	//define the mobs
	Mob firstMob{ "Delph",chaos, 50, 10.0f };
	Mob secondMob = { "Vessel", smite, 100, 5.0f };

	int rounds = 0;

	//battle loop
	while (firstMob.health && secondMob.health)
	{
			rounds++;
			std::cout << "round "<< rounds << "!"<< std::endl;		

			secondMob.health=Attack(firstMob, secondMob);
			firstMob .health=Attack(secondMob, firstMob);
			std::cout << std::endl;
	}
	//to determine the winner
	//if it's a tie
	if (firstMob.health <= 0 && secondMob.health <= 0)
	{
		std::cout << " it's a tie!" << std::endl;
		std::cout << std::endl;
	}
	//if first mob wins
	else if (firstMob.health <= 0)
	{
		std::cout << secondMob.name << " has Won!" << std::endl;
		std::cout << std::endl;
	}
	//if second mob wins
	else if (secondMob.health <= 0)
	{
		std::cout << firstMob.name << " has Won!" << std::endl;
		std::cout << std::endl;
	}
}

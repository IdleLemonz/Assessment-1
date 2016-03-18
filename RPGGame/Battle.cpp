#include "Battle.h"
#include "Player.h"
#include "Enemy.h"
#include "Goblin.h"
#include "GiantBat.h"
#include <iostream>
#include "String.h"
#include <string>



Battle::Battle()
{
}

Battle::~Battle()
{
}

Enemy& Battle::WhichCreature()
{
	int creature = rand() % 2 + 1;
	switch (creature)
	{
	case 1:		
		return bat;		
	case 2:		
		return goblin;		
	default:
		std::cout << "Whoops";
		break;
	}
}

void Battle::Start(Enemy &enemy, Player &player)
{
	bool battle = true;
	bool startOfBattle = true;
	while (battle)
	{
		if (startOfBattle)
		{
			startOfBattle = false;
			enemy.Appears();
		}
		if (enemy.GetHealth() > 0)
		{
			std::cout << "1. Attack \n2. Defend \n3. Run \n\nChoice: ";
			int choice = 0;
			std::cin >> choice;
			std::cout << std::endl;
			bool counterSuccess = false;
			switch (choice)
			{
			case 1:
				player.Attack(enemy);
				if (enemy.GetHealth() > 0)
				{
					player.TakeDamage(enemy);
				}
				break;
			case 2:
				std::cout << "You prepare to defend yourself from the " << enemy.GetName() << ".\n";
				counterSuccess = player.Defend(enemy.GetAttack());
				if (counterSuccess)
				{
					std::cout << "You succeed in a counter attack.\n";
					player.Counter(enemy);
				}
				counterSuccess = false;
				break;
			case 3:
				std::cout << "You flee the " << enemy.GetName() << ".\n\n";
				battle = false;
				break;
			default:
				break;
			}
		}
		else if (enemy.GetHealth() <= 0)
		{
			std::cout << "You won!\n\n";
			battle = false;
		}
	}
}
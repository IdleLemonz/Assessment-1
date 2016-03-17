#include "Goblin.h"
#include <iostream>


Goblin::Goblin()
{
	m_health = 40;
	m_attack = 5;
	m_name = "Goblin";
}

Goblin::~Goblin(){}

int Goblin::GetHealth()
{
	return m_health;
}

int Goblin::GetAttack()
{
	return m_attack;
}

const std::string Goblin::GetName()
{
	return m_name;
}

//void Goblin::TakeDamage(int playerAttack, bool counterCheck)
//{		
//	int attackHitChance = rand() % 7 + 1;
//	if (attackHitChance >= 2 || counterCheck == true)
//	{
//		if (m_health > 0)
//		{
//			int damagetaken = playerAttack + (rand() % playerAttack);
//			m_health -= damagetaken;
//			if (m_health <= 0)
//			{
//				m_health = 0;
//				std::cout << "The goblin took " << damagetaken << " damage and died.\n\n";
//			}
//			else
//			{
//				std::cout << "The goblin took " << damagetaken << " damage and has " << m_health << " health left.\n\n";
//			}
//		}
//		else
//		{
//			m_health = 0;
//			std::cout << "The goblin is dead.\n\n";
//		}
//	}
//	else
//	{
//		std::cout << "Your attack missed.\n\n";
//	}
//	
//
//}

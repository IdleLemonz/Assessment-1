#include "Goblin.h"
#include <iostream>


Goblin::Goblin()
{
	m_health = 40;
	m_attack = 5;
	m_name = "Goblin";
}

//Goblin::Goblin(const Goblin& other)
//{
//	m_name = new char[strlen(other.m_name) + 1];
//	strcpy(m_name, other.m_name);
//}

Goblin::~Goblin()
{
	//delete[] m_name;
}

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

void Goblin::Appears()
{
	if (m_firstTimeAppearance)
	{
		std::cout << "A shriek startles you. From out of the shadows hurtles a bizarre creature - a goblin. It is large and hideous; humanoid in shape, wearing the ";
		std::cout << "skind of animals upon it's body. It's arms are long so that it scrapes it's knuckles along the ground. It's ";
		std::cout << "Features are stupid but menacing; it's large lower jaw juts out, with long, yellowed teeth protruding out. ";
		std::cout << "It raises it's club to attack. What will you do?\n\n";
	}
	else
	{
		std::cout << "A menacing goblin dashes towards you, scraping it's knuckles upon the ground. What will you do?\n\n";
	}
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

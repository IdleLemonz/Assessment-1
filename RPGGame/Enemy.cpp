#include "Enemy.h"
#include <iostream>
#include <string>


Enemy::Enemy() 
{
}

//Enemy::Enemy(const Enemy& other)
//{
//	m_name = new char[strlen(other.m_name) + 1];
//	strcpy(m_name, other.m_name);
//}

Enemy::~Enemy() 
{	
}

int Enemy::GetHealth()
{
	return m_health;
}

int Enemy::GetAttack()
{
	return m_attack;
}
const std::string Enemy::GetName()
{
	return m_name;
}

void Enemy::Appears()
{
	std::cout << "An enemy appears.\n\n";
}

void Enemy::TakeDamage(int playerAttack, bool counterCheck)
{
	int attackHitChance = rand() % 7 + 1;
	if (attackHitChance >= 2 || counterCheck == true)
	{
		if (m_health > 0)
		{
			int damageTaken = playerAttack + (rand() % playerAttack);
			m_health -= damageTaken;
			if (m_health <= 0)
			{
				m_health = 0;
				std::cout << "The " << m_name << " took " << damageTaken << " damage and died.\n\n";
			}
			else
			{
				std::cout << "The " << m_name << " took " << " damage and has " << m_health << " health left.\n\n";
			}
		}
		else
		{
			m_health = 0;
			std::cout << "The " << m_name << " is dead.\n\n";
		}
	}
	else
	{
		std::cout << "Your attack missed.\n\n";
	}
}


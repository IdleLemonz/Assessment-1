#include "Enemy.h"
#include "Player.h"
#include <iostream>
#include <string>


Enemy::Enemy() {}
Enemy::~Enemy() {}

//int Enemy::GetHealth()
//{
//	return m_health;
//}
//
//int Enemy::GetAttack()
//{
//	return m_attack;
//}
//const std::string Enemy::GetName()
//{
//	return m_name;
//}
//
//void Enemy::TakeDamage(int playerAttack, bool counterCheck)
//{
//	int attackHitChance = rand() % m_dodgeChance + 1;	
//	if (attackHitChance >= 2 || counterCheck == true)
//	{
//		if (m_health > 0)
//		{
//			int damageTaken = playerAttack + (rand() % playerAttack);			
//			m_health -= damageTaken;
//			if (m_health <= 0)
//			{
//				m_health = 0;
//				std::cout << "The " << m_name << " took " << damageTaken << " damage and died.\n\n";
//			}
//			else
//			{
//				std::cout << "The " << m_name << " took " << damageTaken << " damage and has " << m_health << " health left.\n\n";
//			}
//		}
//		else
//		{
//			m_health = 0;
//			std::cout << "The " << m_name << " is dead.\n\n";
//		}
//	}
//	else
//	{
//		std::cout << "Your attack missed.\n\n";
//	}
//}
//

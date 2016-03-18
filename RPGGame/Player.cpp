#include "Player.h"
#include <iostream>

Player::Player()
{
}
//Player::Player(const Player& other)
//{	
//}
Player::~Player()
{
}

bool Player::Defend(int monsterAttack)
{
	bool counterSuccess = false;
	int attackHitChance = rand() % 5 + 1;
	if (attackHitChance >= 2)
	{

		if (m_health > 0)
		{
			int damagetaken = (monsterAttack / 2) + (rand() % (monsterAttack / 2));
			m_health -= damagetaken;
			if (m_health <= 0)
			{
				m_health = 0;
				std::cout << "You tried to defend yourself and took " << damagetaken << " damage and died.\n\n";
			}
			else
			{
				std::cout << "You defended yourself and took " << damagetaken << " damage and have " << m_health << " health left.\n\n";
				int counterSuccessChance = rand() % 3 + 1;
				if (counterSuccessChance >= 2)
				{
					counterSuccess = true;
				}
			}
		}
		else
		{
			m_health = 0;
			std::cout << "You are dead.\n\n";
		}
	}
	else
	{
		std::cout << "The goblins attack missed.\n\n";
	}
	return counterSuccess;
}

void Player::TakeDamage(Enemy &enemy)
{
	int attackHitChance = rand() % 6 + 1;
	if (attackHitChance >= 2)
	{
		if (m_health > 0)
		{
			int damagetaken = enemy.GetAttack() + (rand() % enemy.GetAttack()) - ArmourDefense();
			m_health -= damagetaken;
			if (m_health <= 0)
			{
				m_health = 0;
				std::cout << "You took " << damagetaken << " damage and died.\n\n";
			}
			else
			{
				std::cout << "You took " << damagetaken << " damage and have " << m_health << " health left.\n\n";
			}
		}
		else
		{
			m_health = 0;
			std::cout << "You are dead.\n\n";
		}
	}
	else
	{
		std::cout << "The " << enemy.GetName() << "'s attack missed.\n\n";
	}
}

int Player::GetAttack()
{
	int totalAttack = m_attack + WeaponDamage();
	//std::cout << "Total Attack: " << totalAttack;
	return totalAttack;
}

int Player::GetHealth()
{
	return m_health;
}

void Player::Attack(Enemy &enemy)
{
	std::cout << "You swing your blade at the " << enemy.GetName() << ".\n";
	enemy.TakeDamage(GetAttack(), false);
}

void Player::Counter(Enemy &enemy)
{
	enemy.TakeDamage(GetAttack() - (m_attack / 4), true);
}

int Player::WeaponDamage()
{
	int weaponAttack = 0;
	switch (m_weapon)
	{
	case 0:
		weaponAttack = 0;
		return weaponAttack;
	case 1:
		weaponAttack = 2;
		return weaponAttack;
	case 2:
		weaponAttack = 4;
		return weaponAttack;
	case 3:
		weaponAttack = 6;
		return weaponAttack;
	default:
		weaponAttack = 0;
		return weaponAttack;
	}
}

int Player::ArmourDefense()
{
	int armourDefense = 0;
	switch (m_armour)
	{
	case 0:
		armourDefense = 0;
		return armourDefense;
	case 1:
		armourDefense = 2;
		return armourDefense;
	case 2:
		armourDefense = 4;
		return armourDefense;
	case 3:
		armourDefense = 6;
		return armourDefense;
	default:
		armourDefense = 0;
		return armourDefense;
	}
}
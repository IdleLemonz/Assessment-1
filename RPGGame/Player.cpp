#include "Player.h"
#include "Goblin.h"
#include "GiantBat.h"
#include <iostream>

Player::Player()
{
}
Player::~Player()
{
}

bool Player::Defend(Enemy &enemy)
{
	bool counterSuccess = false;
	int attackHitChance = rand() % 5 + 1;
	if (attackHitChance >= 2)
	{
		if (m_health > 0)
		{
			int damagetaken = (enemy.GetAttack() / 2) + (rand() % (enemy.GetAttack() / 2) - ArmourDefense());
			m_health -= damagetaken;
			if (m_health <= 0)
			{
				m_health = 0;
				std::cout << "You tried to defend yourself and took " << damagetaken << " damage and died.\n\n";
			}
			else
			{
				std::cout << "You defended yourself and took " << damagetaken << " reduced damage and have " << m_health << " health left.\n\n";
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
		std::cout << "The " << enemy.GetName() << "'s attack missed.\n\n";
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
			int damageTaken = enemy.GetAttack() + (rand() % enemy.GetAttack() - ArmourDefense());
			if (damageTaken < 0)
			{
				damageTaken = 0;
			}
			m_health -= damageTaken;
			if (m_health <= 0)
			{
				m_health = 0;
				std::cout << "You took " << damageTaken << " damage and died.\n\n";
			}
			else
			{
				std::cout << "You took " << damageTaken << " damage and have " << m_health << " health left.\n\n";
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
	enemy.TakeDamage(GetAttack() - (GetAttack() / 3), true);
}

int Player::WeaponDamage()
{
	int weaponAttack = 0;
	switch (m_weapon)
	{
	case 0:
		// Unarmed
		weaponAttack = 0;
		std::cout << "\nUsing no weapon.\n";
		return weaponAttack;
	case 1:
		// Scythe
		weaponAttack = 2;
		std::cout << "\nUsing Sycthe.\n";
		return weaponAttack;
	case 2:
		// Rusty Sword
		weaponAttack = 4;
		return weaponAttack;
	case 3:
		// Iron Sword
		weaponAttack = 6;
		return weaponAttack;
	default:
		// Unarmed
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
		// No armour
		armourDefense = 0;
		return armourDefense;
	case 1:
		// Leather armour
		armourDefense = 2;
		return armourDefense;
	case 2:
		// Rusty armour
		armourDefense = 4;
		return armourDefense;
	case 3:
		// Iron armour
		armourDefense = 6;
		return armourDefense;
	default:
		armourDefense = 0;
		return armourDefense;
	}
}

void Player::SetWeapon(int weapon)
{
	m_weapon = weapon;
}
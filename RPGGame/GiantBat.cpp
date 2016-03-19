#include "GiantBat.h"
#include <iostream>

GiantBat::GiantBat()
{
	m_health = 30;
	m_attack = 4;
	m_name = "Giant Bat";
	m_dodgeChance = 5;
}

GiantBat::~GiantBat()
{
}

int GiantBat::GetHealth()
{
	return m_health;
}

int GiantBat::GetAttack()
{
	return m_attack;
}

const std::string GiantBat::GetName()
{
	return m_name;
}
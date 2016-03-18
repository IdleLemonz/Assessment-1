#pragma once
#include <string>
#include "Player.h"
//comment

class Enemy
{
public:
	Enemy();
	//Enemy(const Enemy& other);
	~Enemy();
	virtual int GetHealth();
	virtual int GetAttack();
	virtual const std::string GetName();
	virtual void Appears(Player &player);
	virtual void TakeDamage(int playerAttack, bool counterCheck);
protected:
	int m_health;
	int m_attack;
	int m_dodgeChance;
	//bool m_firstTimeAppearance;
	std::string m_name;
};


#pragma once
#include <string>
#include "Player.h"

class Enemy
{
public:
	Enemy();	
	~Enemy();
//	virtual int GetHealth();
//	virtual int GetAttack();
//	virtual const std::string GetName();
//	virtual void TakeDamage(int playerAttack, bool counterCheck);
protected:
	int m_health;
	int m_attack;
	int m_dodgeChance;	
	std::string m_name;
};


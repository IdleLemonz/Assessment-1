#pragma once
#include <string>

class Enemy
{
public:
	Enemy();
	~Enemy();
	virtual int GetHealth();
	virtual int GetAttack();
	virtual const std::string GetName();
	virtual void Appears();
	virtual void TakeDamage(int playerAttack, bool counterCheck);
protected:
	int m_health;
	int m_attack;
	int m_dodgeChance;
	bool m_firstTimeAppearance;
	char* m_name;
};


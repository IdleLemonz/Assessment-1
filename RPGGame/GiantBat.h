#pragma once
#include "Enemy.h"
class GiantBat :
	public Enemy
{
public:
	GiantBat();
	~GiantBat();
	int GetHealth();
	int GetAttack();
	const std::string GetName();
	//int DodgeChance();
	//void TakeDamage(int playerAttack, bool counterCheck);
};


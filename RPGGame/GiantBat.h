#pragma once
#include "Enemy.h"
#include "String.h"
#include "Goblin.h"
#include "Player.h"
#include <string>

class GiantBat :
	public Enemy
{
public:
	GiantBat();
	//GiantBat(const GiantBat& other);
	~GiantBat();
	int GetHealth();
	int GetAttack();
	const std::string GetName();
	//void Appears();
	//void FirstAppearance();		
	//String myString;

	//int DodgeChance();
	//void TakeDamage(int playerAttack, bool counterCheck);
};


#pragma once
#include "Enemy.h"
#include "String.h"
#include "Goblin.h"
#include "Player.h"
#include <string>
//comment
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
	void Appears(Player &player);
	void FirstAppearance();		
	//String myString;

	//int DodgeChance();
	//void TakeDamage(int playerAttack, bool counterCheck);
};


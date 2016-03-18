#pragma once
#include "Enemy.h"
#include "Player.h"
#include <string>

class Goblin : public Enemy
{
public:
	Goblin();
	//Goblin(const Goblin& other);
	~Goblin();
	int GetHealth();
	int GetAttack();
	const std::string GetName();
	void Appears();
	//void TakeDamage(int playerAttack, bool counterCheck);	
};


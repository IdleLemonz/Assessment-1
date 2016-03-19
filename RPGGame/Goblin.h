#pragma once
#include "Enemy.h"
#include <string>

class Goblin : public Enemy
{
public:
	Goblin();
	~Goblin();
	int GetHealth();
	int GetAttack();
	const std::string GetName();

};


#pragma once
#include "Player.h"
#include "Enemy.h"
#include "Goblin.h"
#include "GiantBat.h"
class Battle
{
public:
	Battle();
	~Battle();
	Enemy& Battle::WhichCreature();
	void Start(Enemy &enemy, Player &player);
	Goblin goblin;
	GiantBat bat;
};


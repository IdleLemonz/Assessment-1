#pragma once
#include "Enemy.h"

class Player
{
public:
	Player();
	~Player();
	int GetAttack();
	int GetHealth();
	void TakeDamage(Enemy &enemy);
	bool Defend(int monsterAttack);
	void Attack(Enemy &enemy);
	void Counter(Enemy &enemy);
private:
	int m_health = 100;
	int m_attack = 5;
};


#pragma once
#include "Enemy.h"

class Player
{
public:
	Player();
	//Player(const Player& other);
	~Player();
	int GetAttack();
	int GetHealth();
	void TakeDamage(Enemy &enemy);
	bool Defend(int monsterAttack);
	void Attack(Enemy &enemy);
	void Counter(Enemy &enemy);
	int WeaponDamage();
	int ArmourDefense();
	//int MonsterEncounters(int i);
private:
	int m_health = 100;
	int m_attack = 5;
	int m_weapon = 0;
	int m_armour = 0;
	// [0] = bat, [1] = goblin
	//int m_monsterEncounters[10];
};

//comment
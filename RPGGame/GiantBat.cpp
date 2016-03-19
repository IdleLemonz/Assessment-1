#include "GiantBat.h"
#include "String.h"
#include "Player.h"
#include <iostream>

GiantBat::GiantBat() //: myString("Something")
{
	m_health = 30;
	m_attack = 4;
	m_name = "Giant Bat";
	m_dodgeChance = 5;
	m_firstTimeAppearance = true;
}

//GiantBat::GiantBat(const GiantBat& other)
//{
//	m_name = new char[strlen(other.m_name) + 1];
//	strcpy(m_name, other.m_name);
//}

GiantBat::~GiantBat() 
{
	//delete[] m_name;
}

int GiantBat::GetHealth()
{
	return m_health;
}

int GiantBat::GetAttack()
{
	return m_attack;
}

//void GiantBat::Appears()
//{
//	if (m_firstTimeAppearance)
//	{		 		
//		//myString = "Wowza";
//		//std::cout << myString.GetString();
//		//FirstAppearance();
//		//myString = myString + m_name;
//		//std::cout << myString.GetString();
//		std::cout << "A dark shadow falls upon you from above. You turn - a Giant Bat looms over you, it's enormous wings";
//		std::cout << " buffeting you with great gusts of wind. The Giant Bat";
//		std::cout << " flies quickly from side to side, sizing you up. It looks like it could dodge your attacks easily. ";
//		std::cout << "It's eyes blaze red as it prepares to attack. What will you do?\n\n";
//	}
//	else
//	{
//		std::cout << "A Giant Bat hurtles towards you, preparing to attack. What will you do?\n\n";
//	}
//}

const std::string GiantBat::GetName()
{
	return m_name;
}

//void GiantBat::FirstAppearance()
//{
//	//myString = myString + m_name;
//	//myString = myString + " looms over you, it's enormous wings buffeting you with great gusts of wind. The ";
//	//myString = myString + m_name;
//	//myString = myString + " flies quickly from side to side, sizing you up. It looks like it could dodge your attacks easily. ";
//	//myString = myString + "It's eyes blaze red as it prepares to attack. What will you do?\n\n";
//	//std::cout << myString.GetString();
//}

//int GiantBat::DodgeChance()
//{
//	return m_dodgeChance;
//}

//void GiantBat::TakeDamage(int playerAttack, bool counterCheck)
//{
//
//}
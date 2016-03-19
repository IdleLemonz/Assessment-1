#include "Player.h"
#include "Enemy.h"
#include "Goblin.h"
#include "GiantBat.h"
#include "Battle.h"
#include "String.h"
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <fstream>

//void UnitTest();

int main()
{
	//UnitTest();
	srand(time(NULL));
	bool gameLoop = true;
	Player hero;	
	while (gameLoop)
	{
		std::cout << "For 5 years you have been kept away on service to the king as a soldier. Your only contact with your beloved wife ";
		std::cout << "has been the letters shared between you. The war with the border kingdoms had been costly, but finally you can return home.";
		std::cout << "As you emergy from the fringe of the forest, you see dark smoke in the air. You rush to the crest of the hill to gaze down ";
		std::cout << "on your beloved farmstead and see your loving wife ready to welcome you home. Instead, you see a smouldering, blackened ruin. ";
		std::cout << "An icy cold hand grips your heart. You fly towards the homestead, screaming the name of your wife and the farm workers, hoping someone, ";
		std::cout << "anyone, would answer you. You search frantically among the ruins, scouring for the body of your wife. Gradually your frenzy slows as you realise anyone amongst the ruins, but neither ";
		std::cout << "have you found any signs of life. You try and muster your soldiers courage, but panick is running through your veins like poison. You try and make sense ";
		std::cout << "of it all as you decide what to do next.\n\n";
		std::cout << "What will you do?\n\n1. Search the ruined shed for something to use (you are currently unarmed) \n2. Travel down the path towards town\n\n";
		std::cout << "Choice: ";
		int choice = 0;
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			std::cout << "You search among the coals and find a rusty old scythe. You still remember the day your father gave this to you as your first farming tool.";
			std::cout << "He had told you it was the day you became a man. Once, you had used this scythe to cleave wheat. Now it would cleave whoever did this to your home.";
			hero.SetWeapon(1);
			break;
		case 2:
			std::cout << "You leave the ruins of your once pleasant home behind you and head towards town. Hopefully there you can find some answers.";			
		}
		Battle battle;
		battle.Start(battle.WhichCreature(), hero);
		
		//gameLoop = false;		
	}
	system("PAUSE");
	return 0;
}

// Use this function to test the string class
void UnitTest()
{
	//Unit Testing code
	String heroName("Barnaby");
	String heroName2("Barnaby");
	String heroName3("Junior");
	String heroName4("Something");
	bool testPassed = false;
	std::fstream file;
	file.open("UnitTest.txt", std::ios_base::app);

	// Test Length() function	
	if (heroName.Length() == 7)
	{
	testPassed = true;
	std::cout << "Test 0 passed.\n\n";
	file << "Test 0\tLength()\tSuccessful\n";
	}
	else
	{
	testPassed = false;
	std::cout << "Test 0 failed. \n\n";
	file << "Test 0\tLength()\tFailed\n";
	}	

	// Test CharacterAtIndex() function
	if (heroName.CharacterAtIndex(0) == 'B')
	{
	testPassed = true;
	std::cout << "Test 1 passed. \n\n";
	file << "Test 1\tCharacterAtIndex()\tSuccessful\n";
	}
	else
	{
	testPassed = false;
	std::cout << "Test 1 failed. \n\n";
	file << "Test 1\tCharacterAtIndex()\tFailed\n";
	}

	// Test the ability to compare 2 string classes, using overloaded == operator
	if (heroName == heroName2)
	{
	testPassed = true;
	std::cout << "Test 2 passed. \n\n";
	file << "Test 2\tCompare 2 string classes\tSuccessful\n";
	}
	else
	{
	testPassed = false;
	std::cout << "Test 2 failed. \n\n";
	file << "Test 2\tCompare 2 string classes\tFailed\n";
	}

	// Testing the ability to append one string to another
	heroName3 = heroName + heroName2;
	if (heroName3 == "BarnabyBarnaby")
	{
	testPassed = true;
	std::cout << "Test 3 passed. \n\n";
	file << "Test 3\tAppend one string to another\tSuccessful\n";
	}
	else
	{
	testPassed = false;
	std::cout << "Test 3 failed. \n\n";
	file << "Test 3\tAppend one string to another\tFailed\n";
	}	

	// Testing the abbility to prepend one string to another
	String heroNameJunior("Junior");
	heroName4 = heroNameJunior + heroName;
	if (heroName4 == "JuniorBarnaby")
	{
	testPassed = true;
	std::cout << "Test 4 passed. \n\n";
	file << "Test 4\tPrepend one string to another\tSuccessful\n";
	}
	else
	{
	testPassed = false;
	std::cout << "Test 4 failed. \n\n";
	file << "Test 4\tPrepend one string to another\tFailed\n";
	}

	// Testing GetString(), the ability to return the string as a const char*
	char testString1[256] = "Barnaby";
	const char* testString2 = { heroName.GetString() };
	int matches = 0;
	matches = strcmp(testString1, testString2);
	if (matches == 0)
	{
	testPassed = true;
	std::cout << "Test 5 passed. \n\n";
	file << "Test 5\tGetString()\tSuccessful\n";
	}
	else
	{
	testPassed = false;
	std::cout << "Test 5 failed. \n\n";
	file << "Test 5\tGetString()\tFailed\n";
	}

	// Testing LowCaseDuplicate(), which allows you to make a duplicate of a string class but in lower case
	heroName4 = heroName.LowCaseDuplicate();
	if (heroName4 == "barnaby")
	{
	testPassed = true;
	std::cout << "Test 6 passed. \n\n";
	file << "Test 6\tLowCaseDuplicate()\tSuccessful\n";
	}
	else
	{
	testPassed = false;
	std::cout << "Test 6 failed. \n\n";
	file << "Test 6\tLowCaseDuplicate()\tFailed\n";
	}

	// Testing UpperCaseDuplicate(), which allows you to make a duplicate of a string class but in lower case
	heroName4 = heroName.UpperCaseDuplicate();
	if (heroName4 == "BARNABY")
	{
	testPassed = true;
	std::cout << "Test 7 passed. \n\n";
	file << "Test 7\tUpperCaseDuplicate()\tSuccessful\n";
	}
	else
	{
	testPassed = false;
	std::cout << "Test failed. \n\n";
	file << "Test 7\tUpperCaseDuplicate()\tFailed\n";
	}

	// Testing the SubString() function, if it returns the correct starting index of a String Class / Sub-string
	String heroName5("nab");
	if (heroName.SubString(heroName5) == 3)
	{
	testPassed = true;
	std::cout << "Test 8 passed. \n\n";
	file << "Test 8\tSubString()\tSuccessful\n";
	}
	else
	{
	testPassed = false;
	std::cout << "Test failed. \n\n";
	file << "Test 8\tSubString()\tFailed\n";
	}

	// SubStringFromIndex(), testing the ability to find a substring within a string by returning the starting index, 
	// starting from a certin index within the string
	String heroName6("nab");
	if (heroName.SubStringFromIndex(heroName6, 1) == 3)
	{
	testPassed = true;
	std::cout << "Test 9 passed. \n\n";
	file << "Test 9\tSubStringFromIndex()\tSuccessful\n";
	}
	else
	{
	testPassed = false;
	std::cout << "Test failed. \n\n";
	file << "Test 9\tSubStringFromIndex()\tFailed\n";
	}

	// Testing ReplaceSubString() function to replace a sub-string within the string class with another sub-string
	String heroName7("rna");
	String heroName8("carrot");
	heroName.ReplaceSubString(heroName7, heroName8);
	if (heroName == "Bacarrotby")
	{
	testPassed = true;
	std::cout << "Test 10 passed. \n\n";
	file << "Test 10\tReplaceSubString()\tSuccessful\n";
	}
	else
	{
	testPassed = false;
	std::cout << "Test failed. \n\n";
	file << "Test 10\tReplaceSubString()\tFailed\n";
	}

	// Testing Set() function to set the string to something different	
	heroName.SetInput();
	if (heroName == "Chocolate")
	{
	testPassed = true;
	std::cout << "Test 11 passed. \n\n";
	file << "Test 11\tSet()\tSuccessful\n";
	}
	else
	{
	testPassed = false;
	std::cout << "Test 11 failed. \n\n";
	file << "Test 11\tSet()\tFailed\n";
	}
}
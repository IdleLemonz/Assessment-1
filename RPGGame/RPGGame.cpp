#include <iostream>
#include "String.h"
#include <string>
#include <fstream>
#include "Player.h"
#include "Enemy.h"
#include "Goblin.h"
#include "GiantBat.h"
#include "Battle.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


int main()
{	
	//srand(time(NULL));
	//bool gameLoop = true;
	//Player hero;	
	//while (gameLoop)
	//{			
	//	//Battle battle;
	//	//battle.Start(battle.WhichCreature(), hero);		
	//	gameLoop = false;				
	//}
	//system("PAUSE");
 //   return 0;
}

//void UnitTest()
//{
	// Unit Testing code
	//String heroName("Barnaby");
	//String heroName2("Barnaby");
	//String heroName3("Junior");
	//String heroName4("Something");
	//bool testPassed = false;
	//std::fstream file;
	//file.open("UnitTest.txt", std::ios_base::app);
	// Test Length() function	
	/*if (heroName.Length() == 7)
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
	}	*/

	// Test CharacterAtIndex() function
	/*if (heroName.CharacterAtIndex(0) == 'B')
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
	}*/

	// Test the ability to compare 2 string classes, using overloaded == operator
	/*if (heroName == heroName2)
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
	}*/

	// Testing the ability to append one string to another
	/*heroName3 = heroName + heroName2;
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

	String heroNameJunior("Junior");*/

	// Testing the abbility to prepend one string to another
	/*heroName4 = heroNameJunior + heroName;
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
	}*/

	// Testing GetString(), the ability to return the string as a const char*
	/*char testString1[256] = "Barnaby";
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
	}*/

	// Testing LowCaseDuplicate(), which allows you to make a duplicate of a string class but in lower case
	/*heroName4 = heroName.LowCaseDuplicate();
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
	}*/

	// Testing UpperCaseDuplicate(), which allows you to make a duplicate of a string class but in lower case
	/*heroName4 = heroName.UpperCaseDuplicate();
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
	}*/

	// Testing the SubString() function, if it returns the correct starting index of a String Class / Sub-string
	/*String heroName5("nab");
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
	}*/

	// SubStringFromIndex(), testing the ability to find a substring within a string by returning the starting index, 
	// starting from a certin index within the string
	/*String heroName6("nab");
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
	}*/

	// Testing ReplaceSubString() function to replace a sub-string within the string class with another sub-string
	/*String heroName7("rna");
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
	}*/

	// Testing Set() function to set the string to something different	
	/*heroName.SetInput();
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
	}*/
//}
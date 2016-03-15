#include <iostream>
#include "String.h"
#include <string>

int main()
{
	String heroName("Barnaby");
	String heroName2("Barnaby");
	String heroName3("Junior");
	String heroName4("Something");	
	bool testPassed = false;

	// Test Length() function
	/*
	if (heroName.Length() == 7)
	{
		testPassed = true;
		std::cout << "Test passed.\n\n";
	}
	else
	{
		testPassed = false;
		std::cout << "Test failed. \n\n";
	}
	*/

	// Test CharacterAtIndex() function
	/*if (heroName.CharacterAtIndex(0) == 'B')
	{
		testPassed = true;
		std::cout << "Test passed. \n\n";
	}
	else
	{
		testPassed = false;
		std::cout << "Test failed. \n\n";
	}*/

	// Test the ability to compare 2 string classes, using overloaded == operator
	/*if (heroName == heroName2)
	{
		testPassed = true;
		std::cout << "Test passed. \n\n";
	}
	else
	{
		testPassed = false;
		std::cout << "Test failed. \n\n";
	}*/

	// Testing the ability to append one string to another
	/*heroName3 = heroName + heroName2;
	if (heroName3 == "BarnabyBarnaby")
	{
		testPassed = true;
		std::cout << "Test passed. \n\n";
	}
	else
	{
		testPassed = false;
		std::cout << "Test failed. \n\n";
	}*/

	// Testing the abbility to prepend one string to another
	/*heroName4 = heroName3 + heroName;
	if (heroName4 == "JuniorBarnaby")
	{
		testPassed = true;
		std::cout << "Test passed. \n\n";
	}
	else
	{
		testPassed = false;
		std::cout << "Test failed. \n\n";
	}*/

	// Testing GetString(), the ability to return the string as a const char*
	//std::cout << heroName.GetString();
	/*char testString1[256] = "Barnaby";
	const char* testString2 = { heroName.GetString() };
	int matches = 0;
	matches = strcmp(testString1, testString2);
	if (matches == 0)
	{
		testPassed = true;
		std::cout << "Test passed. \n\n";
	}
	else
	{
		testPassed = false;
		std::cout << "Test failed. \n\n";
	}*/
	
	// Testing LowCaseDuplicate(), which allows you to make a duplicate of a string class but in lower case
	/*heroName4 = heroName.LowCaseDuplicate();
	if (heroName4 == "barnaby")
	{
		testPassed = true;
		std::cout << "Test passed. \n\n";
	}
	else
	{
		testPassed = false;
		std::cout << "Test failed. \n\n";
	}*/

	// Testing UpperCaseDuplicate(), which allows you to make a duplicate of a string class but in lower case
	/*heroName4 = heroName.UpperCaseDuplicate();
	if (heroName4 == "BARNABY")
	{
		testPassed = true;
		std::cout << "Test passed. \n\n";
	}
	else
	{
		testPassed = false;
		std::cout << "Test failed. \n\n";
	}*/

	String heroName5("nab");	
	std::cout << heroName.SubString(heroName5) << "\n";
	if (heroName.SubString(heroName5) == 3)
	{
		testPassed = true;
		std::cout << "Test passed. \n\n";
	}
	else
	{
		testPassed = false;
		std::cout << "Test failed. \n\n";
	}

	system("PAUSE");
    return 0;
}


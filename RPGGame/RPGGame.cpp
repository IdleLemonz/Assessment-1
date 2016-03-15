#include <iostream>
#include "String.h"
#include <string>

int main()
{	
	String heroName("Barnaby");
	String heroName2("Barnaby");	
	String heroName3("acle");	
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

	heroName3 = heroName + heroName2;
	//std::cout << heroName3.GetString() << "\n";
	if (heroName3 == "BarnabyBarnaby")
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


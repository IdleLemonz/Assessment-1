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

	// Testing the SubString() function, if it returns the correct starting index of a String Class / Sub-string
	/*String heroName5("nab");	
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
	}*/

	// Testing the ability to find a substring within a string by returning the starting index, 
	// starting from a certin index within the string
	/*String heroName6("nab");
	std::cout << heroName.SubStringFromIndex(heroName6, 1) << "\n";
	if (heroName.SubStringFromIndex(heroName6, 1) == 3)
	{
		testPassed = true;
		std::cout << "Test passed. \n\n";
	}
	else
	{
		testPassed = false;
		std::cout << "Test failed. \n\n";
	}*/

	// Testing ReplaceSubString() function to replace a sub-string within the string class with another sub-string
	/*String heroName7("rna");
	String heroName8("carrot");
	heroName.ReplaceSubString(heroName7, heroName8);	
	if (heroName == "Bacarrotby")
	{
		testPassed = true;
		std::cout << "Test passed. \n\n";
	}
	else
	{
		testPassed = false;
		std::cout << "Test failed. \n\n";
	}*/

	// Testing Set() function to set the string to something different	
	/*heroName.SetInput();	
	if (heroName == "Chocolate")
	{
		testPassed = true;
		std::cout << "Test passed. \n\n";
	}
	else
	{
		testPassed = false;
		std::cout << "Test failed. \n\n";
	}*/

	system("PAUSE");
    return 0;
}


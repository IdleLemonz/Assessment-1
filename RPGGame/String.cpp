#include "String.h"
#include <iostream>
#include <string>
String::String()
{
	//comment
}

String::String(const String& other)
{	
	m_string = new char[strlen(other.m_string) + 1];
	strcpy(m_string, other.m_string);
}
String::String(const char * name)
{
	m_string = new char[strlen(name) + 1];
	strcpy(m_string, name);
}
String::~String()
{
	delete[] m_string;
}
// Set the string in the string class
void String::Set(const char * name)
{
	m_string = new char[strlen(name) + 1];
	strcpy(m_string, name);
}

void String::SetInput()
{
	std::string tempString;
	std::cin >> tempString;	
	strcpy(m_string, tempString.c_str());	
}
// Print the string in the string class
void String::Print()
{
	std::cout << m_string << "\n";
}
// Returns the String;
const char* String::GetString()
{
	return m_string;
}
// Returns the length of the String
int String::Length()
{
	return strlen(m_string);
}
// Returns the character at a given index (index taken as paramater)
char String::CharacterAtIndex(int i)
{
	char temp = m_string[i];
	return temp;
}

// Returns a temporary string class, with all letters converted to lower case, which will use the Copy Constructor 
// and properly delete that piece of memory when it is done
String String::LowCaseDuplicate()
{
	String temp("Nothing");
	strcpy(temp.m_string, m_string);
	for (int i = 0; i < strlen(temp.m_string); i++)
	{		
		if (temp.m_string[i] >= 65 && temp.m_string[i] <= 90)
		{
			// If a letter is upper case, it is converted to lower case using ASCII codes
			temp.m_string[i] = (temp.m_string[i] - 65) + 97;
		}	
		
		if (i == strlen(m_string) - 1)
		{
			// Add the null terminator
			temp.m_string[i + 1] = '\0';
		}
	}	
	return temp;	
}

// Returns a temporary string class, with all letters converted to upper case, which will use the Copy Constructor 
// and properly delete that piece of memory when it is done
String String::UpperCaseDuplicate()
{
	String temp("Nothing");
	strcpy(temp.m_string, m_string);
	for (int i = 0; i < strlen(temp.m_string); i++)
	{
		if (temp.m_string[i] >= 97 && temp.m_string[i] <= 122)
		{
			// If a letter is upper case, it is converted to lower case using ASCII codes
			temp.m_string[i] = (temp.m_string[i] - 97) + 65;
		}

		if (i == strlen(m_string) - 1)
		{
			//Add the null terminator
			temp.m_string[i + 1] = '\0';
		}
	}	
	return temp;
}
// Returns the starting index of a sub-string within a String class (containing char* array).
int String::SubString(const String &subString)
{
	int numberOfLetters = strlen(subString.m_string);
	int matches = 0;
	int startIndex = 0;
	bool foundStartIndex = false;
	int endIndex = 0;
	for (int i = 0; i < strlen(m_string); i++)
	{
		char temp = subString.m_string[matches];
		if (m_string[i] == temp)
		{
			if (foundStartIndex == false)
			{
				startIndex = i;
				foundStartIndex = true;
			}			
			matches += 1;
		}
		else
		{
			startIndex = 0;
			foundStartIndex = false;
			matches = 0;
		}

		if (matches == numberOfLetters)
		{
			endIndex = i;
			return startIndex;
		}
	}
}

// Returns the starting index of a sub-string within a String class (containing char* array), starting from a specified index
int String::SubStringFromIndex(const String& subString, int indexI)
{
	int numberOfLetters = strlen(subString.m_string);
	int matches = 0;
	int startIndex = 0;
	int endIndex = 0;
	bool foundStartIndex = false;
	for (int i = indexI; i < strlen(m_string); i++)
	{
		char temp = subString.m_string[matches];
		if (m_string[i] == temp)
		{			
			if (foundStartIndex == false)
			{				
				startIndex = i;
				foundStartIndex = true;
			}
			matches += 1;
		}
		else
		{
			startIndex = 0;
			foundStartIndex = false;
			matches = 0;
		}

		if (matches == numberOfLetters)
		{
			endIndex = i;
			return startIndex;
		}
	}
}
// The ability to replace a substring within a class with another string class or "substring"
void String::ReplaceSubString(const String& subStringFind, const String& subStringReplace)
{
	int numberOfLetters = strlen(subStringFind.m_string);
	// 'matches' checks how many letters have matched in a row
	int matches = 0;
	int startIndex = 0;
	int endIndex = 0;
	bool matched = false;
	for (int i = 0; i < strlen(m_string); i++)
	{
		char temp = subStringFind.m_string[matches];
		if (m_string[i] == temp)
		{
			if (matches == 0)
			{
				// Start of the sub-string
				startIndex = i;
			}
			matches += 1;
			if (matches == numberOfLetters)
			{
				// End of the sub-string
				endIndex = i;
			}
		}
		else
		{
			matches = 0;
			startIndex = 0;
		}

		if (matches == numberOfLetters)
		{
			matched = true;
			break;
		}
		if ((i == strlen(m_string) - 1) && matches < numberOfLetters)
		{
			//std::cout << "No match found. \n";
		}
	}
	if (matched == true)
	{
		// Make a temp string with the first part of the string
		char* tempString1 = new char[startIndex + 1];
		tempString1[0] = 0;
		for (int i = 0; i < startIndex; i++)
		{
			tempString1[i] = m_string[i];
		}
		tempString1[startIndex] = 0;

		// Make a temp string with the last part of the string, after the old sub-string
		char* tempString2 = new char[strlen(m_string) + 1];
		tempString2[0] = 0;
		int counter = 0;
		for (int i = (endIndex + 1); i < strlen(m_string); i++)
		{
			tempString2[i - (endIndex + 1)] = m_string[i];
			counter++;
		}
		tempString2[counter] = 0;

		// Add the 2 temp strings together, with the new sub string in the middle
		strcpy(m_string, tempString1);		
		strcat(m_string, subStringReplace.m_string);
		strcat(m_string, tempString2);		

		delete[] tempString1;
		delete[] tempString2;
	}
}

// Unused but functional functions, in case I need them later
// Returns true if the string class and another string are the same
//bool String::Compare(const char newString[])
//{	
//	if (strcmp(newString, m_string) == 0)
//	{
//		std::cout << "Names are the same. \n";
//		return true;
//	}
//	else
//	{
//		std::cout << "Names are different. \n";
//		return false;
//	}
//}
// Adds two strings together without extra space

//void String::Add(const char addString[])
//{	
//	strcat(m_string, addString);
//}
//void String::Add(const String &D)
//{
//	strcat(m_string, D.m_string);
//}
//// Adds two strings together with an extra space between
//void String::AddSpace(const char addString[])
//{
//	char* tempSpace = " ";
//	strcat(m_string, tempSpace);
//	strcat(m_string, addString);
//}
//void String::AddSpace(const String &D)
//{
//	char* tempSpace = " ";
//	strcat(m_string, tempSpace);
//	strcat(m_string, D.m_string);
//}
//// Puts the string in paramater before the existing string, without extra space
//void String::AddToStart(const char addString[])
//{
//	char* tempString1 = new char[strlen(m_string) + 1];
//	tempString1[0] = 0;
//	strcpy(tempString1, m_string);
//	const int length = strlen(tempString1) + strlen(addString) + 2;
//	strcpy(m_string, addString);
//	strcat(m_string, tempString1);
//	delete[] tempString1;	
//}
//// Puts the string in paramater before the existing string, with an extra space between
//void String::AddToStartSpace(const char addString[])
//{
//	char* tempSpace = " ";	
//	char* tempString1 = new char[strlen(m_string) + 1];
//	tempString1[0] = 0;
//	strcpy(tempString1, m_string);
//	const int length = strlen(tempString1) + strlen(addString) + 2;
//	strcpy(m_string, addString);
//	strcat(m_string, tempSpace);
//	strcat(m_string, tempString1);
//	delete[] tempString1;
//}
//void String::AddToStartSpace(const String &D)
//{
//	char* tempSpace = " ";
//	char* tempString1 = new char[strlen(m_string) + 1];
//	tempString1[0] = 0;
//	strcpy(tempString1, m_string);
//	const int length = strlen(tempString1) + strlen(D.m_string) + 2;
//	strcpy(m_string, D.m_string);
//	strcat(m_string, tempSpace);
//	strcat(m_string, tempString1);
//	delete[] tempString1;
//}
//// Converts all letters in the string to lowercase

// Converts all letters in the string to uppercase
//void String::ToUpperCase()
//{
//	for (int i = 0; i < strlen(m_string); i++)
//	{
//		if (m_string[i] >= 97 && m_string[i] <= 122)
//		{			
//			m_string[i] = (m_string[i] - 97) + 65;
//		}
//	}	
//}

// Converts the string class to lower case
//void String::ToLowCase()
//{
//	for (int i = 0; i < strlen(m_string); i++)
//	{
//		if (m_string[i] >= 65 && m_string[i] <= 90)
//		{			
//			m_string[i] = (m_string[i] - 65) + 97;
//		}		
//	}	
//}
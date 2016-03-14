#pragma once
#include <string>
#include <iostream>

class String
{
public:
	String();
	String(const char * name);
	String::String(const String& other);
	~String();

	void Set(char newString[]);
	void Print();	
	const char* GetString();
	int Length();
	char CharacterAtIndex(int i);
	bool Compare(const char newString[]);
	void Add(const char addString[]);
	void Add(const String &D);
	void AddSpace(const char addString[]);
	void AddSpace(const String &D);
	void AddToStart(const char addString[]);
	void AddToStart(const String &D);
	void AddToStartSpace(const char addString[]);
	void AddToStartSpace(const String &D);
	void ToLowCase();
	String LowCaseReturn();	
	void ToUpperCase();
	String UpperCaseReturn();
	int SubString(const char subString[]);
	int SubString(const String& subString);
	int SubStringFromIndex(const char subString[], int indexI);
	int SubStringFromIndex(const String& subString, int indexI);
	void ReplaceSubString(const char subStringFind[], const char subStringReplace[]);
	void ReplaceSubString(const String& subStringFind, const char subStringReplace[]);
	void ReplaceSubString(const char subStringFind[], const String& subStringReplace);
	void ReplaceSubString(const String& subStringFind, const String& subStringReplace);

	bool operator == (const String & other)
	{
		int tempArrayLength = strlen(m_string);
		int characterCheck = 0;
		bool matchFound = false;
		for (int i = 0; i < tempArrayLength; i++)
		{
			if (m_string[i] == other.m_string[i])
			{
				characterCheck++;
			}
			if (characterCheck == tempArrayLength)
			{
				matchFound = true;
			}			
		}
		return matchFound;
	}

	std::string operator + (String & other)
	{			
		std::string tempString = m_string;
		std::string tempString2 = other.m_string;
		//std::cout << tempString << "\n";
		//std::cout << tempString2 << "\n";
		std::string tempString3 = tempString + tempString2;	
		//std::cout << tempString3 << "\n";
		return tempString3;
	}

	void operator = (const String &D)
	{
		strcpy(m_string, D.m_string);
	}

	void operator = (const std::string newString)
	{			
		strcpy(m_string, newString.c_str());		
	}

	void operator = (const char* newString)
	{
		strcpy(m_string, newString);
	}

private:
	char* m_string;	
};


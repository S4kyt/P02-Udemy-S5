// Copy creator
// New/Delete,
// Returning Objects from functions
// Allocating Memory

/*
1. Create class: Something like animal, has instance variable string, and set method lets setting that string,
   and output function that lets us output that instance variable
2. Allocate array of 26 of them and then for each object in that array, (using new)
3. Set the name to a string from A-Z, english alphahet (26)
4. Then call the output function

TIPS: using  "char c = 'a';"  "string name(1, c); // this way we get a string with only a single character
	1. meaning to use "char c as each object, string name(26, c);"
	2. Remember, char is an integer type so u can increment it.  
*/

#include <iostream>

#include "main.h"
#include "util.h"

class Player
{
private:
	std::string name = "";

public:
	Player() { std::cout << "Player created." << std::endl; };
	~Player() { std::cout << "Player destroyed." << std::endl; };

	void Player::speak()
	{
		std::cout << "Hello this is " << name << "." << std::endl;
	}

	void Player::setName(std::string name)
	{
		this->name = name;
	}
};


void coNeReMePractice()
{
	{

		Player* playerPtr = new Player[26];

		char startChar = 'a';

		for (int i = 0; i < 26; i++)
		{
			std::string englishAlphabet(1, startChar);
			//std::cout << englishAlphabet << std::endl;
			playerPtr[0].setName(englishAlphabet);
			playerPtr[0].speak();
			startChar++;

		}

		delete[] playerPtr;

		// char* playerArray = new char[1000];
		// delete[] playerArray;
	}
	toContinue();
}
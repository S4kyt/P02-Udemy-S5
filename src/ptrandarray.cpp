// Pointer And Array
// IOL:

// Task:
// Loop through an array using a pointer, with array element reference syntax *Didn't feel like it.*
// Loop through an array by incrementing a pointer *Didn't feel like it.*
// Loop through an array, stopping by comparing two pointers *DONE*

#include <iostream>

#include "main.h"
#include "util.h"

void ptrAndArrayPractice()
{
	// IDEA: We could also use arrays as myArray[0] and make sure it never gets filled up!
	// I rly like this idea but not sure where it could be useful!
	std::string enemyNameArray[] = { "Skeleton", "Goblin", "Spider", "Orc", "Pesky elf" };

	// We need a pointer to the first and last element.
	// First to start the loop with *DONE*
	// Last to know when to end it.
	// Thats how I choose the approach of looping through an array.

	// Pointing to the first element of the array
	std::string* startPtr = &(enemyNameArray[0]);

	std::cout << "First element of the array by name and then element's address: " << std::endl;
	std::cout << *startPtr << std::endl;
	std::cout << startPtr << std::endl;

	std::string* endPtr = &(enemyNameArray[4]);
	
	std::cout << "\n";
	std::cout << "Last element of the array by name and then element's address: " << std::endl;
	std::cout << *endPtr << std::endl;
	std::cout << endPtr << std::endl;
	std::cout << "\n\n";

	// this is one way of doing it! but its without pointer.
	int enemyNameArrLength = sizeof(enemyNameArray) / sizeof(std::string);

	for (int i = 0; i < enemyNameArrLength; i++)
	{
		// bad, need to do with pointer
	}

	// Loop through an array, stopping by comparing two pointers
	std::cout << "Contents of array: " << std::endl;
	while (true)
	{
		std::cout << *startPtr << " " << std::endl;
		std::cout << startPtr << " " << std::endl;
		std::cout << "\n";

		if (startPtr == endPtr)
		{
			break;
		}

		startPtr++;
	}

	toContinue();
}
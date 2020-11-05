// Pointer And Array
// IOL:

// Task:
// Loop through an array using a pointer, with array element reference syntax
// Loop through an array by incrementing a pointer
// Loop through an array, stopping by comparing two pointers

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

	std::cout << "First element of the array by address and the element's name: " << std::endl;
	std::cout << startPtr << std::endl;
	std::cout << *startPtr << std::endl;

	std::string* endPtr = &(enemyNameArray[2]);
	
	std::cout << "\n";
	std::cout << "Last element of the array by address and the element's name: " << std::endl;
	std::cout << endPtr << std::endl;
	std::cout << *endPtr << std::endl;



	// Until i == with the array's last element's memory address.
	int enemyNameArrLength = sizeof(enemyNameArray) / sizeof(std::string);

	for (int i = 0; i < enemyNameArrLength; i++)
	{
		// bad, need to do with pointer
	}
	
	// Got stuck here, but I will figure it out tomorrow!




	toContinue();
}
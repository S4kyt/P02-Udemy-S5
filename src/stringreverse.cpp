// Reversing a String

#include <iostream>

#include "main.h"
#include "util.h"

// Reversing a String

#include <iostream>

#include "main.h"
#include "util.h"

void stringReversePractice()
{
	char text[] = "hello";
	
	char* startPtr = &text[0];
	char* endPtr = &text[5 - 1]; // Because text[5] is NULLPTR, or null terminator;

	std::cout << "Pointing at first element in array: " << std::endl;
	std::cout << *startPtr << std::endl;
	std::cout << "Pointing at last element in array: " << std::endl;
	std::cout << *endPtr << std::endl;
	std::cout << "\n";

	/*
	// This only displays the text backwards, it doesn't mean it reverses it!
	while (true)
	{
		if (endPtr == (startPtr - 1))
		{
			break;
		}
		std::cout << endPtr << std::endl;
		endPtr--;
	}
	*/

	// String reversal
	// We are using char save because we have to save *startPtr's starter value,
	// before we alter it to point at the element endPtr is pointing at
	// then we swap the value of startPtr and endPtr by pointing at the saved,
	// value with *endPtr
	while (startPtr < endPtr)
	{
		char save = *startPtr;
		*startPtr = *endPtr;
		*endPtr = save;

		startPtr++;
		endPtr--;
	}

	std::cout << "Reversed string: " << std::endl;
	std::cout << text << std::endl;

	toContinue();
}
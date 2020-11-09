// Extra Display

#include <iostream>

#include "extra.h"
#include "util.h"


void displayExtra()
{
	bool browsingExtra = true;

	std::string extraMenuInput = "";

	while (browsingExtra == true)
	{
		clearScreen();
		std::cout << "Choose which extra project you'd like to see: " << std::endl;
		std::cout << "1. Linked List" << std::endl;
		std::cout << "2. Double Linked List" << std::endl;
		std::cout << "\n";
		std::cout << "3. Back to main menu" << std::endl;

		std::cin >> extraMenuInput;

		// Extra Subjects:
		if (extraMenuInput == "1")
		{
			// Linked List
			clearScreen();
			linkedListPractice();
		}
		else if (extraMenuInput == "2")
		{
			// Double Linked List
			clearScreen();
			std::cout << "To be continued." << std::endl;
		}
		else if (extraMenuInput == "3")
		{
			// Back to main menu
			std::cout << "Back to main menu..." << std::endl;
			browsingExtra = false;
			break;
		}
		else
		{
			std::cout << " Please choose a correct option from above." << std::endl;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
}
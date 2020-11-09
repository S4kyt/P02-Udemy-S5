// This project contains every single subject within Section 5 of the course.

// I thought about why my brain decided this is the best way to upload practice projects like this(for me)!
//	- You dont have a million repositories lingering around
//	- You are challenged to keep everything organized and tidy
//	- You can add some fancy stuff like I did with clearScreen(); and toContinue();
//	- You can be as creative with the menu and its navigation as you'd like!
//	- And most importantly! Because I really like it this way! :)

#include <iostream>
#include <limits>

#include "main.h"
#include "util.h"
#include "extra.h"

int main()
{
	// Black background, ligh purple text

	bool browsingSubjects = true;

	std::string menuInput = "";

	while (browsingSubjects == true)
	{
		clearScreen();
		std::cout << "Choose which subject's results you'd like to see: " << std::endl;
		std::cout << "1. Pointer" << std::endl;
		std::cout << "2. Arithmetic" << std::endl;
		std::cout << "3. Ptr & Array" << std::endl;
		std::cout << "4. Char Array" << std::endl;

		std::cout << "5. *EXTRA*" << std::endl;

		std::cout << "\n";
		std::cout << "6. Exit program" << std::endl;

		std::cin >> menuInput;

		// Subjects:
		if (menuInput == "1")
		{
			// Pointer
			clearScreen();
			pointerPractice();
		}
		else if (menuInput == "2")
		{
			// Arithmetic(SecToHrMinSec)
			clearScreen();
			methicPractice();
		}
		else if (menuInput == "3")
		{
			// Ptr&Array
			clearScreen();
			ptrAndArrayPractice();
		}
		else if (menuInput == "4")
		{
			// Pointer Arithmetic
			clearScreen();
			charArrayPractice();
		}
		else if (menuInput == "5")
		{
			// Extra
			clearScreen();
			displayExtra();
		}
		else if (menuInput == "6")
		{
			// Exit
			std::cout << "Exiting..." << std::endl;
			browsingSubjects = false;
			break;
		}
		else
		{
			// Yes, the message is barely see-able but thats a feature, not a bug! :D
			std::cout << " Please choose a correct option from above." << std::endl;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
	return 0;
}

// Issue I ran into, and shouldn't forget about:
//
		// FIXME: My current issue is that after lets say, the user makes a mistake by entering something that throws us here to default,
		//        default runs like it should, and since we are in the while loop, we continue from the beginning of the scope,
		//        displaying each std::cout
		//
		//        The issue is that once it reaches std::cin, and it seems to skip it altogether?
		//        My assumption is that it already took the value once, so it doesn't work the way I suppose it does
		//        and it wont take menuInput again :(
//
// It was solved by changing menuInput from int to std::string because switch doesn't take string as its parameter,
// and we get alot more freedom with if-elseif-else and string because the input can be whatever, saving us a workaround from having
// to write error handling for the switch.
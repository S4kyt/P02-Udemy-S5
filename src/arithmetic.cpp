// Take large numbers of seconds and convert it to hours, minutes, seconds
// Write a for loop that iterates 10,000 times; output a dot (on the same line) every 100 iteration (use mod %)

#include <iostream>

#include "main.h"

void methicPractice()
{

	std::cout << "Please enter, possibly a large amount of seconds: " << std::endl;

	int bigNumber = 0;

	std::cin >> bigNumber;

	std::cout << "You've entered: " << bigNumber << std::endl;

	// Seemed important to start with hours, then continue with minutes and only after that convert to seconds.

	int convHour = bigNumber /= 3600;
	int hourRemainder = bigNumber %= 3600;

	std::cout << bigNumber << std::endl;
	std::cout << convHour << std::endl;
	std::cout << hourRemainder << std::endl;
	

	system("pause");
}
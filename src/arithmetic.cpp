// Arithmetic
// IMPORTANT: This project got comprimised because I found assignment operators (expect "=" ofc.) to be a nuisance to use,
//			  Instead I finished this project without using them, and still completed a small program with it.
//            The program is a Second - to - Hour,Minute,Second converter!
//
// Task was:
// Take large numbers of seconds and convert it to hours, minutes, seconds

#include <iostream>

#include "main.h"
#include "util.h"

void methicPractice()
{
	// Variable range: 0 to 4,294,967,295
	using ulint = unsigned long int;

	std::cout << "Please enter, possibly a large amount of seconds: " << std::endl;

	ulint bigNumber = 0;

	std::cin >> bigNumber;

	// 1. Hours
	ulint convHour = (bigNumber / 3600);
	ulint hourRemainder = (bigNumber % 3600);

	std::cout << "\n";
	std::cout << "Converted hours: " << (convHour * 3600) << std::endl;
	std::cout << "Remainder from converted hours: " << hourRemainder << std::endl;

	// 2. Minutes
	ulint convMinutes = (hourRemainder / 60);
	ulint minuteRemainder = (hourRemainder % 60);

	std::cout << "Converted minutes: " << convMinutes << std::endl;

	// 3. Seconds
	std::cout << "Converted seconds: " << minuteRemainder << std::endl;

	std::cout << "\n";
	std::cout << "Hour, Minute, Second format: " << std::endl;
	std::cout << convHour << " Hours " << convMinutes << " Minutes " << minuteRemainder << " Seconds " << std::endl;

	toContinue();
}
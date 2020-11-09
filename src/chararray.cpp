// Char Array
// More like looping through it

#include <iostream>

#include "main.h"
#include "util.h"


void charArrayPractice() {

	char text[] = { "IWASBORNINTHEUSA" };

	// Variant 1
	/*
	// Looping through the array
	for (int i = 0; i < sizeof(text); i++)
	{
		std::cout << text[i] << std::endl;
	}
	*/

	// Variant 2
	/*
	int k = 0;

	while (k < sizeof(text))
	{
		std::cout << text[k] << std::endl;
		k++;
	}
	*/

	// Variant 3
	int k = 0;

	while (true)
	{
		std::cout << text[k] << std::endl;
		k++;

		if (k == sizeof(text))
		{
			break;
		}
	}

	toContinue();
};
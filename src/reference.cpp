// References

#include <iostream>

#include "main.h"
#include "util.h"

// Here we are using "&" to refer to the original value we declare on line 30
// double &value is just a reference to line 30 double value
void changeSomething(double& value) {
	value = 123.4;
}

/*
// This would mean that we are creating a new doulbe as changeSomething()'s parameter
void changeSomething(double value) {
	value = 123.4;
}
*/

void referencePractice()
{
	{
		// Here we are actually both value2's and value1's values to 10, because with "int&"
		// we are refering to value1
		int value1 = 8;
		// value2 is reference to value1, value2 is "just another name to value1 basically
		int& value2 = value1;
		value2 = 10;

		std::cout << "Value1: " << value1 << std::endl;
		std::cout << "Value2: " << value2 << std::endl;
		std::cout << "\n";
	}

	{
		// Here we are simply assigning value 2 a new value, and it doesn't change value1 in any ways
		int value1 = 8;
		int value2 = value1;
		value2 = 10;

		std::cout << "Value1: " << value1 << std::endl;
		std::cout << "Value2: " << value2 << std::endl;
		std::cout << "\n";
	}

	double value = 4.321;
	changeSomething(value);
	std::cout << value << std::endl;

	toContinue();
}
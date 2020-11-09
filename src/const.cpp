// Const

#include <iostream>

#include "main.h"
#include "util.h"

class Animal {
private:
	std::string name;

public:
	void setName(std::string name) { this->name = name; };
	void speak() const { std::cout << "My name is: " << name << std::endl; }
};

void constPractice() {

	const double PI = 3.141592;
	std::cout << PI << std::endl;

	Animal animal;
	animal.setName("Freddy");
	animal.speak();

	int value = 8;

	// New trick: Reading variables from right to left. If you are stuck or confused.
	// You can do this too:
	// const int * const pValue = &value;
	// Or more like: From right to left:
	// A pointer thats constantly points to an integer thats constant.
	int* pValue = &value;

	std::cout << *pValue << std::endl;

	int number = 11;
	pValue = &number; // Error with this: int * const pValue = &value;
	*pValue = 12; // Error with this: const int *pValue = &value;

	std::cout << *pValue << std::endl;

	toContinue();
}

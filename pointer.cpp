// Pointer
// IOL:

#include <iostream>

#include "util.h"

void myFunction(double* p_value)
{
	double funcValue = 66.6;
	p_value = &funcValue;

	std::cout << "Pointer's function value: " << *p_value << std::endl;
	std::cout << "Pointer's function address: " << &funcValue << std::endl;
}

void pointerPractice()
{
	// 1. Type out value,make it double, give it a value
	double value = 22.2;
	double* p_value = &value;

	std::cout << "Value: " << value << std::endl;
	std::cout << "Default pointer's memory address: " << p_value << std::endl;

	// 3. Try using the pointer to change its value
	double newValue = 44.4;
	p_value = &newValue;

	std::cout << "Pointer's new value: " << *p_value << std::endl;
	std::cout << "Pointer's new address: " << p_value << std::endl;

	// 4. Then declare function that takes a pointer as parameter,
	//    and try passing our value's address to that function,
	//    try changing it there and see what I get.
	myFunction(&newValue);

	toContinue();
}



// Lion's examples: 
// There are "two main types" of pointers I've learned about:
// 1. Points to a copy
/*
void first(int* pointer)
{
	int jeffrey = -35;
	pointer = &jeffrey; // its now more like "pointer to jeffrey"
}

int main()
{
	int daisy = 10;
	int* pointer_to_daisy = &daisy;
	first(pointer_to_daisy);
}
*/


// 2. Points to the original
/*
void first(int* pointer)
{
	*pointer = 5; // this accesses the thing at the address stored in pointer and sets it to 5,
				  // so it sets daisy to 5. not a copy of daisy, the original one.because that's what we are pointing at.
}

int main()
{
	int daisy = 10;
	int* pointer_to_daisy = &daisy;
	first(pointer_to_daisy);
}
*/
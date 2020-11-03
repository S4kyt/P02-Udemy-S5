// Pointer
// IOL: 

#include <iostream>

void myFunction(double* p_value)
{
	double funcValue = 66.6;
	p_value = &funcValue;

	std::cout << "Pointer's function value: " << *p_value << std::endl;
	std::cout << "Pointer's function address: " << &funcValue << std::endl;
}

int main()
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

	system("pause");
}
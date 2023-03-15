#include <iostream>

int main()
{
	std::string myString = "HI THIS IS BRAIN";

	// declare a pointer to the string
	std::string* myStringPtr = &myString;
	// declare a reference to the string.
	std::string &stringREF = myString;

	// print the string address
	std::cout << &myString << std::endl;
	std::cout << myStringPtr << std::endl;
	std::cout << &stringREF << std::endl;
	std::cout << "---------------------------------------"<< std::endl;
	std::cout << myString << std::endl;
	std::cout << *myStringPtr << std::endl;
	std::cout << stringREF << std::endl;
}
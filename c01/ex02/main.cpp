#include <iostream>

int main()
{
	std::string myString = "HI THIS IS BRAIN";

	// declare a pointer to the string
	std::string* myStringPtr = &myString;
	// declare a reference to the string.
	std::string &stringREF = myString;

	// print the string address
	std::cout << "The memory address of the string variable " << &myString << std::endl;
	std::cout << "The memory address held by stringPTR : " << myStringPtr << std::endl;
	std::cout << "The memory address held by stringREF : " << &stringREF << std::endl;
	std::cout << "------------------------------------------------------"<< std::endl;
	std::cout << "The value of the string variable : " << myString << std::endl;
	std::cout << "The value pointed to by stringPTR : " << *myStringPtr << std::endl;
	std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;
}
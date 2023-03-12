#include <iostream>

int main()
{
	std::string myString = "Hello, world!";

	// declare a pointer to the string
	std::string* myStringPtr = &myString;

	// print the string using the pointer
	std::cout << &myStringPtr << std::endl;
}
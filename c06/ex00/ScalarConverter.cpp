#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter(void) : str_type("Default")
{
    std::cout << "Default constructor ScalarConverter() called" << std::endl;
}

ScalarConverter::ScalarConverter(std::string _type)
{
    str_type = _type
    std::cout << "Parm constructor ScalarConverter() called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    *this = other;
}
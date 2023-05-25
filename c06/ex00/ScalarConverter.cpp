#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter(void)
{
    this->str_type = "Default";
    std::cout << "Default constructor ScalarConverter() called" << std::endl;
}

ScalarConverter::ScalarConverter(std::string _type)
{
    str_type = _type;
    std::cout << "Parm constructor ScalarConverter() called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    this->str_type = other.str_type;
    std::cout << "Copy Constructor Called Bureaucrat()" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs)
{
    if (&rhs == this)
    {
        return (*this);
    }
    this->str_type = rhs.str_type;
    return *this;
}

ScalarConverter::~ScalarConverter(void)
{
    std::cout << "ScalarConverter destructor called" << std::endl;
}

void    ScalarConverter::convert(std::string str)
{
    if (str.size() == 1)
    {
        if (!isdigit(str[0]))
        {
            std::cout << "it is char" << std::endl;
        }
        std::cout << str.size() << std::endl;
    }
}
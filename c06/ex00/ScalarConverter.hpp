#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

static  class ScalarConverter
{
private:
    const std::string &str_type;
public:
    ScalarConverter();
    ScalarConverter(std::string _type);
    ScalarConverter(const ScalarConverter &other);
    ScalarConverter &operator=(const ScalarConverter &rhs);
    ~ScalarConverter();

    static  void    convert(std::string const & str);
};

ScalarConverter::ScalarConverter(/* args */)
{
}

ScalarConverter::~ScalarConverter()
{
}

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <cctype>
#include <limits>
#include <stdlib.h>

class ScalarConverter
{
    private:
        ScalarConverter(void);
        ScalarConverter(const std::string name);
        ScalarConverter(const ScalarConverter &old);
        ScalarConverter &operator=(const ScalarConverter &rhs);
        ~ScalarConverter(void);
    public:
        static  void    convert(const std::string &str);
};

#endif

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter(void)
{
    this->str_type = "Default";
    // std::cout << "Default constructor ScalarConverter() called" << std::endl;
}

ScalarConverter::ScalarConverter(std::string _type)
{
    str_type = _type;
    // std::cout << "Parm constructor ScalarConverter() called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    this->str_type = other.str_type;
    // std::cout << "Copy Constructor Called Bureaucrat()" << std::endl;
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
    // std::cout << "ScalarConverter destructor called" << std::endl;
}

void    ScalarConverter::convert(std::string str)
{
    size_t i;
    int j;

    i = 0;
    j = 0;
    while (str[i])
    {
        if (isdigit(str[i]))
            i++;
        if (isalpha(str[i]))
            j++;
        i++;
    }
     if (str.size() == 1)
    {
        int a;
        // double b;
        float c;
        char d = '\0';
        if (!isdigit(str[0]))
        {
            d = static_cast<char>(str[0]);
            a = static_cast<int>(d);
            c = static_cast<float>(d);
            if (isprint(d))
                std::cout << "char : '" << d << "'" << std::endl;
            std::cout << "int : " << a << std::endl;
            std::cout << "float : " << c << ".0" << "f" <<std::endl;
            std::cout << "double : " << c << ".0" << std::endl;
        }
        // d = static_cast<char>(str[0]);
        // c = static_cast<float>(d);
        //  std::cout << "float : " << c << "f" <<std::endl;
    }
    else if (j && i == strlen(str.c_str()))
    {
         double b;

         b = static_cast<float>(std::atof(str.c_str()));
    }
    else
    {

    }
    // std::cout << j << i<< strlen(str.c_str()) << std::endl;
}



// Here test that you have to aske before submit
// if i did like that ./convert '0' what should the output will be ?


// it is digit 





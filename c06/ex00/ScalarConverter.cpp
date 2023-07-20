#include "ScalarConverter.hpp"

int     is_float(char c)
{
    if (c == 'f')
        return 1;
    return 0;
}

bool isNumeric(const std::string& str) {
    int i;

    i = 0;
    if (str[0] == '-')
        i++;
    while (str[i])
    {
        if (!std::isdigit(str[i])) {
            return false;
        }
        i++;
    }
    return true;
}

void    ScalarConverter::convert(const std::string &str)
{
    size_t i;
    int j;

    i = 0;
    j = 0;
    if (str == "-inff" || str == "+inff" || str == "nanf")
    {
        if (str[0] == '-')
        {
            std::cout << "char : " << "Impossible" << std::endl;  
            std::cout << "int : " << "Impossible" << std::endl;  
            std::cout << "float : " << "-inff" << std::endl;
            std::cout << "double : " << "-inf" << std::endl;
            return ;
        }
        else if (str[0] == '+')
        {
            std::cout << "char : " << "Impossible" << std::endl;  
            std::cout << "int : " << "Impossible" << std::endl;  
            std::cout << "float : " << "+inff" << std::endl;
            std::cout << "double : " << "+inf" << std::endl;
            return ;
        }
        else
        {
            std::cout << "char : " << "Impossible" << std::endl;  
            std::cout << "int : " << "Impossible" << std::endl;  
            std::cout << "float : " << "nanf" << std::endl;
            std::cout << "double : " << "nan" << std::endl;
            return ;
        }
    }
    else if(str == "-inf" || str == "+inf" || str == "nan")
    {
        if (str[0] == '-')
        {
            std::cout << "char : " << "Impossible" << std::endl;  
            std::cout << "int : " << "Impossible" << std::endl;  
            std::cout << "float : " << "-inff" << std::endl;
            std::cout << "double : " << "-inf" << std::endl;
            return ;
        }
        else if (str[0] == '+')
        {
            std::cout << "char : " << "Impossible" << std::endl;  
            std::cout << "int : " << "Impossible" << std::endl;  
            std::cout << "float : " << "+inff" << std::endl;
            std::cout << "double : " << "+inf" << std::endl;
            return ;
        }
        else
        {
            std::cout << "char : " << "Impossible" << std::endl;  
            std::cout << "int : " << "Impossible" << std::endl;  
            std::cout << "float : " << "nanf" << std::endl;
            std::cout << "double : " << "nan" << std::endl;
            return ;
        }
    }
    while (str[i])
    {
        if (is_float(str[i]))
            j++;
        i++;
    }
    if (!isdigit(str[0]) && i == 1)
    {
        std::cout << "fff99" << std::endl;
        int a;
        double b;
        float c;
        char d;
        d = static_cast<char>(str[0]);
        a = static_cast<int>(d);
        c = static_cast<float>(d);
        b = static_cast<double>(d);

        if (d >= std::numeric_limits<char>::min() && d <= std::numeric_limits<char>::max())
        {
            if (isprint(d))
                std::cout << "char : '" << d << "'" << std::endl;
            else
                std::cout << "Non displayable" << std::endl;
        }
        std::cout << "int : " << a << std::endl;
        std::cout << "float : " << c << ".0" << "f" <<std::endl;
        std::cout << "double : " << b << ".0" << std::endl;
    }
    else if (j)
    {
        std::cout << "fff11" << std::endl;
        float   b;
        int     i;
        double  c;
        char    s;

        b = static_cast<float>(atof(str.c_str()));
        c = static_cast<double>(b);
        i = static_cast<int>(b);

        if (i >= std::numeric_limits<char>::min() && i <= std::numeric_limits<char>::max())
        {
            s = static_cast<char>(i);
            if (isprint(s))
                std::cout << "char : '" << s << "'" << std::endl;
            else
                std::cout << "Non displayable" << std::endl;
        }
        else
        {
            std::cout << "char : " << "Impossible" << std::endl;   
            std::cout << "int : " << "Impossible" << std::endl;   
            std::cout << "float : " << "Impossible" << std::endl;   
            std::cout << "double : " << "Impossible" << std::endl;
            return ;
        }
        std::cout << "int : " << i << std::endl;
        std::cout << "float : " << b << "f" <<std::endl;
        std::cout << "double : " << c << std::endl;
    }
    else if (j == 0 && strlen(str.c_str()) == i && i > 1)
    {
        std::cout << "ddd55" << std::endl;
        float   b;
        int     i;
        double  c;
        char    s;

        c = atof(str.c_str());
        std::cout << c <<std::endl;
        b = static_cast<float>(c);
        i = static_cast<int>(c);

        if (i >= std::numeric_limits<char>::min() && i <= std::numeric_limits<char>::max())
        {
            s = static_cast<char>(i);
            if (isprint(s))
                std::cout << "char : '" << s << "'" << std::endl;
            else
                std::cout << "char : " << "Non displayable" << std::endl;
        }
        else
        {
            std::cout << "char : " << "Impossible" << std::endl;   
            std::cout << "int : " << "Impossible" << std::endl;   
            std::cout << "float : " << "Impossible" << std::endl;   
            std::cout << "double : " << "Impossible" << std::endl;
            return ;
        }
        std::cout << "int : " << i << std::endl;
        std::cout << "float : " << b << "f" <<std::endl;
        std::cout << "double : " << c << std::endl;   
    }
    else
        std::cout << "it is invalid input please only numbers or charcters" << std::endl;
}

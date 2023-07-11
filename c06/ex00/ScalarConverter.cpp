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
    while (str[i])
    {
        if (is_float(str[i]))
            j++;
        i++;
    }
    std::cout << str.length() << std::endl;
    std::cout << j << std::endl;
    if (!isdigit(str[0]) && i == 0)
    {
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
            std::cout << "char : " << "Impossible" << std::endl;   
        std::cout << "int : " << i << std::endl;
        std::cout << "float : " << b << "f" <<std::endl;
        std::cout << "double : " << c << std::endl;
    }
    else if (j == 0 && strlen(str.c_str()) == i && i > 1)
    {
        float   b;
        int     i;
        double  c;
        char    s;

        c = atof(str.c_str());
        b = static_cast<float>(c);
        i = static_cast<int>(c);

        if (i >= std::numeric_limits<char>::min() && i <= std::numeric_limits<char>::max())
        {
            s = static_cast<char>(i);
            if (isprint(s))
                std::cout << "char : '" << s << "'" << std::endl;
            else
                std::cout << "Non displayable" << std::endl;
        }
        else
            std::cout << "char : " << "Impossible" << std::endl;   
        std::cout << "int : " << i << std::endl;
        std::cout << "float : " << b << "f" <<std::endl;
        std::cout << "double : " << c << std::endl;   
    }
    else if(isNumeric(str))
    {
        float   b;
        int     i;
        double  c;
        char    s;

        i = static_cast<int>(atoi(str.c_str()));
        c = static_cast<double>(i);
        b = static_cast<float>(i);

        if (i >= std::numeric_limits<char>::min() && i <= std::numeric_limits<char>::max())
        {
            s = static_cast<char>(i);
            if (isprint(s))
                std::cout << "char : '" << s << "'" << std::endl;
            else
                std::cout << "Non displayable" << std::endl;
        }
        else
            std::cout << "char : " << "Impossible" << std::endl;   
        std::cout << "int : " << i << std::endl;
        std::cout << "float : " << b << "f" <<std::endl;
        std::cout << "double : " << c << std::endl;  
    }
    else
        std::cout << "it is invalid input please only numbers or charcters" << std::endl;
}



// Here test that you have to aske before submit
// if i did like that ./convert '0' what should the output will be ?





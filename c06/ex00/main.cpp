#include <climits>
#include <cfloat>
#include <stdio.h>
#include <iostream>
#include "ScalarConverter.hpp"

int main(int arc, char **argv)
{
    if (arc == 2)
    {
        ScalarConverter ll(argv[1]);

        ll.convert(argv[1]);
    }
}
#ifndef ITER
# define ITER

#include <iostream>
# include <string>
# include <stdint.h>

template<typename T> 
void iter(T *a, size_t len, void(*f)(T const &))
{
    for (size_t i = 0; i < len; i++)
        f(a[i]);
}

template<typename T> 
void printElem(T& elem)
{
	std::cout << elem << std::endl;
}

#endif
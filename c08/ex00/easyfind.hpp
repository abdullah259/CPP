#ifndef EASYFIND
#define EASYFIND

#include <iostream>
# include <algorithm>
# include <iostream>
// # include <vector>
class NumberNotFoundException : public std::exception
{
	const char* what() const throw(){return "Element Not Found !";}
};

template<typename T>
typename T::iterator  easyfind(T &container, int value)
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw NumberNotFoundException();
    return it;
}

#endif
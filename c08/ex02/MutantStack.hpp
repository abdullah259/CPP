#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <vector>
#include <stack>
#include <iostream>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack(const MutantStack& old)
    {
        this->c = old.c;
    }
    MutantStack &operator=(const MutantStack rhs)
    {
        if (this != &rhs)
        {
            this->c = rhs.c;
        }
        return *this;
    }
    MutantStack(){}
    ~MutantStack(){}
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin() { return this->c.begin(); };
    iterator end() { return this->c.end(); };

};


#endif
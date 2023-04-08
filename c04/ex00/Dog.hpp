#ifndef Dog_HPP
# define Dog_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const std::string _type);
        Dog(const Dog &other);
        Dog &operator=(const Dog &rhs);
        ~Dog();

        
        void    makeSound() const;
};

#endif
#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const std::string _type);
        Cat(const Cat &other);
        Cat &operator=(const Cat &rhs);
        ~Cat();

        
        void    makeSound() const;
};

#endif
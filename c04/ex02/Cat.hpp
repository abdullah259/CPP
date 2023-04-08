#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain*  _brain;
    public:
        Cat();
        Cat(const std::string _type);
        Cat(const Cat &other);
        Cat &operator=(const Cat &rhs);
        ~Cat();

        
        void    makeSound() const;
};

#endif
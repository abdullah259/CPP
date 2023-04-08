#ifndef Dog_HPP
# define Dog_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain*  _brain;
    public:
        Dog();
        Dog(const std::string _type);
        Dog(const Dog &other);
        Dog &operator=(const Dog &rhs);
        ~Dog();

        
        void    makeSound() const;
        void    set_ideas(std::string idea, int i);
        std::string     get_idea(int i);
};

#endif
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>


class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const std::string _type);
        Animal(const Animal &other);
        Animal &operator=(const Animal &rhs);
        virtual ~Animal();
        virtual void    makeSound() const = 0;
        const std::string& getType(void) const; 
};

#endif
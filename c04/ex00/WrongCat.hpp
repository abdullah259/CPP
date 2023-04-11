#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const std::string _type);
        WrongCat(const WrongCat &other);
        WrongCat &operator=(const WrongCat &rhs);
        ~WrongCat();

        
        void    makeSound() const;
};

#endif
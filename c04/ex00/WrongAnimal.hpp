#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>


class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const std::string _type);
        WrongAnimal(const WrongAnimal &other);
        WrongAnimal &operator=(const WrongAnimal &rhs);
        ~WrongAnimal();
        void    makeSound() const;
        const std::string& getType(void) const; 
};

#endif
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("This is WrongAnimal")
{
    std::cout << "WrongAnimal Defalut constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string _type)
{
    type = _type;
    std::cout << "WrongAnimal name constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    type = other.type;
    std::cout << "WrongAnimal copy Constructor Called" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &rhs)
{
    if (&rhs == this)
        return (*this);
    type = rhs.type;
    std::cout << "WrongAnimal copy assignment constructor called" << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor Called" << std::endl;
}

const   std::string &WrongAnimal::getType(void) const
{
    return (type);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "This is WrongAnimal" << std::endl;
}
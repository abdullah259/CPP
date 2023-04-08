#include "Animal.hpp"

Animal::Animal() : type("This is Animal")
{
    std::cout << "Animal Defalut constructor called" << std::endl;
}

Animal::Animal(const std::string _type)
{
    std::cout << "Animal name constructor called" << std::endl;
    type = _type;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal copy Constructor Called" << std::endl;
    type = other.type;
}

Animal  &Animal::operator=(const Animal &rhs)
{
    std::cout << "Animal copy assignment constructor called" << std::endl;
    if (&rhs == this)
        return (*this);
    type = rhs.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Ainmal destructor Called" << std::endl;
}

const   std::string &Animal::getType(void) const
{
    return (type);
}

void    Animal::makeSound() const
{
    std::cout << "This is Animal" << std::endl;
}
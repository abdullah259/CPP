#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << "Dog Defalut constructor called" << std::endl;
}

Dog::Dog(const std::string _type) : Animal(_type)
{
    std::cout << "Dog name constructor called" << std::endl;
    type = _type;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog copy Constructor Called" << std::endl;
    type = other.type;
}

Dog  &Dog::operator=(const Dog &rhs)
{
    std::cout << "Dog copy assignment constructor called" << std::endl;
    if (&rhs == this)
        return (*this);
    type = rhs.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor Called" << std::endl;
}

void    Dog::makeSound() const 
{
    std::cout << "Hawo Hawo !" << std::endl;
}
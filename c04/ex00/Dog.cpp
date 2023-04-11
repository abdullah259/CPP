#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << "Dog Defalut constructor called" << std::endl;
}

Dog::Dog(const std::string _type) : Animal(_type)
{
    type = _type;
    std::cout << "Dog name constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    type = other.type;
    std::cout << "Dog copy Constructor Called" << std::endl;
}

Dog  &Dog::operator=(const Dog &rhs)
{
    if (&rhs == this)
        return (*this);
    type = rhs.type;
    std::cout << "Dog copy assignment constructor called" << std::endl;
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
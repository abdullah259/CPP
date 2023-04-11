#include "Cat.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << "Cat Defalut constructor called" << std::endl;
}

Cat::Cat(const std::string _type) : Animal(_type)
{
    type = _type;
    std::cout << "Cat name constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    type = other.type;
    std::cout << "Cat copy Constructor Called" << std::endl;
}

Cat  &Cat::operator=(const Cat &rhs)
{
    if (&rhs == this)
        return (*this);
    type = rhs.type;
    std::cout << "Cat copy assignment constructor called" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor Called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Mewo !" << std::endl;
}
#include "Cat.hpp"


#include "Animal.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << "Cat Defalut constructor called" << std::endl;
}

Cat::Cat(const std::string _type) : Animal(_type)
{
    std::cout << "Cat name constructor called" << std::endl;
    type = _type;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat copy Constructor Called" << std::endl;
    type = other.type;
}

Cat  &Cat::operator=(const Cat &rhs)
{
    std::cout << "Cat copy assignment constructor called" << std::endl;
    if (&rhs == this)
        return (*this);
    type = rhs.type;
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
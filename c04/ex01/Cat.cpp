#include "Cat.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat Defalut constructor called" << std::endl;
}

Cat::Cat(const std::string _type) : Animal(_type)
{
    std::cout << "Cat name constructor called" << std::endl;
    type = _type;
    this->_brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat copy Constructor Called" << std::endl;
    type = other.type;
    this->_brain = new Brain(*other._brain);
}

Cat  &Cat::operator=(const Cat &rhs)
{
    std::cout << "Cat copy assignment constructor called" << std::endl;
    if (&rhs == this)
        return (*this);
    _brain = new Brain(*rhs._brain);
    type = rhs.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor Called" << std::endl;
    delete _brain;
}

void    Cat::makeSound() const
{
    std::cout << "Mewo !" << std::endl;
}
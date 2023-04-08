#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog Defalut constructor called" << std::endl;
}

Dog::Dog(const std::string _type) : Animal(_type)
{
    std::cout << "Dog name constructor called" << std::endl;
    type = _type;
    this->_brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog copy Constructor Called" << std::endl;
    type = other.type;
    this->_brain = new Brain(*other._brain);
}

Dog  &Dog::operator=(const Dog &rhs)
{
    std::cout << "Dog copy assignment constructor called" << std::endl;
    if (&rhs == this)
        return (*this);
    type = rhs.type;
    _brain = new Brain(*rhs._brain);
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor Called" << std::endl;
    delete _brain;
}

void    Dog::makeSound() const 
{
    std::cout << "Hawo Hawo !" << std::endl;
}

std::string    Dog::get_idea(int i)
{
    return (_brain->getidea(i));
}

void    Dog::set_ideas(std::string idea, int i)
{
    _brain->setidea(idea, i);
}
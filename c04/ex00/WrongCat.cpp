#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    type = "WrongCat";
    std::cout << "WrongCat Defalut constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string _type) : WrongAnimal(_type)
{
    type = _type;
    std::cout << "Cat name constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    type = other.type;
    std::cout << "WrongCat copy Constructor Called" << std::endl;
}

WrongCat  &WrongCat::operator=(const WrongCat &rhs)
{
    if (&rhs == this)
        return (*this);
    type = rhs.type;
    std::cout << "WrongCat copy assignment constructor called" << std::endl;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor Called" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "WrongCat !" << std::endl;
}
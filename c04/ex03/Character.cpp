#include "Character.hpp"

Character::Character() : name("no Name")
{
    for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
    std::cout  << "Character() Default Constructor Called" << std::endl;
}

Character::Character(const Character &src)
{
    *this = src;
    std::cout  << "Character() Copy Constructor Called" << std::endl;
}

Character::Character(std::string const &name) : name(name)
{
    for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
    std::cout  << "Character() parm Constructor Called" << std::endl;
}

Character &Character::operator=(const Character &rhs)
{
    if (this == &rhs)
        return (*this);
    this->name = rhs.name;
    for (int i = 0; i < 4; i++)
    {
        delete inventory[i];
        inventory[i] = rhs.inventory[i];
    }
    return *this;
}

